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
  $overrides["page_manager_handlers.node_edit_panel_context_5.conf|display|content|new-f14b4454-0050-4181-8185-5dfb34996c97|access|plugins"] = array();
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
  $overrides["panelizer_defaults.user:user:default.display|content|new-23b1f4f1-cda8-42ca-880a-afc2ae92f3e9"]["DELETED"] = TRUE;
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
  $overrides["panelizer_defaults.user:user:default.display|layout"] = 'selby_flipped';
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
  $overrides["variable.panelizer_defaults_node_panopoly_page.value|view modes|search_result"] = array(
    'status' => 0,
    'default' => 0,
    'choice' => 0,
  );

 return $overrides;
}
