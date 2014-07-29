<?php

/**
 * @file
 *   Provide db methods for the og_drive module.
 *   Typically these methods should only be called by their OgDriveGroup wrappers.
 */

/**
 * Insert or update group node drive settings.
 * @param $gid
 *   Group node id.
 * @param $fields
 *   Array of database field (name => value) pairs.
 */
function _og_drive_save_settings($gid, $fields) {
  return db_merge('og_drive_group_settings')
    ->key(array('gid' => $gid))
    ->fields($fields)
    ->execute();
}

/**
 * Get the row of all values for the group node.
 * @param
 *   The node id for the group node.
 * @return
 *   object of table row fields.
 */
function _og_drive_get_settings($gid) {
  return db_select('og_drive_group_settings', 'odgs')
    ->condition('gid', $gid)
    ->fields('odgs')
    ->execute()
    ->fetchObject(); 
}

/**
 *
 * {"access_token":"TOKEN", "refresh_token":"TOKEN", "token_type":"Bearer",
 *  "expires_in":3600, "id_token":"TOKEN", "created":1320790426}
 */ 
function _og_drive_get_credentials($gid) {
  return db_select('og_drive_group_settings', 'odgs')
    ->condition('gid', $gid)
    ->fields('odgs', array('access_token', 'access_token_expiry', 'refresh_token', 'token_type', 'created'))
    ->execute()->fetchObject();
}

/**
 * Delete a group node drive settings.
 * @param $gid
 *   A group node id.
 */ 
function _og_drive_delete_settings($gid) { 
  return db_delete('og_drive_group_settings')
    ->condition('gid', $gid)
    ->execute();
}

/**
 * Insert or update user file permission.
 * @param $gid
 *   Group node id.
 * @param $uid
 *   Array of database field (name => value) pairs.
 * @param $fid
 *   Google drive file id. 
 * @param $pid
 *   Google drive permission id. 
 */
function _og_drive_save_permission($gid, $uid, $fid, $pid) {
  return db_merge('og_drive_permissions')
    ->key(array('gid' => $gid, 'uid' => $uid, 'fid' => $fid))
    ->fields(array('pid' => $pid))
    ->execute();
}

/**
 * Get all the Google drive permissions associated with a group.
 * @param $gid
 *   Group node id.
 */
function _og_drive_get_all_premissions($gid) {
  return db_select('og_drive_permissions', 'odp')
    ->condition('gid', $gid)
    ->fields('odp')
    ->execute()->fetchAll();
}

/**
 * Get the Google drive permissions for one user for a group.
 */
function _og_drive_get_user_permissions($gid, $uid) {
  return db_select('og_drive_permissions', 'odp')
    ->condition('gid', $gid)
    ->condition('uid', $uid)
    ->fields('odp')
    ->execute()->fetchAll();
}

/**
 * Delete a file permission for a user.
 */
function _og_drive_delete_permission($uid, $fid) {
  return db_delete('og_drive_permissions')
    ->condition('uid', $uid)
    ->condition('fid', $fid)
    ->execute();
}

/**
 * Delete all the file permissions for given files.
 * @param $fids
 *   array of file ids.
 */
function _og_drive_delete_files_permissions($fids) {
  return db_delete('og_drive_permissions')
    ->condition('fid', $fids, 'IN')
    ->execute();
}

/**
 * Get all user uids for one drive.
 */
function _og_drive_get_users($gid) {
  return db_select('og_drive_permissions', 'odp')
    ->condition('gid', $gid)
    ->fields('odp', array('uid'))
    ->execute()->fetchCol();  
}

/**
 * Insert or update an email address value for a user.
 */
function _og_drive_update_email_value($uid, $email_address) {
  return db_merge('og_drive_user_value')
    ->key(array('uid' => $uid))
    ->fields(array('email_address' => $email_address))
    ->execute();
}

/**
 * Delete email address value for a user.
 */
function _og_drive_delete_email_value($uid) {
  return db_delete('og_drive_user_value')
    ->condition('uid', $uid)
    ->execute();
}

/**
 * Get all the table rows that represent a file item.
 * @return
 *   associative array (file_id => fields object).
 */
function _og_drive_get_files($gid) {
  return db_select('og_drive_files', 'odf')
    ->condition('gid', $gid)
    ->fields('odf')
    ->execute()->fetchAllAssoc('id');
}

/**
 * Insert or update file data.
 * @param $values
 *  array of key => value pairs.
 */
function _og_drive_update_file($values) {
  return db_merge('og_drive_files')
    ->key(array('id' => $values['id']))
    ->fields($values)
    ->execute();
}

/**
 * Delete local file data.
 * @param $ids
 *   array of file ids.
 */
function _og_drive_delete_files($ids) {
  return db_delete('og_drive_files')
    ->condition('id', $ids, 'IN')
    ->execute();
}

/**
 * Get all the file permissions associated with one file id.
 * @param $fid
 *   A Google_DriveFile id.
 * @return
 *   array of Google_Permission ids.
 */
function _og_drive_get_file_permissions($fid) {
  return db_select('og_drive_permissions', 'odp')
    ->condition('fid', $fid)
    ->fields('odp', array('pid'))
    ->execute()->fetchCol();
}

/**
 * Delete file data for a group.
 */
function _og_drive_delete_all_group_files($gid) {
  return db_delete('og_drive_files')
    ->condition('gid', $gid)
    ->execute();
}
