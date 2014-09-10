<?php

/**
 * Definition of \Drupal\tgd_sso\TGDUserManager
 */

namespace Drupal\tgd_sso;

/**
 * Manage storage for Drupal users, TGD mappings, etc...
 *
 * This is a Drupal API.
 */
class TGDUserManager {

  // Table name
  const TABLE = 'tgd_sso_user';

  // User status, from TGD master
  const STATUS_DELETED = 0;
  const STATUS_ACTIVE = 1;
  const STATUS_DISABLED = 2;
  // Additional status, for mismatch
  const STATUS_ERROR = -1;

  /**
   * Check Drupal user is enabled and up to date.
   *
   * If user is not up to date, it will try to update it from master,
   * returning FALSE if operation cannot be done.
   *
   * @return boolean
   *   TRUE if user is enabled and up to date.
   */
  public static function checkDrupalUser($drupalUser, $tgdUser) {
    if ($drupalUser->tgd_user && $drupalUser->tgd_user->id == $tgdUser->id) {
      if ($tgdUser->updated > $drupalUser->tgd_user->updated) {
        // Update Drupal user from master.
        return static::updateDrupalUser($drupalUser, $tgdUser);
      }
      else {
        // Local user exists and it is up to date.
        return TRUE;
      }
    }

    return FALSE;
  }

  /**
   * Get Drupal user for TGD user / create if not existing.
   *
   * @param TGDUser $tgdUser
   *   Remote user.
   * @param boolean $create
   *   Attempt to create new Drupal account if no match found.
   *
   * @return object|NULL
   *   Drupal user account if successful.
   *   NULL otherwise.
   */
  public static function getDrupalUser($tgdUser, $create = FALSE) {
    if ($account = static::getDrupalUserById($tgdUser->id)) {
      // Existing account
      return $account;
    }
    elseif ($create) {
      // No local user, try to create it.
      return static::createDrupalUser($tgdUser);
    }
    else {
      return NULL;
    }
  }

  /**
   * Get TGD user for Drupal user.
   *
   * @return object|NULL
   *   Remote user account if successful.
   *   NULL otherwise.
   */
  public static function getRemoteUser($account) {
    if ($mappings = static::loadUserMappings($account->uid, 'uid')) {
      $map = reset($mappings);
      return new TGDUser($map, tgd_sso_client());
    }
    else {
      return NULL;
    }
  }

  /**
   * Build TGD user as renderable array
   */
  public static function buildRemoteUser($tgdUser) {
    $loaded = $tgdUser->load();
    $build['id'] = array(
      '#type' => 'item',
      '#title' => t('User Id'),
      '#markup' => (int)$tgdUser->id,
    );
    if ($loaded) {
      $build['name'] = array(
        '#type' => 'item',
        '#title' => t('User name'),
        '#markup' => check_plain($tgdUser->username),
      );
      $build['mail'] = array(
        '#type' => 'item',
        '#title' => t('Mail'),
        '#markup' => check_plain($tgdUser->email),
      );
    }
    // @todo Make human readable..
    $build['status'] = array(
      '#type' => 'item',
      '#title' => t('Status'),
      '#markup' => (int)$tgdUser->status,
    );
    $build['updated'] = array(
      '#type' => 'item',
      '#title' => t('Updated'),
      '#markup' => format_date($tgdUser->updated),
    );
    return $build;
  }

  /**
   * Create Drupal user for TGD user.
   *
   * @return object|NULL
   *   Drupal user account if successful.
   *   NULL otherwise.
   */
  public static function createDrupalUser($tgdUser) {
    if ($tgdUser->load()) {
      // Validate name, mail don't conflict with existing users.
      if ($account = static::findMatchingDrupalUser($tgdUser)) {
        static::logError('Found conflicting user account !drupal-user for @tgd-user', $account, $tgdUser);
        return NULL;
      }
      // Ok, let's create user.
      $account = (object) array(
        'uid' => NULL,
        'status' => 0,
        'pass' => user_password(),
        'init' => $tgdUser->email,
      );
      // @TODO: Set roles: Authenticated user?
      $role = user_role_load(DRUPAL_AUTHENTICATED_RID);
      $account->roles[$role->rid] = $role->name;

      static::doFieldMapping($account, $tgdUser);
      if ($account = user_save($account)) {
        static::updateUserMapping($account, $tgdUser);
        // Account created, log and return it.
        static::log('Successfully created local user account !drupal-user for remote @tgd-user', $account, $tgdUser);
        return $account;
      }
      else {
        static::logError('Failed to create local user account for remote @tgd-user', NULL, $tgdUser);
      }
    }
    else {
      // Cannot load full remote user.
      static::logError('Failed to load remote user @tgd-user', NULL, $tgdUser);
    }
    return NULL;
  }

