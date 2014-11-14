<?php
/**
 * @file
 * tgd_drive.features.inc
 */

/**
 * Implements hook_default_command_button().
 */
function tgd_drive_default_command_button() {
  $items = array();
  $items['tgd_create_google_doc'] = entity_import('command_button', '{
    "bundle" : "button",
    "name" : "tgd_create_google_doc",
    "title" : "TGD Create Google Doc",
    "created" : "1415902029",
    "changed" : "1415954718",
    "language" : "und",
    "field_command_link" : { "und" : [
        {
          "url" : "node\\/[site:og-context--node:nid]\\/og-drive-content",
          "title" : "Create Google Doc",
          "attributes" : []
        }
      ]
    },
    "field_link_icon" : []
  }');
  return $items;
}
