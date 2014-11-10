<?php
/**
 * @file
 * tgd_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tgd_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function tgd_content_field_default_field_instances_alter(&$data) {
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
function tgd_content_file_default_displays_alter(&$data) {
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
function tgd_content_file_default_types_alter(&$data) {
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

/**
 * Implements hook_strongarm_alter().
 */
function tgd_content_strongarm_alter(&$data) {
  if (isset($data['comment_oa_wiki_page'])) {
    $data['comment_oa_wiki_page']->value = 2; /* WAS: 0 */
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function tgd_content_flag_default_flags() {
  $flags = array();
  // Exported flag: "Bookmarks".
  $flags['bookmarks'] = array(
    'content_type' => 'node',
    'title' => 'Bookmarks',
    'global' => 0,
    'types' => array(
      0 => 'article',
    ),
    'flag_short' => 'Bookmark this',
    'flag_long' => 'Add this post to your bookmarks',
    'flag_message' => 'This post has been added to your bookmarks',
    'unflag_short' => 'Unbookmark this',
    'unflag_long' => 'Remove this post from your bookmarks',
    'unflag_message' => 'This post has been removed from your bookmarks',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
      ),
      'unflag' => array(
        0 => 2,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'tgd_content',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}
