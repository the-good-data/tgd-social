<?php
/**
 * @file
 * TGD Content - Pages
 */

/**
 * Upload new file to Google Drive - Replacement page
 *
 * Reworked to link an OA Document to each Google Doc.
 *
 * @see og_drive_node_content_tab()
 */

/**
 * Page callback.
 * Show the drive page.
 *
 * @param $node
 *   Group the files belong to.
 */
function tgd_drive_node_content_tab($node) {
  global $user;
  // Show the Google account registering form.
  if (!$account_address = og_drive_get_user_email($user->uid)) {
    module_load_include('inc', 'og_drive', 'includes/og_drive.forms');
    return drupal_get_form('og_drive_register_email', $user, $node->nid);
  }

  // Show a message to notify the user of his registered account.
  $content['account_address'] = array(
    '#markup' => t('Make sure you are connected to your Google account (!account)
      to access private drive files.', array('!account' => $account_address)),
  );

  $creds = new OgDriveCredentials($node->nid);
  // Get local file data.
  if($creds->getFileSource() == 0) {
    $links = og_drive_get_files($node->nid);
  }
  // Get file data from drive.
  else {
    $drive = new OgDriveService($node->nid);
    $links = $drive->getItems();
  }

  // Display links to each file.
  $content['links'] = array(
    '#theme' => 'og_drive_doc_list',
    '#links' => $links,
    '#gid' => $node->nid,
    '#delete_access' => user_access('administer site configuration'), // og_drive_allow_delete_files($node->nid),
  );

  // Show create upload forms.
  /*
  if (og_user_access('node', $node->nid, 'create drive file', $user, FALSE, TRUE) || user_access('administer group drive settings')) {
    module_load_include('inc', 'og_drive', 'includes/og_drive.forms');
    $content['create'] = drupal_get_form('og_drive_create_new_drive_file', $node->nid);
  }
  */
  // Show upload forms.
  if (og_user_access('node', $node->nid, 'upload files to drive', $user, FALSE, TRUE) || user_access('administer group drive settings')) {
    module_load_include('inc', 'og_drive', 'includes/og_drive.forms');
    //$content['upload'] = drupal_get_form('og_drive_upload_drive_file', $node->nid);
    $content['upload'] = drupal_get_form('tgd_drive_upload_drive_file', $node->nid);
  }

  // Show synchronize form.
  if (og_user_access('node', $node->nid, 'administer own group drive settings', $user) || user_access('administer group drive settings')) {
    module_load_include('inc', 'og_drive', 'includes/og_drive.forms');
    $content['sync'] = drupal_get_form('og_drive_synchronize_files_form', $node->nid);
  }

  return $content;
}

/**
 * Form definition for file upload.
 *
 * @see og_drive_upload_drive_file()
 */
function tgd_drive_upload_drive_file($form, $form_state, $gid) {
  $form = array(
    'gid' => array(
      '#type' => 'value',
      '#value' => $gid,
    ),
    'fieldset' => array(
      '#type' => 'fieldset',
      '#title' => t('Upload a file to the group drive'),
      'file' => array(
        '#name' => 'file',
        //'#title' => t('Upload file'),
        '#type' => 'file',
      ),
      'submit' => array(
        '#type' => 'submit',
        '#value' => t('Upload'),
      ),
    ),
  );
  $form['fieldset']['title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title'),
    '#weight' => -20,
  );
  $form['fieldset']['description'] = array(
    '#type' => 'textarea',
    '#title' => t('description'),
    '#weight' => -10,
  );
  return $form;
}

/**
 * Submit handler.
 * Save file info, create and share drive file.
 *
 * @see og_drive_upload_drive_file_submit()
 */
function tgd_drive_upload_drive_file_submit($form, &$form_state) {
  $values = $form_state['values'];
  $data = file_get_contents($_FILES['file']['tmp_name']);
  $mimeType = $values['mimeType'];
  // Get title and description.
  $title = !empty($values['title']) ? $values['title'] : $_FILES['file']['name'];
  $description = isset($values['description']) ? $values['description'] : '';
  $file = tgd_drive_create_new_file($values['gid'], $title, $mimeType, $data);
  if ($file) {
  	global $user;
  	tgd_drive_create_new_document($file, $values['gid'], $user, $description);
  }
}

/**
 * Create a new file and share with all group members.
 * @param $gid
 * @param $title
 * @param $mimeType
 *
 * @return Google_DriveFile|FALSE
 *   New file created if successful, FALSE if not.
 *   (id, title, description)
 *
 * @see og_drive_create_new_file().
 */
function tgd_drive_create_new_file($gid, $title, $mimeType, $data = FALSE) {
  $file = FALSE;

	try {
    $service = new OgDriveService($gid);
    $file = $service->createNewFile($title, $mimeType, $data);
    // Exctract the Google_DriveFile object values required for the db row.
    $schema = drupal_get_schema_unprocessed('og_drive', 'og_drive_files');
    $db_fields = array_flip(array_keys($schema['fields']));
    $values = array_intersect_key((array)$file, $db_fields);
    $values['gid'] = $gid;
    global $user;
    $values['uid'] = $user->uid;
    // Save the file info locally.
    og_drive_update_file($values);
    drupal_set_message(t('The file "!title" has been created', array('!title' => $title)));

    // Share the file with all the group members.
    $uids = og_drive_get_user_members($gid);
    $users = og_drive_get_users_emails($uids);
    $service->createUserPermissions($users , array($file));

  }
  catch (Exception $e) {
    og_drive_log_exception($e, t('There was a problem creating the new file'));
  }

  return $file;
}
