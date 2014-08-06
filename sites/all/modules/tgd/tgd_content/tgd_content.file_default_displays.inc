<?php
/**
 * @file
 * tgd_content.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function tgd_content_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__default__file_field_file_audio';
  $file_display->weight = 50;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['audio__default__file_field_file_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__preview__file_field_file_default';
  $file_display->weight = 50;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'thumbnail',
  );
  $export['audio__preview__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'audio__teaser__file_field_file_audio';
  $file_display->weight = 50;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'medium',
  );
  $export['audio__teaser__file_field_file_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_field_image';
  $file_display->weight = 50;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'medium',
  );
  $export['image__teaser__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_file_video';
  $file_display->weight = 50;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__default__file_field_file_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__teaser__file_field_file_video';
  $file_display->weight = 50;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'medium',
  );
  $export['video__teaser__file_field_file_video'] = $file_display;

  return $export;
}
