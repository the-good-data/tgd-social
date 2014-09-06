<?php

/**
 * Definition of \Drupal\tgd_sso\TGDUserManager
 */

namespace Drupal\tgd_sso;

/**
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
    if ($drupalUser->tgd_sso_id == $tgdUser->id) {
      if ($tgdUser->updated > $drupalUser->tgd_sso_updated) {
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
  public static function getDrupalUserById($id) {
    if ($mappings = static::loadUserMappings($id, 'id')) {
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
      static::doUserMapping($drupalUser, $tgdUser);
      static::updateUserMapping($drupalUser);
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
   * Load Drupal user
   */
  public static function loadDrupalUser($drupalUser) {
    if ($mapping = static::loadUserMapping($drupalUser)) {
      $drupalUser->tgd_sso_id = $mapping->id;
      $drupalUser->tgd_sso_updated = $mapping->updated;
    }
    else {
      // No mapping for this user.
      $drupalUser->tgd_sso_id = 0;
    }
  }

  /**
   * Update / delete Drupal user mapping.
   */
  public static function updateUserMapping($drupalUser) {
    if (!empty($drupalUser->tgd_sso_id)) {
      return static::saveUserMapping($drupalUser);
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
        $user->tgd_sso_id = $mapping[$uid]->id;
        $user->tgd_sso_updated = $mapping[$uid]->updated;
      }
    }
  }

  /**
   * Set Drupal user values from remote user.
   */
  public static function doUserMapping($drupalUser, $tgdUser) {
    $drupalUser->tgd_sso_id = $tgdUser->id;
    $drupalUser->tgd_sso_updated = $tgdUser->updated;
    $drupalUser->name = $tgdUser->username;
    $drupalUser->mail = $tgdUser->email;
    $drupalUser->status = $tgdUser->status === static::STATUS_ACTIVE ? 1 : 0;
    return $drupalUser;
  }

  /**
   * Save Drupal user mapping.
   */
  public static function saveUserMapping($drupalUser) {
    return db_merge(static::TABLE)
      ->key(array('uid' => $drupalUser->uid))
      ->fields(array(
          'uid' => $drupalUser->uid,
          'id' => $drupaluser->tgd_sso_id,
          'updated' => $drupalUser->tgd_sso_updated,
      ))
      ->execute();
  }

  /**
   * Delete Drupal user mapping.
   */
  public static function deleteUserMapping($drupalUser) {
    $uid = is_object($drupalUser) ? $drupalUser->uid : $drupalUser;
    return db_delete(static::TABLE)
      ->key(array('uid' => $uid))
      ->execute();
  }

  /**
   * Load Drupal user mapping.
   */
  public static function loadUserMappings($value, $field = 'uid') {
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