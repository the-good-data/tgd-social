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
  $overrides["field_instance.node-oa_worktracker_task-field_oa_worktracker_assigned_to.widget|weight"] = 2;
  $overrides["field_instance.node-oa_worktracker_task-field_oa_worktracker_priority.widget|weight"] = 4;
  $overrides["field_instance.node-oa_worktracker_task-field_oa_worktracker_task_status.widget|weight"] = 3;
  $overrides["field_instance.node-oa_worktracker_task-field_oa_worktracker_task_type.widget|weight"] = 5;
  $overrides["field_instance.node-oa_worktracker_task-oa_section_ref.widget|weight"] = 1;

  // Exported overrides for: file_display
  $overrides["file_display.document__preview__file_field_file_default.status"] = FALSE;
  $overrides["file_display.document__preview__file_field_file_default.weight"] = 0;
  $overrides["file_display.video__default__media_vimeo_image.settings|image_style"] = 'panopoly_image_video';
  $overrides["file_display.video__default__media_vimeo_image.status"] = TRUE;
  $overrides["file_display.video__default__media_vimeo_video.settings|protocol"] = '//';
  $overrides["file_display.video__default__media_vimeo_video.status"] = TRUE;
  $overrides["file_display.video__media_large__media_vimeo_image.status"] = TRUE;
  $overrides["file_display.video__media_large__media_vimeo_video.status"] = TRUE;
  $overrides["file_display.video__media_original__media_vimeo_image.status"] = TRUE;
  $overrides["file_display.video__media_original__media_vimeo_video.status"] = TRUE;
  $overrides["file_display.video__media_preview__media_vimeo_image.status"] = TRUE;
  $overrides["file_display.video__preview__media_vimeo_image.settings|image_style"] = 'panopoly_image_thumbnail';
  $overrides["file_display.video__preview__media_vimeo_image.status"] = TRUE;
  $overrides["file_display.video__teaser__media_vimeo_image.settings|image_style"] = 'panopoly_image_video';
  $overrides["file_display.video__teaser__media_vimeo_image.status"] = TRUE;
  $overrides["file_display.video__teaser__media_vimeo_video.status"] = TRUE;

  // Exported overrides for: file_type
  $overrides["file_type.audio.disabled"] = FALSE;
  $overrides["file_type.document.disabled"] = FALSE;
  $overrides["file_type.image.disabled"] = FALSE;
  $overrides["file_type.video.disabled"] = FALSE;

  // Exported overrides for: variable
  $overrides["variable.comment_oa_wiki_page.value"] = 2;
  $overrides["variable.node_options_oa_worktracker_task.value|1"]["DELETED"] = TRUE;

 return $overrides;
}
