<?php

/**
 * @file
 * Provides the subscribe to area pane.
 */

$plugin = array(
  'title' => t('Subscribe to area'),
  'description' => t('Subscribe to post content / comments.'),
  'single' => TRUE,
  'category' => array('TGD OA', -9),
  'edit form' => 'tgd_notifications_subscribe_group_settings_form',
  'render callback' => 'tgd_notifications_subscribe_group_render',
  'required context' => new ctools_context_required(t('Node'), 'node'),
);

/**
 * Run-time rendering of the body of the block (content type)
 * See ctools_plugin_examples for more advanced info
 */
function tgd_notifications_subscribe_group_render($subtype, $conf, $args, $context = NULL) {
  global $user;
  require_once drupal_get_path('module', 'oa_core') . '/plugins/content_types/oa_core_user_spaces.inc';

	if (user_is_anonymous() || !isset($context->data)) {
    return;
  }
  $node = $context->data;

	if ($node->type == 'oa_space') {
		$message = t('Join this area to be able to post content.');
		$gid = $node->nid;
	}
  else {
  	$message = t('Join this area to be able to post comments and content.');
  	// Only show reply form if user is logged in and NOT subscribed to group.
  	$gid = $node->{OG_AUDIENCE_FIELD}[LANGUAGE_NONE][0]['target_id'];
  }

  // If not group, or user is already a member, skip.
  if (!$gid || og_is_member('node', $gid, 'user', $user)) {
    return;
  }

  $group = node_load($gid);
  $output['message']['#markup'] = '<p>' . $message . '</p>';

  $output['subscribe'] = oa_core_user_spaces_get_links($group, array('link_class' => 'btn'), $user);

  $block = new stdClass();
  $block->title = t('Join %title area', array('%title' => $group->title));
  $block->content = $output;
  return $block;
}

/**
 * Empty config form
 */
function tgd_notifications_subscribe_group_settings_form($form, &$form_state) {
  return $form;
}

/**
 * Saves changes to the widget.
 */
function tgd_notifications_subscribe_group_settings_form_submit($form, &$form_state) {
  /*
	foreach (array_keys($form_state['values']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
  */
}
