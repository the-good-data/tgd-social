<?php
/**
 * @file
 * tgd_base.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function tgd_base_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-oa_group-field_featured_image.widget|settings|manualcrop_crop_info"] = TRUE;
  $overrides["field_instance.node-oa_group-field_featured_image.widget|settings|manualcrop_default_crop_area"] = TRUE;
  $overrides["field_instance.node-oa_group-field_featured_image.widget|settings|manualcrop_enable"] = FALSE;
  $overrides["field_instance.node-oa_group-field_featured_image.widget|settings|manualcrop_inline_crop"] = FALSE;
  $overrides["field_instance.node-oa_group-field_featured_image.widget|settings|manualcrop_instant_crop"] = FALSE;
  $overrides["field_instance.node-oa_group-field_featured_image.widget|settings|manualcrop_instant_preview"] = TRUE;
  $overrides["field_instance.node-oa_group-field_featured_image.widget|settings|manualcrop_keyboard"] = TRUE;
  $overrides["field_instance.node-oa_group-field_featured_image.widget|settings|manualcrop_maximize_default_crop_area"] = FALSE;
  $overrides["field_instance.node-oa_group-field_featured_image.widget|settings|manualcrop_require_cropping"] = array();
  $overrides["field_instance.node-oa_group-field_featured_image.widget|settings|manualcrop_styles_list"] = array();
  $overrides["field_instance.node-oa_group-field_featured_image.widget|settings|manualcrop_styles_mode"] = 'include';
  $overrides["field_instance.node-oa_group-field_featured_image.widget|settings|manualcrop_thumblist"] = FALSE;
  $overrides["field_instance.node-oa_space-field_oa_banner.widget|settings|manualcrop_crop_info"] = TRUE;
  $overrides["field_instance.node-oa_space-field_oa_banner.widget|settings|manualcrop_default_crop_area"] = TRUE;
  $overrides["field_instance.node-oa_space-field_oa_banner.widget|settings|manualcrop_enable"] = FALSE;
  $overrides["field_instance.node-oa_space-field_oa_banner.widget|settings|manualcrop_inline_crop"] = FALSE;
  $overrides["field_instance.node-oa_space-field_oa_banner.widget|settings|manualcrop_instant_crop"] = FALSE;
  $overrides["field_instance.node-oa_space-field_oa_banner.widget|settings|manualcrop_instant_preview"] = TRUE;
  $overrides["field_instance.node-oa_space-field_oa_banner.widget|settings|manualcrop_keyboard"] = TRUE;
  $overrides["field_instance.node-oa_space-field_oa_banner.widget|settings|manualcrop_maximize_default_crop_area"] = FALSE;
  $overrides["field_instance.node-oa_space-field_oa_banner.widget|settings|manualcrop_require_cropping"] = array();
  $overrides["field_instance.node-oa_space-field_oa_banner.widget|settings|manualcrop_styles_list"] = array();
  $overrides["field_instance.node-oa_space-field_oa_banner.widget|settings|manualcrop_styles_mode"] = 'include';
  $overrides["field_instance.node-oa_space-field_oa_banner.widget|settings|manualcrop_thumblist"] = FALSE;

 return $overrides;
}
