<?php
/**
 * @file
 * tgd_overrides.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function tgd_overrides_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: file_display
  $overrides["file_display.document__preview__file_field_file_default.status"] = FALSE;
  $overrides["file_display.document__preview__file_field_file_default.weight"] = 0;
  $overrides["file_display.video__default__media_vimeo_video.settings|protocol"] = '//';
  $overrides["file_display.video__preview__media_vimeo_image.settings|image_style"] = 'panopoly_image_thumbnail';
  $overrides["file_display.video__preview__media_vimeo_image.weight"] = 2;

  // Exported overrides for: file_type
  $overrides["file_type.audio.disabled"] = FALSE;
  $overrides["file_type.document.disabled"] = FALSE;
  $overrides["file_type.image.disabled"] = FALSE;
  $overrides["file_type.video.disabled"] = FALSE;

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.node_edit_panel_context_6.conf|display|content|new-2362dc2f-60f2-42e4-b13f-82918fd4b1a8|access|plugins"] = array(
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
  );
  $overrides["page_manager_handlers.node_edit_panel_context_6.conf|display|content|new-3e512c5d-c078-4846-80be-8af3e1542958|shown"] = FALSE;
  $overrides["page_manager_handlers.node_edit_panel_context_6.conf|display|content|new-9393082c-61cd-4cc5-801f-bfe809fcbd43|access|plugins"] = array(
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
  );
  $overrides["page_manager_handlers.node_edit_panel_context_6.conf|display|content|new-ff7df286-18fd-4ab0-bd53-1102821bc86f|access|plugins"] = array(
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
  );

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:oa_section:oa_section_discussion.display|content|new-5c68f6e4-d50a-494a-885f-8fa91edb5003"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:oa_section:oa_section_discussion.display|content|new-6e7b549b-c4e3-4462-b4d2-a02b9db9eff4"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_discussion.display|content|new-b485b8e9-9c6a-4242-8058-06de9082942a"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_discussion.display|content|new-b5034a79-ddc6-4fb5-b939-e21cdcfcb6b6"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_discussion.display|content|new-c7a43a77-fca5-4cc3-829c-220e2142ae5e|configuration|exposed|flagged"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_discussion.display|content|new-c7a43a77-fca5-4cc3-829c-220e2142ae5e|position"] = 0;
  $overrides["panelizer_defaults.node:oa_section:oa_section_discussion.display|content|new-e9603b15-2c3a-4b58-8290-692183e7b687"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_discussion.display|content|new-f40e5cbc-b456-4d18-986e-5d516011a7de"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_discussion.display|panels|contentmain|0"] = 'new-c7a43a77-fca5-4cc3-829c-220e2142ae5e';
  $overrides["panelizer_defaults.node:oa_section:oa_section_discussion.display|panels|contentmain|1"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_discussion.display|panels|contentmain|2"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_discussion.display|panels|contentmain|3"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_discussion.display|panels|contentmain|4"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_discussion.display|panels|sidebar|0"] = 'new-5c68f6e4-d50a-494a-885f-8fa91edb5003';
  $overrides["panelizer_defaults.node:oa_section:oa_section_news.display|content|new-05720ab2-5890-4d5a-8a5f-ef661536054b"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:oa_section:oa_section_news.display|content|new-2010ab8d-8b3a-4f76-8bcd-a9b92ba1417b"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_news.display|content|new-60eba777-8bd7-4984-aefb-7777899f42d9"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_news.display|content|new-a1345e0e-4ffb-4445-b615-b8922b7dba10"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_news.display|content|new-d2e48391-04fd-4e47-a3ee-9442c060a4e8"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_news.display|content|new-debf41be-8d6e-4fb5-8b92-97f04a235ba5"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:oa_section:oa_section_news.display|content|new-e7915e9b-dd20-424f-b4e9-4bc4d9a81cbc"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_news.display|hide_title"] = 1;
  $overrides["panelizer_defaults.node:oa_section:oa_section_news.display|panels|contentmain|0"] = 'new-debf41be-8d6e-4fb5-8b92-97f04a235ba5';
  $overrides["panelizer_defaults.node:oa_section:oa_section_news.display|panels|contentmain|1"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_news.display|panels|contentmain|2"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_news.display|panels|sidebar|0"] = 'new-05720ab2-5890-4d5a-8a5f-ef661536054b';
  $overrides["panelizer_defaults.node:oa_section:oa_section_news.display|panels|sidebar|1"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_section:oa_section_news.title"] = 'Documents Section';
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54|configuration|exposed|flagged"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54|configuration|exposed|sort_by"] = NULL;
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-18865aa1-e2a6-4d3d-93c2-3f80adf44c54|configuration|exposed|sort_order"] = NULL;
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de|configuration|exposed|oa_section_ref_target_id"] = 0;
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de|configuration|exposed|og_subspaces_view_parent"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de|configuration|show_exposed_form"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:oa_space:default.display|content|new-9995e8b8-d8cb-4339-a7ad-1f0ea569d2de|configuration|view_mode"] = 'teaser';
  $overrides["panelizer_defaults.node:oa_space:default.title"] = 'OA Default';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-32c308fc-ae57-43df-a4fa-8667a747ea6f|position"] = 3;
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-530b4c5f-8654-457b-9445-fd2718fcf42b"] = (object) array(
      'pid' => 'new-530b4c5f-8654-457b-9445-fd2718fcf42b',
      'panel' => 'contentmain',
      'type' => 'entity_field_extra',
      'subtype' => 'node:tgd_drive_file',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'view_mode' => 'full',
        'context' => 'panelizer',
        'override_title' => 1,
        'override_title_text' => 'Open Google Document',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '530b4c5f-8654-457b-9445-fd2718fcf42b',
    );
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-7746f122-1e4b-445f-8cf4-d15ef627d71f|position"] = 1;
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-a811ab4b-b391-4bac-aee2-f0b6bdb5a65d|position"] = 2;
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-e46086d2-3bda-405b-b9b1-6d44d79ea78e|position"] = 5;
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-fd50a4cf-8298-4584-8504-b21e0e215e78|position"] = 4;
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|panels|contentmain|0"] = 'new-530b4c5f-8654-457b-9445-fd2718fcf42b';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|panels|contentmain|1"] = 'new-7746f122-1e4b-445f-8cf4-d15ef627d71f';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|panels|contentmain|2"] = 'new-a811ab4b-b391-4bac-aee2-f0b6bdb5a65d';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|panels|contentmain|3"] = 'new-32c308fc-ae57-43df-a4fa-8667a747ea6f';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|panels|contentmain|4"] = 'new-fd50a4cf-8298-4584-8504-b21e0e215e78';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|panels|contentmain|5"] = 'new-e46086d2-3bda-405b-b9b1-6d44d79ea78e';
  $overrides["panelizer_defaults.user:user:default.display|content|new-23b1f4f1-cda8-42ca-880a-afc2ae92f3e9"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-68c7ecbc-a5d5-40b1-91c6-4e34bf23ae2c"] = (object) array(
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
    );
  $overrides["panelizer_defaults.user:user:default.display|content|new-80a6a21b-20e6-4acf-9772-eb089cc6082b"] = (object) array(
      'pid' => 'new-80a6a21b-20e6-4acf-9772-eb089cc6082b',
      'panel' => 'sidebar',
      'type' => 'oa_core_user_spaces',
      'subtype' => 'oa_core_user_spaces',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'featured_spaces' => 1,
        'context' => 'panelizer',
        'override_title' => 0,
        'override_title_text' => '',
        'image_size' => 'none',
        'show_description' => 0,
        'show_sections' => 0,
        'tabs' => array(
          'Favorite' => 'Favorite',
          'Subscribed' => 'Subscribed',
          'All' => 0,
        ),
        'link_class' => 'btn',
        'show_links' => 0,
        'num_per_page' => 15,
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
        'style' => 'oa_styles_oa_pane',
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => '80a6a21b-20e6-4acf-9772-eb089cc6082b',
    );
  $overrides["panelizer_defaults.user:user:default.display|content|new-96a2afdd-ee57-4829-afd9-7a16facdb46f"] = (object) array(
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
    );
  $overrides["panelizer_defaults.user:user:default.display|content|new-9cdb330a-8d4f-4488-9a69-e8e1ebf9c4c5"] = (object) array(
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
    );
  $overrides["panelizer_defaults.user:user:default.display|content|new-9def882d-91aa-4313-87b2-0ace29b4329c"] = (object) array(
      'pid' => 'new-9def882d-91aa-4313-87b2-0ace29b4329c',
      'panel' => 'sidebar',
      'type' => 'entity_field',
      'subtype' => 'user:field_user_picture',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'hidden',
        'formatter' => 'image',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(
          'image_style' => 'panopoly_image_full',
          'image_link' => '',
        ),
        'context' => 'panelizer',
        'override_title' => 1,
        'override_title_text' => '',
        'view_mode' => NULL,
        'widget_title' => NULL,
        'items_per_page' => NULL,
        'use_pager' => NULL,
        'pager_id' => NULL,
        'offset' => NULL,
        'link_to_view' => NULL,
        'more_link' => NULL,
        'path' => NULL,
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '9def882d-91aa-4313-87b2-0ace29b4329c',
    );
  $overrides["panelizer_defaults.user:user:default.display|content|new-d3a2a9fb-f88a-4730-bfab-c36f4e0af395"] = (object) array(
      'pid' => 'new-d3a2a9fb-f88a-4730-bfab-c36f4e0af395',
      'panel' => 'contentheader',
      'type' => 'entity_field',
      'subtype' => 'user:field_user_about',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'hidden',
        'formatter' => 'text_default',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(),
        'context' => array(),
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => array(),
        'style' => 'oa_styles_oa_pane',
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => 'd3a2a9fb-f88a-4730-bfab-c36f4e0af395',
    );
  $overrides["panelizer_defaults.user:user:default.display|content|new-d76e85cd-4625-4a52-a17b-e5c65e1a0247"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|content|new-dd3679aa-71b6-4939-9478-c9aa0725196b"] = (object) array(
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
    );
  $overrides["panelizer_defaults.user:user:default.display|layout"] = 'radix_selby_flipped';
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|contentcolumn1"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|contentcolumn2"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|contentfooter"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panel_settings|style_settings|contentheader"] = NULL;
  $overrides["panelizer_defaults.user:user:default.display|panels|column1"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|panels|column2"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.user:user:default.display|panels|contentheader"] = array(
    0 => 'new-d3a2a9fb-f88a-4730-bfab-c36f4e0af395',
    1 => 'new-dd3679aa-71b6-4939-9478-c9aa0725196b',
    2 => 'new-68c7ecbc-a5d5-40b1-91c6-4e34bf23ae2c',
    3 => 'new-9cdb330a-8d4f-4488-9a69-e8e1ebf9c4c5',
  );
  $overrides["panelizer_defaults.user:user:default.display|panels|sidebar"] = array(
    0 => 'new-9def882d-91aa-4313-87b2-0ace29b4329c',
    1 => 'new-80a6a21b-20e6-4acf-9772-eb089cc6082b',
    2 => 'new-96a2afdd-ee57-4829-afd9-7a16facdb46f',
  );
  $overrides["panelizer_defaults.user:user:default.display|title"] = '%user:name';

  // Exported overrides for: panels_mini
  $overrides["panels_mini.default_section_sidebar.display|content|new-e88f722e-09b5-451c-b694-f6b79c2d8554|shown"] = FALSE;

  // Exported overrides for: variable
  $overrides["variable.comment_oa_wiki_page.value"] = 2;
  $overrides["variable.contextual_tabs_extract.value"] = 'user*:Edit|Edit profile,icon-pencil
  user*:Notifications
  node/*/clone/confirm:View|Cancel,icon-remove
  node/*/edit:View|Cancel,icon-remove
  View
  Edit,icon-pencil
  Members,icon-user';
  $overrides["variable.field_bundle_settings_message__oa_comment.value|extra_fields|display|message__message_text__0|message_notify_daily_digest"] = array(
    'weight' => 0,
    'visible' => TRUE,
  );
  $overrides["variable.field_bundle_settings_message__oa_comment.value|extra_fields|display|message__message_text__0|message_notify_weekly_digest"] = array(
    'weight' => 0,
    'visible' => TRUE,
  );
  $overrides["variable.field_bundle_settings_message__oa_comment.value|extra_fields|display|message__message_text__1|message_notify_daily_digest"] = array(
    'weight' => 1,
    'visible' => TRUE,
  );
  $overrides["variable.field_bundle_settings_message__oa_comment.value|extra_fields|display|message__message_text__1|message_notify_weekly_digest"] = array(
    'weight' => 2,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_comment.value|extra_fields|display|message__message_text__2|message_notify_daily_digest"] = array(
    'weight' => 3,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_comment.value|extra_fields|display|message__message_text__2|message_notify_weekly_digest"] = array(
    'weight' => 9,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_comment.value|extra_fields|display|message__message_text__3|message_notify_daily_digest"] = array(
    'weight' => 2,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_comment.value|extra_fields|display|message__message_text__3|message_notify_weekly_digest"] = array(
    'weight' => 3,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_comment.value|extra_fields|display|message__message_text__4|message_notify_daily_digest"] = array(
    'weight' => 4,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_comment.value|extra_fields|display|message__message_text__4|message_notify_weekly_digest"] = array(
    'weight' => 1,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_create.value|extra_fields|display|message__message_text__0|message_notify_daily_digest"] = array(
    'weight' => 0,
    'visible' => TRUE,
  );
  $overrides["variable.field_bundle_settings_message__oa_create.value|extra_fields|display|message__message_text__0|message_notify_weekly_digest"] = array(
    'weight' => 0,
    'visible' => TRUE,
  );
  $overrides["variable.field_bundle_settings_message__oa_create.value|extra_fields|display|message__message_text__1|message_notify_daily_digest"] = array(
    'weight' => 1,
    'visible' => TRUE,
  );
  $overrides["variable.field_bundle_settings_message__oa_create.value|extra_fields|display|message__message_text__1|message_notify_weekly_digest"] = array(
    'weight' => 1,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_create.value|extra_fields|display|message__message_text__2|message_notify_daily_digest"] = array(
    'weight' => 2,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_create.value|extra_fields|display|message__message_text__2|message_notify_weekly_digest"] = array(
    'weight' => 2,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_create.value|extra_fields|display|message__message_text__3|message_notify_daily_digest"] = array(
    'weight' => 3,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_create.value|extra_fields|display|message__message_text__3|message_notify_weekly_digest"] = array(
    'weight' => 3,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_create.value|extra_fields|display|message__message_text__4|message_notify_daily_digest"] = array(
    'weight' => 4,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_create.value|extra_fields|display|message__message_text__4|message_notify_weekly_digest"] = array(
    'weight' => 4,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_delete.value|extra_fields|display|message__message_text__0|message_notify_daily_digest"] = array(
    'weight' => 0,
    'visible' => TRUE,
  );
  $overrides["variable.field_bundle_settings_message__oa_delete.value|extra_fields|display|message__message_text__0|message_notify_weekly_digest"] = array(
    'weight' => 0,
    'visible' => TRUE,
  );
  $overrides["variable.field_bundle_settings_message__oa_delete.value|extra_fields|display|message__message_text__1|message_notify_daily_digest"] = array(
    'weight' => 1,
    'visible' => TRUE,
  );
  $overrides["variable.field_bundle_settings_message__oa_delete.value|extra_fields|display|message__message_text__1|message_notify_weekly_digest"] = array(
    'weight' => 1,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_delete.value|extra_fields|display|message__message_text__2|message_notify_daily_digest"] = array(
    'weight' => 2,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_delete.value|extra_fields|display|message__message_text__2|message_notify_weekly_digest"] = array(
    'weight' => 2,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_delete.value|extra_fields|display|message__message_text__3|message_notify_daily_digest"] = array(
    'weight' => 3,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_delete.value|extra_fields|display|message__message_text__3|message_notify_weekly_digest"] = array(
    'weight' => 3,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_delete.value|extra_fields|display|message__message_text__4|message_notify_daily_digest"] = array(
    'weight' => 4,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_delete.value|extra_fields|display|message__message_text__4|message_notify_weekly_digest"] = array(
    'weight' => 4,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_member.value|extra_fields|display|message__message_text__0|message_notify_daily_digest"] = array(
    'weight' => 0,
    'visible' => TRUE,
  );
  $overrides["variable.field_bundle_settings_message__oa_member.value|extra_fields|display|message__message_text__0|message_notify_weekly_digest"] = array(
    'weight' => 0,
    'visible' => TRUE,
  );
  $overrides["variable.field_bundle_settings_message__oa_member.value|extra_fields|display|message__message_text__1|message_notify_daily_digest"] = array(
    'weight' => 1,
    'visible' => TRUE,
  );
  $overrides["variable.field_bundle_settings_message__oa_member.value|extra_fields|display|message__message_text__1|message_notify_weekly_digest"] = array(
    'weight' => 1,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_member.value|extra_fields|display|message__message_text__2|message_notify_daily_digest"] = array(
    'weight' => 2,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_member.value|extra_fields|display|message__message_text__2|message_notify_weekly_digest"] = array(
    'weight' => 2,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_reply.value|extra_fields|display|message__message_text__0|message_notify_daily_digest"] = array(
    'weight' => 0,
    'visible' => TRUE,
  );
  $overrides["variable.field_bundle_settings_message__oa_reply.value|extra_fields|display|message__message_text__0|message_notify_weekly_digest"] = array(
    'weight' => 0,
    'visible' => TRUE,
  );
  $overrides["variable.field_bundle_settings_message__oa_reply.value|extra_fields|display|message__message_text__1|message_notify_daily_digest"] = array(
    'weight' => 1,
    'visible' => TRUE,
  );
  $overrides["variable.field_bundle_settings_message__oa_reply.value|extra_fields|display|message__message_text__1|message_notify_weekly_digest"] = array(
    'weight' => 1,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_reply.value|extra_fields|display|message__message_text__2|message_notify_daily_digest"] = array(
    'weight' => 2,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_reply.value|extra_fields|display|message__message_text__2|message_notify_weekly_digest"] = array(
    'weight' => 2,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_reply.value|extra_fields|display|message__message_text__3|message_notify_daily_digest"] = array(
    'weight' => 3,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_reply.value|extra_fields|display|message__message_text__3|message_notify_weekly_digest"] = array(
    'weight' => 3,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_reply.value|extra_fields|display|message__message_text__4|message_notify_daily_digest"] = array(
    'weight' => 4,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_reply.value|extra_fields|display|message__message_text__4|message_notify_weekly_digest"] = array(
    'weight' => 4,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_update.value|extra_fields|display|message__message_text__0|message_notify_daily_digest"] = array(
    'weight' => 0,
    'visible' => TRUE,
  );
  $overrides["variable.field_bundle_settings_message__oa_update.value|extra_fields|display|message__message_text__0|message_notify_weekly_digest"] = array(
    'weight' => 0,
    'visible' => TRUE,
  );
  $overrides["variable.field_bundle_settings_message__oa_update.value|extra_fields|display|message__message_text__1|message_notify_daily_digest"] = array(
    'weight' => 1,
    'visible' => TRUE,
  );
  $overrides["variable.field_bundle_settings_message__oa_update.value|extra_fields|display|message__message_text__1|message_notify_weekly_digest"] = array(
    'weight' => 1,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_update.value|extra_fields|display|message__message_text__2|message_notify_daily_digest"] = array(
    'weight' => 2,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_update.value|extra_fields|display|message__message_text__2|message_notify_weekly_digest"] = array(
    'weight' => 2,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_update.value|extra_fields|display|message__message_text__3|message_notify_daily_digest"] = array(
    'weight' => 3,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_update.value|extra_fields|display|message__message_text__3|message_notify_weekly_digest"] = array(
    'weight' => 3,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_update.value|extra_fields|display|message__message_text__4|message_notify_daily_digest"] = array(
    'weight' => 4,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_message__oa_update.value|extra_fields|display|message__message_text__4|message_notify_weekly_digest"] = array(
    'weight' => 4,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__oa_wiki_page.value|extra_fields|form|path|weight"] = 2;
  $overrides["variable.field_bundle_settings_node__oa_wiki_page.value|view_modes|ical"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.panelizer_defaults_node_panopoly_page.value|view modes|search_result"] = array(
    'status' => 0,
    'default' => 0,
    'choice' => 0,
  );

  // Exported overrides for: views_view
  $overrides["views_view.open_atrium_discussions.display|attachments|display_options|fields|field_oa_media|settings|colorbox_gallery"] = 'field_page';
  $overrides["views_view.open_atrium_discussions.display|attachments|display_options|fields|field_oa_media|settings|fixed_height"] = 600;
  $overrides["views_view.open_atrium_discussions.display|attachments|display_options|fields|field_oa_media|settings|fixed_width"] = 800;
  $overrides["views_view.open_atrium_discussions.display|default|display_options|arguments|entity_id|default_argument_options"]["DELETED"] = TRUE;
  $overrides["views_view.open_atrium_discussions.display|default|display_options|arguments|entity_id|default_argument_type"] = 'fixed';
  $overrides["views_view.open_atrium_discussions.display|default|display_options|empty"] = array(
    'area' => array(
      'id' => 'area',
      'table' => 'views',
      'field' => 'area',
    ),
  );
  $overrides["views_view.open_atrium_discussions.display|default|display_options|filters|oa_parent_target_id"] = array(
    'id' => 'oa_parent_target_id',
    'table' => 'field_data_oa_parent',
    'field' => 'oa_parent_target_id',
    'ui_name' => 'Post is parent',
    'operator' => 'empty',
  );
  $overrides["views_view.open_atrium_discussions.display|default|display_options|relationships|flag_content_rel"]["DELETED"] = TRUE;
  $overrides["views_view.open_atrium_discussions.display|default|display_options|row_options"]["DELETED"] = TRUE;
  $overrides["views_view.open_atrium_discussions.display|default|display_options|row_plugin"]["DELETED"] = TRUE;
  $overrides["views_view.open_atrium_discussions.display|default|display_options|style_plugin"] = 'table';
  $overrides["views_view.open_atrium_discussions.display|default|display_options|title"] = 'Latest Replies';
  $overrides["views_view.open_atrium_discussions.display|discussion_topics|display_options|allow|title_override"] = 0;
  $overrides["views_view.open_atrium_discussions.display|discussion_topics|display_options|argument_input|oa_section_ref_target_id|label"] = 'Content: OpenAtrium Section (oa_section_ref)';
  $overrides["views_view.open_atrium_discussions.display|discussion_topics|display_options|defaults|empty"] = FALSE;
  $overrides["views_view.open_atrium_discussions.display|discussion_topics|display_options|empty"] = array(
    'area' => array(
      'id' => 'area',
      'table' => 'views',
      'field' => 'area',
      'label' => 'No discussion found',
      'empty' => TRUE,
      'content' => '<div class="no-results-found">No discussions found.</div>',
      'format' => 'panopoly_wysiwyg_text',
    ),
  );
  $overrides["views_view.open_atrium_discussions.display|discussion_topics|display_options|exposed_form_overrides|filters"]["DELETED"] = TRUE;
  $overrides["views_view.open_atrium_discussions.display|discussion_topics|display_options|exposed_form_overrides|type"] = '';
  $overrides["views_view.open_atrium_discussions.display|discussion_topics|display_options|fields|timestamp_new_1"]["DELETED"] = TRUE;
  $overrides["views_view.open_atrium_discussions.display|discussion_topics|display_options|filters|flagged"]["DELETED"] = TRUE;
  $overrides["views_view.open_atrium_discussions.display|discussion_topics|display_options|relationships|flag_content_rel"]["DELETED"] = TRUE;
  $overrides["views_view.open_atrium_discussions.display|discussion_user_reply|display_options|allow|title_override"] = 0;
  $overrides["views_view.open_atrium_discussions.display|discussion_user_reply|display_options|arguments|uid|ui_name"] = 'Replies made by current user';
  $overrides["views_view.open_atrium_discussions.display|discussion_user_reply|display_options|fields|timestamp_new_1"]["DELETED"] = TRUE;
  $overrides["views_view.open_atrium_discussions.display|discussion_user_reply|display_options|filters|flagged"]["DELETED"] = TRUE;
  $overrides["views_view.open_atrium_discussions.display|discussion_user_reply|display_options|filters|nid_1|ui_name"] = 'Post has no parent';
  $overrides["views_view.open_atrium_discussions.display|discussion_user_reply|display_options|filters|type|exposed"]["DELETED"] = TRUE;
  $overrides["views_view.open_atrium_discussions.display|discussion_user_reply|display_options|filters|type|ui_name"] = 'Content is discussion post';
  $overrides["views_view.open_atrium_discussions.display|discussion_user_reply|display_options|relationships|flag_content_rel"]["DELETED"] = TRUE;
  $overrides["views_view.open_atrium_discussions.display|discussion_user_reply|display_options|relationships|oa_parent_target_id|ui_name"] = 'Parent of current post';
  $overrides["views_view.open_atrium_discussions.display|discussion_user_reply|display_options|relationships|oa_section_ref_target_id|ui_name"] = 'Section to which this post belongs ';
  $overrides["views_view.open_atrium_discussions.display|discussion_user_reply|display_options|relationships|og_membership_related_node_group|ui_name"] = 'Group audience?';
  $overrides["views_view.open_atrium_discussions.display|discussion_user_reply|display_options|relationships|reverse_oa_parent_node|ui_name"] = 'Replies to current post';
  $overrides["views_view.open_atrium_discussions.display|discussion_user_reply|display_options|relationships|uid|ui_name"] = 'Author of post';
  $overrides["views_view.open_atrium_discussions.display|discussion_user|display_options|exposed_form_overrides|filters|flagged"]["DELETED"] = TRUE;
  $overrides["views_view.open_atrium_discussions.display|discussion_user|display_options|fields|timestamp_new_1"]["DELETED"] = TRUE;
  $overrides["views_view.open_atrium_discussions.display|discussion_user|display_options|filters|flagged"]["DELETED"] = TRUE;
  $overrides["views_view.open_atrium_discussions.display|discussion_user|display_options|relationships|flag_content_rel"]["DELETED"] = TRUE;
  $overrides["views_view.open_atrium_discussions.display|latest_replies"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:9:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:19:"display_description";s:17:"Replies to a post";s:8:"defaults";a:8:{s:16:"hide_admin_links";b:0;s:5:"pager";b:0;s:6:"header";b:0;s:5:"empty";b:0;s:6:"fields";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"pager";a:2:{s:4:"type";s:4:"mini";s:7:"options";a:3:{s:14:"items_per_page";s:2:"10";s:6:"offset";s:1:"0";s:2:"id";s:1:"0";}}s:6:"fields";a:6:{s:3:"nid";a:5:{s:2:"id";s:3:"nid";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;}s:7:"created";a:7:{s:2:"id";s:7:"created";s:5:"table";s:4:"node";s:5:"field";s:7:"created";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:11:"date_format";s:5:"short";s:7:"oa_date";s:1:"0";}s:4:"name";a:8:{s:2:"id";s:4:"name";s:5:"table";s:5:"users";s:5:"field";s:4:"name";s:12:"relationship";s:3:"uid";s:5:"label";s:0:"";s:12:"element_type";s:4:"span";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:18:"field_user_picture";a:10:{s:2:"id";s:18:"field_user_picture";s:5:"table";s:29:"field_data_field_user_picture";s:5:"field";s:18:"field_user_picture";s:12:"relationship";s:3:"uid";s:5:"label";s:0:"";s:12:"element_type";s:4:"span";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:17:"click_sort_column";s:3:"fid";s:8:"settings";a:2:{s:11:"image_style";s:18:"oa_small_thumbnail";s:10:"image_link";s:0:"";}}s:6:"status";a:9:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"label";s:0:"";s:12:"element_type";s:4:"span";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:4:"type";s:22:"published-notpublished";s:3:"not";i:0;}s:4:"body";a:6:{s:2:"id";s:4:"body";s:5:"table";s:15:"field_data_body";s:5:"field";s:4:"body";s:5:"label";s:0:"";s:5:"alter";a:4:{s:9:"make_link";b:1;s:4:"path";s:10:"node/[nid]";s:10:"max_length";s:3:"200";s:4:"trim";b:1;}s:19:"element_label_colon";b:0;}}s:7:"filters";a:5:{s:4:"type";a:5:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:18:"oa_discussion_post";s:18:"oa_discussion_post";}s:5:"group";i:1;}s:19:"oa_parent_target_id";a:4:{s:2:"id";s:19:"oa_parent_target_id";s:5:"table";s:20:"field_data_oa_parent";s:5:"field";s:19:"oa_parent_target_id";s:8:"operator";s:9:"not empty";}s:12:"status_extra";a:3:{s:2:"id";s:12:"status_extra";s:5:"table";s:4:"node";s:5:"field";s:12:"status_extra";}s:22:"og_group_ref_target_id";a:5:{s:2:"id";s:22:"og_group_ref_target_id";s:5:"table";s:13:"og_membership";s:5:"field";s:22:"og_group_ref_target_id";s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:25:"og_group_ref_target_id_op";s:5:"label";s:5:"Space";s:8:"operator";s:25:"og_group_ref_target_id_op";s:10:"identifier";s:22:"og_group_ref_target_id";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}s:24:"oa_section_ref_target_id";a:5:{s:2:"id";s:24:"oa_section_ref_target_id";s:5:"table";s:25:"field_data_oa_section_ref";s:5:"field";s:24:"oa_section_ref_target_id";s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:27:"oa_section_ref_target_id_op";s:5:"label";s:7:"Section";s:8:"operator";s:27:"oa_section_ref_target_id_op";s:10:"identifier";s:24:"oa_section_ref_target_id";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}}s:13:"pane_category";a:2:{s:4:"name";s:11:"Open Atrium";s:6:"weight";s:1:"0";}s:5:"allow";a:10:{s:9:"use_pager";i:0;s:14:"items_per_page";s:14:"items_per_page";s:6:"offset";i:0;s:12:"link_to_view";i:0;s:9:"more_link";i:0;s:13:"path_override";i:0;s:14:"title_override";i:0;s:12:"exposed_form";s:12:"exposed_form";s:22:"exposed_form_configure";i:0;s:15:"fields_override";i:0;}s:14:"argument_input";a:1:{s:9:"entity_id";a:6:{s:4:"type";s:7:"context";s:7:"context";s:15:"entity:node.nid";s:16:"context_optional";i:1;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:32:"Open Atrium: Parent ID (Content)";}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:14:"latest_replies";s:13:"display_title";s:18:"Discussion Replies";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}');
  $overrides["views_view.open_atrium_discussions.display|latest_topics"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:21:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:14:{s:5:"title";b:0;s:8:"group_by";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:5:"empty";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:13:"Latest Topics";s:19:"display_description";s:38:"Latest topics published within a space";s:8:"group_by";b:1;s:5:"pager";a:2:{s:4:"type";s:4:"mini";s:7:"options";a:3:{s:14:"items_per_page";s:1:"5";s:6:"offset";s:1:"0";s:2:"id";s:1:"1";}}s:12:"style_plugin";s:4:"list";s:13:"style_options";a:5:{s:8:"grouping";a:1:{i:0;a:3:{s:5:"field";s:11:"last_date_1";s:8:"rendered";i:1;s:14:"rendered_strip";i:0;}}s:17:"default_row_class";b:0;s:17:"row_class_special";b:0;s:5:"class";s:13:"group-content";s:13:"wrapper_class";s:12:"group-header";}s:10:"row_plugin";s:6:"fields";s:11:"row_options";a:1:{s:6:"inline";a:2:{s:7:"counter";s:7:"counter";s:14:"field_oa_media";s:14:"field_oa_media";}}s:5:"empty";a:1:{s:4:"area";a:6:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:5:"empty";b:1;s:7:"content";s:52:"<div class="no-results-found">No topics found.</div>";s:6:"format";s:9:"full_html";}}s:13:"relationships";a:4:{s:19:"oa_parent_target_id";a:3:{s:2:"id";s:19:"oa_parent_target_id";s:5:"table";s:20:"field_data_oa_parent";s:5:"field";s:19:"oa_parent_target_id";}s:22:"reverse_oa_parent_node";a:4:{s:2:"id";s:22:"reverse_oa_parent_node";s:5:"table";s:4:"node";s:5:"field";s:22:"reverse_oa_parent_node";s:5:"label";s:7:"Replies";}s:3:"uid";a:3:{s:2:"id";s:3:"uid";s:5:"table";s:4:"node";s:5:"field";s:3:"uid";}s:17:"og_membership_rel";a:3:{s:2:"id";s:17:"og_membership_rel";s:5:"table";s:4:"node";s:5:"field";s:17:"og_membership_rel";}}s:6:"fields";a:9:{s:3:"nid";a:7:{s:2:"id";s:3:"nid";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"title";a:7:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"nid_2";a:10:{s:2:"id";s:5:"nid_2";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:5:"count";s:7:"ui_name";s:11:"Reply Count";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:13:"timestamp_new";a:9:{s:2:"id";s:13:"timestamp_new";s:5:"table";s:7:"history";s:5:"field";s:13:"timestamp_new";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"sum";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:17:"timestamp_updated";a:9:{s:2:"id";s:17:"timestamp_updated";s:5:"table";s:7:"history";s:5:"field";s:17:"timestamp_updated";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"sum";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"nid_3";a:10:{s:2:"id";s:5:"nid_3";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:7:"ui_name";s:10:"Last Reply";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:9:"last_date";a:11:{s:2:"id";s:9:"last_date";s:5:"table";s:4:"node";s:5:"field";s:9:"last_date";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:11:"date_format";s:7:"oa_date";s:7:"oa_date";s:1:"0";}s:4:"name";a:8:{s:2:"id";s:4:"name";s:5:"table";s:5:"users";s:5:"field";s:4:"name";s:12:"relationship";s:3:"uid";s:5:"label";s:0:"";s:12:"element_type";s:4:"span";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:11:"last_date_1";a:11:{s:2:"id";s:11:"last_date_1";s:5:"table";s:4:"node";s:5:"field";s:9:"last_date";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:11:"date_format";s:7:"oa_date";s:7:"oa_date";s:7:"oa_date";}}s:5:"sorts";a:1:{s:7:"changed";a:5:{s:2:"id";s:7:"changed";s:5:"table";s:4:"node";s:5:"field";s:7:"changed";s:10:"group_type";s:3:"max";s:5:"order";s:4:"DESC";}}s:9:"arguments";a:2:{s:3:"gid";a:8:{s:2:"id";s:3:"gid";s:5:"table";s:13:"og_membership";s:5:"field";s:3:"gid";s:12:"relationship";s:17:"og_membership_rel";s:14:"default_action";s:7:"default";s:21:"default_argument_type";s:10:"og_context";s:7:"summary";a:2:{s:17:"number_of_records";s:1:"0";s:6:"format";s:15:"default_summary";}s:15:"summary_options";a:1:{s:14:"items_per_page";s:2:"25";}}s:24:"oa_section_ref_target_id";a:6:{s:2:"id";s:24:"oa_section_ref_target_id";s:5:"table";s:25:"field_data_oa_section_ref";s:5:"field";s:24:"oa_section_ref_target_id";s:21:"default_argument_type";s:5:"fixed";s:7:"summary";a:2:{s:17:"number_of_records";s:1:"0";s:6:"format";s:15:"default_summary";}s:15:"summary_options";a:1:{s:14:"items_per_page";s:2:"25";}}}s:7:"filters";a:2:{s:19:"oa_parent_target_id";a:5:{s:2:"id";s:19:"oa_parent_target_id";s:5:"table";s:20:"field_data_oa_parent";s:5:"field";s:19:"oa_parent_target_id";s:8:"operator";s:5:"empty";s:5:"group";i:1;}s:4:"type";a:6:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:18:"oa_discussion_post";s:18:"oa_discussion_post";}s:5:"group";i:1;s:6:"expose";a:5:{s:11:"operator_id";s:7:"type_op";s:5:"label";s:4:"Type";s:8:"operator";s:7:"type_op";s:10:"identifier";s:4:"type";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}}s:13:"pane_category";a:2:{s:4:"name";s:11:"Open Atrium";s:6:"weight";s:1:"0";}s:5:"allow";a:10:{s:9:"use_pager";i:0;s:14:"items_per_page";s:14:"items_per_page";s:6:"offset";i:0;s:12:"link_to_view";i:0;s:9:"more_link";i:0;s:13:"path_override";i:0;s:14:"title_override";s:14:"title_override";s:12:"exposed_form";s:12:"exposed_form";s:22:"exposed_form_configure";i:0;s:15:"fields_override";i:0;}s:22:"exposed_form_overrides";a:1:{s:7:"filters";a:1:{s:22:"og_group_ref_target_id";s:0:"";}}s:14:"argument_input";a:2:{s:3:"gid";a:6:{s:4:"type";s:4:"none";s:7:"context";s:46:"entity:fieldable_panels_pane.field-map-address";s:16:"context_optional";i:0;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:23:"OG membership: Group ID";}s:24:"oa_section_ref_target_id";a:6:{s:4:"type";s:7:"context";s:7:"context";s:15:"entity:node.nid";s:16:"context_optional";i:1;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:44:"Content: OpenAtrium Section (oa_section_ref)";}}s:19:"inherit_panels_path";s:1:"1";}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:13:"latest_topics";s:13:"display_title";s:13:"Latest Topics";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}');
  $overrides["views_view.open_atrium_discussions.display|panel_pane_1"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:20:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:14:{s:5:"title";b:0;s:8:"group_by";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:5:"empty";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:13:"Latest Topics";s:19:"display_description";s:50:"Shows the topics inside an space and its subspaces";s:8:"group_by";b:1;s:5:"pager";a:2:{s:4:"type";s:9:"load_more";s:7:"options";a:4:{s:14:"items_per_page";s:2:"20";s:6:"offset";s:1:"0";s:2:"id";s:1:"1";s:8:"quantity";s:1:"9";}}s:12:"style_plugin";s:4:"list";s:13:"style_options";a:5:{s:8:"grouping";a:1:{i:0;a:3:{s:5:"field";s:11:"last_date_1";s:8:"rendered";i:1;s:14:"rendered_strip";i:0;}}s:17:"default_row_class";b:0;s:17:"row_class_special";b:0;s:5:"class";s:13:"group-content";s:13:"wrapper_class";s:12:"group-header";}s:10:"row_plugin";s:6:"fields";s:11:"row_options";a:1:{s:6:"inline";a:2:{s:7:"counter";s:7:"counter";s:14:"field_oa_media";s:14:"field_oa_media";}}s:5:"empty";a:1:{s:4:"area";a:7:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:5:"label";s:19:"No discussion found";s:5:"empty";b:1;s:7:"content";s:57:"<div class="no-results-found">No discussions found.</div>";s:6:"format";s:21:"panopoly_wysiwyg_text";}}s:13:"relationships";a:3:{s:19:"oa_parent_target_id";a:4:{s:2:"id";s:19:"oa_parent_target_id";s:5:"table";s:20:"field_data_oa_parent";s:5:"field";s:19:"oa_parent_target_id";s:7:"ui_name";s:11:"Parent post";}s:22:"reverse_oa_parent_node";a:5:{s:2:"id";s:22:"reverse_oa_parent_node";s:5:"table";s:4:"node";s:5:"field";s:22:"reverse_oa_parent_node";s:7:"ui_name";s:12:"Post replies";s:5:"label";s:7:"Replies";}s:3:"uid";a:3:{s:2:"id";s:3:"uid";s:5:"table";s:4:"node";s:5:"field";s:3:"uid";}}s:6:"fields";a:11:{s:3:"nid";a:7:{s:2:"id";s:3:"nid";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"title";a:7:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"nid_2";a:10:{s:2:"id";s:5:"nid_2";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:5:"count";s:7:"ui_name";s:11:"Reply Count";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:13:"timestamp_new";a:9:{s:2:"id";s:13:"timestamp_new";s:5:"table";s:7:"history";s:5:"field";s:13:"timestamp_new";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"sum";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:17:"timestamp_updated";a:9:{s:2:"id";s:17:"timestamp_updated";s:5:"table";s:7:"history";s:5:"field";s:17:"timestamp_updated";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"sum";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"nid_3";a:10:{s:2:"id";s:5:"nid_3";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:7:"ui_name";s:10:"Last Reply";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:9:"last_date";a:11:{s:2:"id";s:9:"last_date";s:5:"table";s:4:"node";s:5:"field";s:9:"last_date";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:11:"date_format";s:7:"oa_date";s:7:"oa_date";s:7:"oa_date";}s:4:"name";a:8:{s:2:"id";s:4:"name";s:5:"table";s:5:"users";s:5:"field";s:4:"name";s:12:"relationship";s:3:"uid";s:5:"label";s:0:"";s:12:"element_type";s:4:"span";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:18:"field_user_picture";a:11:{s:2:"id";s:18:"field_user_picture";s:5:"table";s:29:"field_data_field_user_picture";s:5:"field";s:18:"field_user_picture";s:12:"relationship";s:3:"uid";s:5:"label";s:0:"";s:12:"element_type";s:4:"span";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:17:"click_sort_column";s:3:"fid";s:8:"settings";a:2:{s:11:"image_style";s:18:"oa_small_thumbnail";s:10:"image_link";s:0:"";}s:12:"group_column";s:9:"entity_id";}s:11:"last_date_1";a:11:{s:2:"id";s:11:"last_date_1";s:5:"table";s:4:"node";s:5:"field";s:9:"last_date";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:11:"date_format";s:7:"oa_date";s:7:"oa_date";s:7:"oa_date";}s:12:"og_group_ref";a:7:{s:2:"id";s:12:"og_group_ref";s:5:"table";s:13:"og_membership";s:5:"field";s:12:"og_group_ref";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:8:"settings";a:1:{s:4:"link";i:0;}s:12:"group_column";s:9:"entity_id";}}s:5:"sorts";a:1:{s:7:"changed";a:5:{s:2:"id";s:7:"changed";s:5:"table";s:4:"node";s:5:"field";s:7:"changed";s:10:"group_type";s:3:"max";s:5:"order";s:4:"DESC";}}s:7:"filters";a:5:{s:19:"oa_parent_target_id";a:6:{s:2:"id";s:19:"oa_parent_target_id";s:5:"table";s:20:"field_data_oa_parent";s:5:"field";s:19:"oa_parent_target_id";s:7:"ui_name";s:14:"Post is parent";s:8:"operator";s:5:"empty";s:5:"group";i:1;}s:4:"type";a:7:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:7:"ui_name";s:28:"Content is a discussion post";s:5:"value";a:1:{s:18:"oa_discussion_post";s:18:"oa_discussion_post";}s:5:"group";i:1;s:6:"expose";a:5:{s:11:"operator_id";s:7:"type_op";s:5:"label";s:4:"Type";s:8:"operator";s:7:"type_op";s:10:"identifier";s:4:"type";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}s:22:"og_group_ref_target_id";a:7:{s:2:"id";s:22:"og_group_ref_target_id";s:5:"table";s:13:"og_membership";s:5:"field";s:22:"og_group_ref_target_id";s:7:"ui_name";s:21:"Post belongs to space";s:5:"value";a:4:{i:126;s:3:"126";i:127;s:3:"127";i:128;s:3:"128";i:129;s:3:"129";}s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:25:"og_group_ref_target_id_op";s:5:"label";s:15:"Groups audience";s:8:"operator";s:25:"og_group_ref_target_id_op";s:10:"identifier";s:22:"og_group_ref_target_id";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}s:6:"status";a:5:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:7:"ui_name";s:17:"Post is published";s:5:"value";s:1:"1";}s:3:"tid";a:7:{s:2:"id";s:3:"tid";s:5:"table";s:14:"taxonomy_index";s:5:"field";s:3:"tid";s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:6:"tid_op";s:5:"label";s:33:"Belongs to this corporate subarea";s:8:"operator";s:6:"tid_op";s:10:"identifier";s:3:"tid";s:14:"remember_roles";a:5:{i:2;s:1:"2";i:1;i:0;i:5;i:0;i:3;i:0;i:4;i:0;}}s:4:"type";s:6:"select";s:10:"vocabulary";s:18:"corporate_subareas";}}s:13:"pane_category";a:2:{s:4:"name";s:13:"The Good Data";s:6:"weight";s:1:"0";}s:5:"allow";a:10:{s:9:"use_pager";s:9:"use_pager";s:14:"items_per_page";s:14:"items_per_page";s:6:"offset";s:6:"offset";s:12:"link_to_view";i:0;s:9:"more_link";i:0;s:13:"path_override";i:0;s:14:"title_override";s:14:"title_override";s:12:"exposed_form";s:12:"exposed_form";s:22:"exposed_form_configure";i:0;s:15:"fields_override";i:0;}s:22:"exposed_form_overrides";a:1:{s:7:"filters";a:1:{s:22:"og_group_ref_target_id";s:0:"";}}s:14:"argument_input";a:1:{s:3:"tid";a:6:{s:4:"type";s:5:"panel";s:7:"context";s:29:"entity:command_button.changed";s:16:"context_optional";i:0;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:29:"Content: Has taxonomy term ID";}}s:19:"inherit_panels_path";s:1:"1";}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_1";s:13:"display_title";s:36:"(corporate) Space Discussion Topics ";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}');
  $overrides["views_view.open_atrium_discussions.display|panel_pane_2"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:20:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:14:{s:5:"title";b:0;s:8:"group_by";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:5:"empty";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:13:"Latest Topics";s:19:"display_description";s:50:"Shows the topics inside an space and its subspaces";s:8:"group_by";b:1;s:5:"pager";a:2:{s:4:"type";s:9:"load_more";s:7:"options";a:4:{s:14:"items_per_page";s:2:"20";s:6:"offset";s:1:"0";s:2:"id";s:1:"1";s:8:"quantity";s:1:"9";}}s:12:"style_plugin";s:4:"list";s:13:"style_options";a:5:{s:8:"grouping";a:1:{i:0;a:3:{s:5:"field";s:11:"last_date_1";s:8:"rendered";i:1;s:14:"rendered_strip";i:0;}}s:17:"default_row_class";b:0;s:17:"row_class_special";b:0;s:5:"class";s:13:"group-content";s:13:"wrapper_class";s:12:"group-header";}s:10:"row_plugin";s:6:"fields";s:11:"row_options";a:1:{s:6:"inline";a:2:{s:7:"counter";s:7:"counter";s:14:"field_oa_media";s:14:"field_oa_media";}}s:5:"empty";a:1:{s:4:"area";a:7:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:5:"label";s:19:"No discussion found";s:5:"empty";b:1;s:7:"content";s:57:"<div class="no-results-found">No discussions found.</div>";s:6:"format";s:21:"panopoly_wysiwyg_text";}}s:13:"relationships";a:3:{s:19:"oa_parent_target_id";a:4:{s:2:"id";s:19:"oa_parent_target_id";s:5:"table";s:20:"field_data_oa_parent";s:5:"field";s:19:"oa_parent_target_id";s:7:"ui_name";s:11:"Parent post";}s:22:"reverse_oa_parent_node";a:5:{s:2:"id";s:22:"reverse_oa_parent_node";s:5:"table";s:4:"node";s:5:"field";s:22:"reverse_oa_parent_node";s:7:"ui_name";s:12:"Post replies";s:5:"label";s:7:"Replies";}s:3:"uid";a:3:{s:2:"id";s:3:"uid";s:5:"table";s:4:"node";s:5:"field";s:3:"uid";}}s:6:"fields";a:11:{s:3:"nid";a:7:{s:2:"id";s:3:"nid";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"title";a:7:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"nid_2";a:10:{s:2:"id";s:5:"nid_2";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:5:"count";s:7:"ui_name";s:11:"Reply Count";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:13:"timestamp_new";a:9:{s:2:"id";s:13:"timestamp_new";s:5:"table";s:7:"history";s:5:"field";s:13:"timestamp_new";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"sum";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:17:"timestamp_updated";a:9:{s:2:"id";s:17:"timestamp_updated";s:5:"table";s:7:"history";s:5:"field";s:17:"timestamp_updated";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"sum";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"nid_3";a:10:{s:2:"id";s:5:"nid_3";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:7:"ui_name";s:10:"Last Reply";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:9:"last_date";a:11:{s:2:"id";s:9:"last_date";s:5:"table";s:4:"node";s:5:"field";s:9:"last_date";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:11:"date_format";s:7:"oa_date";s:7:"oa_date";s:7:"oa_date";}s:4:"name";a:8:{s:2:"id";s:4:"name";s:5:"table";s:5:"users";s:5:"field";s:4:"name";s:12:"relationship";s:3:"uid";s:5:"label";s:0:"";s:12:"element_type";s:4:"span";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:18:"field_user_picture";a:11:{s:2:"id";s:18:"field_user_picture";s:5:"table";s:29:"field_data_field_user_picture";s:5:"field";s:18:"field_user_picture";s:12:"relationship";s:3:"uid";s:5:"label";s:0:"";s:12:"element_type";s:4:"span";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:17:"click_sort_column";s:3:"fid";s:8:"settings";a:2:{s:11:"image_style";s:18:"oa_small_thumbnail";s:10:"image_link";s:0:"";}s:12:"group_column";s:9:"entity_id";}s:11:"last_date_1";a:11:{s:2:"id";s:11:"last_date_1";s:5:"table";s:4:"node";s:5:"field";s:9:"last_date";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:11:"date_format";s:7:"oa_date";s:7:"oa_date";s:7:"oa_date";}s:12:"og_group_ref";a:7:{s:2:"id";s:12:"og_group_ref";s:5:"table";s:13:"og_membership";s:5:"field";s:12:"og_group_ref";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:8:"settings";a:1:{s:4:"link";i:0;}s:12:"group_column";s:9:"entity_id";}}s:5:"sorts";a:1:{s:7:"changed";a:5:{s:2:"id";s:7:"changed";s:5:"table";s:4:"node";s:5:"field";s:7:"changed";s:10:"group_type";s:3:"max";s:5:"order";s:4:"DESC";}}s:7:"filters";a:5:{s:19:"oa_parent_target_id";a:6:{s:2:"id";s:19:"oa_parent_target_id";s:5:"table";s:20:"field_data_oa_parent";s:5:"field";s:19:"oa_parent_target_id";s:7:"ui_name";s:14:"Post is parent";s:8:"operator";s:5:"empty";s:5:"group";i:1;}s:4:"type";a:7:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:7:"ui_name";s:28:"Content is a discussion post";s:5:"value";a:1:{s:18:"oa_discussion_post";s:18:"oa_discussion_post";}s:5:"group";i:1;s:6:"expose";a:5:{s:11:"operator_id";s:7:"type_op";s:5:"label";s:4:"Type";s:8:"operator";s:7:"type_op";s:10:"identifier";s:4:"type";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}s:22:"og_group_ref_target_id";a:7:{s:2:"id";s:22:"og_group_ref_target_id";s:5:"table";s:13:"og_membership";s:5:"field";s:22:"og_group_ref_target_id";s:7:"ui_name";s:21:"Post belongs to space";s:5:"value";a:4:{i:126;s:3:"126";i:127;s:3:"127";i:128;s:3:"128";i:129;s:3:"129";}s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:25:"og_group_ref_target_id_op";s:5:"label";s:15:"Groups audience";s:8:"operator";s:25:"og_group_ref_target_id_op";s:10:"identifier";s:22:"og_group_ref_target_id";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}s:6:"status";a:5:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:7:"ui_name";s:17:"Post is published";s:5:"value";s:1:"1";}s:3:"tid";a:7:{s:2:"id";s:3:"tid";s:5:"table";s:14:"taxonomy_index";s:5:"field";s:3:"tid";s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:6:"tid_op";s:5:"label";s:28:"Belongs to this data subarea";s:8:"operator";s:6:"tid_op";s:10:"identifier";s:3:"tid";s:14:"remember_roles";a:5:{i:2;s:1:"2";i:1;i:0;i:5;i:0;i:3;i:0;i:4;i:0;}}s:4:"type";s:6:"select";s:10:"vocabulary";s:13:"data_subareas";}}s:13:"pane_category";a:2:{s:4:"name";s:13:"The Good Data";s:6:"weight";s:1:"0";}s:5:"allow";a:10:{s:9:"use_pager";s:9:"use_pager";s:14:"items_per_page";s:14:"items_per_page";s:6:"offset";s:6:"offset";s:12:"link_to_view";i:0;s:9:"more_link";i:0;s:13:"path_override";i:0;s:14:"title_override";s:14:"title_override";s:12:"exposed_form";s:12:"exposed_form";s:22:"exposed_form_configure";i:0;s:15:"fields_override";i:0;}s:22:"exposed_form_overrides";a:1:{s:7:"filters";a:1:{s:22:"og_group_ref_target_id";s:0:"";}}s:14:"argument_input";a:1:{s:3:"tid";a:6:{s:4:"type";s:5:"panel";s:7:"context";s:29:"entity:command_button.changed";s:16:"context_optional";i:0;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:29:"Content: Has taxonomy term ID";}}s:19:"inherit_panels_path";s:1:"1";}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_2";s:13:"display_title";s:31:"(data) Space Discussion Topics ";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}');
  $overrides["views_view.open_atrium_discussions.display|panel_pane_3"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:20:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:14:{s:5:"title";b:0;s:8:"group_by";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:5:"empty";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:13:"Latest Topics";s:19:"display_description";s:50:"Shows the topics inside an space and its subspaces";s:8:"group_by";b:1;s:5:"pager";a:2:{s:4:"type";s:9:"load_more";s:7:"options";a:4:{s:14:"items_per_page";s:2:"20";s:6:"offset";s:1:"0";s:2:"id";s:1:"1";s:8:"quantity";s:1:"9";}}s:12:"style_plugin";s:4:"list";s:13:"style_options";a:5:{s:8:"grouping";a:1:{i:0;a:3:{s:5:"field";s:11:"last_date_1";s:8:"rendered";i:1;s:14:"rendered_strip";i:0;}}s:17:"default_row_class";b:0;s:17:"row_class_special";b:0;s:5:"class";s:13:"group-content";s:13:"wrapper_class";s:12:"group-header";}s:10:"row_plugin";s:6:"fields";s:11:"row_options";a:1:{s:6:"inline";a:2:{s:7:"counter";s:7:"counter";s:14:"field_oa_media";s:14:"field_oa_media";}}s:5:"empty";a:1:{s:4:"area";a:7:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:5:"label";s:19:"No discussion found";s:5:"empty";b:1;s:7:"content";s:57:"<div class="no-results-found">No discussions found.</div>";s:6:"format";s:21:"panopoly_wysiwyg_text";}}s:13:"relationships";a:3:{s:19:"oa_parent_target_id";a:4:{s:2:"id";s:19:"oa_parent_target_id";s:5:"table";s:20:"field_data_oa_parent";s:5:"field";s:19:"oa_parent_target_id";s:7:"ui_name";s:11:"Parent post";}s:22:"reverse_oa_parent_node";a:5:{s:2:"id";s:22:"reverse_oa_parent_node";s:5:"table";s:4:"node";s:5:"field";s:22:"reverse_oa_parent_node";s:7:"ui_name";s:12:"Post replies";s:5:"label";s:7:"Replies";}s:3:"uid";a:3:{s:2:"id";s:3:"uid";s:5:"table";s:4:"node";s:5:"field";s:3:"uid";}}s:6:"fields";a:11:{s:3:"nid";a:7:{s:2:"id";s:3:"nid";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"title";a:7:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"nid_2";a:10:{s:2:"id";s:5:"nid_2";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:5:"count";s:7:"ui_name";s:11:"Reply Count";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:13:"timestamp_new";a:9:{s:2:"id";s:13:"timestamp_new";s:5:"table";s:7:"history";s:5:"field";s:13:"timestamp_new";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"sum";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:17:"timestamp_updated";a:9:{s:2:"id";s:17:"timestamp_updated";s:5:"table";s:7:"history";s:5:"field";s:17:"timestamp_updated";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"sum";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"nid_3";a:10:{s:2:"id";s:5:"nid_3";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:7:"ui_name";s:10:"Last Reply";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:9:"last_date";a:11:{s:2:"id";s:9:"last_date";s:5:"table";s:4:"node";s:5:"field";s:9:"last_date";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:11:"date_format";s:7:"oa_date";s:7:"oa_date";s:7:"oa_date";}s:4:"name";a:8:{s:2:"id";s:4:"name";s:5:"table";s:5:"users";s:5:"field";s:4:"name";s:12:"relationship";s:3:"uid";s:5:"label";s:0:"";s:12:"element_type";s:4:"span";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:18:"field_user_picture";a:11:{s:2:"id";s:18:"field_user_picture";s:5:"table";s:29:"field_data_field_user_picture";s:5:"field";s:18:"field_user_picture";s:12:"relationship";s:3:"uid";s:5:"label";s:0:"";s:12:"element_type";s:4:"span";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:17:"click_sort_column";s:3:"fid";s:8:"settings";a:2:{s:11:"image_style";s:18:"oa_small_thumbnail";s:10:"image_link";s:0:"";}s:12:"group_column";s:9:"entity_id";}s:11:"last_date_1";a:11:{s:2:"id";s:11:"last_date_1";s:5:"table";s:4:"node";s:5:"field";s:9:"last_date";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:11:"date_format";s:7:"oa_date";s:7:"oa_date";s:7:"oa_date";}s:12:"og_group_ref";a:7:{s:2:"id";s:12:"og_group_ref";s:5:"table";s:13:"og_membership";s:5:"field";s:12:"og_group_ref";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:8:"settings";a:1:{s:4:"link";i:0;}s:12:"group_column";s:9:"entity_id";}}s:5:"sorts";a:1:{s:7:"changed";a:5:{s:2:"id";s:7:"changed";s:5:"table";s:4:"node";s:5:"field";s:7:"changed";s:10:"group_type";s:3:"max";s:5:"order";s:4:"DESC";}}s:7:"filters";a:5:{s:19:"oa_parent_target_id";a:6:{s:2:"id";s:19:"oa_parent_target_id";s:5:"table";s:20:"field_data_oa_parent";s:5:"field";s:19:"oa_parent_target_id";s:7:"ui_name";s:14:"Post is parent";s:8:"operator";s:5:"empty";s:5:"group";i:1;}s:4:"type";a:7:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:7:"ui_name";s:28:"Content is a discussion post";s:5:"value";a:1:{s:18:"oa_discussion_post";s:18:"oa_discussion_post";}s:5:"group";i:1;s:6:"expose";a:5:{s:11:"operator_id";s:7:"type_op";s:5:"label";s:4:"Type";s:8:"operator";s:7:"type_op";s:10:"identifier";s:4:"type";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}s:22:"og_group_ref_target_id";a:7:{s:2:"id";s:22:"og_group_ref_target_id";s:5:"table";s:13:"og_membership";s:5:"field";s:22:"og_group_ref_target_id";s:7:"ui_name";s:21:"Post belongs to space";s:5:"value";a:4:{i:126;s:3:"126";i:127;s:3:"127";i:128;s:3:"128";i:129;s:3:"129";}s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:25:"og_group_ref_target_id_op";s:5:"label";s:15:"Groups audience";s:8:"operator";s:25:"og_group_ref_target_id_op";s:10:"identifier";s:22:"og_group_ref_target_id";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}s:6:"status";a:5:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:7:"ui_name";s:17:"Post is published";s:5:"value";s:1:"1";}s:3:"tid";a:7:{s:2:"id";s:3:"tid";s:5:"table";s:14:"taxonomy_index";s:5:"field";s:3:"tid";s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:6:"tid_op";s:5:"label";s:30:"Belongs to this people subarea";s:8:"operator";s:6:"tid_op";s:10:"identifier";s:3:"tid";s:14:"remember_roles";a:5:{i:2;s:1:"2";i:1;i:0;i:5;i:0;i:3;i:0;i:4;i:0;}}s:4:"type";s:6:"select";s:10:"vocabulary";s:15:"people_subareas";}}s:13:"pane_category";a:2:{s:4:"name";s:13:"The Good Data";s:6:"weight";s:1:"0";}s:5:"allow";a:10:{s:9:"use_pager";s:9:"use_pager";s:14:"items_per_page";s:14:"items_per_page";s:6:"offset";s:6:"offset";s:12:"link_to_view";i:0;s:9:"more_link";i:0;s:13:"path_override";i:0;s:14:"title_override";s:14:"title_override";s:12:"exposed_form";s:12:"exposed_form";s:22:"exposed_form_configure";i:0;s:15:"fields_override";i:0;}s:22:"exposed_form_overrides";a:1:{s:7:"filters";a:1:{s:22:"og_group_ref_target_id";s:0:"";}}s:14:"argument_input";a:1:{s:3:"tid";a:6:{s:4:"type";s:5:"panel";s:7:"context";s:29:"entity:command_button.changed";s:16:"context_optional";i:0;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:29:"Content: Has taxonomy term ID";}}s:19:"inherit_panels_path";s:1:"1";}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_3";s:13:"display_title";s:33:"(people) Space Discussion Topics ";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}');
  $overrides["views_view.open_atrium_discussions.display|panel_pane_4"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:20:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:14:{s:5:"title";b:0;s:8:"group_by";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:5:"empty";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:13:"Latest Topics";s:19:"display_description";s:50:"Shows the topics inside an space and its subspaces";s:8:"group_by";b:1;s:5:"pager";a:2:{s:4:"type";s:9:"load_more";s:7:"options";a:4:{s:14:"items_per_page";s:2:"20";s:6:"offset";s:1:"0";s:2:"id";s:1:"1";s:8:"quantity";s:1:"9";}}s:12:"style_plugin";s:4:"list";s:13:"style_options";a:5:{s:8:"grouping";a:1:{i:0;a:3:{s:5:"field";s:11:"last_date_1";s:8:"rendered";i:1;s:14:"rendered_strip";i:0;}}s:17:"default_row_class";b:0;s:17:"row_class_special";b:0;s:5:"class";s:13:"group-content";s:13:"wrapper_class";s:12:"group-header";}s:10:"row_plugin";s:6:"fields";s:11:"row_options";a:1:{s:6:"inline";a:2:{s:7:"counter";s:7:"counter";s:14:"field_oa_media";s:14:"field_oa_media";}}s:5:"empty";a:1:{s:4:"area";a:7:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:5:"label";s:19:"No discussion found";s:5:"empty";b:1;s:7:"content";s:57:"<div class="no-results-found">No discussions found.</div>";s:6:"format";s:21:"panopoly_wysiwyg_text";}}s:13:"relationships";a:3:{s:19:"oa_parent_target_id";a:4:{s:2:"id";s:19:"oa_parent_target_id";s:5:"table";s:20:"field_data_oa_parent";s:5:"field";s:19:"oa_parent_target_id";s:7:"ui_name";s:11:"Parent post";}s:22:"reverse_oa_parent_node";a:5:{s:2:"id";s:22:"reverse_oa_parent_node";s:5:"table";s:4:"node";s:5:"field";s:22:"reverse_oa_parent_node";s:7:"ui_name";s:12:"Post replies";s:5:"label";s:7:"Replies";}s:3:"uid";a:3:{s:2:"id";s:3:"uid";s:5:"table";s:4:"node";s:5:"field";s:3:"uid";}}s:6:"fields";a:11:{s:3:"nid";a:7:{s:2:"id";s:3:"nid";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"title";a:7:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"nid_2";a:10:{s:2:"id";s:5:"nid_2";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:5:"count";s:7:"ui_name";s:11:"Reply Count";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:13:"timestamp_new";a:9:{s:2:"id";s:13:"timestamp_new";s:5:"table";s:7:"history";s:5:"field";s:13:"timestamp_new";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"sum";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:17:"timestamp_updated";a:9:{s:2:"id";s:17:"timestamp_updated";s:5:"table";s:7:"history";s:5:"field";s:17:"timestamp_updated";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"sum";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"nid_3";a:10:{s:2:"id";s:5:"nid_3";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:7:"ui_name";s:10:"Last Reply";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:9:"last_date";a:11:{s:2:"id";s:9:"last_date";s:5:"table";s:4:"node";s:5:"field";s:9:"last_date";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:11:"date_format";s:7:"oa_date";s:7:"oa_date";s:7:"oa_date";}s:4:"name";a:8:{s:2:"id";s:4:"name";s:5:"table";s:5:"users";s:5:"field";s:4:"name";s:12:"relationship";s:3:"uid";s:5:"label";s:0:"";s:12:"element_type";s:4:"span";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:18:"field_user_picture";a:11:{s:2:"id";s:18:"field_user_picture";s:5:"table";s:29:"field_data_field_user_picture";s:5:"field";s:18:"field_user_picture";s:12:"relationship";s:3:"uid";s:5:"label";s:0:"";s:12:"element_type";s:4:"span";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:17:"click_sort_column";s:3:"fid";s:8:"settings";a:2:{s:11:"image_style";s:18:"oa_small_thumbnail";s:10:"image_link";s:0:"";}s:12:"group_column";s:9:"entity_id";}s:11:"last_date_1";a:11:{s:2:"id";s:11:"last_date_1";s:5:"table";s:4:"node";s:5:"field";s:9:"last_date";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:11:"date_format";s:7:"oa_date";s:7:"oa_date";s:7:"oa_date";}s:12:"og_group_ref";a:7:{s:2:"id";s:12:"og_group_ref";s:5:"table";s:13:"og_membership";s:5:"field";s:12:"og_group_ref";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:8:"settings";a:1:{s:4:"link";i:0;}s:12:"group_column";s:9:"entity_id";}}s:5:"sorts";a:1:{s:7:"changed";a:5:{s:2:"id";s:7:"changed";s:5:"table";s:4:"node";s:5:"field";s:7:"changed";s:10:"group_type";s:3:"max";s:5:"order";s:4:"DESC";}}s:7:"filters";a:5:{s:19:"oa_parent_target_id";a:6:{s:2:"id";s:19:"oa_parent_target_id";s:5:"table";s:20:"field_data_oa_parent";s:5:"field";s:19:"oa_parent_target_id";s:7:"ui_name";s:14:"Post is parent";s:8:"operator";s:5:"empty";s:5:"group";i:1;}s:4:"type";a:7:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:7:"ui_name";s:28:"Content is a discussion post";s:5:"value";a:1:{s:18:"oa_discussion_post";s:18:"oa_discussion_post";}s:5:"group";i:1;s:6:"expose";a:5:{s:11:"operator_id";s:7:"type_op";s:5:"label";s:4:"Type";s:8:"operator";s:7:"type_op";s:10:"identifier";s:4:"type";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}s:22:"og_group_ref_target_id";a:7:{s:2:"id";s:22:"og_group_ref_target_id";s:5:"table";s:13:"og_membership";s:5:"field";s:22:"og_group_ref_target_id";s:7:"ui_name";s:21:"Post belongs to space";s:5:"value";a:4:{i:126;s:3:"126";i:127;s:3:"127";i:128;s:3:"128";i:129;s:3:"129";}s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:25:"og_group_ref_target_id_op";s:5:"label";s:15:"Groups audience";s:8:"operator";s:25:"og_group_ref_target_id_op";s:10:"identifier";s:22:"og_group_ref_target_id";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}s:6:"status";a:5:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:7:"ui_name";s:17:"Post is published";s:5:"value";s:1:"1";}s:3:"tid";a:7:{s:2:"id";s:3:"tid";s:5:"table";s:14:"taxonomy_index";s:5:"field";s:3:"tid";s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:6:"tid_op";s:5:"label";s:31:"Belongs to this product subarea";s:8:"operator";s:6:"tid_op";s:10:"identifier";s:3:"tid";s:14:"remember_roles";a:5:{i:2;s:1:"2";i:1;i:0;i:5;i:0;i:3;i:0;i:4;i:0;}}s:4:"type";s:6:"select";s:10:"vocabulary";s:16:"product_subareas";}}s:13:"pane_category";a:2:{s:4:"name";s:13:"The Good Data";s:6:"weight";s:1:"0";}s:5:"allow";a:10:{s:9:"use_pager";s:9:"use_pager";s:14:"items_per_page";s:14:"items_per_page";s:6:"offset";s:6:"offset";s:12:"link_to_view";i:0;s:9:"more_link";i:0;s:13:"path_override";i:0;s:14:"title_override";s:14:"title_override";s:12:"exposed_form";s:12:"exposed_form";s:22:"exposed_form_configure";i:0;s:15:"fields_override";i:0;}s:22:"exposed_form_overrides";a:1:{s:7:"filters";a:1:{s:22:"og_group_ref_target_id";s:0:"";}}s:14:"argument_input";a:1:{s:3:"tid";a:6:{s:4:"type";s:5:"panel";s:7:"context";s:29:"entity:command_button.changed";s:16:"context_optional";i:0;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:29:"Content: Has taxonomy term ID";}}s:19:"inherit_panels_path";s:1:"1";}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_4";s:13:"display_title";s:33:"(product) Space Discussion Topics";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}');
  $overrides["views_view.open_atrium_discussions.display|panel_pane_5"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:20:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:14:{s:5:"title";b:0;s:8:"group_by";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:5:"empty";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:14:"Popular Topics";s:19:"display_description";s:91:"Shows the topics inside an space and its subspaces sorted by popularity (number of replies)";s:8:"group_by";b:1;s:5:"pager";a:2:{s:4:"type";s:9:"load_more";s:7:"options";a:4:{s:14:"items_per_page";s:2:"20";s:6:"offset";s:1:"0";s:2:"id";s:1:"1";s:8:"quantity";s:1:"9";}}s:12:"style_plugin";s:4:"list";s:13:"style_options";a:4:{s:17:"default_row_class";b:0;s:17:"row_class_special";b:0;s:5:"class";s:13:"group-content";s:13:"wrapper_class";s:12:"group-header";}s:10:"row_plugin";s:6:"fields";s:11:"row_options";a:1:{s:6:"inline";a:2:{s:7:"counter";s:7:"counter";s:14:"field_oa_media";s:14:"field_oa_media";}}s:5:"empty";a:1:{s:4:"area";a:7:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:5:"label";s:19:"No discussion found";s:5:"empty";b:1;s:7:"content";s:57:"<div class="no-results-found">No discussions found.</div>";s:6:"format";s:21:"panopoly_wysiwyg_text";}}s:13:"relationships";a:3:{s:19:"oa_parent_target_id";a:4:{s:2:"id";s:19:"oa_parent_target_id";s:5:"table";s:20:"field_data_oa_parent";s:5:"field";s:19:"oa_parent_target_id";s:7:"ui_name";s:11:"Parent post";}s:22:"reverse_oa_parent_node";a:5:{s:2:"id";s:22:"reverse_oa_parent_node";s:5:"table";s:4:"node";s:5:"field";s:22:"reverse_oa_parent_node";s:7:"ui_name";s:12:"Post replies";s:5:"label";s:7:"Replies";}s:3:"uid";a:3:{s:2:"id";s:3:"uid";s:5:"table";s:4:"node";s:5:"field";s:3:"uid";}}s:6:"fields";a:11:{s:3:"nid";a:7:{s:2:"id";s:3:"nid";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"title";a:7:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"nid_2";a:10:{s:2:"id";s:5:"nid_2";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:5:"count";s:7:"ui_name";s:11:"Reply Count";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:13:"timestamp_new";a:9:{s:2:"id";s:13:"timestamp_new";s:5:"table";s:7:"history";s:5:"field";s:13:"timestamp_new";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"sum";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:17:"timestamp_updated";a:9:{s:2:"id";s:17:"timestamp_updated";s:5:"table";s:7:"history";s:5:"field";s:17:"timestamp_updated";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"sum";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"nid_3";a:10:{s:2:"id";s:5:"nid_3";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:7:"ui_name";s:10:"Last Reply";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:9:"last_date";a:11:{s:2:"id";s:9:"last_date";s:5:"table";s:4:"node";s:5:"field";s:9:"last_date";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:11:"date_format";s:7:"oa_date";s:7:"oa_date";s:1:"0";}s:4:"name";a:8:{s:2:"id";s:4:"name";s:5:"table";s:5:"users";s:5:"field";s:4:"name";s:12:"relationship";s:3:"uid";s:5:"label";s:0:"";s:12:"element_type";s:4:"span";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:18:"field_user_picture";a:11:{s:2:"id";s:18:"field_user_picture";s:5:"table";s:29:"field_data_field_user_picture";s:5:"field";s:18:"field_user_picture";s:12:"relationship";s:3:"uid";s:5:"label";s:0:"";s:12:"element_type";s:4:"span";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:17:"click_sort_column";s:3:"fid";s:8:"settings";a:2:{s:11:"image_style";s:18:"oa_small_thumbnail";s:10:"image_link";s:0:"";}s:12:"group_column";s:9:"entity_id";}s:11:"last_date_1";a:11:{s:2:"id";s:11:"last_date_1";s:5:"table";s:4:"node";s:5:"field";s:9:"last_date";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:11:"date_format";s:7:"oa_date";s:7:"oa_date";s:7:"oa_date";}s:12:"og_group_ref";a:5:{s:2:"id";s:12:"og_group_ref";s:5:"table";s:13:"og_membership";s:5:"field";s:12:"og_group_ref";s:8:"settings";a:1:{s:4:"link";i:0;}s:12:"group_column";s:9:"entity_id";}}s:5:"sorts";a:2:{s:3:"nid";a:7:{s:2:"id";s:3:"nid";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:5:"count";s:7:"ui_name";s:11:"Reply count";s:5:"order";s:4:"DESC";}s:7:"changed";a:5:{s:2:"id";s:7:"changed";s:5:"table";s:4:"node";s:5:"field";s:7:"changed";s:10:"group_type";s:3:"max";s:5:"order";s:4:"DESC";}}s:7:"filters";a:5:{s:19:"oa_parent_target_id";a:6:{s:2:"id";s:19:"oa_parent_target_id";s:5:"table";s:20:"field_data_oa_parent";s:5:"field";s:19:"oa_parent_target_id";s:7:"ui_name";s:14:"Post is parent";s:8:"operator";s:5:"empty";s:5:"group";i:1;}s:4:"type";a:7:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:7:"ui_name";s:28:"Content is a discussion post";s:5:"value";a:1:{s:18:"oa_discussion_post";s:18:"oa_discussion_post";}s:5:"group";i:1;s:6:"expose";a:5:{s:11:"operator_id";s:7:"type_op";s:5:"label";s:4:"Type";s:8:"operator";s:7:"type_op";s:10:"identifier";s:4:"type";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}s:22:"og_group_ref_target_id";a:7:{s:2:"id";s:22:"og_group_ref_target_id";s:5:"table";s:13:"og_membership";s:5:"field";s:22:"og_group_ref_target_id";s:7:"ui_name";s:21:"Post belongs to space";s:5:"value";a:4:{i:126;s:3:"126";i:127;s:3:"127";i:128;s:3:"128";i:129;s:3:"129";}s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:25:"og_group_ref_target_id_op";s:5:"label";s:15:"Groups audience";s:8:"operator";s:25:"og_group_ref_target_id_op";s:10:"identifier";s:22:"og_group_ref_target_id";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}s:6:"status";a:5:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:7:"ui_name";s:17:"Post is published";s:5:"value";s:1:"1";}s:3:"tid";a:7:{s:2:"id";s:3:"tid";s:5:"table";s:14:"taxonomy_index";s:5:"field";s:3:"tid";s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:6:"tid_op";s:5:"label";s:28:"Belongs to this data subarea";s:8:"operator";s:6:"tid_op";s:10:"identifier";s:3:"tid";s:14:"remember_roles";a:5:{i:2;s:1:"2";i:1;i:0;i:5;i:0;i:3;i:0;i:4;i:0;}}s:4:"type";s:6:"select";s:10:"vocabulary";s:13:"data_subareas";}}s:13:"pane_category";a:2:{s:4:"name";s:13:"The Good Data";s:6:"weight";s:1:"1";}s:5:"allow";a:10:{s:9:"use_pager";s:9:"use_pager";s:14:"items_per_page";s:14:"items_per_page";s:6:"offset";s:6:"offset";s:12:"link_to_view";i:0;s:9:"more_link";i:0;s:13:"path_override";i:0;s:14:"title_override";s:14:"title_override";s:12:"exposed_form";s:12:"exposed_form";s:22:"exposed_form_configure";i:0;s:15:"fields_override";i:0;}s:22:"exposed_form_overrides";a:1:{s:7:"filters";a:1:{s:22:"og_group_ref_target_id";s:0:"";}}s:14:"argument_input";a:1:{s:3:"tid";a:6:{s:4:"type";s:5:"panel";s:7:"context";s:29:"entity:command_button.changed";s:16:"context_optional";i:0;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:29:"Content: Has taxonomy term ID";}}s:19:"inherit_panels_path";s:1:"1";}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_5";s:13:"display_title";s:38:"(data) Space Popular Discussion Topics";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}');
  $overrides["views_view.open_atrium_discussions.display|panel_pane_6"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:20:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:14:{s:5:"title";b:0;s:8:"group_by";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:5:"empty";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:14:"Popular Topics";s:19:"display_description";s:91:"Shows the topics inside an space and its subspaces sorted by popularity (number of replies)";s:8:"group_by";b:1;s:5:"pager";a:2:{s:4:"type";s:9:"load_more";s:7:"options";a:4:{s:14:"items_per_page";s:2:"20";s:6:"offset";s:1:"0";s:2:"id";s:1:"1";s:8:"quantity";s:1:"9";}}s:12:"style_plugin";s:4:"list";s:13:"style_options";a:4:{s:17:"default_row_class";b:0;s:17:"row_class_special";b:0;s:5:"class";s:13:"group-content";s:13:"wrapper_class";s:12:"group-header";}s:10:"row_plugin";s:6:"fields";s:11:"row_options";a:1:{s:6:"inline";a:2:{s:7:"counter";s:7:"counter";s:14:"field_oa_media";s:14:"field_oa_media";}}s:5:"empty";a:1:{s:4:"area";a:7:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:5:"label";s:19:"No discussion found";s:5:"empty";b:1;s:7:"content";s:57:"<div class="no-results-found">No discussions found.</div>";s:6:"format";s:21:"panopoly_wysiwyg_text";}}s:13:"relationships";a:3:{s:19:"oa_parent_target_id";a:4:{s:2:"id";s:19:"oa_parent_target_id";s:5:"table";s:20:"field_data_oa_parent";s:5:"field";s:19:"oa_parent_target_id";s:7:"ui_name";s:11:"Parent post";}s:22:"reverse_oa_parent_node";a:5:{s:2:"id";s:22:"reverse_oa_parent_node";s:5:"table";s:4:"node";s:5:"field";s:22:"reverse_oa_parent_node";s:7:"ui_name";s:12:"Post replies";s:5:"label";s:7:"Replies";}s:3:"uid";a:3:{s:2:"id";s:3:"uid";s:5:"table";s:4:"node";s:5:"field";s:3:"uid";}}s:6:"fields";a:11:{s:3:"nid";a:7:{s:2:"id";s:3:"nid";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"title";a:7:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"nid_2";a:10:{s:2:"id";s:5:"nid_2";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:5:"count";s:7:"ui_name";s:11:"Reply Count";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:13:"timestamp_new";a:9:{s:2:"id";s:13:"timestamp_new";s:5:"table";s:7:"history";s:5:"field";s:13:"timestamp_new";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"sum";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:17:"timestamp_updated";a:9:{s:2:"id";s:17:"timestamp_updated";s:5:"table";s:7:"history";s:5:"field";s:17:"timestamp_updated";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"sum";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"nid_3";a:10:{s:2:"id";s:5:"nid_3";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:7:"ui_name";s:10:"Last Reply";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:9:"last_date";a:11:{s:2:"id";s:9:"last_date";s:5:"table";s:4:"node";s:5:"field";s:9:"last_date";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:11:"date_format";s:7:"oa_date";s:7:"oa_date";s:1:"0";}s:4:"name";a:8:{s:2:"id";s:4:"name";s:5:"table";s:5:"users";s:5:"field";s:4:"name";s:12:"relationship";s:3:"uid";s:5:"label";s:0:"";s:12:"element_type";s:4:"span";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:18:"field_user_picture";a:11:{s:2:"id";s:18:"field_user_picture";s:5:"table";s:29:"field_data_field_user_picture";s:5:"field";s:18:"field_user_picture";s:12:"relationship";s:3:"uid";s:5:"label";s:0:"";s:12:"element_type";s:4:"span";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:17:"click_sort_column";s:3:"fid";s:8:"settings";a:2:{s:11:"image_style";s:18:"oa_small_thumbnail";s:10:"image_link";s:0:"";}s:12:"group_column";s:9:"entity_id";}s:11:"last_date_1";a:11:{s:2:"id";s:11:"last_date_1";s:5:"table";s:4:"node";s:5:"field";s:9:"last_date";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:11:"date_format";s:7:"oa_date";s:7:"oa_date";s:7:"oa_date";}s:12:"og_group_ref";a:5:{s:2:"id";s:12:"og_group_ref";s:5:"table";s:13:"og_membership";s:5:"field";s:12:"og_group_ref";s:8:"settings";a:1:{s:4:"link";i:0;}s:12:"group_column";s:9:"entity_id";}}s:5:"sorts";a:2:{s:3:"nid";a:7:{s:2:"id";s:3:"nid";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:5:"count";s:7:"ui_name";s:11:"Reply count";s:5:"order";s:4:"DESC";}s:7:"changed";a:5:{s:2:"id";s:7:"changed";s:5:"table";s:4:"node";s:5:"field";s:7:"changed";s:10:"group_type";s:3:"max";s:5:"order";s:4:"DESC";}}s:7:"filters";a:5:{s:19:"oa_parent_target_id";a:6:{s:2:"id";s:19:"oa_parent_target_id";s:5:"table";s:20:"field_data_oa_parent";s:5:"field";s:19:"oa_parent_target_id";s:7:"ui_name";s:14:"Post is parent";s:8:"operator";s:5:"empty";s:5:"group";i:1;}s:4:"type";a:7:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:7:"ui_name";s:28:"Content is a discussion post";s:5:"value";a:1:{s:18:"oa_discussion_post";s:18:"oa_discussion_post";}s:5:"group";i:1;s:6:"expose";a:5:{s:11:"operator_id";s:7:"type_op";s:5:"label";s:4:"Type";s:8:"operator";s:7:"type_op";s:10:"identifier";s:4:"type";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}s:22:"og_group_ref_target_id";a:7:{s:2:"id";s:22:"og_group_ref_target_id";s:5:"table";s:13:"og_membership";s:5:"field";s:22:"og_group_ref_target_id";s:7:"ui_name";s:21:"Post belongs to space";s:5:"value";a:4:{i:126;s:3:"126";i:127;s:3:"127";i:128;s:3:"128";i:129;s:3:"129";}s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:25:"og_group_ref_target_id_op";s:5:"label";s:15:"Groups audience";s:8:"operator";s:25:"og_group_ref_target_id_op";s:10:"identifier";s:22:"og_group_ref_target_id";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}s:6:"status";a:5:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:7:"ui_name";s:17:"Post is published";s:5:"value";s:1:"1";}s:3:"tid";a:7:{s:2:"id";s:3:"tid";s:5:"table";s:14:"taxonomy_index";s:5:"field";s:3:"tid";s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:6:"tid_op";s:5:"label";s:33:"Belongs to this corporate subarea";s:8:"operator";s:6:"tid_op";s:10:"identifier";s:3:"tid";s:14:"remember_roles";a:5:{i:2;s:1:"2";i:1;i:0;i:5;i:0;i:3;i:0;i:4;i:0;}}s:4:"type";s:6:"select";s:10:"vocabulary";s:18:"corporate_subareas";}}s:13:"pane_category";a:2:{s:4:"name";s:13:"The Good Data";s:6:"weight";s:1:"1";}s:5:"allow";a:10:{s:9:"use_pager";s:9:"use_pager";s:14:"items_per_page";s:14:"items_per_page";s:6:"offset";s:6:"offset";s:12:"link_to_view";i:0;s:9:"more_link";i:0;s:13:"path_override";i:0;s:14:"title_override";s:14:"title_override";s:12:"exposed_form";s:12:"exposed_form";s:22:"exposed_form_configure";i:0;s:15:"fields_override";i:0;}s:22:"exposed_form_overrides";a:1:{s:7:"filters";a:1:{s:22:"og_group_ref_target_id";s:0:"";}}s:14:"argument_input";a:1:{s:3:"tid";a:6:{s:4:"type";s:5:"panel";s:7:"context";s:29:"entity:command_button.changed";s:16:"context_optional";i:0;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:29:"Content: Has taxonomy term ID";}}s:19:"inherit_panels_path";s:1:"1";}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_6";s:13:"display_title";s:43:"(corporate) Space Popular Discussion Topics";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}');
  $overrides["views_view.open_atrium_discussions.display|panel_pane_7"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:20:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:14:{s:5:"title";b:0;s:8:"group_by";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:5:"empty";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:14:"Popular Topics";s:19:"display_description";s:91:"Shows the topics inside an space and its subspaces sorted by popularity (number of replies)";s:8:"group_by";b:1;s:5:"pager";a:2:{s:4:"type";s:9:"load_more";s:7:"options";a:4:{s:14:"items_per_page";s:2:"20";s:6:"offset";s:1:"0";s:2:"id";s:1:"1";s:8:"quantity";s:1:"9";}}s:12:"style_plugin";s:4:"list";s:13:"style_options";a:4:{s:17:"default_row_class";b:0;s:17:"row_class_special";b:0;s:5:"class";s:13:"group-content";s:13:"wrapper_class";s:12:"group-header";}s:10:"row_plugin";s:6:"fields";s:11:"row_options";a:1:{s:6:"inline";a:2:{s:7:"counter";s:7:"counter";s:14:"field_oa_media";s:14:"field_oa_media";}}s:5:"empty";a:1:{s:4:"area";a:7:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:5:"label";s:19:"No discussion found";s:5:"empty";b:1;s:7:"content";s:57:"<div class="no-results-found">No discussions found.</div>";s:6:"format";s:21:"panopoly_wysiwyg_text";}}s:13:"relationships";a:3:{s:19:"oa_parent_target_id";a:4:{s:2:"id";s:19:"oa_parent_target_id";s:5:"table";s:20:"field_data_oa_parent";s:5:"field";s:19:"oa_parent_target_id";s:7:"ui_name";s:11:"Parent post";}s:22:"reverse_oa_parent_node";a:5:{s:2:"id";s:22:"reverse_oa_parent_node";s:5:"table";s:4:"node";s:5:"field";s:22:"reverse_oa_parent_node";s:7:"ui_name";s:12:"Post replies";s:5:"label";s:7:"Replies";}s:3:"uid";a:3:{s:2:"id";s:3:"uid";s:5:"table";s:4:"node";s:5:"field";s:3:"uid";}}s:6:"fields";a:11:{s:3:"nid";a:7:{s:2:"id";s:3:"nid";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"title";a:7:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"nid_2";a:10:{s:2:"id";s:5:"nid_2";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:5:"count";s:7:"ui_name";s:11:"Reply Count";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:13:"timestamp_new";a:9:{s:2:"id";s:13:"timestamp_new";s:5:"table";s:7:"history";s:5:"field";s:13:"timestamp_new";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"sum";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:17:"timestamp_updated";a:9:{s:2:"id";s:17:"timestamp_updated";s:5:"table";s:7:"history";s:5:"field";s:17:"timestamp_updated";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"sum";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"nid_3";a:10:{s:2:"id";s:5:"nid_3";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:7:"ui_name";s:10:"Last Reply";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:9:"last_date";a:11:{s:2:"id";s:9:"last_date";s:5:"table";s:4:"node";s:5:"field";s:9:"last_date";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:11:"date_format";s:7:"oa_date";s:7:"oa_date";s:1:"0";}s:4:"name";a:8:{s:2:"id";s:4:"name";s:5:"table";s:5:"users";s:5:"field";s:4:"name";s:12:"relationship";s:3:"uid";s:5:"label";s:0:"";s:12:"element_type";s:4:"span";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:18:"field_user_picture";a:11:{s:2:"id";s:18:"field_user_picture";s:5:"table";s:29:"field_data_field_user_picture";s:5:"field";s:18:"field_user_picture";s:12:"relationship";s:3:"uid";s:5:"label";s:0:"";s:12:"element_type";s:4:"span";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:17:"click_sort_column";s:3:"fid";s:8:"settings";a:2:{s:11:"image_style";s:18:"oa_small_thumbnail";s:10:"image_link";s:0:"";}s:12:"group_column";s:9:"entity_id";}s:11:"last_date_1";a:11:{s:2:"id";s:11:"last_date_1";s:5:"table";s:4:"node";s:5:"field";s:9:"last_date";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:11:"date_format";s:7:"oa_date";s:7:"oa_date";s:7:"oa_date";}s:12:"og_group_ref";a:5:{s:2:"id";s:12:"og_group_ref";s:5:"table";s:13:"og_membership";s:5:"field";s:12:"og_group_ref";s:8:"settings";a:1:{s:4:"link";i:0;}s:12:"group_column";s:9:"entity_id";}}s:5:"sorts";a:2:{s:3:"nid";a:7:{s:2:"id";s:3:"nid";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:5:"count";s:7:"ui_name";s:11:"Reply count";s:5:"order";s:4:"DESC";}s:7:"changed";a:5:{s:2:"id";s:7:"changed";s:5:"table";s:4:"node";s:5:"field";s:7:"changed";s:10:"group_type";s:3:"max";s:5:"order";s:4:"DESC";}}s:7:"filters";a:5:{s:19:"oa_parent_target_id";a:6:{s:2:"id";s:19:"oa_parent_target_id";s:5:"table";s:20:"field_data_oa_parent";s:5:"field";s:19:"oa_parent_target_id";s:7:"ui_name";s:14:"Post is parent";s:8:"operator";s:5:"empty";s:5:"group";i:1;}s:4:"type";a:7:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:7:"ui_name";s:28:"Content is a discussion post";s:5:"value";a:1:{s:18:"oa_discussion_post";s:18:"oa_discussion_post";}s:5:"group";i:1;s:6:"expose";a:5:{s:11:"operator_id";s:7:"type_op";s:5:"label";s:4:"Type";s:8:"operator";s:7:"type_op";s:10:"identifier";s:4:"type";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}s:22:"og_group_ref_target_id";a:7:{s:2:"id";s:22:"og_group_ref_target_id";s:5:"table";s:13:"og_membership";s:5:"field";s:22:"og_group_ref_target_id";s:7:"ui_name";s:21:"Post belongs to space";s:5:"value";a:4:{i:126;s:3:"126";i:127;s:3:"127";i:128;s:3:"128";i:129;s:3:"129";}s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:25:"og_group_ref_target_id_op";s:5:"label";s:15:"Groups audience";s:8:"operator";s:25:"og_group_ref_target_id_op";s:10:"identifier";s:22:"og_group_ref_target_id";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}s:6:"status";a:5:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:7:"ui_name";s:17:"Post is published";s:5:"value";s:1:"1";}s:5:"tid_1";a:7:{s:2:"id";s:5:"tid_1";s:5:"table";s:14:"taxonomy_index";s:5:"field";s:3:"tid";s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:8:"tid_1_op";s:5:"label";s:30:"Belongs to this people subarea";s:8:"operator";s:8:"tid_1_op";s:10:"identifier";s:5:"tid_1";s:14:"remember_roles";a:5:{i:2;s:1:"2";i:1;i:0;i:5;i:0;i:3;i:0;i:4;i:0;}}s:4:"type";s:6:"select";s:10:"vocabulary";s:15:"people_subareas";}}s:13:"pane_category";a:2:{s:4:"name";s:13:"The Good Data";s:6:"weight";s:1:"1";}s:5:"allow";a:10:{s:9:"use_pager";s:9:"use_pager";s:14:"items_per_page";s:14:"items_per_page";s:6:"offset";s:6:"offset";s:12:"link_to_view";i:0;s:9:"more_link";i:0;s:13:"path_override";i:0;s:14:"title_override";s:14:"title_override";s:12:"exposed_form";s:12:"exposed_form";s:22:"exposed_form_configure";i:0;s:15:"fields_override";i:0;}s:22:"exposed_form_overrides";a:1:{s:7:"filters";a:1:{s:22:"og_group_ref_target_id";s:0:"";}}s:14:"argument_input";a:1:{s:3:"tid";a:6:{s:4:"type";s:5:"panel";s:7:"context";s:29:"entity:command_button.changed";s:16:"context_optional";i:0;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:29:"Content: Has taxonomy term ID";}}s:19:"inherit_panels_path";s:1:"1";}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_7";s:13:"display_title";s:40:"(people) Space Popular Discussion Topics";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}');
  $overrides["views_view.open_atrium_discussions.display|panel_pane_8"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:20:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:14:{s:5:"title";b:0;s:8:"group_by";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:5:"empty";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:14:"Popular Topics";s:19:"display_description";s:91:"Shows the topics inside an space and its subspaces sorted by popularity (number of replies)";s:8:"group_by";b:1;s:5:"pager";a:2:{s:4:"type";s:9:"load_more";s:7:"options";a:4:{s:14:"items_per_page";s:2:"20";s:6:"offset";s:1:"0";s:2:"id";s:1:"1";s:8:"quantity";s:1:"9";}}s:12:"style_plugin";s:4:"list";s:13:"style_options";a:4:{s:17:"default_row_class";b:0;s:17:"row_class_special";b:0;s:5:"class";s:13:"group-content";s:13:"wrapper_class";s:12:"group-header";}s:10:"row_plugin";s:6:"fields";s:11:"row_options";a:1:{s:6:"inline";a:2:{s:7:"counter";s:7:"counter";s:14:"field_oa_media";s:14:"field_oa_media";}}s:5:"empty";a:1:{s:4:"area";a:7:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:5:"label";s:19:"No discussion found";s:5:"empty";b:1;s:7:"content";s:57:"<div class="no-results-found">No discussions found.</div>";s:6:"format";s:21:"panopoly_wysiwyg_text";}}s:13:"relationships";a:3:{s:19:"oa_parent_target_id";a:4:{s:2:"id";s:19:"oa_parent_target_id";s:5:"table";s:20:"field_data_oa_parent";s:5:"field";s:19:"oa_parent_target_id";s:7:"ui_name";s:11:"Parent post";}s:22:"reverse_oa_parent_node";a:5:{s:2:"id";s:22:"reverse_oa_parent_node";s:5:"table";s:4:"node";s:5:"field";s:22:"reverse_oa_parent_node";s:7:"ui_name";s:12:"Post replies";s:5:"label";s:7:"Replies";}s:3:"uid";a:3:{s:2:"id";s:3:"uid";s:5:"table";s:4:"node";s:5:"field";s:3:"uid";}}s:6:"fields";a:11:{s:3:"nid";a:7:{s:2:"id";s:3:"nid";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"title";a:7:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"nid_2";a:10:{s:2:"id";s:5:"nid_2";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:5:"count";s:7:"ui_name";s:11:"Reply Count";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:13:"timestamp_new";a:9:{s:2:"id";s:13:"timestamp_new";s:5:"table";s:7:"history";s:5:"field";s:13:"timestamp_new";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"sum";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:17:"timestamp_updated";a:9:{s:2:"id";s:17:"timestamp_updated";s:5:"table";s:7:"history";s:5:"field";s:17:"timestamp_updated";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"sum";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"nid_3";a:10:{s:2:"id";s:5:"nid_3";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:7:"ui_name";s:10:"Last Reply";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:9:"last_date";a:11:{s:2:"id";s:9:"last_date";s:5:"table";s:4:"node";s:5:"field";s:9:"last_date";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:11:"date_format";s:7:"oa_date";s:7:"oa_date";s:1:"0";}s:4:"name";a:8:{s:2:"id";s:4:"name";s:5:"table";s:5:"users";s:5:"field";s:4:"name";s:12:"relationship";s:3:"uid";s:5:"label";s:0:"";s:12:"element_type";s:4:"span";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:18:"field_user_picture";a:11:{s:2:"id";s:18:"field_user_picture";s:5:"table";s:29:"field_data_field_user_picture";s:5:"field";s:18:"field_user_picture";s:12:"relationship";s:3:"uid";s:5:"label";s:0:"";s:12:"element_type";s:4:"span";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:17:"click_sort_column";s:3:"fid";s:8:"settings";a:2:{s:11:"image_style";s:18:"oa_small_thumbnail";s:10:"image_link";s:0:"";}s:12:"group_column";s:9:"entity_id";}s:11:"last_date_1";a:11:{s:2:"id";s:11:"last_date_1";s:5:"table";s:4:"node";s:5:"field";s:9:"last_date";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:11:"date_format";s:7:"oa_date";s:7:"oa_date";s:7:"oa_date";}s:12:"og_group_ref";a:5:{s:2:"id";s:12:"og_group_ref";s:5:"table";s:13:"og_membership";s:5:"field";s:12:"og_group_ref";s:8:"settings";a:1:{s:4:"link";i:0;}s:12:"group_column";s:9:"entity_id";}}s:5:"sorts";a:2:{s:3:"nid";a:7:{s:2:"id";s:3:"nid";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:5:"count";s:7:"ui_name";s:11:"Reply count";s:5:"order";s:4:"DESC";}s:7:"changed";a:5:{s:2:"id";s:7:"changed";s:5:"table";s:4:"node";s:5:"field";s:7:"changed";s:10:"group_type";s:3:"max";s:5:"order";s:4:"DESC";}}s:7:"filters";a:5:{s:19:"oa_parent_target_id";a:6:{s:2:"id";s:19:"oa_parent_target_id";s:5:"table";s:20:"field_data_oa_parent";s:5:"field";s:19:"oa_parent_target_id";s:7:"ui_name";s:14:"Post is parent";s:8:"operator";s:5:"empty";s:5:"group";i:1;}s:4:"type";a:7:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:7:"ui_name";s:28:"Content is a discussion post";s:5:"value";a:1:{s:18:"oa_discussion_post";s:18:"oa_discussion_post";}s:5:"group";i:1;s:6:"expose";a:5:{s:11:"operator_id";s:7:"type_op";s:5:"label";s:4:"Type";s:8:"operator";s:7:"type_op";s:10:"identifier";s:4:"type";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}s:22:"og_group_ref_target_id";a:7:{s:2:"id";s:22:"og_group_ref_target_id";s:5:"table";s:13:"og_membership";s:5:"field";s:22:"og_group_ref_target_id";s:7:"ui_name";s:21:"Post belongs to space";s:5:"value";a:4:{i:126;s:3:"126";i:127;s:3:"127";i:128;s:3:"128";i:129;s:3:"129";}s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:25:"og_group_ref_target_id_op";s:5:"label";s:15:"Groups audience";s:8:"operator";s:25:"og_group_ref_target_id_op";s:10:"identifier";s:22:"og_group_ref_target_id";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}s:6:"status";a:5:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:7:"ui_name";s:17:"Post is published";s:5:"value";s:1:"1";}s:3:"tid";a:7:{s:2:"id";s:3:"tid";s:5:"table";s:14:"taxonomy_index";s:5:"field";s:3:"tid";s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:6:"tid_op";s:5:"label";s:31:"Belongs to this product subarea";s:8:"operator";s:6:"tid_op";s:10:"identifier";s:3:"tid";s:14:"remember_roles";a:5:{i:2;s:1:"2";i:1;i:0;i:5;i:0;i:3;i:0;i:4;i:0;}}s:4:"type";s:6:"select";s:10:"vocabulary";s:16:"product_subareas";}}s:13:"pane_category";a:2:{s:4:"name";s:13:"The Good Data";s:6:"weight";s:1:"1";}s:5:"allow";a:10:{s:9:"use_pager";s:9:"use_pager";s:14:"items_per_page";s:14:"items_per_page";s:6:"offset";s:6:"offset";s:12:"link_to_view";i:0;s:9:"more_link";i:0;s:13:"path_override";i:0;s:14:"title_override";s:14:"title_override";s:12:"exposed_form";s:12:"exposed_form";s:22:"exposed_form_configure";i:0;s:15:"fields_override";i:0;}s:22:"exposed_form_overrides";a:1:{s:7:"filters";a:1:{s:22:"og_group_ref_target_id";s:0:"";}}s:14:"argument_input";a:1:{s:3:"tid";a:6:{s:4:"type";s:5:"panel";s:7:"context";s:29:"entity:command_button.changed";s:16:"context_optional";i:0;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:29:"Content: Has taxonomy term ID";}}s:19:"inherit_panels_path";s:1:"1";}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_8";s:13:"display_title";s:41:"(product) Space Popular Discussion Topics";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}');
  $overrides["views_view.open_atrium_discussions.display|panel_pane_9"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:20:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:14:{s:5:"title";b:0;s:8:"group_by";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:5:"empty";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:11:"Your Topics";s:8:"group_by";b:1;s:5:"pager";a:2:{s:4:"type";s:9:"load_more";s:7:"options";a:4:{s:14:"items_per_page";s:2:"20";s:6:"offset";s:1:"0";s:2:"id";s:1:"0";s:8:"quantity";s:1:"9";}}s:12:"style_plugin";s:4:"list";s:13:"style_options";a:5:{s:8:"grouping";a:1:{i:0;a:3:{s:5:"field";s:11:"last_date_1";s:8:"rendered";i:1;s:14:"rendered_strip";i:0;}}s:17:"default_row_class";b:0;s:17:"row_class_special";b:0;s:5:"class";s:13:"group-content";s:13:"wrapper_class";s:12:"group-header";}s:10:"row_plugin";s:6:"fields";s:11:"row_options";a:1:{s:6:"inline";a:2:{s:7:"counter";s:7:"counter";s:14:"field_oa_media";s:14:"field_oa_media";}}s:5:"empty";a:1:{s:4:"area";a:7:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:5:"label";s:19:"No discussion found";s:5:"empty";b:1;s:7:"content";s:57:"<div class="no-results-found">No discussions found.</div>";s:6:"format";s:21:"panopoly_wysiwyg_text";}}s:13:"relationships";a:5:{s:19:"oa_parent_target_id";a:4:{s:2:"id";s:19:"oa_parent_target_id";s:5:"table";s:20:"field_data_oa_parent";s:5:"field";s:19:"oa_parent_target_id";s:5:"label";s:6:"Parent";}s:22:"reverse_oa_parent_node";a:4:{s:2:"id";s:22:"reverse_oa_parent_node";s:5:"table";s:4:"node";s:5:"field";s:22:"reverse_oa_parent_node";s:5:"label";s:7:"Replies";}s:3:"uid";a:3:{s:2:"id";s:3:"uid";s:5:"table";s:4:"node";s:5:"field";s:3:"uid";}s:32:"og_membership_related_node_group";a:3:{s:2:"id";s:32:"og_membership_related_node_group";s:5:"table";s:13:"og_membership";s:5:"field";s:32:"og_membership_related_node_group";}s:24:"oa_section_ref_target_id";a:3:{s:2:"id";s:24:"oa_section_ref_target_id";s:5:"table";s:25:"field_data_oa_section_ref";s:5:"field";s:24:"oa_section_ref_target_id";}}s:6:"fields";a:12:{s:3:"nid";a:7:{s:2:"id";s:3:"nid";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"title";a:7:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"nid_2";a:10:{s:2:"id";s:5:"nid_2";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:5:"count";s:7:"ui_name";s:11:"Reply Count";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:13:"timestamp_new";a:9:{s:2:"id";s:13:"timestamp_new";s:5:"table";s:7:"history";s:5:"field";s:13:"timestamp_new";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"sum";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:17:"timestamp_updated";a:9:{s:2:"id";s:17:"timestamp_updated";s:5:"table";s:7:"history";s:5:"field";s:17:"timestamp_updated";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"sum";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"nid_3";a:10:{s:2:"id";s:5:"nid_3";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:7:"ui_name";s:10:"Last Reply";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:9:"last_date";a:10:{s:2:"id";s:9:"last_date";s:5:"table";s:4:"node";s:5:"field";s:9:"last_date";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:11:"date_format";s:7:"oa_date";}s:4:"name";a:8:{s:2:"id";s:4:"name";s:5:"table";s:5:"users";s:5:"field";s:4:"name";s:12:"relationship";s:3:"uid";s:5:"label";s:0:"";s:12:"element_type";s:4:"span";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:18:"field_user_picture";a:11:{s:2:"id";s:18:"field_user_picture";s:5:"table";s:29:"field_data_field_user_picture";s:5:"field";s:18:"field_user_picture";s:12:"relationship";s:3:"uid";s:5:"label";s:0:"";s:12:"element_type";s:4:"span";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:17:"click_sort_column";s:3:"fid";s:8:"settings";a:2:{s:11:"image_style";s:18:"oa_small_thumbnail";s:10:"image_link";s:0:"";}s:12:"group_column";s:9:"entity_id";}s:11:"last_date_1";a:11:{s:2:"id";s:11:"last_date_1";s:5:"table";s:4:"node";s:5:"field";s:9:"last_date";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:11:"date_format";s:7:"oa_date";s:7:"oa_date";s:7:"oa_date";}s:7:"title_1";a:9:{s:2:"id";s:7:"title_1";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:12:"relationship";s:32:"og_membership_related_node_group";s:5:"label";s:0:"";s:12:"element_type";s:4:"span";s:13:"element_class";s:5:"label";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:7:"title_2";a:9:{s:2:"id";s:7:"title_2";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:12:"relationship";s:24:"oa_section_ref_target_id";s:5:"label";s:0:"";s:12:"element_type";s:4:"span";s:13:"element_class";s:5:"label";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}}s:5:"sorts";a:1:{s:9:"last_date";a:6:{s:2:"id";s:9:"last_date";s:5:"table";s:4:"node";s:5:"field";s:9:"last_date";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:5:"order";s:4:"DESC";}}s:7:"filters";a:4:{s:5:"nid_1";a:6:{s:2:"id";s:5:"nid_1";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:19:"oa_parent_target_id";s:8:"operator";s:5:"empty";s:5:"group";i:1;}s:4:"type";a:7:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:7:"ui_name";s:26:"Content is discussion post";s:5:"value";a:1:{s:18:"oa_discussion_post";s:18:"oa_discussion_post";}s:5:"group";i:1;s:6:"expose";a:5:{s:11:"operator_id";s:7:"type_op";s:5:"label";s:4:"Type";s:8:"operator";s:7:"type_op";s:10:"identifier";s:4:"type";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}s:11:"uid_current";a:6:{s:2:"id";s:11:"uid_current";s:5:"table";s:5:"users";s:5:"field";s:11:"uid_current";s:12:"relationship";s:3:"uid";s:7:"ui_name";s:31:"Posts by current logged-in user";s:5:"value";s:1:"1";}s:6:"status";a:5:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:7:"ui_name";s:20:"Content is published";s:5:"value";s:1:"1";}}s:10:"pane_title";s:22:"Topics by current user";s:13:"pane_category";a:2:{s:4:"name";s:13:"The Good Data";s:6:"weight";s:1:"0";}s:5:"allow";a:10:{s:9:"use_pager";s:9:"use_pager";s:14:"items_per_page";s:14:"items_per_page";s:6:"offset";i:0;s:12:"link_to_view";i:0;s:9:"more_link";i:0;s:13:"path_override";i:0;s:14:"title_override";s:14:"title_override";s:12:"exposed_form";s:12:"exposed_form";s:22:"exposed_form_configure";i:0;s:15:"fields_override";i:0;}s:22:"exposed_form_overrides";a:1:{s:7:"filters";a:1:{s:4:"type";s:0:"";}}s:14:"argument_input";a:1:{s:3:"uid";a:6:{s:4:"type";s:7:"context";s:7:"context";s:15:"entity:user.uid";s:16:"context_optional";i:1;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:19:"Content: Author uid";}}s:19:"inherit_panels_path";s:1:"1";}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_9";s:13:"display_title";s:13:"(user) Topics";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}');
  $overrides["views_view.open_atrium_discussions.display|popular_topics"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:21:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:14:{s:5:"title";b:0;s:8:"group_by";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:5:"empty";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:14:"Popular Topics";s:19:"display_description";s:73:"Popular topics published within a space based on their number of replies.";s:8:"group_by";b:1;s:5:"pager";a:2:{s:4:"type";s:4:"mini";s:7:"options";a:3:{s:14:"items_per_page";s:1:"5";s:6:"offset";s:1:"0";s:2:"id";s:1:"1";}}s:12:"style_plugin";s:4:"list";s:13:"style_options";a:4:{s:17:"default_row_class";b:0;s:17:"row_class_special";b:0;s:5:"class";s:13:"group-content";s:13:"wrapper_class";s:12:"group-header";}s:10:"row_plugin";s:6:"fields";s:11:"row_options";a:1:{s:6:"inline";a:2:{s:7:"counter";s:7:"counter";s:14:"field_oa_media";s:14:"field_oa_media";}}s:5:"empty";a:1:{s:4:"area";a:6:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:5:"empty";b:1;s:7:"content";s:52:"<div class="no-results-found">No topics found.</div>";s:6:"format";s:9:"full_html";}}s:13:"relationships";a:4:{s:19:"oa_parent_target_id";a:3:{s:2:"id";s:19:"oa_parent_target_id";s:5:"table";s:20:"field_data_oa_parent";s:5:"field";s:19:"oa_parent_target_id";}s:22:"reverse_oa_parent_node";a:4:{s:2:"id";s:22:"reverse_oa_parent_node";s:5:"table";s:4:"node";s:5:"field";s:22:"reverse_oa_parent_node";s:5:"label";s:7:"Replies";}s:3:"uid";a:3:{s:2:"id";s:3:"uid";s:5:"table";s:4:"node";s:5:"field";s:3:"uid";}s:17:"og_membership_rel";a:3:{s:2:"id";s:17:"og_membership_rel";s:5:"table";s:4:"node";s:5:"field";s:17:"og_membership_rel";}}s:6:"fields";a:9:{s:3:"nid";a:7:{s:2:"id";s:3:"nid";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"title";a:7:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"nid_2";a:10:{s:2:"id";s:5:"nid_2";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:5:"count";s:7:"ui_name";s:11:"Reply Count";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:13:"timestamp_new";a:9:{s:2:"id";s:13:"timestamp_new";s:5:"table";s:7:"history";s:5:"field";s:13:"timestamp_new";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"sum";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:17:"timestamp_updated";a:9:{s:2:"id";s:17:"timestamp_updated";s:5:"table";s:7:"history";s:5:"field";s:17:"timestamp_updated";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"sum";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"nid_3";a:10:{s:2:"id";s:5:"nid_3";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:7:"ui_name";s:10:"Last Reply";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:9:"last_date";a:11:{s:2:"id";s:9:"last_date";s:5:"table";s:4:"node";s:5:"field";s:9:"last_date";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:11:"date_format";s:7:"oa_date";s:7:"oa_date";s:1:"0";}s:4:"name";a:8:{s:2:"id";s:4:"name";s:5:"table";s:5:"users";s:5:"field";s:4:"name";s:12:"relationship";s:3:"uid";s:5:"label";s:0:"";s:12:"element_type";s:4:"span";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:11:"last_date_1";a:11:{s:2:"id";s:11:"last_date_1";s:5:"table";s:4:"node";s:5:"field";s:9:"last_date";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:11:"date_format";s:7:"oa_date";s:7:"oa_date";s:7:"oa_date";}}s:5:"sorts";a:1:{s:3:"nid";a:6:{s:2:"id";s:3:"nid";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:5:"count";s:5:"order";s:4:"DESC";}}s:9:"arguments";a:2:{s:3:"gid";a:8:{s:2:"id";s:3:"gid";s:5:"table";s:13:"og_membership";s:5:"field";s:3:"gid";s:12:"relationship";s:17:"og_membership_rel";s:14:"default_action";s:7:"default";s:21:"default_argument_type";s:10:"og_context";s:7:"summary";a:2:{s:17:"number_of_records";s:1:"0";s:6:"format";s:15:"default_summary";}s:15:"summary_options";a:1:{s:14:"items_per_page";s:2:"25";}}s:24:"oa_section_ref_target_id";a:6:{s:2:"id";s:24:"oa_section_ref_target_id";s:5:"table";s:25:"field_data_oa_section_ref";s:5:"field";s:24:"oa_section_ref_target_id";s:21:"default_argument_type";s:5:"fixed";s:7:"summary";a:2:{s:17:"number_of_records";s:1:"0";s:6:"format";s:15:"default_summary";}s:15:"summary_options";a:1:{s:14:"items_per_page";s:2:"25";}}}s:7:"filters";a:3:{s:19:"oa_parent_target_id";a:5:{s:2:"id";s:19:"oa_parent_target_id";s:5:"table";s:20:"field_data_oa_parent";s:5:"field";s:19:"oa_parent_target_id";s:8:"operator";s:5:"empty";s:5:"group";i:1;}s:4:"type";a:6:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:18:"oa_discussion_post";s:18:"oa_discussion_post";}s:5:"group";i:1;s:6:"expose";a:5:{s:11:"operator_id";s:7:"type_op";s:5:"label";s:4:"Type";s:8:"operator";s:7:"type_op";s:10:"identifier";s:4:"type";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}s:12:"status_extra";a:3:{s:2:"id";s:12:"status_extra";s:5:"table";s:4:"node";s:5:"field";s:12:"status_extra";}}s:13:"pane_category";a:2:{s:4:"name";s:11:"Open Atrium";s:6:"weight";s:1:"0";}s:5:"allow";a:10:{s:9:"use_pager";s:9:"use_pager";s:14:"items_per_page";s:14:"items_per_page";s:6:"offset";i:0;s:12:"link_to_view";i:0;s:9:"more_link";i:0;s:13:"path_override";i:0;s:14:"title_override";s:14:"title_override";s:12:"exposed_form";s:12:"exposed_form";s:22:"exposed_form_configure";i:0;s:15:"fields_override";i:0;}s:22:"exposed_form_overrides";a:1:{s:7:"filters";a:1:{s:22:"og_group_ref_target_id";s:0:"";}}s:14:"argument_input";a:2:{s:3:"gid";a:6:{s:4:"type";s:4:"none";s:7:"context";s:46:"entity:fieldable_panels_pane.field-map-address";s:16:"context_optional";i:0;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:23:"OG membership: Group ID";}s:24:"oa_section_ref_target_id";a:6:{s:4:"type";s:7:"context";s:7:"context";s:15:"entity:node.nid";s:16:"context_optional";i:1;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:44:"Content: OpenAtrium Section (oa_section_ref)";}}s:19:"inherit_panels_path";s:1:"1";}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:14:"popular_topics";s:13:"display_title";s:14:"Popular Topics";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}');
  $overrides["views_view.open_atrium_discussions.display|replies|display_options|allow"]["DELETED"] = TRUE;
  $overrides["views_view.open_atrium_discussions.display|replies|display_options|defaults|empty"] = FALSE;
  $overrides["views_view.open_atrium_discussions.display|replies|display_options|defaults|filter_groups"] = FALSE;
  $overrides["views_view.open_atrium_discussions.display|replies|display_options|defaults|filters"] = FALSE;
  $overrides["views_view.open_atrium_discussions.display|replies|display_options|defaults|row_options"] = FALSE;
  $overrides["views_view.open_atrium_discussions.display|replies|display_options|defaults|row_plugin"] = FALSE;
  $overrides["views_view.open_atrium_discussions.display|replies|display_options|defaults|style_options"] = FALSE;
  $overrides["views_view.open_atrium_discussions.display|replies|display_options|defaults|style_plugin"] = FALSE;
  $overrides["views_view.open_atrium_discussions.display|replies|display_options|filters"] = array(
    'type' => array(
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'value' => array(
        'oa_discussion_post' => 'oa_discussion_post',
      ),
      'group' => 1,
    ),
  );
  $overrides["views_view.open_atrium_discussions.display|replies|display_options|row_options"] = array(
    'inline' => array(
      'counter' => 'counter',
      'field_oa_media' => 'field_oa_media',
    ),
  );
  $overrides["views_view.open_atrium_discussions.display|replies|display_options|row_plugin"] = 'fields';
  $overrides["views_view.open_atrium_discussions.display|replies|display_options|style_plugin"] = 'default';
  $overrides["views_view.open_atrium_discussions.display|space_discussion_topics"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:21:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:14:{s:5:"title";b:0;s:8:"group_by";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:5:"empty";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:13:"Latest Topics";s:19:"display_description";s:50:"Shows the topics inside an space and its subspaces";s:8:"group_by";b:1;s:5:"pager";a:2:{s:4:"type";s:9:"load_more";s:7:"options";a:4:{s:14:"items_per_page";s:2:"20";s:6:"offset";s:1:"0";s:2:"id";s:1:"1";s:8:"quantity";s:1:"9";}}s:12:"style_plugin";s:4:"list";s:13:"style_options";a:5:{s:8:"grouping";a:1:{i:0;a:3:{s:5:"field";s:11:"last_date_1";s:8:"rendered";i:1;s:14:"rendered_strip";i:0;}}s:17:"default_row_class";b:0;s:17:"row_class_special";b:0;s:5:"class";s:13:"group-content";s:13:"wrapper_class";s:12:"group-header";}s:10:"row_plugin";s:6:"fields";s:11:"row_options";a:1:{s:6:"inline";a:2:{s:7:"counter";s:7:"counter";s:14:"field_oa_media";s:14:"field_oa_media";}}s:5:"empty";a:1:{s:4:"area";a:7:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:5:"label";s:19:"No discussion found";s:5:"empty";b:1;s:7:"content";s:57:"<div class="no-results-found">No discussions found.</div>";s:6:"format";s:21:"panopoly_wysiwyg_text";}}s:13:"relationships";a:3:{s:19:"oa_parent_target_id";a:4:{s:2:"id";s:19:"oa_parent_target_id";s:5:"table";s:20:"field_data_oa_parent";s:5:"field";s:19:"oa_parent_target_id";s:7:"ui_name";s:11:"Parent post";}s:22:"reverse_oa_parent_node";a:5:{s:2:"id";s:22:"reverse_oa_parent_node";s:5:"table";s:4:"node";s:5:"field";s:22:"reverse_oa_parent_node";s:7:"ui_name";s:12:"Post replies";s:5:"label";s:7:"Replies";}s:3:"uid";a:3:{s:2:"id";s:3:"uid";s:5:"table";s:4:"node";s:5:"field";s:3:"uid";}}s:6:"fields";a:11:{s:3:"nid";a:7:{s:2:"id";s:3:"nid";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"title";a:7:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"nid_2";a:10:{s:2:"id";s:5:"nid_2";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:5:"count";s:7:"ui_name";s:11:"Reply Count";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:13:"timestamp_new";a:9:{s:2:"id";s:13:"timestamp_new";s:5:"table";s:7:"history";s:5:"field";s:13:"timestamp_new";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"sum";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:17:"timestamp_updated";a:9:{s:2:"id";s:17:"timestamp_updated";s:5:"table";s:7:"history";s:5:"field";s:17:"timestamp_updated";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"sum";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"nid_3";a:10:{s:2:"id";s:5:"nid_3";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:7:"ui_name";s:10:"Last Reply";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:9:"last_date";a:11:{s:2:"id";s:9:"last_date";s:5:"table";s:4:"node";s:5:"field";s:9:"last_date";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:11:"date_format";s:7:"oa_date";s:7:"oa_date";s:7:"oa_date";}s:4:"name";a:8:{s:2:"id";s:4:"name";s:5:"table";s:5:"users";s:5:"field";s:4:"name";s:12:"relationship";s:3:"uid";s:5:"label";s:0:"";s:12:"element_type";s:4:"span";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:18:"field_user_picture";a:11:{s:2:"id";s:18:"field_user_picture";s:5:"table";s:29:"field_data_field_user_picture";s:5:"field";s:18:"field_user_picture";s:12:"relationship";s:3:"uid";s:5:"label";s:0:"";s:12:"element_type";s:4:"span";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:17:"click_sort_column";s:3:"fid";s:8:"settings";a:2:{s:11:"image_style";s:18:"oa_small_thumbnail";s:10:"image_link";s:0:"";}s:12:"group_column";s:9:"entity_id";}s:11:"last_date_1";a:11:{s:2:"id";s:11:"last_date_1";s:5:"table";s:4:"node";s:5:"field";s:9:"last_date";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:11:"date_format";s:7:"oa_date";s:7:"oa_date";s:7:"oa_date";}s:12:"og_group_ref";a:7:{s:2:"id";s:12:"og_group_ref";s:5:"table";s:13:"og_membership";s:5:"field";s:12:"og_group_ref";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:8:"settings";a:1:{s:4:"link";i:0;}s:12:"group_column";s:9:"entity_id";}}s:5:"sorts";a:1:{s:7:"changed";a:5:{s:2:"id";s:7:"changed";s:5:"table";s:4:"node";s:5:"field";s:7:"changed";s:10:"group_type";s:3:"max";s:5:"order";s:4:"DESC";}}s:9:"arguments";a:1:{s:3:"tid";a:11:{s:2:"id";s:3:"tid";s:5:"table";s:14:"taxonomy_index";s:5:"field";s:3:"tid";s:14:"default_action";s:7:"default";s:21:"default_argument_type";s:3:"raw";s:24:"default_argument_options";a:2:{s:5:"index";s:1:"1";s:9:"use_alias";b:1;}s:7:"summary";a:2:{s:17:"number_of_records";s:1:"0";s:6:"format";s:15:"default_summary";}s:15:"summary_options";a:1:{s:14:"items_per_page";s:2:"25";}s:18:"specify_validation";b:1;s:8:"validate";a:2:{s:4:"type";s:13:"taxonomy_term";s:4:"fail";s:6:"ignore";}s:16:"validate_options";a:3:{s:12:"vocabularies";a:4:{s:18:"corporate_subareas";s:18:"corporate_subareas";s:13:"data_subareas";s:13:"data_subareas";s:15:"people_subareas";s:15:"people_subareas";s:16:"product_subareas";s:16:"product_subareas";}s:4:"type";s:7:"convert";s:9:"transform";b:1;}}}s:7:"filters";a:4:{s:19:"oa_parent_target_id";a:6:{s:2:"id";s:19:"oa_parent_target_id";s:5:"table";s:20:"field_data_oa_parent";s:5:"field";s:19:"oa_parent_target_id";s:7:"ui_name";s:14:"Post is parent";s:8:"operator";s:5:"empty";s:5:"group";i:1;}s:4:"type";a:7:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:7:"ui_name";s:28:"Content is a discussion post";s:5:"value";a:1:{s:18:"oa_discussion_post";s:18:"oa_discussion_post";}s:5:"group";i:1;s:6:"expose";a:5:{s:11:"operator_id";s:7:"type_op";s:5:"label";s:4:"Type";s:8:"operator";s:7:"type_op";s:10:"identifier";s:4:"type";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}s:22:"og_group_ref_target_id";a:7:{s:2:"id";s:22:"og_group_ref_target_id";s:5:"table";s:13:"og_membership";s:5:"field";s:22:"og_group_ref_target_id";s:7:"ui_name";s:21:"Post belongs to space";s:5:"value";a:4:{i:126;s:3:"126";i:127;s:3:"127";i:128;s:3:"128";i:129;s:3:"129";}s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:25:"og_group_ref_target_id_op";s:5:"label";s:15:"Groups audience";s:8:"operator";s:25:"og_group_ref_target_id_op";s:10:"identifier";s:22:"og_group_ref_target_id";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}s:6:"status";a:5:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:7:"ui_name";s:17:"Post is published";s:5:"value";s:1:"1";}}s:13:"pane_category";a:2:{s:4:"name";s:13:"The Good Data";s:6:"weight";s:1:"0";}s:5:"allow";a:10:{s:9:"use_pager";s:9:"use_pager";s:14:"items_per_page";s:14:"items_per_page";s:6:"offset";s:6:"offset";s:12:"link_to_view";i:0;s:9:"more_link";i:0;s:13:"path_override";i:0;s:14:"title_override";s:14:"title_override";s:12:"exposed_form";s:12:"exposed_form";s:22:"exposed_form_configure";i:0;s:15:"fields_override";i:0;}s:22:"exposed_form_overrides";a:1:{s:7:"filters";a:1:{s:22:"og_group_ref_target_id";s:0:"";}}s:14:"argument_input";a:1:{s:3:"tid";a:6:{s:4:"type";s:5:"panel";s:7:"context";s:29:"entity:command_button.changed";s:16:"context_optional";i:0;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:29:"Content: Has taxonomy term ID";}}s:19:"inherit_panels_path";s:1:"1";}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:23:"space_discussion_topics";s:13:"display_title";s:23:"Space Discussion Topics";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}');
  $overrides["views_view.open_atrium_discussions.display|space_popular_discussion_topics"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:21:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:14:{s:5:"title";b:0;s:8:"group_by";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:5:"empty";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:14:"Popular Topics";s:19:"display_description";s:91:"Shows the topics inside an space and its subspaces sorted by popularity (number of replies)";s:8:"group_by";b:1;s:5:"pager";a:2:{s:4:"type";s:9:"load_more";s:7:"options";a:4:{s:14:"items_per_page";s:2:"20";s:6:"offset";s:1:"0";s:2:"id";s:1:"1";s:8:"quantity";s:1:"9";}}s:12:"style_plugin";s:4:"list";s:13:"style_options";a:4:{s:17:"default_row_class";b:0;s:17:"row_class_special";b:0;s:5:"class";s:13:"group-content";s:13:"wrapper_class";s:12:"group-header";}s:10:"row_plugin";s:6:"fields";s:11:"row_options";a:1:{s:6:"inline";a:2:{s:7:"counter";s:7:"counter";s:14:"field_oa_media";s:14:"field_oa_media";}}s:5:"empty";a:1:{s:4:"area";a:7:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:5:"label";s:19:"No discussion found";s:5:"empty";b:1;s:7:"content";s:57:"<div class="no-results-found">No discussions found.</div>";s:6:"format";s:21:"panopoly_wysiwyg_text";}}s:13:"relationships";a:3:{s:19:"oa_parent_target_id";a:4:{s:2:"id";s:19:"oa_parent_target_id";s:5:"table";s:20:"field_data_oa_parent";s:5:"field";s:19:"oa_parent_target_id";s:7:"ui_name";s:11:"Parent post";}s:22:"reverse_oa_parent_node";a:5:{s:2:"id";s:22:"reverse_oa_parent_node";s:5:"table";s:4:"node";s:5:"field";s:22:"reverse_oa_parent_node";s:7:"ui_name";s:12:"Post replies";s:5:"label";s:7:"Replies";}s:3:"uid";a:3:{s:2:"id";s:3:"uid";s:5:"table";s:4:"node";s:5:"field";s:3:"uid";}}s:6:"fields";a:11:{s:3:"nid";a:7:{s:2:"id";s:3:"nid";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"title";a:7:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"nid_2";a:10:{s:2:"id";s:5:"nid_2";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:5:"count";s:7:"ui_name";s:11:"Reply Count";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:13:"timestamp_new";a:9:{s:2:"id";s:13:"timestamp_new";s:5:"table";s:7:"history";s:5:"field";s:13:"timestamp_new";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"sum";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:17:"timestamp_updated";a:9:{s:2:"id";s:17:"timestamp_updated";s:5:"table";s:7:"history";s:5:"field";s:17:"timestamp_updated";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"sum";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:5:"nid_3";a:10:{s:2:"id";s:5:"nid_3";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:7:"ui_name";s:10:"Last Reply";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:9:"last_date";a:11:{s:2:"id";s:9:"last_date";s:5:"table";s:4:"node";s:5:"field";s:9:"last_date";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:11:"date_format";s:7:"oa_date";s:7:"oa_date";s:1:"0";}s:4:"name";a:8:{s:2:"id";s:4:"name";s:5:"table";s:5:"users";s:5:"field";s:4:"name";s:12:"relationship";s:3:"uid";s:5:"label";s:0:"";s:12:"element_type";s:4:"span";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:18:"field_user_picture";a:11:{s:2:"id";s:18:"field_user_picture";s:5:"table";s:29:"field_data_field_user_picture";s:5:"field";s:18:"field_user_picture";s:12:"relationship";s:3:"uid";s:5:"label";s:0:"";s:12:"element_type";s:4:"span";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:17:"click_sort_column";s:3:"fid";s:8:"settings";a:2:{s:11:"image_style";s:18:"oa_small_thumbnail";s:10:"image_link";s:0:"";}s:12:"group_column";s:9:"entity_id";}s:11:"last_date_1";a:11:{s:2:"id";s:11:"last_date_1";s:5:"table";s:4:"node";s:5:"field";s:9:"last_date";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:3:"max";s:5:"label";s:0:"";s:12:"element_type";s:1:"0";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:11:"date_format";s:7:"oa_date";s:7:"oa_date";s:7:"oa_date";}s:12:"og_group_ref";a:5:{s:2:"id";s:12:"og_group_ref";s:5:"table";s:13:"og_membership";s:5:"field";s:12:"og_group_ref";s:8:"settings";a:1:{s:4:"link";i:0;}s:12:"group_column";s:9:"entity_id";}}s:5:"sorts";a:2:{s:3:"nid";a:7:{s:2:"id";s:3:"nid";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:12:"relationship";s:22:"reverse_oa_parent_node";s:10:"group_type";s:5:"count";s:7:"ui_name";s:11:"Reply count";s:5:"order";s:4:"DESC";}s:7:"changed";a:5:{s:2:"id";s:7:"changed";s:5:"table";s:4:"node";s:5:"field";s:7:"changed";s:10:"group_type";s:3:"max";s:5:"order";s:4:"DESC";}}s:9:"arguments";a:1:{s:3:"tid";a:11:{s:2:"id";s:3:"tid";s:5:"table";s:14:"taxonomy_index";s:5:"field";s:3:"tid";s:14:"default_action";s:7:"default";s:21:"default_argument_type";s:3:"raw";s:24:"default_argument_options";a:2:{s:5:"index";s:1:"1";s:9:"use_alias";b:1;}s:7:"summary";a:2:{s:17:"number_of_records";s:1:"0";s:6:"format";s:15:"default_summary";}s:15:"summary_options";a:1:{s:14:"items_per_page";s:2:"25";}s:18:"specify_validation";b:1;s:8:"validate";a:2:{s:4:"type";s:13:"taxonomy_term";s:4:"fail";s:6:"ignore";}s:16:"validate_options";a:3:{s:12:"vocabularies";a:4:{s:18:"corporate_subareas";s:18:"corporate_subareas";s:13:"data_subareas";s:13:"data_subareas";s:15:"people_subareas";s:15:"people_subareas";s:16:"product_subareas";s:16:"product_subareas";}s:4:"type";s:7:"convert";s:9:"transform";b:1;}}}s:7:"filters";a:4:{s:19:"oa_parent_target_id";a:6:{s:2:"id";s:19:"oa_parent_target_id";s:5:"table";s:20:"field_data_oa_parent";s:5:"field";s:19:"oa_parent_target_id";s:7:"ui_name";s:14:"Post is parent";s:8:"operator";s:5:"empty";s:5:"group";i:1;}s:4:"type";a:7:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:7:"ui_name";s:28:"Content is a discussion post";s:5:"value";a:1:{s:18:"oa_discussion_post";s:18:"oa_discussion_post";}s:5:"group";i:1;s:6:"expose";a:5:{s:11:"operator_id";s:7:"type_op";s:5:"label";s:4:"Type";s:8:"operator";s:7:"type_op";s:10:"identifier";s:4:"type";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}s:22:"og_group_ref_target_id";a:7:{s:2:"id";s:22:"og_group_ref_target_id";s:5:"table";s:13:"og_membership";s:5:"field";s:22:"og_group_ref_target_id";s:7:"ui_name";s:21:"Post belongs to space";s:5:"value";a:4:{i:126;s:3:"126";i:127;s:3:"127";i:128;s:3:"128";i:129;s:3:"129";}s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:25:"og_group_ref_target_id_op";s:5:"label";s:15:"Groups audience";s:8:"operator";s:25:"og_group_ref_target_id_op";s:10:"identifier";s:22:"og_group_ref_target_id";s:14:"remember_roles";a:4:{i:2;s:1:"2";i:1;i:0;i:3;i:0;i:4;i:0;}}}s:6:"status";a:5:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:7:"ui_name";s:17:"Post is published";s:5:"value";s:1:"1";}}s:13:"pane_category";a:2:{s:4:"name";s:13:"The Good Data";s:6:"weight";s:1:"1";}s:5:"allow";a:10:{s:9:"use_pager";s:9:"use_pager";s:14:"items_per_page";s:14:"items_per_page";s:6:"offset";s:6:"offset";s:12:"link_to_view";i:0;s:9:"more_link";i:0;s:13:"path_override";i:0;s:14:"title_override";s:14:"title_override";s:12:"exposed_form";s:12:"exposed_form";s:22:"exposed_form_configure";i:0;s:15:"fields_override";i:0;}s:22:"exposed_form_overrides";a:1:{s:7:"filters";a:1:{s:22:"og_group_ref_target_id";s:0:"";}}s:14:"argument_input";a:1:{s:3:"tid";a:6:{s:4:"type";s:5:"panel";s:7:"context";s:29:"entity:command_button.changed";s:16:"context_optional";i:0;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:29:"Content: Has taxonomy term ID";}}s:19:"inherit_panels_path";s:1:"1";}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:31:"space_popular_discussion_topics";s:13:"display_title";s:31:"Space Popular Discussion Topics";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}');

 return $overrides;
}