  /**
   * Find existing user
   *
   * @return object|null
   *   Matching Drupal user if any.
   */
  public static function findMatchingDrupalUser($tgdUser, $check = array('name', 'mail')) {
    foreach ($check as $field) {
      switch ($field) {
        case 'name':
          $account = user_load_by_name($tgdUser->username);
          break;
        case 'mail':
          $account = user_load_by_mail($tgdUser->email);
          break;
      }
      if ($account) {
        return $account;
      }
    }
    return NULL;
  }

  /**
   * Get Drupal user id by TGD Id.
   */
  public static function getDrupalUserById($tgd_id) {
    if ($mappings = static::loadUserMappings($tgd_id, 'id')) {
      $map = reset($mappings);
      return user_load($map->uid);
    }
    else {
      return NULL;
    }
  }

  /**
   * Update Drupal user.
   *
   * @return boolean
   *   True if operation successful.
   */
  public static function updateDrupalUser($drupalUser, $tgdUser) {
    if ($tgdUser->load()) {
      static::doFieldMapping($drupalUser, $tgdUser);
      static::updateUserMapping($drupalUser, $tgdUser);
      user_save($drupalUser);
      return TRUE;
    }
    else {
      // Remote user loading failed
      static::logError('Cannot load remote user for !drupal-user', $drupalUser);
      // @TODO Should we delete / disable local user?
      return FALSE;
    }
  }

  /**
   * Load Drupal user with TGD user data.
   */
  public static function loadDrupalUser($account) {
    static::loadMultipleUsers(array($account->uid => $account));
  }


  /**
   * Update / delete Drupal user mapping.
   */
  protected static function updateUserMapping($drupalUser, $tgdUser) {
    if ($tgdUser) {
      return static::saveUserMapping($drupalUser, $tgdUser);
    }
    else {
      return static::deleteUserMapping($drupalUser);
    }
  }

  /**
   * Load user list mapping
   *
   * @param array $users
   *   Drupal user objects indexed by uid.
   */
  public static function loadMultipleUsers($users) {
    $mapping = static::loadUserMappings(array_keys($users));
    foreach ($users as $uid => $user) {
      if (isset($mapping[$uid])) {
        $tgdUser = new TGDUser($mapping[$uid]);
        $user->tgd_user = $tgdUser;
      }
      else {
        $user->tgd_user = FALSE;
      }
    }
  }

  /**
   * Set Drupal user values from remote user.
   */
  protected static function doFieldMapping($drupalUser, $tgdUser) {
    $drupalUser->tgd_user = $tgdUser;
    $drupalUser->name = $tgdUser->username;
    $drupalUser->mail = $tgdUser->email;
    $drupalUser->status = $tgdUser->canLogin() ? 1 : 0;
    return $drupalUser;
  }

  /**
   * Save Drupal user mapping.
   */
  protected static function saveUserMapping($drupalUser, $tgdUser) {
    return db_merge(static::TABLE)
      ->key(array('uid' => $drupalUser->uid))
      ->fields(array(
          'uid' => $drupalUser->uid,
          'id' => $tgdUser->id,
          'updated' => $tgdUser->updated,
          'status' => $tgdUser->status,
      ))
      ->execute();
  }

  /**
   * Delete Drupal user mapping.
   */
  public static function deleteUserMapping($drupalUser) {
    $drupalUser->tgd_user_id = 0;
    return db_delete(static::TABLE, 'u')
      ->condition('u.uid', $uid)
      ->execute();
  }

  /**
   * Load Drupal user mapping.
   *
   * @return array
   *   Objects with uid, tgd_user_id, tgd_updated
   */
  protected static function loadUserMappings($value, $field = 'uid') {
    return db_select(static::TABLE, 'u')
      ->fields('u')
      ->condition('u.' . $field, $value)
      ->execute()
      ->fetchAllAssoc('uid');
  }


  /**
   * Log messages to user watchdog, display important ones.
   */
  protected static function log($message, $drupalUser = NULL, $tgdUser = NULL, $level = WATCHDOG_INFO) {
    $variables = array();
    if ($drupalUser) {
      $variables['!drupal-user'] = theme('username', array('account' => $drupalUser));
    }
    if ($tgdUser) {
      $variables['@tgd-user'] = (string)$tgdUser;
    }
    watchdog('tgd_sso', $message, $variables, $level);
    if ($level <= WATCHDOG_WARNING) {
      drupal_set_message(format_string($message, $variables), 'warning');
    }
  }

  /**
   * Log error message.
   */
  protected static function logError($message, $drupalUser = NULL, $tgdUser = NULL) {
    static::log($message, $drupalUser, $tgdUser, WATCHDOG_ERROR);
  }

}