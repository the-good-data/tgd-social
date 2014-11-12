<?php
/**
 * @file
 * tgd_home.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function tgd_home_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'tgd_homepage';
  $page->task = 'page';
  $page->admin_title = 'Home Page';
  $page->admin_description = 'Site home page.';
  $page->path = 'home';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_tgd_homepage_panel_context_3';
  $handler->task = 'page';
  $handler->subtask = 'tgd_homepage';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Home',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'User',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'sutro_double';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'secondarycolumn1' => NULL,
      'secondarycolumn2' => NULL,
      'header' => NULL,
      'secondarycolumn3' => NULL,
      'footer' => NULL,
      'middle' => NULL,
      'secondcolumn1' => NULL,
      'secondcolumn2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Welcome to the Collaboration platform!';
  $display->uuid = '96db1dfc-d20c-4feb-ad0f-c69755a5da59';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c9ba65ec-a8f3-412c-9f14-de0b2d5b8d98';
    $pane->panel = 'column1';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_recent_activity-recent_activity_basic';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'type' => array(
          'oa_discussion_post' => 'oa_discussion_post',
          'oa_wiki_page' => 'oa_wiki_page',
          'oa_event' => 'oa_event',
          'poll' => 'poll',
          'oa_worktracker_task' => 'oa_worktracker_task',
        ),
        'realname' => '',
        'og_group_ref_target_id' => '129',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => 'All',
      ),
      'items_per_page' => '7',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => '<a href="product">Product</a>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array(
      'css_id' => 'product-space-pane',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c9ba65ec-a8f3-412c-9f14-de0b2d5b8d98';
    $display->content['new-c9ba65ec-a8f3-412c-9f14-de0b2d5b8d98'] = $pane;
    $display->panels['column1'][0] = 'new-c9ba65ec-a8f3-412c-9f14-de0b2d5b8d98';
    $pane = new stdClass();
    $pane->pid = 'new-fb18237e-dd67-4632-9798-67763212420a';
    $pane->panel = 'column2';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_recent_activity-recent_activity_basic';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'type' => array(
          'oa_discussion_post' => 'oa_discussion_post',
          'oa_wiki_page' => 'oa_wiki_page',
          'oa_event' => 'oa_event',
          'poll' => 'poll',
          'oa_worktracker_task' => 'oa_worktracker_task',
        ),
        'realname' => '',
        'og_group_ref_target_id' => '126',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => '',
      ),
      'items_per_page' => '7',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => '<a href="corporate">Corporate</a>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array(
      'css_id' => 'corporate-space-pane',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fb18237e-dd67-4632-9798-67763212420a';
    $display->content['new-fb18237e-dd67-4632-9798-67763212420a'] = $pane;
    $display->panels['column2'][0] = 'new-fb18237e-dd67-4632-9798-67763212420a';
    $pane = new stdClass();
    $pane->pid = 'new-a61c7bbf-fccf-4b3f-92cd-53b07a99b12a';
    $pane->panel = 'header';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'tgd-home-intro',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a61c7bbf-fccf-4b3f-92cd-53b07a99b12a';
    $display->content['new-a61c7bbf-fccf-4b3f-92cd-53b07a99b12a'] = $pane;
    $display->panels['header'][0] = 'new-a61c7bbf-fccf-4b3f-92cd-53b07a99b12a';
    $pane = new stdClass();
    $pane->pid = 'new-7dcabce7-dfa7-466b-bfcc-41e2b4eda91f';
    $pane->panel = 'secondcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_recent_activity-recent_activity_basic';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'type' => array(
          'oa_discussion_post' => 'oa_discussion_post',
          'oa_wiki_page' => 'oa_wiki_page',
          'oa_event' => 'oa_event',
          'poll' => 'poll',
          'oa_worktracker_task' => 'oa_worktracker_task',
        ),
        'realname' => '',
        'og_group_ref_target_id' => '127',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => 'All',
      ),
      'items_per_page' => '7',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => '<a href="data">Data</a>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array(
      'css_id' => 'data-space-pane',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7dcabce7-dfa7-466b-bfcc-41e2b4eda91f';
    $display->content['new-7dcabce7-dfa7-466b-bfcc-41e2b4eda91f'] = $pane;
    $display->panels['secondcolumn1'][0] = 'new-7dcabce7-dfa7-466b-bfcc-41e2b4eda91f';
    $pane = new stdClass();
    $pane->pid = 'new-e5e28c45-fff6-42cb-98af-80c0347623ff';
    $pane->panel = 'secondcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_recent_activity-recent_activity_basic';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'type' => array(
          'oa_discussion_post' => 'oa_discussion_post',
          'oa_wiki_page' => 'oa_wiki_page',
          'oa_event' => 'oa_event',
          'poll' => 'poll',
          'oa_worktracker_task' => 'oa_worktracker_task',
        ),
        'realname' => '',
        'og_group_ref_target_id' => '128',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => 'All',
      ),
      'items_per_page' => '7',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => '<a href="people">People</a>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array(
      'css_id' => 'users-space-pane',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e5e28c45-fff6-42cb-98af-80c0347623ff';
    $display->content['new-e5e28c45-fff6-42cb-98af-80c0347623ff'] = $pane;
    $display->panels['secondcolumn2'][0] = 'new-e5e28c45-fff6-42cb-98af-80c0347623ff';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['tgd_homepage'] = $page;

  return $pages;

}
