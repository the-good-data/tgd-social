<?php
/**
 * @file
 * tgd_staging.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tgd_staging_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
