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

  return $permissions;
}
