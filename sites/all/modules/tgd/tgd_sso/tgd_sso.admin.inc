<?php
/**
 * @file
 * TGD SSO - Admin pages.
 */

use Drupal\tgd_sso\TGDUserManager;

/**
 * Administer TGD Users.
 */
function tgd_sso_admin_page_users() {
  $build['list'] = tgd_sso_user_mapping_list();
  $build['admin'] = drupal_get_form('tgd_sso_admin_users_bulk_form');
  return $build;
}

/**
 * Page callback: Mapping overview
 */
function tgd_sso_user_mapping_list() {
  // Build the sortable table header.
  $header = array(
    'uid' => array('data' => t('User'), 'field' => 'm.uid'),
    'tgd_id' => array('data' => t('TGD Id'), 'field' => 'm.tgd_id'),
    'tgd_status' => array('data' => t('TGD Status'), 'field' => 'm.tgd_status'),
    'updated' => array('data' => t('Updated'), 'field' => 'm.tgd_updated', 'sort' => 'desc')
  );
  $rows = array();
  foreach (tgd_sso_user_mapping_load_paged() as $mapping) {
    $rows[] = array(
      'uid' => theme('username', array('account' => user_load($mapping->uid))),
      'tgd_id' => $mapping->tgd_id,
      'tgd_status' => $mapping->tgd_status,
      'tgd_updated' => format_date($mapping->tgd_updated, 'short'),
    );
  }
  $form['users'] = array(
    '#theme' => 'table',
    '#header' => $header,
    '#rows' => $rows,
    '#empty' => t('No users available.'),
  );
  return $form;
}

/**
 * Get paged list of user mappings
 */
function tgd_sso_user_mapping_load_paged() {
  $query = db_select('tgd_sso_user', 'm')
    ->fields('m', array());
  $query->extend('PagerDefault')->extend('TableSort');

  $list = array();
  foreach ($query->execute()->fetchAll() as $data) {
    $list[] = $data;
  }
  return $list;
}

/**
 * Admin users bulk form.
 */
function tgd_sso_admin_users_bulk_form($form, &$form_state) {
  $form['operation'] = array(
    '#title' => t('Select operation'),
    '#type' => 'select',
    '#options' => array(
       'synchronize' => t('Synchronize all existing user accounts'),
       'import' => t('Import user accounts from SSO Master'),
       'delete' => t('Delete all account mappings'),
     ),
     '#required' => TRUE,
  );
  $form['options'] = array(
    '#title' => t('Options'),
    '#type' => 'checkboxes',
    '#options' => array(
      'map_mail' => t('Use existing mail addresses for account mapping'),
      'map_name' => t('Use existing user names for account mapping'),
      'update' => t('Update existing user accounts if match found'),
      'create' => t('Create new user accounts if no match found'),
    ),
  );
  $form['execute'] = array(
    '#type' => 'submit',
    '#value' => t('Run operation'),
  );
  return $form;
}

/**
 * Admin users bulk form. Submission and run operations.
 */
function tgd_sso_admin_users_bulk_form_submit($form, &$form_state) {
  $operation = $form_state['values']['operation'];
  $options = $form_state['values']['options'];

  switch ($operation) {
    case 'import':
      $results = tgd_sso_admin_users_import($options);
      break;
    default:
      drupal_set_message(t('Operation not implemented yet.'), 'warning');
      return;
  }

  if (!empty($results)) {
    drupal_set_message(t("Loaded @users remote users: Created @created, updated @updated, errors @errors", array(
      '@users' => $results['users'],
      '@created' => $results['created'],
      '@updated' => $results['updated'],
      '@errors' => $results['errors'],
    )));
  }
}

/**
 * Import users from remote server.
 */
function tgd_sso_admin_users_import($options, $limit = 10) {
  $client = tgd_sso_client();
  $count = array(
    'users' => 0,
    'created' => 0,
    'updated' => 0,
    'errors' => 0,
  );
  for ($id = 1; $id <= $limit; $id++) {
    if ($tgdUser = $client->getUserById($id)) {
      $count['users']++;
      if ($account = tgd_sso_admin_users_find_local($tgdUser, $options)) {
        $variables = array(
          '@drupal-user' => theme('username', array('account' => $account)),
          '@tgd-user' => $tgdUser->getLabel(),
        );
        if (!empty($options['update'])) {
          drupal_set_message(t('Found existing user @drupal-user, updating from remote @tgd-user', $variables));
          TGDUserManager::updateDrupalUser($account, $tgdUser);
          $count['updated']++;
        }
        else {
          drupal_set_message(t('Found existing user @drupal-user, matching remote @tgd-user', $variables));
        }
      }
      elseif (!empty($options['create'])) {
        if (($account = TGDUserManager::getDrupalUser($tgdUser))) {
          drupal_set_message(t('Created user @drupal-user, updating from remote @tgd-user', array(
            '@drupal-user' => theme('username', array('account' => $account)),
            '@tgd-user' => $tgdUser->getLabel(),
          )));
          $count['created']++;
        }
        else {
          drupal_set_message(t('Cannot create user for remote @tgd-user', array(
            '@tgd-user' => (string)$tgdUser,
          )), 'error');
          $count['errors']++;
        }
      }
      else {
        drupal_set_message(t('Got remote user, found no local mapping for: @tgd-user', array(
          '@tgd-user' => (string)$tgdUser,
        )), 'warning');
      }
    }
  }
  return $count;
}

/**
 * Find local user by different mapping options.
 */
function tgd_sso_admin_users_find_local($tgdUser, $options) {
  if ($account = TGDUserManager::getDrupalUserById($tgdUser->id)) {
    return $account;
  }
  elseif (!empty($options['map_mail']) && ($account = user_load_by_mail($tgdUser->email))) {
    return $account;
  }
  elseif (!empty($options['map_name']) && ($account = user_load_by_name($tgdUser->username))) {
    return $account;
  }
  else {
    // No mapping found.
    return NULL;
  }
}