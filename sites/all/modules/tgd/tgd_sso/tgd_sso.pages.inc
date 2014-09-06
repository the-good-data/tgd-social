<?php
/**
 * @file
 * TGD SSO Client - Page callbacks
 */

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
  module_load_include('inc', 'tgd_sso', 'tgd_sso.pages');
  _tgd_sso_menu_alter($items);
  $file_path = drupal_get_path('module', 'tgd_sso');
  $replace = array(
    'user' => 'tgd_sso_page_user',
    'user/logout' => 'tgd_sso_page_logout',
    'user/register' => 'tgd_sso_page_register',
    'user/password' => FALSE,
    'user/reset/%/%/%' => FALSE,
    'user/%user' => 'tgd_sso_page_user_view',
    'user/%user/edit' => FALSE,
    'user/%user/cancel' => FALSE,
    'user/%user_category/edit/account' => FALSE ,
  );
  foreach ($replace as $path => $callback) {
    if ($callback) {
      $items[$path]['page callback'] = $callback;
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
  // Plain redirect, good bye!
  $link = tgd_sso_master_link('login');
  tgd_sso_page_redirect($link);
}


/**
 * Replace logout page. Redirect.
 */
function tgd_sso_page_user_logout() {
  // Local log out + redirect.
  $link = tgd_sso_master_link('logout');
  tgd_sso_page_redirect($link);
}

/**
 * Replace registration page. Redirect.
 */
function tgd_sso_page_user_view() {

}

/**
 * Replace logout page. Redirect.
 */
function tgd_ssso_page_user_view() {
  // @TODO
}

/**
 * Replace logout page. Redirect.
 */
function tgd_sso_page_edit() {
  // @TODO Should we allow editing picture here?
}

/**
 * Redirect to link with proper destination.
 *
 * @param $link
 *   Our link array.
 */
function tgd_sso_page_redirect($link) {
  // We are doing a 302 redirect, right?
  // @DEBUG:
  watchdog('tgd_sso', 'Redirecting user to master server: @url', array(
    '@url' => url($link['path'], $link['options'])
  ));
  drupal_goto($link['path'], $link['options']);
}
