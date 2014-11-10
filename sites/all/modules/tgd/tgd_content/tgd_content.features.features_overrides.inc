<?php
/**
 * @file
 * tgd_content.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function tgd_content_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

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

 return $overrides;
}
