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
  drupal_set_title(t('@group - Google Drive', array('@group' => $node->title)));
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

  // Show create upload forms.
  if (og_user_access('node', $node->nid, 'create drive file', $user, FALSE, TRUE) || user_access('administer group drive settings')) {
    module_load_include('inc', 'og_drive', 'includes/og_drive.forms');
    $content['create'] = drupal_get_form('tgd_drive_create_new_drive_file', $node->nid);
  }
  // Show upload forms.
  if (og_user_access('node', $node->nid, 'upload files to drive', $user, FALSE, TRUE) || user_access('administer group drive settings')) {
    module_load_include('inc', 'og_drive', 'includes/og_drive.forms');
    //$content['upload'] = drupal_get_form('og_drive_upload_drive_file', $node->nid);
    $content['upload'] = drupal_get_form('tgd_drive_upload_drive_file', $node->nid);
  }

  // Show synchronize form.
  if (og_user_access('node', $node->nid, 'administer own group drive settings', $user) || user_access('administer group drive settings')) {
    module_load_include('inc', 'og_drive', 'includes/og_drive.forms');
    $content['sync'] = drupal_get_form('tgd_drive_synchronize_files_form', $node->nid);
  }

  return $content;
}

/**
 * List drive content.
 *
 * @param $node
 *   Group the files belong to.
 */
function tgd_drive_list_content($gid) {
  $creds = new OgDriveCredentials($gid);
  // Get local file data.
  if($creds->getFileSource() == 0) {
    $links = og_drive_get_files($gid);
  }
  // Get file data from drive.
  else {
    $drive = new OgDriveService($gid);
    $links = $drive->getItems();
  }

  // Display links to each file.
  $content['links'] = array(
    '#theme' => 'tgd_drive_doc_list',
    '#links' => $links,
    '#gid' => $gid,
    //'#delete_access' => user_access('administer site configuration'), // og_drive_allow_delete_files($node->nid),
  );
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
      '#collapsible' => TRUE, '#collapsed' => TRUE,
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
 * Form definition.  Create new drive file.
 */
function tgd_drive_create_new_drive_file($form, $state, $gid) {
	$form = og_drive_create_new_drive_file($form, $state, $gid);
	$form['fieldset']['title']['#weight'] = -20;
	$form['fieldset']['description'] = array(
    '#type' => 'textarea',
    '#title' => t('description'),
    '#weight' => -10,
  );
	$form['fieldset']['#collapsible'] = TRUE;
	$form['fieldset']['#collapsed'] = TRUE;
	return $form;
}

/**
 * Submit handler.  Create a new drive file.
 */
function tgd_drive_create_new_drive_file_submit($form, &$form_state) {
  $values = $form_state['values'];
  $description = isset($values['description']) ? $values['description'] : '';

  if ($file = tgd_drive_create_new_file($values['gid'], $values['title'], $values['mimeType'])) {
  	global $user;
  	tgd_drive_create_new_document($file, $values['gid'], $user, $description);
  }
}

/**
 * Form definition.
 * Synchronize the local file data with the Google drive for one group.
 * Share new files and purge stale local data.
 *
 * @see og_drive_synchronize_files_form()
 */
function tgd_drive_synchronize_files_form($form, $form_state, $gid) {
  $form = og_drive_synchronize_files_form($form, $form_state, $gid);
	$form['set']['#collapsible'] = TRUE;
	$form['set']['#collapsed'] = TRUE;
	$form['set']['filelist'] = array(
		'#type' => 'fieldset',
		'#title' => t('File list'),
	  '#collapsible' => TRUE, '#collapsed' => TRUE,
	) + tgd_drive_list_content($gid);
	return $form;
}

/**
 * Submit handler.
 * Synchronize the local file data with the Google drive for one group.
 */
function tgd_drive_synchronize_files_form_submit($form, &$form_state) {
	$gid = $form_state['values']['gid'];
  tgd_drive_synchronize_files($gid);
  tgd_drive_synchronize_documents($gid);
}
