<?php

/**
 * @file
 *  Drive operations.
 */

class OgDriveService {

  // Google_DriveService.
  private $service;
  private $gid;

  public function __construct($gid, $client = NULL) {
    $this->gid = $gid;
    if (is_null($client)) {
      // Get credentials for this group and generate Drive service.
      $client = new OgDriveClient($gid);
    }
    try {
      $client->setAccessToken();
      OgDriveService::loadIncludes();
      $this->service = new Google_DriveService($client->getClient());
    }
    catch(Exception $e) {
      $error_vars = array('!gid' => $this->gid, '!message' => $e->getMessage());
      watchdog('og_drive', 'Error instantiating OgDriveService for !gid : !message ', $error_vars, WATCHDOG_ERROR);
      drupal_set_message(t('There was a problem instantiating the drive for group id !id', array('!id' => $this->gid)), 'error');
    }
  } 

  /**
   *  Get all the files in a drive.
   *  @return
   *    array of Google_DriveFile objects.
   */
  public function getItems() {
    try {
      $list = $this->service->files->listFiles();
      return $list->items; 
    }
    catch(Exception $e) {
      $error_vars = array('!gid' => $this->gid, '!message' => $e->getMessage());
      watchdog('og_drive', 'Error getting files OgDriveService for !gid : !message ', $error_vars, WATCHDOG_ERROR);
      drupal_set_message(t('There was a problem obtaining the files for group id !id', array('!id' => $this->gid)), 'error');
    }
  }

  /**
   * Add, update and share any files existing in the drive that are not recorded by the module.
   * Purge files that are no longer in the drive.
   */
  public function updateLocalFileData() {
    $schema = drupal_get_schema_unprocessed('og_drive', 'og_drive_files');
    $db_fields = array_flip(array_keys($schema['fields']));  
    $drive_items = $this->getItems();
    $local_items = og_drive_get_files($this->gid);
    // Copy file info that is not yet in the local data.
    $new_files = array();
    // Copy all the file ids in the drive.
    $drive_file_ids = array();
    // File ids that are either trashed in the drive or stale in the db.
    $obsolete_ids = array(); 

    foreach ($drive_items as $item) {
      if (! array_key_exists($item->id, $local_items)) {
        // Store the file for sharing with users.
        $new_files[] = $item; 
      }

      // Discard trashed items.
      if ($item->labels->trashed) {
        $obsolete_ids[] = $item->id;
        continue;
      }

      // Update local data.
      $values = array_intersect_key((array)$item, $db_fields);
      $values['gid'] = $this->gid;
      $drive_file_ids[] = $item->id;
      og_drive_update_file($values);
    }

    // Share the new files with the group users.
    if ($new_files) {
      $users = og_drive_get_users_emails(og_drive_get_user_members($this->gid));
      $this->createUserPermissions($users, $new_files);
    }

    // Delete obsolete file data.
    // Merge any trashed ids with the stale local ids.
    // Stale ids are the difference between the local file ids and the file ids from the drive. 
    if ($obsolete_ids = array_merge($obsolete_ids, array_diff(array_keys($local_items), $drive_file_ids))) {
      og_drive_delete_files($obsolete_ids);
    }

    // Nothing changed.
    if (! $obsolete_ids && ! $new_files) {
      drupal_set_message(t('Everything up to date.'));
    }
    drupal_set_message(t('The drive has been synchronized.'));
  }

  /**
   * Create permissions for users on files.
   * param $users
   *   array of user ids and Google account email addresses: array($uid => $email_address).
   * param $files
   *   array of file items objects: array(array('id' => 'xyz', 'kind' => 'drive#file', ...)).
   */ 
  public function createUserPermissions($users, $files) {
    $creds = new OgDriveCredentials($this->gid);
    // Set role according to group drive credentials settings.
    $role = $creds->getRoleString();
    $perm = new Google_Permission();

    foreach ($users as $uid => $email_address) {
      $shared_count = 0;
      $failed_count = 0;
      foreach ($files as $file) {
        $perm->setValue($email_address);
        $perm->setType('user');
        $perm->setRole($role);
        try {
          $file_permission = $this->service->permissions->insert($file->id, $perm);
          $shared_count++;
          // Save permission to db.          
          $creds->savePermission($uid, $file, $file_permission);
        }
        catch (Exception $e) {
          $failed_count++;
          $error_vars = array('!gid' => $this->gid, '!message' => $e->getMessage());
          watchdog('og_drive', 'Error adding permission drive files for !gid : !message ', $error_vars, WATCHDOG_ERROR);
        }
      }

      // Display a message indicating how many files were shared for each user.
      if ($shared_count > 0) {
        $t_params = array(
          '!count' => $shared_count, 
          '!user' => user_load($uid)->name,
          '!files' => format_plural($shared_count, 'file', 'files'),
        );
        drupal_set_message(t('!count drive !files shared with user !user', $t_params));
      }

      // Display a message indicating any problem sharing files for each user.
      if ($failed_count > 0) {
        $t_params = array(
          '!count' => $failed_count, 
          '!user' => user_load($uid)->name,
          '!file' => format_plural($failed_count, 'file', 'files'),
        );
        drupal_set_message(t('Problem sharing !count drive !files with user !user', $t_params), 'error');
      }
    }
  }

