<?php
/**
 * @file
 * tgd_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function tgd_users_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 3,
  );

  // Exported role: authenticated plus.
  $roles['authenticated plus'] = array(
    'name' => 'authenticated plus',
    'weight' => 2,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 4,
  );

  return $roles;
}
