<?php
/**
 * @file
 * tgd_permissions.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function tgd_permissions_defaultconfig_features() {
  return array(
    'tgd_permissions' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function tgd_permissions_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer group drive settings'.
  $permissions['administer group drive settings'] = array(
    'name' => 'administer group drive settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'og_drive',
  );

  // Exported permission: 'change own drive account email address'.
  $permissions['change own drive account email address'] = array(
    'name' => 'change own drive account email address',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'og_drive',
  );

  return $permissions;
}