  /**
   * Delete user permissions for users for this group.
   * @param $users
   *   Array of user uids array(2, 4, 5432).
   */
  function deleteUserPermissions($users) {
    $creds = new OgDriveCredentials($this->gid);
    foreach ($users as $uid) {
      // Get the file permissions for the group files for this user.
      $permissions = $creds->getUserPermissions($uid); 
      $delete_count = 0;
      $failed_count = 0;
      foreach ($permissions as $perm) {
        try {
          $this->service->permissions->delete($perm->fid, $perm->pid);
          // Delete the local file permission data.
          $creds->deletePermission($uid, $perm->fid);
          $delete_count++;
        }
        catch (Exception $e) {
          $failed_count++; 
          $error_vars = array(
            '!gid' => $this->gid,
            '!uid' => $uid,
            '!fid' => $perm->fid,
            '!pid' => $perm->pid,
            '!message' => $e->getMessage());
          watchdog('og_drive', 'Error removing permission for (gid,uid,fid,pid) (!gid,!uid,!fid,!pid) : !message ', $error_vars, WATCHDOG_ERROR);
        }
      }
      if ($failed_count > 0) {
        $t_params = array(
          '!count' => $failed_count,
          '!user' => user_load($uid)->name,
          '!permissions' => format_plural($failed_count, 'permission', 'permissions'),
        );
        drupal_set_message(t('Problem deleting !count drive !permissions for user !user.', $t_params), 'error');
      }
      if ($delete_count > 0) {
        $t_params = array(
          '!count' => $delete_count, 
          '!user' => user_load($uid)->name,
          '!permissions' => format_plural($delete_count, 'permission', 'permissions'),
        );
        drupal_set_message(t('!count drive !permissions deleted for user !user', $t_params));
      }
    }
  }

  /**
   * Create a new file.
   */
  function createNewFile($title, $mimeType, $data = FALSE) {
    $file = new Google_DriveFile();
    $file->setTitle($title);
    $file->setMimeType($mimeType);
    if ($data === FALSE) {
      $data = '';
    }    
    try {
      return $this->service->files->insert($file, array(
        'data' => $data,
        'mimeType' => $mimeType
      ));
    }
    catch(Exception $e) {
      drupal_set_message(t('Problem creating new file.'));
      watchdog('og_drive', 'Problem creating new file: !message ', array('!message' => $e->getMessage()), WATCHDOG_ERROR);
    }
  }

  /**
   * Delete a file from the drive.
   */
  public function deleteFile($id) {
    try {
      $this->service->files->delete($id); 
    }
    catch(Exception $e) {
      watchdog('og_drive', 'Problem deleting file: !message ', array('!message' => $e->getMessage()), WATCHDOG_ERROR);
    }
  }

  /**
   * Update the role, "reader" or "writer", for every file for every group member.
   */
  public function updateUsersPermissions($role) {
    $patch = new Google_Permission();
    $patch->setRole($role);
    foreach ($this->getItems() as $file) {
      foreach (og_drive_get_file_permissions($file->id) as $perm) {
        $this->service->permissions->patch($file->id, $perm, $patch);        
      } 
    }    
  }

  /**
   * Delete a group drive, remove all permissions to all files for all users.
   * Delete the credentials for the group.
   */
  function deleteDrive() {
    $creds = new OgDriveCredentials($this->gid);
    $this->deleteUserPermissions($creds->getUsers());
    $creds->delete();
  }

  /**
   * Getters
   */
  public function getService() {
    return $this->service;
  }

  /**
   * Load library files.
   */
  public static function loadIncludes() {
    // Google drive service.
    module_load_include('php', 'og_drive', OG_DRIVE_API_DIR . '/src/contrib/Google_DriveService');
  }
}
