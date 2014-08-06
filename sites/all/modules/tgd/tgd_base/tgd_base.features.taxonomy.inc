<?php
/**
 * @file
 * tgd_base.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tgd_base_taxonomy_default_vocabularies() {
  return array(
    'corporate_subareas' => array(
      'name' => 'Corporate subareas',
      'machine_name' => 'corporate_subareas',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'data_subareas' => array(
      'name' => 'Data subareas',
      'machine_name' => 'data_subareas',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'people_subareas' => array(
      'name' => 'People subareas',
      'machine_name' => 'people_subareas',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'product_subareas' => array(
      'name' => 'Product subareas',
      'machine_name' => 'product_subareas',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
