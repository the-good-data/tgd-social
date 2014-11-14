<?php
/**
 * @file
 * TGD Drive TGD_DriveService
 */

/**
 * Overrides default OgDriveService for not sending notifications emails.
 */
class TgdDriveService extends OgDriveService {

  // Google_DriveService.
  protected $service;
  protected $gid;

  /**
   * Class constructor.
   *
   * We cannot just use the parent's constructor because it has some private properties.
   */
  public function __construct($gid, $client = NULL) {
  	parent::__construct($gid, $client);
    $this->gid = $gid;
    $this->service = $this->getService();
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
          $file_permission = $this->service->permissions->insert($file->id, $perm, array('sendNotificationEmails' => FALSE));
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

}

