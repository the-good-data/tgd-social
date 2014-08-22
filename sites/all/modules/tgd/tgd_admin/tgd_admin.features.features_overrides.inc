<?php
/**
 * @file
 * tgd_admin.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function tgd_admin_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: views_view
  $overrides["views_view.oa_admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::clone_action_clone"] = array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  );
  $overrides["views_view.oa_admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::flag_node_action"] = array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  );
  $overrides["views_view.oa_admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::panelizer_set_status_action"] = array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  );
  $overrides["views_view.oa_admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::pathauto_node_update_action"] = array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  );
  $overrides["views_view.oa_admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::system_goto_action"]["DELETED"] = TRUE;
  $overrides["views_view.oa_admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::system_message_action"]["DELETED"] = TRUE;
  $overrides["views_view.oa_admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::views_bulk_operations_delete_revision"] = array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  );
  $overrides["views_view.oa_admin_views_node.display|default|display_options|filters|flagged"]["DELETED"] = TRUE;
  $overrides["views_view.oa_admin_views_node.display|default|display_options|relationships|flag_content_rel"]["DELETED"] = TRUE;

 return $overrides;
}
