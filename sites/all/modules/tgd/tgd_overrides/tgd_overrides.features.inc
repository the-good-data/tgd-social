<?php
/**
 * @file
 * tgd_overrides.features.inc
 */

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function tgd_overrides_default_page_manager_handlers_alter(&$data) {
  if (isset($data['node_edit_panel_context_5'])) {
    $data['node_edit_panel_context_5']->conf['display']->content['new-f14b4454-0050-4181-8185-5dfb34996c97']->access['plugins'] = array(); /* WAS: '' */
  }
  if (isset($data['node_edit_panel_context_6'])) {
    $data['node_edit_panel_context_6']->conf['display']->content['new-2362dc2f-60f2-42e4-b13f-82918fd4b1a8']->access['plugins'] = array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ); /* WAS: '' */
    $data['node_edit_panel_context_6']->conf['display']->content['new-3e512c5d-c078-4846-80be-8af3e1542958']->shown = FALSE; /* WAS: TRUE */
    $data['node_edit_panel_context_6']->conf['display']->content['new-9393082c-61cd-4cc5-801f-bfe809fcbd43']->access['plugins'] = array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ); /* WAS: '' */
    $data['node_edit_panel_context_6']->conf['display']->content['new-ff7df286-18fd-4ab0-bd53-1102821bc86f']->access['plugins'] = array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_default_panels_mini_alter().
 */
function tgd_overrides_default_panels_mini_alter(&$data) {
  if (isset($data['default_section_sidebar'])) {
    $data['default_section_sidebar']->display->content['new-e88f722e-09b5-451c-b694-f6b79c2d8554']->shown = FALSE; /* WAS: TRUE */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function tgd_overrides_strongarm_alter(&$data) {
  if (isset($data['panelizer_defaults_node_panopoly_page'])) {
    $data['panelizer_defaults_node_panopoly_page']->value['view modes']['search_result'] = array(
      'status' => 0,
      'default' => 0,
      'choice' => 0,
    ); /* WAS: '' */
  }
}
