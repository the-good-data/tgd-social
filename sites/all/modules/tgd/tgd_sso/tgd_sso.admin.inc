<?php
/**
 * @file
 * TGD SSO - Admin pages.
 */

use Drupal\tgd_sso\TGDUserManager;
use Drupal\tgd_sso\TGDUser;
use Drupal\tgd_sso\TGDLogger;

/**
 * Administer TGD Users.
 */
function tgd_sso_admin_page_users() {
  $build['list'] = tgd_sso_user_mapping_list();
  //$build['admin'] = drupal_get_form('tgd_sso_admin_users_bulk_form');
  return $build;
}

/**
 * Page callback: Mapping overview
 */
function tgd_sso_user_mapping_list() {
  // Build the sortable table header.
  $header = array(
    'uid' => array('data' => t('User'), 'field' => 'm.uid'),
    'tgd_id' => array('data' => t('TGD Id'), 'field' => 'm.id'),
    'tgd_status' => array('data' => t('TGD Status'), 'field' => 'm.status'),
    'updated' => array('data' => t('Updated'), 'field' => 'm.updated', 'sort' => 'desc')
  );
  $rows = array();
  foreach (tgd_sso_user_mapping_load_paged() as $mapping) {
    $rows[] = array(
      'uid' => theme('username', array('account' => user_load($mapping->uid))),
      'tgd_id' => (int)$mapping->id,
      'tgd_status' => (int)$mapping->status,
      'tgd_updated' => format_date($mapping->updated, 'short'),
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
    '#type' => 'radios',
    '#options' => array(
       'synchronize' => t('Synchronize all existing user accounts'),
       'import' => t('Import new user accounts from SSO Master'),
     ),
     '#required' => TRUE,
  );
  // Delete is too dangerous, only for debug mode.
  if (variable_get('tgd_sso_debug_enable')) {
    $form['operation']['#options']['delete'] = t('Delete all user account mappings (Not users)');
  }
  $form['options'] = array(
    '#title' => t('Import Options'),
    '#type' => 'checkboxes',
    '#options' => array(
      'map_mail' => t('Use existing mail addresses for account mapping'),
      'map_name' => t('Use existing user names for account mapping'),
      'update' => t('Update existing user accounts if match found'),
      'create' => t('Create new user accounts if no match found'),
    ),
  );
  $form['parameters'] = array(
    '#title' => t('Import parameters'),
    '#type' => 'fieldset',
  );
  $form['parameters']['start_user_id'] = array(
    '#title' => t('From User Id'),
    '#type' => 'textfield',
    '#size' => 4,
    '#default_value' => 1,
  );
  $form['parameters']['end_user_id'] = array(
    '#title' => t('To User Id'),
    '#type' => 'textfield',
    '#size' => 4,
    '#default_value' => 100,
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
  $params = $form_state['values'];
  switch ($operation) {
    case 'import':
      $results = tgd_sso_admin_users_import($options, $params['start_user_id'], $params['end_user_id']);
      break;
    case 'synchronize':
      $results = tgd_sso_admin_users_sync($options);
      break;
    case 'delete':
      $deleted = db_delete(TGDUserManager::TABLE)->execute();
      drupal_set_message(t('Deleted @count user mappings.', array('@count' => $deleted)));
      break;
    default:
      drupal_set_message(t('Operation not implemented yet.'), 'warning');
      return;
  }

  if (!empty($results)) {
    drupal_set_message(t("Loaded @users users: Created @created, updated @updated, errors @errors", array(
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
function tgd_sso_admin_users_import($options, $start_id = 1, $end_id = 10) {
  $client = tgd_sso_admin_client();
  $count = array(
    'users' => 0,
    'created' => 0,
    'updated' => 0,
    'errors' => 0,
  );
  for ($id = $start_id; $id <= $end_id; $id++) {
    if ($tgdUser = $client->getUserById($id)) {
      $count['users']++;
      if ($account = tgd_sso_admin_users_find_local($tgdUser, $options)) {
        $variables = array(
          '!drupal-user' => theme('username', array('account' => $account)),
          '@tgd-user' => $tgdUser->getLabel(),
        );
        if (!empty($options['update'])) {
          drupal_set_message(t('Found existing user !drupal-user, updating from remote @tgd-user', $variables));
          TGDUserManager::updateDrupalUser($account, $tgdUser);
          $count['updated']++;
        }
        else {
          drupal_set_message(t('Found existing user !drupal-user, matching remote @tgd-user', $variables));
        }
      }
      elseif (!empty($options['create'])) {
        if (($account = TGDUserManager::getDrupalUser($tgdUser, TRUE))) {
          drupal_set_message(t('Created user !drupal-user, updating from remote @tgd-user', array(
            '!drupal-user' => theme('username', array('account' => $account)),
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
 * Synchronize account data with remote data.
 */
function tgd_sso_admin_users_sync($options) {
  $client = tgd_sso_admin_client();
  $count = array(
    'users' => 0,
    'created' => 0,
    'updated' => 0,
    'errors' => 0,
  );
  $result = db_select(TGDUserManager::TABLE, 'm')
    ->fields('m', array())
    ->execute()
    ->fetchAll();
  foreach ($result as $mapping) {
    $account = user_load($mapping->uid);
    dpm($account, 'account');
    $count['users']++;
    $tgdUser = new TGDUser($mapping, $client);
    if ($account && $tgdUser->load()) {
      $success = TGDUserManager::checkDrupalUser($account, $tgdUser);
      $count['updated']++;
    }
    else {
      $success = FALSE;
    }
    if (!$success) {
      $count['errors']++;
      drupal_set_message(t('Cannot update user !drupal-user', array(
        '!drupal-user' => theme('username', array('account' => $account)),
      )));
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
  $check = array();
  if (!empty($options['map_mail'])) {
    $check[] = 'mail';
  }
  if (!empty($options['map_name'])) {
    $check[] = 'name';
  }
  if ($check) {
    return TGDUserManager::findMatchingDrupalUser($tgdUser, $check);
  }
  // No mapping found
  return NULL;
}

/**
 * Get TGD Client for bulk operations, without too much logging.
 */
function tgd_sso_admin_client() {
  $client = tgd_sso_client();
  $client->setLogger(new TGDLogger(array(
    'debug' => variable_get('tgd_sso_debug_enable'),
    'callback' => 'tgd_sso_admin_log_message',
  )));
  return $client;
}

/**
 * Admin ogging callback.
 */
function tgd_sso_admin_log_message($message, $args, $args_string, $severity) {
  // Log without printing, only errors.
  $print = $severity == TGDLogger::ERROR;
  tgd_sso_log_message($message, $args, $args_string, $severity, $print);
}

