<?php

/**
 * @file
 * Class representing the state and credentials of an organic group interacting with a Google Drive.
 * An OgDriveCredentials instance provides and stores the Google API credentials as well as
 * other og_drive settings such as the permissions that are managed through the Drupal module.
 * Thess objects interact with the Og drive settings form (@see og_drive.forms.inc) and the Google_Client
 * API (@see og_drive.client.inc). 
 * In most respects an instance's parameters will match those of a og_drive_group_settings table row.
 */

// Define the states a group node can be in regarding the drive account.
define('OG_DRIVE_STATE_UNREGISTERED', 0);
define('OG_DRIVE_STATE_REGISTERED', 1);
define('OG_DRIVE_STATE_AUTHORIZED', 2);
define('OG_DRIVE_STATE_UNKNOWN', 3);

class OgDriveCredentials {
  private $access_token;
  private $access_token_expiry;
  private $account_email;
  private $authorization_code;
  private $client_id;
  private $client_secret;
  private $created;
  private $drive_permission_rw;
  private $drive_permission_upload;
  private $enabled;
  private $file_source;
  private $gid;
  private $refresh_token;

  /**
   * Constructor.
   * @param $gid
   *   Group node nid.
   * @param $fields
   *   If the $fields array is not empty, create an instance with those values.
   *   Otherwise load the values from the database.
   */
  public function __construct($gid, $fields = array()) {
    self::loadIncludes();
    $this->gid = $gid;
    // Creating new group credentials.
    if ($fields) {
      foreach ($fields as $name => $value) {
        $this->$name = $value;
      }
    }
    // Loading from database.
    else {
      $this->updateFields($gid);
    }
  }

  /**
   * Synchronize the instance field values with the database row.
   */
  private function updateFields($gid = null) {
    if (is_null($gid)) {
      $gid = $this->gid;
    }
    // Assign database row values to object properties.
    if ($fields = _og_drive_get_settings($gid)) {
      foreach ($fields as $field => $value) {
        $this->$field = $value;
      }
    }
  }

  /**
   * Store the instance state to the database.
   */
  public function save() {
    $fields = get_object_vars($this);
    // Remove gid primary key.
    unset($fields['gid']);
    foreach ($fields as $name => $value) {
      if (is_null($value)) {
        unset($fields[$name]);
      }
    }
    return _og_drive_save_settings($this->gid, $fields);
  }

  /**
   * Delete the data associated with this group.
   */
  public function delete() {
    return _og_drive_delete_settings($this->gid);
  }

  /**
   * Test if the access token is expired.
   */ 
  public function tokenIsExpired() {
    return time() > $this->access_token_expiry;
  }

  /**
   * Test if the group drive has been internaly disabled.
   * Affects only Drupal, not the actual Google account.
   */
  public function isEnabled() {
    return $this->enabled;
  }

  /**
   * Test if a specific group is ennabled.
   */
  public static function groupIsEnabled($nid) {
    module_load_include('inc', 'og_drive', 'includes/og_drive.db');
    $settings = _og_drive_get_settings($nid);
    return isset($settings->enabled) ? $settings->enabled : FALSE;   
  }

  /**
   * Test if a specific group is ennabled.
   */
  public static function groupIsAuthorized($nid) {
    module_load_include('inc', 'og_drive', 'includes/og_drive.db');
    $settings = _og_drive_get_settings($nid);
    if (! $settings || $settings->authorization_code == NULL) {
      return FALSE;
    }
    return TRUE;
  }
  
  /**
   * Disable or enable the group drive. Reverse the current value.
   */
  public function toggleEnabled() {
    $this->enabled = $this->enabled ? 0 : 1;
    _og_drive_save_settings($this->gid, array('enabled' => $this->enabled)); 
    return $this->enabled;
  }

  /**
   *  Return an array of form default values for the group settings.
   */
  public function getFormDefaults() {
    return array(
      'account_email' => $this->account_email,
      'client_id' => $this->client_id,
      'client_secret' => $this->client_secret,
      'drive_permission_rw' => $this->drive_permission_rw,
      'drive_permission_upload' => $this->drive_permission_upload,
      'file_source' => $this->file_source,
    );
  }

  /**
   * @return json formated credentials for $client->setAccessToken().
   * {"access_token":"TOKEN", "refresh_token":"TOKEN", "token_type":"Bearer",
   *  "expires_in":3600, "id_token":"NOT_USED_HERE", "created":1320790426}
   */
  public function getJsonCredentials() {
    $creds = _og_drive_get_credentials($this->gid);
    $creds->expires_in = $creds->access_token_expiry - time();
    unset($creds->access_token_expiry);
    return json_encode($creds);
  }

