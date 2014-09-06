<?php
/**
 * @file
 * Variable definitions for TGD SSO
 */

/**
 * Implements hook_variable_info().
 */
function tgd_sso_variable_info($options) {
  $variables['tgd_sso_local_disable'] = array(
    'title' => t('Disable local login', array(), $options),
    'description' => t('Disable local login and user accounts. Do not enable untile the system is properly configured and working.', array(), $options),
    'type' => 'boolean',
    'group' => 'tgd_sso',
  );
  $variables['tgd_sso_base_url'] = array(
    'title' => t('Base URL', array(), $options),
    'description' => t('SSO master base URL without trailing slash.', array(), $options),
    'type' => 'string',
    'default' => 'https://www.thegooddata.org',
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