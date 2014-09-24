<?php
/**
 * @file
 * tgd_staging.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tgd_staging_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'reroute_email_address';
  $strongarm->value = 'consulting+tgdpre@reyero.net';
  $export['reroute_email_address'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'reroute_email_enable';
  $strongarm->value = 1;
  $export['reroute_email_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'reroute_email_enable_message';
  $strongarm->value = 1;
  $export['reroute_email_enable_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tgd_sso_auth_token';
  $strongarm->value = '30Q880B7v39T4hB';
  $export['tgd_sso_auth_token'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tgd_sso_base_url';
  $strongarm->value = 'https://pre.thegooddata.org';
  $export['tgd_sso_base_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tgd_sso_debug_enable';
  $strongarm->value = 0;
  $export['tgd_sso_debug_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tgd_sso_local_create';
  $strongarm->value = 1;
  $export['tgd_sso_local_create'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tgd_sso_local_disable';
  $strongarm->value = 1;
  $export['tgd_sso_local_disable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tgd_sso_remote_enable';
  $strongarm->value = 1;
  $export['tgd_sso_remote_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tgd_sso_shared_cookie';
  $strongarm->value = 'PRETGDSESSID';
  $export['tgd_sso_shared_cookie'] = $strongarm;

  return $export;
}
