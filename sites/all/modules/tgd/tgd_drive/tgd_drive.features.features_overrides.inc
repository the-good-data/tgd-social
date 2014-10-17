<?php
/**
 * @file
 * tgd_drive.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function tgd_drive_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

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
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|panels|contentmain|1"] = 'new-513c9034-55a9-49db-b917-5d4b027a2ace';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|panels|contentmain|2"] = 'new-a811ab4b-b391-4bac-aee2-f0b6bdb5a65d';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|panels|contentmain|3"] = 'new-32c308fc-ae57-43df-a4fa-8667a747ea6f';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|panels|contentmain|4"] = 'new-fd50a4cf-8298-4584-8504-b21e0e215e78';
  $overrides["panelizer_defaults.node:oa_wiki_page:default.display|panels|contentmain|5"] = 'new-e46086d2-3bda-405b-b9b1-6d44d79ea78e';

  // Exported overrides for: variable
  $overrides["variable.field_bundle_settings_node__oa_wiki_page.value|extra_fields|display|tgd_drive_file"] = array(
    'default' => array(
      'weight' => 0,
      'visible' => TRUE,
    ),
  );
  $overrides["variable.field_bundle_settings_node__oa_wiki_page.value|extra_fields|form|tgd_drive_file"] = array(
    'weight' => -3,
  );

 return $overrides;
}
