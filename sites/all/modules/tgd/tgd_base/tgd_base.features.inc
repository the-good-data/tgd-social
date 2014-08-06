<?php
/**
 * @file
 * tgd_base.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function tgd_base_field_default_field_instances_alter(&$data) {
  if (isset($data['node-oa_group-field_featured_image'])) {
    $data['node-oa_group-field_featured_image']['widget']['settings']['manualcrop_crop_info'] = TRUE; /* WAS: '' */
    $data['node-oa_group-field_featured_image']['widget']['settings']['manualcrop_default_crop_area'] = TRUE; /* WAS: '' */
    $data['node-oa_group-field_featured_image']['widget']['settings']['manualcrop_enable'] = FALSE; /* WAS: '' */
    $data['node-oa_group-field_featured_image']['widget']['settings']['manualcrop_inline_crop'] = FALSE; /* WAS: '' */
    $data['node-oa_group-field_featured_image']['widget']['settings']['manualcrop_instant_crop'] = FALSE; /* WAS: '' */
    $data['node-oa_group-field_featured_image']['widget']['settings']['manualcrop_instant_preview'] = TRUE; /* WAS: '' */
    $data['node-oa_group-field_featured_image']['widget']['settings']['manualcrop_keyboard'] = TRUE; /* WAS: '' */
    $data['node-oa_group-field_featured_image']['widget']['settings']['manualcrop_maximize_default_crop_area'] = FALSE; /* WAS: '' */
    $data['node-oa_group-field_featured_image']['widget']['settings']['manualcrop_require_cropping'] = array(); /* WAS: '' */
    $data['node-oa_group-field_featured_image']['widget']['settings']['manualcrop_styles_list'] = array(); /* WAS: '' */
    $data['node-oa_group-field_featured_image']['widget']['settings']['manualcrop_styles_mode'] = 'include'; /* WAS: '' */
    $data['node-oa_group-field_featured_image']['widget']['settings']['manualcrop_thumblist'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-oa_space-field_oa_banner'])) {
    $data['node-oa_space-field_oa_banner']['widget']['settings']['manualcrop_crop_info'] = TRUE; /* WAS: '' */
    $data['node-oa_space-field_oa_banner']['widget']['settings']['manualcrop_default_crop_area'] = TRUE; /* WAS: '' */
    $data['node-oa_space-field_oa_banner']['widget']['settings']['manualcrop_enable'] = FALSE; /* WAS: '' */
    $data['node-oa_space-field_oa_banner']['widget']['settings']['manualcrop_inline_crop'] = FALSE; /* WAS: '' */
    $data['node-oa_space-field_oa_banner']['widget']['settings']['manualcrop_instant_crop'] = FALSE; /* WAS: '' */
    $data['node-oa_space-field_oa_banner']['widget']['settings']['manualcrop_instant_preview'] = TRUE; /* WAS: '' */
    $data['node-oa_space-field_oa_banner']['widget']['settings']['manualcrop_keyboard'] = TRUE; /* WAS: '' */
    $data['node-oa_space-field_oa_banner']['widget']['settings']['manualcrop_maximize_default_crop_area'] = FALSE; /* WAS: '' */
    $data['node-oa_space-field_oa_banner']['widget']['settings']['manualcrop_require_cropping'] = array(); /* WAS: '' */
    $data['node-oa_space-field_oa_banner']['widget']['settings']['manualcrop_styles_list'] = array(); /* WAS: '' */
    $data['node-oa_space-field_oa_banner']['widget']['settings']['manualcrop_styles_mode'] = 'include'; /* WAS: '' */
    $data['node-oa_space-field_oa_banner']['widget']['settings']['manualcrop_thumblist'] = FALSE; /* WAS: '' */
  }
}