  /**
   * Store the group credentials obtained from Google_Client->authenticate().
   */
  public function saveCredentials($credentials) {
    if (count($credentials)) {
      // Format the data and store.
      $this->authorization_code = $credentials->code;
      $this->access_token = $credentials->access_token;
      $this->access_token_expiry = time() + $credentials->expires_in;
      $this->token_type = $credentials->token_type;
      $this->created = $credentials->created;
      if (isset($credentials->refresh_token)) {
        $this->refresh_token = $credentials->refresh_token;
      }
      $this->save();
    }
    // Take note of the problem.
    else {
      drupal_set_message(t('There was a problem authorizing the group drive.'));
      watchdog('og_drive', t('Not able to authorize group id @id', array('@id' => $data['state'])), WATCHDOG_ERROR);
    }
  }

  /**
   * Store the new access token.
   * When the refresh token expires, a call to Google_Client->refreshToken($refresh_token)
   * provides a new access token.
   */
  public function updateAccessToken($token) {
    // Calculate the new access token expiry.
    $this->access_token_expiry = $token->created + $token->expires_in;
    $this->created = $token->created;
    $this->access_token = $token->access_token;
    $this->save();
  }
  
  /**
   * Provide the role string value associated with the permissionRW property.
   */ 
  public function getRoleString() {
    return $this->drive_permission_rw == 0 ? 'reader' : 'writer';
  }

  /**
   * Save user permission data.
   * @param $uid
   *   Drupal user id.
   * @param $permission
   *   Google_Permission object.
   * @param $file
   */
  public function savePermission($uid, $file, $permission) {
    return _og_drive_save_permission($this->gid, $uid, $file->id, $permission->id);
  }  

  /**
   *  Get all the permissions associated with this group.
   */
  public function getAllPermissions() {
    return _og_drive_get_all_premissions($this->gid);
  }

  /**
   * Get all of a user's permissions for this group's files.
   * @param $uid
   *   Drupal user id.
   */
  public function getUserPermissions($uid) {
    return _og_drive_get_user_permissions($this->gid, $uid);
  }

  /**
   * Delete a file permission for a user.
   */
  public function deletePermission($uid, $fid) {
    return _og_drive_delete_permission($uid, $fid); 
  }

  /**
   * Get all users uid that have permissions on files for the group.
   * @return
   *   array of uids array(1, 2, 55);
   */
  public function getUsers() {
    return array_unique(_og_drive_get_users($this->gid));
  }

  /**
   * Test the group drive state depending on the contents of the og_drive_group_settings row
   * for that node.
   * @param $fields
   *   An object as returned by the db query for the group node.
   * @return
   *   A constant representing the status of the node regarding the registration process.
   */
  function getState() {
    if (!isset($this->gid) || (! $this->client_id || ! $this->client_secret)) {
      return OG_DRIVE_STATE_UNREGISTERED;
    }
    elseif ($this->gid && $this->client_id && $this->client_secret && ! $this->refresh_token) {
      return OG_DRIVE_STATE_REGISTERED;
    }
    elseif ($this->refresh_token) {
      return OG_DRIVE_STATE_AUTHORIZED;
    }
    else {
      return OG_DRIVE_STATE_UNKNOWN;
    }
  }

  /**
   *  Load the db functions includes file.
   */
  private static function loadIncludes() {
    // Module db functions.
    module_load_include('inc', 'og_drive', 'includes/og_drive.db');
  }

  /**
   * Static method to test if a group node has an active drive.
   */
  public static function groupHasDrive($gid) {
    OgDriveCredentials::loadIncludes();
    if (! $settings = _og_drive_get_settings($gid)) {
      return FALSE;
    }
    // If the drive has been activated, there will be a refresh token.
    if (! is_null($settings->refresh_token)) {
      return TRUE;
    }
    return FALSE;
  }

  /**
   * Getters.
   */
  public function getAccessToken() {
    return $this->access_token;
  }

  public function getAccountEmail() {
    return $this->account_email;
  }

  public function getClientId() {
    return $this->client_id;
  }
  public function getClientSecret() {
    return $this->client_secret;
  }

  public function getDrivePermissionRW() {
    return  $this->drive_permission_rw;
  }

  public function getFileSource() {
    return $this->file_source;
  }

  public function getGid() {
    return $this->gid;
  }

  public function getRefreshToken() {
    return $this->refresh_token;
  }

  /**
   * Setters.
   */
  public function setFileSource($file_source) {
    $this->file_source = $file_source;
  }

  public function setDrivePermissionRW($perm) {
    $this->drive_permission_rw = $perm;
  }
}
