<?php
/**
 * @file
 * tgd_overrides.features.inc
 */

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function tgd_overrides_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:oa_section:oa_section_discussion'])) {
    $data['node:oa_section:oa_section_discussion']->display->content['new-5c68f6e4-d50a-494a-885f-8fa91edb5003'] = (object) array(
          'pid' => 'new-5c68f6e4-d50a-494a-885f-8fa91edb5003',
          'panel' => 'sidebar',
          'type' => 'add_section_content',
          'subtype' => 'add_section_content',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'context' => 'panelizer',
            'override_title' => 1,
            'override_title_text' => 'Haven\'t found what you\'re worried about? Add your own discussion.',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(
            'css_id' => 'add-your-content',
            'css_class' => '',
          ),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => '5c68f6e4-d50a-494a-885f-8fa91edb5003',
        ); /* WAS: '' */
    $data['node:oa_section:oa_section_discussion']->display->content['new-c7a43a77-fca5-4cc3-829c-220e2142ae5e']->position = 0; /* WAS: 2 */
    $data['node:oa_section:oa_section_discussion']->display->panels['contentmain'][0] = 'new-c7a43a77-fca5-4cc3-829c-220e2142ae5e'; /* WAS: 'new-b5034a79-ddc6-4fb5-b939-e21cdcfcb6b6' */
    $data['node:oa_section:oa_section_discussion']->display->panels['sidebar'][0] = 'new-5c68f6e4-d50a-494a-885f-8fa91edb5003'; /* WAS: 'new-f40e5cbc-b456-4d18-986e-5d516011a7de' */
    unset($data['node:oa_section:oa_section_discussion']->display->content['new-6e7b549b-c4e3-4462-b4d2-a02b9db9eff4']);
    unset($data['node:oa_section:oa_section_discussion']->display->content['new-b485b8e9-9c6a-4242-8058-06de9082942a']);
    unset($data['node:oa_section:oa_section_discussion']->display->content['new-b5034a79-ddc6-4fb5-b939-e21cdcfcb6b6']);
    unset($data['node:oa_section:oa_section_discussion']->display->content['new-c7a43a77-fca5-4cc3-829c-220e2142ae5e']->configuration['exposed']['flagged']);
    unset($data['node:oa_section:oa_section_discussion']->display->content['new-e9603b15-2c3a-4b58-8290-692183e7b687']);
    unset($data['node:oa_section:oa_section_discussion']->display->content['new-f40e5cbc-b456-4d18-986e-5d516011a7de']);
    unset($data['node:oa_section:oa_section_discussion']->display->panels['contentmain'][1]);
    unset($data['node:oa_section:oa_section_discussion']->display->panels['contentmain'][2]);
    unset($data['node:oa_section:oa_section_discussion']->display->panels['contentmain'][3]);
    unset($data['node:oa_section:oa_section_discussion']->display->panels['contentmain'][4]);
  }
  if (isset($data['node:oa_section:oa_section_news'])) {
    $data['node:oa_section:oa_section_news']->display->content['new-05720ab2-5890-4d5a-8a5f-ef661536054b'] = (object) array(
          'pid' => 'new-05720ab2-5890-4d5a-8a5f-ef661536054b',
          'panel' => 'sidebar',
          'type' => 'add_section_content',
          'subtype' => 'add_section_content',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'context' => 'panelizer',
            'override_title' => 1,
            'override_title_text' => 'Want to create a document related to a particular discussion, task or poll?',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(
            'css_id' => 'add-your-content',
            'css_class' => '',
          ),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => '05720ab2-5890-4d5a-8a5f-ef661536054b',
        ); /* WAS: '' */
    $data['node:oa_section:oa_section_news']->display->content['new-debf41be-8d6e-4fb5-8b92-97f04a235ba5'] = (object) array(
          'pid' => 'new-debf41be-8d6e-4fb5-8b92-97f04a235ba5',
          'panel' => 'contentmain',
          'type' => 'views_panes',
          'subtype' => 'open_atrium_news-recent_documents_table',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'exposed' => array(
              'og_group_ref_target_id' => '',
              'og_group_ref_target_id_mine' => 0,
              'og_subspaces_view_all' => 0,
              'oa_section_ref_target_id' => '',
            ),
            'more_link' => 1,
            'items_per_page' => 10,
            'fields_override' => array(
              'title' => 1,
              'body' => 1,
              'created' => 1,
              'og_vocabulary' => 0,
            ),
            'override_title' => '',
            'override_title_text' => '',
            'view_settings' => 'table',
            'header_type' => 'titles',
            'view_mode' => 'teaser',
            'widget_title' => 'Recent Documents',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => array(),
            'style' => 'oa_styles_oa_pane',
          ),
          'css' => array(
            'css_id' => 'recent-documents-table-long',
            'css_class' => '',
          ),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => 'debf41be-8d6e-4fb5-8b92-97f04a235ba5',
        ); /* WAS: '' */
    $data['node:oa_section:oa_section_news']->display->hide_title = 1; /* WAS: 0 */
    $data['node:oa_section:oa_section_news']->display->panels['contentmain'][0] = 'new-debf41be-8d6e-4fb5-8b92-97f04a235ba5'; /* WAS: 'new-2010ab8d-8b3a-4f76-8bcd-a9b92ba1417b' */
    $data['node:oa_section:oa_section_news']->display->panels['sidebar'][0] = 'new-05720ab2-5890-4d5a-8a5f-ef661536054b'; /* WAS: 'new-e7915e9b-dd20-424f-b4e9-4bc4d9a81cbc' */
    $data['node:oa_section:oa_section_news']->title = 'Documents Section'; /* WAS: 'News Section' */
    unset($data['node:oa_section:oa_section_news']->display->content['new-2010ab8d-8b3a-4f76-8bcd-a9b92ba1417b']);
    unset($data['node:oa_section:oa_section_news']->display->content['new-60eba777-8bd7-4984-aefb-7777899f42d9']);
    unset($data['node:oa_section:oa_section_news']->display->content['new-a1345e0e-4ffb-4445-b615-b8922b7dba10']);
    unset($data['node:oa_section:oa_section_news']->display->content['new-d2e48391-04fd-4e47-a3ee-9442c060a4e8']);
    unset($data['node:oa_section:oa_section_news']->display->content['new-e7915e9b-dd20-424f-b4e9-4bc4d9a81cbc']);
    unset($data['node:oa_section:oa_section_news']->display->panels['contentmain'][1]);
    unset($data['node:oa_section:oa_section_news']->display->panels['contentmain'][2]);
    unset($data['node:oa_section:oa_section_news']->display->panels['sidebar'][1]);
  }
  if (isset($data['node:oa_space:default'])) {
    $data['node:oa_space:default']->display->content['new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54']->configuration['exposed']['sort_by'] = NULL; /* WAS: '' */
    $data['node:oa_space:default']->display->content['new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54']->configuration['exposed']['sort_order'] = NULL; /* WAS: '' */
    $data['node:oa_space:default']->display->content['new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de']->configuration['exposed']['oa_section_ref_target_id'] = 0; /* WAS: 'All' */
    $data['node:oa_space:default']->display->content['new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de']->configuration['view_mode'] = 'teaser'; /* WAS: 'full' */
    $data['node:oa_space:default']->title = 'OA Default'; /* WAS: 'Default' */
    unset($data['node:oa_space:default']->display->content['new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54']->configuration['exposed']['flagged']);
    unset($data['node:oa_space:default']->display->content['new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de']->configuration['exposed']['og_subspaces_view_parent']);
    unset($data['node:oa_space:default']->display->content['new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de']->configuration['show_exposed_form']);
  }
  if (isset($data['node:oa_wiki_page:default'])) {
    $data['node:oa_wiki_page:default']->display->content['new-32c308fc-ae57-43df-a4fa-8667a747ea6f']->position = 3; /* WAS: 2 */
    $data['node:oa_wiki_page:default']->display->content['new-a811ab4b-b391-4bac-aee2-f0b6bdb5a65d']->position = 2; /* WAS: 1 */
    $data['node:oa_wiki_page:default']->display->content['new-b0e99b31-2142-4544-b2fe-24ca08d38d9e'] = (object) array(
          'pid' => 'new-b0e99b31-2142-4544-b2fe-24ca08d38d9e',
          'panel' => 'contentmain',
          'type' => 'entity_field_extra',
          'subtype' => 'node:tgd_drive_file',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'view_mode' => 'full',
            'context' => 'panelizer',
            'override_title' => 1,
            'override_title_text' => 'View in Google Docs',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => 'b0e99b31-2142-4544-b2fe-24ca08d38d9e',
        ); /* WAS: '' */
    $data['node:oa_wiki_page:default']->display->content['new-e46086d2-3bda-405b-b9b1-6d44d79ea78e']->position = 5; /* WAS: 4 */
    $data['node:oa_wiki_page:default']->display->content['new-fd50a4cf-8298-4584-8504-b21e0e215e78']->position = 4; /* WAS: 3 */
    $data['node:oa_wiki_page:default']->display->panels['contentmain'][1] = 'new-b0e99b31-2142-4544-b2fe-24ca08d38d9e'; /* WAS: 'new-a811ab4b-b391-4bac-aee2-f0b6bdb5a65d' */
    $data['node:oa_wiki_page:default']->display->panels['contentmain'][2] = 'new-a811ab4b-b391-4bac-aee2-f0b6bdb5a65d'; /* WAS: 'new-32c308fc-ae57-43df-a4fa-8667a747ea6f' */
    $data['node:oa_wiki_page:default']->display->panels['contentmain'][3] = 'new-32c308fc-ae57-43df-a4fa-8667a747ea6f'; /* WAS: 'new-fd50a4cf-8298-4584-8504-b21e0e215e78' */
    $data['node:oa_wiki_page:default']->display->panels['contentmain'][4] = 'new-fd50a4cf-8298-4584-8504-b21e0e215e78'; /* WAS: 'new-e46086d2-3bda-405b-b9b1-6d44d79ea78e' */
    $data['node:oa_wiki_page:default']->display->panels['contentmain'][5] = 'new-e46086d2-3bda-405b-b9b1-6d44d79ea78e'; /* WAS: '' */
  }
  if (isset($data['user:user:default'])) {
    $data['user:user:default']->display->content['new-68c7ecbc-a5d5-40b1-91c6-4e34bf23ae2c'] = (object) array(
          'pid' => 'new-68c7ecbc-a5d5-40b1-91c6-4e34bf23ae2c',
          'panel' => 'contentheader',
          'type' => 'views_panes',
          'subtype' => 'open_atrium_news-panel_pane_6',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'more_link' => 1,
            'use_pager' => 1,
            'pager_id' => 2,
            'items_per_page' => 5,
            'fields_override' => array(
              'title' => 1,
              'body' => 0,
              'created' => 1,
              'og_vocabulary' => 0,
            ),
            'override_title' => '',
            'override_title_text' => '',
            'view_settings' => 'fields',
            'header_type' => 'none',
            'view_mode' => 'teaser',
            'widget_title' => 'Your Documents',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => array(),
            'style' => 'oa_styles_oa_pane',
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
          'uuid' => '68c7ecbc-a5d5-40b1-91c6-4e34bf23ae2c',
        ); /* WAS: '' */
    $data['user:user:default']->display->content['new-96a2afdd-ee57-4829-afd9-7a16facdb46f'] = (object) array(
          'pid' => 'new-96a2afdd-ee57-4829-afd9-7a16facdb46f',
          'panel' => 'sidebar',
          'type' => 'views_panes',
          'subtype' => 'open_atrium_polls-panel_pane_6',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'view_settings' => 'fields',
            'header_type' => 'none',
            'view_mode' => 'teaser',
            'fields_override' => array(
              'title' => 1,
              'created' => 1,
              'name' => 0,
              'field_user_picture' => 0,
              'term_node_tid' => 0,
            ),
          ),
          'cache' => array(),
          'style' => array(
            'settings' => array(),
            'style' => 'oa_styles_oa_pane',
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
          'uuid' => '96a2afdd-ee57-4829-afd9-7a16facdb46f',
        ); /* WAS: '' */
    $data['user:user:default']->display->content['new-9cdb330a-8d4f-4488-9a69-e8e1ebf9c4c5'] = (object) array(
          'pid' => 'new-9cdb330a-8d4f-4488-9a69-e8e1ebf9c4c5',
          'panel' => 'contentheader',
          'type' => 'views_panes',
          'subtype' => 'oa_worktracker-panel_pane_6',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'exposed' => array(
              'og_group_ref_target_id' => 'All',
              'og_group_ref_target_id_mine' => 0,
              'og_subspaces_view_all' => 0,
              'field_oa_worktracker_task_status_value' => array(),
            ),
            'use_pager' => 1,
            'pager_id' => 3,
            'items_per_page' => 10,
            'fields_override' => array(
              'title' => 1,
              'timestamp' => 0,
              'field_oa_worktracker_duedate' => 0,
              'realname_1' => 0,
              'realname' => 0,
              'og_group_ref' => 1,
              'title_1' => 0,
              'field_oa_worktracker_priority' => 1,
              'field_oa_worktracker_task_type' => 1,
              'field_oa_worktracker_task_status' => 1,
              'comment_count' => 1,
              'last_updated' => 1,
            ),
            'override_title' => '',
            'override_title_text' => '',
            'view_settings' => 'fields',
            'header_type' => 'none',
            'view_mode' => 'teaser',
            'widget_title' => 'Your Tasks',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => array(),
            'style' => 'oa_styles_oa_pane',
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 3,
          'locks' => array(),
          'uuid' => '9cdb330a-8d4f-4488-9a69-e8e1ebf9c4c5',
        ); /* WAS: '' */
    $data['user:user:default']->display->content['new-dd3679aa-71b6-4939-9478-c9aa0725196b'] = (object) array(
          'pid' => 'new-dd3679aa-71b6-4939-9478-c9aa0725196b',
          'panel' => 'contentheader',
          'type' => 'views_panes',
          'subtype' => 'open_atrium_discussions-panel_pane_9',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'use_pager' => 1,
            'pager_id' => 1,
            'items_per_page' => 20,
            'override_title' => '',
            'override_title_text' => '',
            'view_settings' => 'fields',
            'header_type' => 'none',
            'view_mode' => 'teaser',
            'widget_title' => 'Your Topics',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => array(),
            'style' => 'oa_styles_oa_pane',
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => 'dd3679aa-71b6-4939-9478-c9aa0725196b',
        ); /* WAS: '' */
    $data['user:user:default']->display->title = '%user:name'; /* WAS: '' */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function tgd_overrides_strongarm_alter(&$data) {
  if (isset($data['field_bundle_settings_message__oa_comment'])) {
    $data['field_bundle_settings_message__oa_comment']->value['extra_fields']['display']['message__message_text__0']['message_notify_daily_digest'] = array(
      'weight' => 0,
      'visible' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_comment']->value['extra_fields']['display']['message__message_text__0']['message_notify_weekly_digest'] = array(
      'weight' => 0,
      'visible' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_comment']->value['extra_fields']['display']['message__message_text__1']['message_notify_daily_digest'] = array(
      'weight' => 1,
      'visible' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_comment']->value['extra_fields']['display']['message__message_text__1']['message_notify_weekly_digest'] = array(
      'weight' => 2,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_comment']->value['extra_fields']['display']['message__message_text__2']['message_notify_daily_digest'] = array(
      'weight' => 3,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_comment']->value['extra_fields']['display']['message__message_text__2']['message_notify_weekly_digest'] = array(
      'weight' => 9,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_comment']->value['extra_fields']['display']['message__message_text__3']['message_notify_daily_digest'] = array(
      'weight' => 2,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_comment']->value['extra_fields']['display']['message__message_text__3']['message_notify_weekly_digest'] = array(
      'weight' => 3,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_comment']->value['extra_fields']['display']['message__message_text__4']['message_notify_daily_digest'] = array(
      'weight' => 4,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_comment']->value['extra_fields']['display']['message__message_text__4']['message_notify_weekly_digest'] = array(
      'weight' => 1,
      'visible' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['field_bundle_settings_message__oa_create'])) {
    $data['field_bundle_settings_message__oa_create']->value['extra_fields']['display']['message__message_text__0']['message_notify_daily_digest'] = array(
      'weight' => 0,
      'visible' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_create']->value['extra_fields']['display']['message__message_text__0']['message_notify_weekly_digest'] = array(
      'weight' => 0,
      'visible' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_create']->value['extra_fields']['display']['message__message_text__1']['message_notify_daily_digest'] = array(
      'weight' => 1,
      'visible' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_create']->value['extra_fields']['display']['message__message_text__1']['message_notify_weekly_digest'] = array(
      'weight' => 1,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_create']->value['extra_fields']['display']['message__message_text__2']['message_notify_daily_digest'] = array(
      'weight' => 2,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_create']->value['extra_fields']['display']['message__message_text__2']['message_notify_weekly_digest'] = array(
      'weight' => 2,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_create']->value['extra_fields']['display']['message__message_text__3']['message_notify_daily_digest'] = array(
      'weight' => 3,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_create']->value['extra_fields']['display']['message__message_text__3']['message_notify_weekly_digest'] = array(
      'weight' => 3,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_create']->value['extra_fields']['display']['message__message_text__4']['message_notify_daily_digest'] = array(
      'weight' => 4,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_create']->value['extra_fields']['display']['message__message_text__4']['message_notify_weekly_digest'] = array(
      'weight' => 4,
      'visible' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['field_bundle_settings_message__oa_delete'])) {
    $data['field_bundle_settings_message__oa_delete']->value['extra_fields']['display']['message__message_text__0']['message_notify_daily_digest'] = array(
      'weight' => 0,
      'visible' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_delete']->value['extra_fields']['display']['message__message_text__0']['message_notify_weekly_digest'] = array(
      'weight' => 0,
      'visible' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_delete']->value['extra_fields']['display']['message__message_text__1']['message_notify_daily_digest'] = array(
      'weight' => 1,
      'visible' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_delete']->value['extra_fields']['display']['message__message_text__1']['message_notify_weekly_digest'] = array(
      'weight' => 1,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_delete']->value['extra_fields']['display']['message__message_text__2']['message_notify_daily_digest'] = array(
      'weight' => 2,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_delete']->value['extra_fields']['display']['message__message_text__2']['message_notify_weekly_digest'] = array(
      'weight' => 2,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_delete']->value['extra_fields']['display']['message__message_text__3']['message_notify_daily_digest'] = array(
      'weight' => 3,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_delete']->value['extra_fields']['display']['message__message_text__3']['message_notify_weekly_digest'] = array(
      'weight' => 3,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_delete']->value['extra_fields']['display']['message__message_text__4']['message_notify_daily_digest'] = array(
      'weight' => 4,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_delete']->value['extra_fields']['display']['message__message_text__4']['message_notify_weekly_digest'] = array(
      'weight' => 4,
      'visible' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['field_bundle_settings_message__oa_member'])) {
    $data['field_bundle_settings_message__oa_member']->value['extra_fields']['display']['message__message_text__0']['message_notify_daily_digest'] = array(
      'weight' => 0,
      'visible' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_member']->value['extra_fields']['display']['message__message_text__0']['message_notify_weekly_digest'] = array(
      'weight' => 0,
      'visible' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_member']->value['extra_fields']['display']['message__message_text__1']['message_notify_daily_digest'] = array(
      'weight' => 1,
      'visible' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_member']->value['extra_fields']['display']['message__message_text__1']['message_notify_weekly_digest'] = array(
      'weight' => 1,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_member']->value['extra_fields']['display']['message__message_text__2']['message_notify_daily_digest'] = array(
      'weight' => 2,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_member']->value['extra_fields']['display']['message__message_text__2']['message_notify_weekly_digest'] = array(
      'weight' => 2,
      'visible' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['field_bundle_settings_message__oa_reply'])) {
    $data['field_bundle_settings_message__oa_reply']->value['extra_fields']['display']['message__message_text__0']['message_notify_daily_digest'] = array(
      'weight' => 0,
      'visible' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_reply']->value['extra_fields']['display']['message__message_text__0']['message_notify_weekly_digest'] = array(
      'weight' => 0,
      'visible' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_reply']->value['extra_fields']['display']['message__message_text__1']['message_notify_daily_digest'] = array(
      'weight' => 1,
      'visible' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_reply']->value['extra_fields']['display']['message__message_text__1']['message_notify_weekly_digest'] = array(
      'weight' => 1,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_reply']->value['extra_fields']['display']['message__message_text__2']['message_notify_daily_digest'] = array(
      'weight' => 2,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_reply']->value['extra_fields']['display']['message__message_text__2']['message_notify_weekly_digest'] = array(
      'weight' => 2,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_reply']->value['extra_fields']['display']['message__message_text__3']['message_notify_daily_digest'] = array(
      'weight' => 3,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_reply']->value['extra_fields']['display']['message__message_text__3']['message_notify_weekly_digest'] = array(
      'weight' => 3,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_reply']->value['extra_fields']['display']['message__message_text__4']['message_notify_daily_digest'] = array(
      'weight' => 4,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_reply']->value['extra_fields']['display']['message__message_text__4']['message_notify_weekly_digest'] = array(
      'weight' => 4,
      'visible' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['field_bundle_settings_message__oa_update'])) {
    $data['field_bundle_settings_message__oa_update']->value['extra_fields']['display']['message__message_text__0']['message_notify_daily_digest'] = array(
      'weight' => 0,
      'visible' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_update']->value['extra_fields']['display']['message__message_text__0']['message_notify_weekly_digest'] = array(
      'weight' => 0,
      'visible' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_update']->value['extra_fields']['display']['message__message_text__1']['message_notify_daily_digest'] = array(
      'weight' => 1,
      'visible' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_update']->value['extra_fields']['display']['message__message_text__1']['message_notify_weekly_digest'] = array(
      'weight' => 1,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_update']->value['extra_fields']['display']['message__message_text__2']['message_notify_daily_digest'] = array(
      'weight' => 2,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_update']->value['extra_fields']['display']['message__message_text__2']['message_notify_weekly_digest'] = array(
      'weight' => 2,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_update']->value['extra_fields']['display']['message__message_text__3']['message_notify_daily_digest'] = array(
      'weight' => 3,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_update']->value['extra_fields']['display']['message__message_text__3']['message_notify_weekly_digest'] = array(
      'weight' => 3,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_update']->value['extra_fields']['display']['message__message_text__4']['message_notify_daily_digest'] = array(
      'weight' => 4,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_message__oa_update']->value['extra_fields']['display']['message__message_text__4']['message_notify_weekly_digest'] = array(
      'weight' => 4,
      'visible' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['field_bundle_settings_node__oa_wiki_page'])) {
    $data['field_bundle_settings_node__oa_wiki_page']->value['view_modes']['ical'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
  }
}
