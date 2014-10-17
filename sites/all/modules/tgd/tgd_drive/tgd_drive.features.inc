<?php
/**
 * @file
 * tgd_drive.features.inc
 */

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function tgd_drive_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:oa_wiki_page:default'])) {
    $data['node:oa_wiki_page:default']->display->content['new-32c308fc-ae57-43df-a4fa-8667a747ea6f']->position = 3; /* WAS: 2 */
    $data['node:oa_wiki_page:default']->display->content['new-513c9034-55a9-49db-b917-5d4b027a2ace'] = (object) array(
          'pid' => 'new-513c9034-55a9-49db-b917-5d4b027a2ace',
          'panel' => 'contentmain',
          'type' => 'entity_field_extra',
          'subtype' => 'node:tgd_drive_file',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'view_mode' => 'full',
            'context' => 'panelizer',
            'override_title' => 0,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => '513c9034-55a9-49db-b917-5d4b027a2ace',
        ); /* WAS: '' */
    $data['node:oa_wiki_page:default']->display->content['new-a811ab4b-b391-4bac-aee2-f0b6bdb5a65d']->position = 2; /* WAS: 1 */
    $data['node:oa_wiki_page:default']->display->content['new-e46086d2-3bda-405b-b9b1-6d44d79ea78e']->position = 5; /* WAS: 4 */
    $data['node:oa_wiki_page:default']->display->content['new-fd50a4cf-8298-4584-8504-b21e0e215e78']->position = 4; /* WAS: 3 */
    $data['node:oa_wiki_page:default']->display->panels['contentmain'][1] = 'new-513c9034-55a9-49db-b917-5d4b027a2ace'; /* WAS: 'new-a811ab4b-b391-4bac-aee2-f0b6bdb5a65d' */
    $data['node:oa_wiki_page:default']->display->panels['contentmain'][2] = 'new-a811ab4b-b391-4bac-aee2-f0b6bdb5a65d'; /* WAS: 'new-32c308fc-ae57-43df-a4fa-8667a747ea6f' */
    $data['node:oa_wiki_page:default']->display->panels['contentmain'][3] = 'new-32c308fc-ae57-43df-a4fa-8667a747ea6f'; /* WAS: 'new-fd50a4cf-8298-4584-8504-b21e0e215e78' */
    $data['node:oa_wiki_page:default']->display->panels['contentmain'][4] = 'new-fd50a4cf-8298-4584-8504-b21e0e215e78'; /* WAS: 'new-e46086d2-3bda-405b-b9b1-6d44d79ea78e' */
    $data['node:oa_wiki_page:default']->display->panels['contentmain'][5] = 'new-e46086d2-3bda-405b-b9b1-6d44d79ea78e'; /* WAS: '' */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function tgd_drive_strongarm_alter(&$data) {
  if (isset($data['field_bundle_settings_node__oa_wiki_page'])) {
    $data['field_bundle_settings_node__oa_wiki_page']->value['extra_fields']['display']['tgd_drive_file'] = array(
      'default' => array(
        'weight' => 0,
        'visible' => TRUE,
      ),
    ); /* WAS: '' */
    $data['field_bundle_settings_node__oa_wiki_page']->value['extra_fields']['form']['tgd_drive_file'] = array(
      'weight' => -3,
    ); /* WAS: '' */
  }
}
