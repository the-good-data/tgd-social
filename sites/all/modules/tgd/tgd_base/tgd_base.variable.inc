<?php
/**
 * @file
 * Variable definitions for TGD
 */

/**
 * Implements hook_variable_info().
 */
function tgd_home_variable_info($options) {
  $variables['tgd_webapp_base_url'] = array(
    'title' => t('Web App URL', array(), $options),
    'description' => t('URL for the TGD WebApp.', array(), $options),
    'type' => 'string',
    'default' => 'https://www.thegooddata.org/',
    'group' => 'tgd',
  );

  return $variables;
}

/**
 * Implements hook_variable_group_info().
 */
function tgd_base_variable_group_info() {
  $groups['tgd'] = array(
    'title' => 'Mixed Options',
    'access' => 'administer site configuration',
    'path' => array('admin/config/tgd/settings'),
  );
  return $groups;
}