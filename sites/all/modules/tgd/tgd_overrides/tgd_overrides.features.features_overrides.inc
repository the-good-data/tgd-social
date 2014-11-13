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

  // Exported overrides for: panels_mini
  $overrides["panels_mini.default_section_sidebar.display|content|new-e88f722e-09b5-451c-b694-f6b79c2d8554|shown"] = FALSE;

  // Exported overrides for: variable
  $overrides["variable.panelizer_defaults_node_panopoly_page.value|view modes|search_result"] = array(
    'status' => 0,
    'default' => 0,
    'choice' => 0,
  );

  // Exported overrides for: field_instance
  $overrides["field_instance.node-oa_wiki_page-field_oa_media.default_value"]["DELETED"] = TRUE;
  $overrides["field_instance.node-oa_wiki_page-oa_other_spaces_ref.node-oa_wiki_page-oa_other_spaces_ref"]["DELETED"] = TRUE;
  $overrides["field_instance.node-oa_wiki_page-og_vocabulary.display|default|label"] = 'inline';
  $overrides["field_instance.node-oa_wiki_page-og_vocabulary.display|default|settings|concatenate"] = 1;

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

  // Exported overrides for: variable
  $overrides["variable.comment_oa_wiki_page.value"] = 2;

  // Exported overrides for: variable
  $overrides["variable.contextual_tabs_extract.value"] = 'user*:Edit|Edit profile,icon-pencil
  user*:Notifications
  node/*:Google drive content|Google drive
  node/*/clone/confirm:View|Cancel,icon-remove
  node/*/edit:View|Cancel,icon-remove
  View
  Edit,icon-pencil
  Members,icon-user';

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-32c308fc-ae57-43df-a4fa-8667a747ea6f|position"] = 3;
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-513c9034-55a9-49db-b917-5d4b027a2ace"] = (object) array(
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
    );
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-a811ab4b-b391-4bac-aee2-f0b6bdb5a65d|position"] = 2;
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-e46086d2-3bda-405b-b9b1-6d44d79ea78e|position"] = 5;
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|content|new-fd50a4cf-8298-4584-8504-b21e0e215e78|position"] = 4;
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|panels|contentmain|5"] = 'new-513c9034-55a9-49db-b917-5d4b027a2ace';

 return $overrides;
}
