<?php

/**
 * @file
 * Theme functions
 */

/**
 * Implements template_preprocess_page().
 */
function tgd_oa_radix_preprocess_page(&$vars) {
  // Rework search_form to our liking.
  $vars['search_form'] = '';
  if (module_exists('search') && user_access('search content')) {
    $search_box_form = drupal_get_form('search_form');
    $search_box_form['basic']['keys']['#title'] = '';
    $search_box_form['basic']['keys']['#attributes'] = array('placeholder' => 'Search');
    $search_box_form['basic']['keys']['#attributes']['class'][] = 'search-query';
    $search_box_form['basic']['submit']['#value'] = t('Search');
    $search_box_form['#attributes']['class'][] = 'navbar-form';
    $search_box_form['#attributes']['class'][] = 'pull-right';
    $search_box = drupal_render($search_box_form);
    $vars['search_form'] = (user_access('search content')) ? $search_box : NULL;
  }

  // Add user_badge to header.
  $vars['user_badge'] = '';
  if (module_exists('oa_dashboard')) {
    $user_badge = module_invoke('oa_dashboard', 'block_view', 'oa_user_badge');
    $vars['user_badge'] = $user_badge['content'];
  }
  $toolbar = panels_mini_block_view('tgd_toolbar_panel');
  $vars['oa_toolbar_panel'] = isset($toolbar) ? $toolbar['content'] : '';
  $footer = panels_mini_block_view('tgd_footer_panel');
  $vars['oa_footer_panel'] = isset($footer) ? $footer['content'] : '';

  $banner = ctools_content_render('oa_space_banner', '', array(
    'banner_position' => 2
  ));
  if (!empty($banner->content)) {
    $vars['oa_banner'] = $banner->content;
  }
  $vars['oa_space_menu'] = '';
  $space_id = oa_core_get_space_context();
  if (variable_get('oa_space_menu_' . $space_id, TRUE)) {
    $space_menu = ctools_content_render('oa_space_menu', '', array(), array());
    if (!empty($space_menu->content)) {
      $vars['oa_space_menu'] = $space_menu->content;
    }
  }
}

