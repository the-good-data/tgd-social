<?php 

/**
 * @file
 * Client and credential management.
 * Google PHP API client bridge to Drupal.
 */

class OgDriveClient {

  // Google_Client. 
  private $client;
  // OgDriveCredentials.
  private $credentials;

  public function __construct ($gid) {
    self::loadIncludes();
    $this->client = new Google_Client();
    $this->setCredManager($gid);
  }

  // Set the credential manager.
  function setCredManager($gid) {
    $this->credentials = new OgDriveCredentials($gid);
    // Set credentials for client.
    $this->setClient();
  } 

  // Set the client properties.
  private function setClient() {
    global $base_url;
    $this->client->setClientId($this->credentials->getClientId());
    $this->client->setClientSecret($this->credentials->getClientSecret());
    $this->client->setRedirectUri($base_url . '/og_drive/endpoint');
    $this->client->setScopes(array('https://www.googleapis.com/auth/drive'));
    $this->client->setApprovalPrompt('auto');
    $this->client->setState($this->credentials->getGid());
    $this->client->setAccessType('offline');
    $this->client->setUseObjects(TRUE);
  }

  // Get the fully updated client object.
  public function getClient() {
    $this->setClient();
    return $this->client;
  }

  // Get an authorization url, adding the login hint.
  function getAuthUrl() {
    return $this->client->createAuthUrl() . '&login_hint=' . urlencode($this->credentials->getAccountEmail());
  }

  // Get an authorization url with the 'force' aproval prompt setting.
  function getForceAuthUrl() {
    $this->client->setApprovalPrompt('force');
    return $this->client->createAuthUrl() . '&login_hint=' . urlencode($this->credentials->getAccountEmail()); 
  } 

  // Get an array of authentication credentials.
  function authenticate($code) {
    return json_decode($this->client->authenticate($code));
  }
  
  // Getter the credential manager instance.
  function getCredManager() {
    return $this->credentials;
  }

 /**
  * Get the credentials from the credentials manager and set to client.
  * If the access token is expired, get a new one.
  */
  function setAccessToken() {
    // If the access token is expired, refresh it and store the new values.
    if ($this->credentials->tokenIsExpired()) {
      $this->client->refreshToken($this->credentials->getRefreshToken()); 
      $token = json_decode($this->client->getAccessToken());
      $this->credentials->updateAccessToken($token); 
    }
    $credentials = $this->credentials->getJsonCredentials();
    $this->client->setAccessToken($credentials);
  }

  function getAccessToken() {
    return $this->client->getAccessToken();
  }

 /**
  * Load library files.
  */
  public static function loadIncludes($service = 'client') {
    switch ($service) {
      case 'client':
        // Google client API.
        module_load_include('php', 'og_drive', OG_DRIVE_API_DIR . '/src/Google_Client');
        break;
      case 'drive':
        // Google drive service.
        module_load_include('php', 'og_drive', OG_DRIVE_API_DIR . '/src/contrib/Google_DriveService');
        break;
      case 'auth':
        // Google OAuth2 service.
        module_load_include('php', 'og_drive', OG_DRIVE_API_DIR . '/src/contrib/Google_Oauth2Service');
        break;
    }
  }

}

/**
 * Google API sample to upload file.
 */
function og_drive_test_drive() {
  $client = og_drive_get_client();
  og_drive_load_contrib('Google_DriveService');
  $service = new Google_DriveService($client); 
  $file = new Google_DriveFile();
  $file->setTitle('My document');
  $file->setDescription('A test document');
  $file->setMimeType('text/plain');
  $data = file_get_contents(drupal_get_path('module', 'og_drive') . '/document.txt'); 
  $createdFile = $service->files->insert($file, array(
    'data' => $data,
    'mimeType' => 'text/plain',
  ));
}
