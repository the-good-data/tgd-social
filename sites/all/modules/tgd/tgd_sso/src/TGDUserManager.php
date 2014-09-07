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
    if ($drupalUser->tgd_user_id == $tgdUser->id) {
      if ($tgdUser->updated > $drupalUser->tgd_user_updated) {
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
   */
  public static function getDrupalUser($tgdUser) {
    if ($account = static::getDrupalUserById($tgdUser->id)) {
      // Existing account
      return $account;
    }
    else {
      // No local user, try to create it.
      return static::createDrupalUser($tgdUser);
    }
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
      $account = (object) array(
        'uid' => NULL,
        'status' => 1
      );
      static::setUserMapping($account, $tgdUser);
      if ($account = user_save($account)) {
        static::updateUserMapping($account);
        // Account created, log and return it.
        static::log('Successfully created local user account @druapl-user for remote @tgd-user', $account, $tgdUser);
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
  }


  /**
   * Get Drupal user id by TGD Id.
   */
  public static function getDrupalUserById($tgd_user_id) {
    if ($mappings = static::loadUserMappings($id, 'tgd_id')) {
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
   * @return
   */
  public static function updateDrupalUser($drupalUser, $tgdUser) {
    if ($tgdUser->load()) {
      static::doFieldMapping($drupalUser, $tgdUser);
      static::updateUserMapping($drupalUser, $tgdUser);
      return (boolean)$drupalUser->status;
    }
    else {
      // Remote user loading failed
      static::logError('Cannot load remote user for @drupal-user', $drupalUser);
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
        $user->tgd_user_id = $mapping[$uid]->tgd_id;
        $user->tgd_user_updated = $mapping[$uid]->tgd_updated;
      }
      else {
        $user->tgd_user_id = 0;
      }
    }
  }

  /**
   * Set Drupal user values from remote user.
   */
  protected static function doFieldMapping($drupalUser, $tgdUser) {
    $drupalUser->tgd_user_id = $tgdUser->id;
    $drupalUser->tgd_user_updated = $tgdUser->updated;
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
          'tgd_id' => $tgdUser->id,
          'tgd_updated' => $tgdUser->updated,
          'tgd_status' => $tgdUser->status,
      ))
      ->execute();
  }

  /**
   * Delete Drupal user mapping.
   */
  public static function deleteUserMapping($drupalUser) {
    $drupalUser->tgd_user_id = 0;
    return db_delete(static::TABLE)
      ->key(array('uid' => $uid))
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
   * Load Drupal user by tgd
   */
  public static function getDrupalUserId($tgdId) {
    // @todo

  }

  /**
   * Log messages to user watchdog, display important ones.
   */
  protected static function log($message, $drupalUser = NULL, $tgdUser = NULL, $level = WATCHDOG_INFO) {
    $variables = array();
    if ($drupalUser) {
      $variables['@drupal-user'] = theme('username', array('account' => $drupalUser));
    }
    if ($tgdUser) {
      $variables['@tgd-user'] = (string)$tddUser;
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