<?php
/**
 * @file
 * TGD SSO Client - Page callbacks
 */

/**
 * Include user pages, that will be our fallback.
 */
require_once drupal_get_path('module', 'user') . '/user.pages.inc';

/**
 * Kind of implements hook_menu_alter().
 *
 * Note: By having this in the same place callback pages are, we can see easier...
 *
 * Warning: Assume we are not using the profile module... ???
 *
 * @see tgd_sso_menu_alter().
 */
function _tgd_sso_menu_alter(&$items) {
  // @TODO Replace all Drupal user pages
  $file_path = drupal_get_path('module', 'tgd_sso');
  $replace_list = array(
    'user' => 'tgd_sso_page_user',
    'user/login' => 'tgd_sso_page_user_login',
    'user/logout' => 'tgd_sso_page_user_logout',
    'user/register' => 'tgd_sso_page_user_register',
    'user/password' => 'tgd_sso_page_user_password',
    'user/reset/%/%/%' => 'tgd_sso_user_pass_reset',
    'user/%user' => 'tgd_sso_page_user_view',
    'user/%user/view' => 'tgd_sso_page_user_view',
    // Better don't mess with edit pages, OA produces tons of notices.
    'user/%user/edit' => array(
      'page callback' => 'tgd_sso_page_user_edit',
      //'type' => MENU_CALLBACK,
    ),
    'user/%user/cancel' => 'tgd_sso_page_user_cancel',
    //'user/%user_category/edit/account' => FALSE ,
  );
  foreach ($replace_list as $path => $replace) {
    if ($replace) {
      // This can be a simple callback or a more complex array.
      $replace = is_string($replace) ? array('page callback' => $replace) : $replace;
      foreach ($replace as $name => $value) {
        $items[$path][$name] = $value;
      }
      $items[$path]['file'] = 'tgd_sso.pages.inc';
      $items[$path]['file path'] = $file_path;
    }
    else {
      $items[$path]['access callback'] = FALSE;
    }
  }
}

/**
 * Replace default user page. Redirect.
 *
 * @see user_page
 */
function tgd_sso_page_user() {
  global $user;

  if ($user->uid) {
    menu_set_active_item('user/' . $user->uid);
    return menu_execute_active_handler(NULL, FALSE);
  }
  else {
    return tgd_sso_page_user_login();
  }
}

/**
 * Replace default user page. Redirect.
 *
 * @see user_page
 */
function tgd_sso_page_user_login() {
  if (tgd_sso_page_replace()) {
    // Plain redirect, see you!
    tgd_sso_page_redirect('login', '');
  }
  else {
    // The form will be managed, see tgd_sso_form_user_login_alter().
    return drupal_get_form('user_login');
  }

}

/**
 * Replace logout page. Redirect.
 *
 * @see user_logout()
 */
function tgd_sso_page_user_logout() {
  // Destroy the current session, and reset $user to the anonymous user.
  tgd_sso_do_terminate_session();

  // Redirect if remote login enabled.
  if (variable_get('tgd_sso_remote_enable')) {
    $destination = isset($_GET['destination']) ? NULL : '';
    tgd_sso_page_redirect('logout', $destination);
  }
  else {
    drupal_goto();
  }
}

/**
 * Replace logout page. Redirect.
 */
function tgd_sso_page_user_register() {
  if (tgd_sso_page_replace()) {
    $destination = isset($_GET['destination']) ? NULL : '';
    tgd_sso_page_redirect('register', $destination);
  }
  else {
    $form = drupal_get_form('user_register_form');
    $form += tgd_sso_build_link('register', t('Register in master server'));
    return $form;
  }
}

/**
 * Replace password page. Redirect.
 */
function tgd_sso_page_user_password() {
  if (tgd_sso_page_replace()) {
    tgd_sso_page_redirect('edit');
  }
  else {
    $form = drupal_get_form('user_pass');
    $form += tgd_sso_build_link('edit', t('Edit account in master server'));
    return $form;
  }
}

/**
 * Replace registration page. Redirect.
 */
function tgd_sso_page_user_view($account) {
  $build = user_view_page($account);
  $build += tgd_sso_build_link('view', t('View account in master server'));
  return $build;
}

/**
 * Replace edit page. More access control, Redirect?.
 *
 * @TODO Manage user account edit form.
 */
function tgd_sso_page_user_edit($form_name, $account = NULL) {
  if (tgd_sso_page_replace() && !user_access('administer users')) {
    // Not admins, redirect to master site, come back to home page.
    tgd_sso_page_redirect('edit', NULL, '');
  }
  else {
    $form = drupal_get_form($form_name, $account);
    //$form += tgd_sso_build_link('edit', t('Edit account in master server'));
    return $form;
  }

}

/**
 * Replace cancel page.
 */
function tgd_sso_page_user_cancel($form_name, $account) {
  if (tgd_sso_page_replace() && !user_access('administer users')) {
    // Not admins, redirect to master site, come back to home page.
    tgd_sso_page_redirect('cancel', NULL, '');
  }
  else {
    return drupal_get_form($form_name, $account);
  }
}

/**
 * Replace password reset page.
 */
function tgd_sso_user_pass_reset($form_name, $uid, $timestamp, $hashed_pass, $action = NULL) {
  // This should allow local login for admins only
  if (!tgd_sso_page_replace() || ($account = user_load($uid)) && user_access('tgd sso local login', $account)) {
    return drupal_get_form($form_name, $uid, $timestamp, $hashed_pass, $action);
  }
  else {
    drupal_set_message(t('This option is available for administrators only'), 'error');
    drupal_access_denied();
  }
}

/**
 * Redirect to master page with proper destination.
 *
 * @param $link
 *   Our link array.
 */
function tgd_sso_page_redirect($type, $destination = NULL) {
  // We don't want destination to be 'user/login'.
  if (!isset($destination)) {
    $destination = isset($_GET['destination']) ? NULL : '';
  }
  $link = tgd_sso_master_link($type, NULL, $destination);
  tgd_sso_master_redirect($link);
}

/**
 * Check whether we can replace user pages or should go for original callback.
 */
function tgd_sso_page_replace() {
  return variable_get('tgd_sso_local_disable') && variable_get('tgd_sso_remote_enable');
}
