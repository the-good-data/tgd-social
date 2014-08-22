<?php
/**
 * @file
 * tgd_admin.features.inc
 */

/**
 * Implements hook_views_default_views_alter().
 */
function tgd_admin_views_default_views_alter(&$data) {
  if (isset($data['oa_admin_views_node'])) {
    $data['oa_admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::clone_action_clone'] = array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ); /* WAS: '' */
    $data['oa_admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::flag_node_action'] = array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ); /* WAS: '' */
    $data['oa_admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::panelizer_set_status_action'] = array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ); /* WAS: '' */
    $data['oa_admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::pathauto_node_update_action'] = array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ); /* WAS: '' */
    $data['oa_admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::views_bulk_operations_delete_revision'] = array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ); /* WAS: '' */
    unset($data['oa_admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::system_goto_action']);
    unset($data['oa_admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::system_message_action']);
    unset($data['oa_admin_views_node']->display['default']->display_options['filters']['flagged']);
    unset($data['oa_admin_views_node']->display['default']->display_options['relationships']['flag_content_rel']);
  }
}
