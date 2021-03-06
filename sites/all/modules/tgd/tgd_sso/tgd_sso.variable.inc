<?php
/**
 * @file
 * Variable definitions for TGD SSO
 */

/**
 * Implements hook_variable_info().
 */
function tgd_sso_variable_info($options) {
  $variables['tgd_sso_remote_enable'] = array(
    'title' => t('Enable remote login', array(), $options),
    'description' => t('Enable SSO login and user accounts. Do not enable until the system is properly configured and working.', array(), $options),
    'type' => 'boolean',
    'group' => 'tgd_sso',
  );
  $variables['tgd_sso_local_disable'] = array(
    'title' => t('Disable local login', array(), $options),
    'description' => t('Disable local login and user accounts. Do not disable until the system is properly configured and working.', array(), $options),
    'type' => 'boolean',
    'group' => 'tgd_sso',
  );
  $variables['tgd_sso_local_create'] = array(
    'title' => t('Create new accounts', array(), $options),
    'description' => t('If remote login enabled, create a new local user account when there is no matching one.', array(), $options),
    'type' => 'boolean',
    'group' => 'tgd_sso',
  );
  $variables['tgd_sso_base_url'] = array(
    'title' => t('Base URL', array(), $options),
    'description' => t('SSO master base URL without trailing slash.', array(), $options),
    'type' => 'string',
    'default' => 'https://thegooddata.org',
    'group' => 'tgd_sso',
  );
  $variables['tgd_sso_auth_token'] = array(
    'title' => t('Auth Token', array(), $options),
    'description' => t('Shared token for authentication', array(), $options),
    'type' => 'string',
    'group' => 'tgd_sso',
  );
  $variables['tgd_sso_shared_cookie'] = array(
    'title' => t('Cookie Name', array(), $options),
    'description' => t('Shared cookie name for authentication', array(), $options),
    'type' => 'string',
    'default' => 'PHPSESSID',
    'group' => 'tgd_sso',
  );
  $variables['tgd_sso_check_interval'] = array(
    'title' => t('Check interval', array(), $options),
    'description' => t('Time interval for checking existing accounts (none to disable)', array(), $options),
    'type' => 'time_interval',
    'interval values' => array(0, 60, 180, 300, 600, 900, 1800, 2700, 3600, 10800, 21600, 32400, 43200, 86400),
    'default' => 0,
    'group' => 'tgd_sso',
  );
  $variables['tgd_sso_check_number'] = array(
    'title' => t('Check number', array(), $options),
    'description' => t('Number of user accounts to check on a cron run.', array(), $options),
    'type' => 'number',
    'default' => 1,
    'group' => 'tgd_sso',
  );
  $variables['tgd_sso_debug_enable'] = array(
    'title' => t('Enable Debug', array(), $options),
    'description' => t('Enable debug mode. All messages will be logged to watchdog and printed.', array(), $options),
    'type' => 'boolean',
    'group' => 'tgd_sso',
  );
  return $variables;
}

/**
 * Implements hook_variable_group_info().
 */
function tgd_sso_variable_group_info() {
  $groups['tgd_sso'] = array(
    'title' => 'TGD SSO',
    'access' => 'administer site configuration',
    'path' => array('admin/config/tgd/sso'),
  );
  return $groups;
}