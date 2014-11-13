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
  if (isset($data['comment_oa_wiki_page'])) {
    $data['comment_oa_wiki_page']->value = 2; /* WAS: 0 */
  }
  if (isset($data['contextual_tabs_extract'])) {
    $data['contextual_tabs_extract']->value = 'user*:Edit|Edit profile,icon-pencil
    user*:Notifications
    node/*:Google drive content|Google drive
    node/*/clone/confirm:View|Cancel,icon-remove
    node/*/edit:View|Cancel,icon-remove
    View
    Edit,icon-pencil
    Members,icon-user'; /* WAS: 'user*:Edit|Edit profile,icon-pencil
    node\/*\/clone/confirm:View|Cancel,icon-remove
    node\/*\/edit:View|Cancel,icon-remove
    View
    Edit,icon-pencil
    Members,icon-user' */
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function tgd_overrides_field_default_field_instances_alter(&$data) {
  if (isset($data['node-oa_wiki_page-field_oa_media'])) {
    unset($data['node-oa_wiki_page-field_oa_media']['default_value']);
  }
  if (isset($data['node-oa_wiki_page-oa_other_spaces_ref'])) {
    unset($data['node-oa_wiki_page-oa_other_spaces_ref']);
  }
  if (isset($data['node-oa_wiki_page-og_vocabulary'])) {
    $data['node-oa_wiki_page-og_vocabulary']['display']['default']['label'] = 'inline'; /* WAS: 'above' */
    $data['node-oa_wiki_page-og_vocabulary']['display']['default']['settings']['concatenate'] = 1; /* WAS: FALSE */
  }
}

/**
 * Implements hook_file_default_displays_alter().
 */
function tgd_overrides_file_default_displays_alter(&$data) {
  if (isset($data['document__preview__file_field_file_default'])) {
    $data['document__preview__file_field_file_default']->status = FALSE; /* WAS: TRUE */
    $data['document__preview__file_field_file_default']->weight = 0; /* WAS: 50 */
  }
  if (isset($data['video__default__media_vimeo_video'])) {
    $data['video__default__media_vimeo_video']->settings['protocol'] = '//'; /* WAS: 'https://' */
  }
  if (isset($data['video__preview__media_vimeo_image'])) {
    $data['video__preview__media_vimeo_image']->settings['image_style'] = 'panopoly_image_thumbnail'; /* WAS: 'media_thumbnail' */
    $data['video__preview__media_vimeo_image']->weight = 2; /* WAS: 0 */
  }
}

/**
 * Implements hook_file_default_types_alter().
 */
function tgd_overrides_file_default_types_alter(&$data) {
  if (isset($data['audio'])) {
    $data['audio']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['document'])) {
    $data['document']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['image'])) {
    $data['image']->disabled = FALSE; /* WAS: '' */
  }
  if (isset($data['video'])) {
    $data['video']->disabled = FALSE; /* WAS: '' */
  }
}
