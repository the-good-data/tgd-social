<?php
/**
 * @file
 * tgd_notifications.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function tgd_notifications_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'message_subscribe_email'
  $field_bases['message_subscribe_email'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'user',
    ),
    'field_name' => 'message_subscribe_email',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Don\'t email',
        1 => 'Email',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'message_subscribe_email_freq'
  $field_bases['message_subscribe_email_freq'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'user',
    ),
    'field_name' => 'message_subscribe_email_freq',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(),
      'allowed_values_function' => 'message_subscribe_email_frequency_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'message_text'
  $field_bases['message_text'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'message_type',
    ),
    'field_name' => 'message_text',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'message_text' => TRUE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  return $field_bases;
}
