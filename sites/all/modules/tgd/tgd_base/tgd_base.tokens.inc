<?php
/**
 * TGD Base - Tokens
 */

/**
 * Implements hook_token_info().
 */
function tgd_base_token_info() {
  /*
	$types['site'] = array(
    'name' => t("Site information"),
    'description' => t("Tokens for site-wide settings and other global information."),
  );
	*/
  $info['tokens']['site']['tgd-space-path'] = array(
    'name' => t('TGD Space path'),
    'description' => t('Raw path of current space node'),
  );
  return $info;
}
/**
 * Implements hook_tokens().
 */
function tgd_base_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $url_options = array('absolute' => TRUE);
  if (isset($options['language'])) {
    $url_options['language'] = $options['language'];
  }
  if ($type == 'site') {
    foreach ($tokens as $name => $original) {
      switch ($name) {
        case 'tgd-space-path':
          if ($nid = oa_core_get_space_context()) {
          	$path = 'node/' . $nid;
          }
          else {
          	$path = '';
          }
          $replacements[$original] = $path;
          break;
      }
    }
  }
}