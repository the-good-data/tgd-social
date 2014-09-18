<?php
/**
 * @file
 * tgd_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function tgd_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'corporate_subareas';
  $page->task = 'page';
  $page->admin_title = 'Corporate subareas';
  $page->admin_description = '';
  $page->path = 'corporate/%term';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'term' => array(
      'id' => 1,
      'identifier' => 'Subarea',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'term',
        'vids' => array(
          5 => '5',
          1 => 0,
          6 => 0,
          7 => 0,
          4 => 0,
          3 => 0,
          2 => 0,
        ),
        'breadcrumb' => 0,
        'transform' => 1,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_corporate_subareas_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'corporate_subareas';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Corporate: Brand',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'remove-top-menu',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'corporate_subareas' => 'corporate_subareas',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '5',
            1 => array(),
            5 => array(
              15 => '15',
            ),
            6 => array(),
            7 => array(),
            4 => array(),
            3 => array(),
            2 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bartlett_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = '93368bda-2aee-4b1b-afd5-4e08deaf9131';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c58401ae-bb4c-4d33-9ea3-209d6d1cf0d6';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '126',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid' => '15',
      ),
      'use_pager' => 1,
      'pager_id' => '1',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Latest Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c58401ae-bb4c-4d33-9ea3-209d6d1cf0d6';
    $display->content['new-c58401ae-bb4c-4d33-9ea3-209d6d1cf0d6'] = $pane;
    $display->panels['contentcolumn1'][0] = 'new-c58401ae-bb4c-4d33-9ea3-209d6d1cf0d6';
    $pane = new stdClass();
    $pane->pid = 'new-08050382-f32b-4f1f-9116-1c12c119bb18';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '126',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid' => '15',
      ),
      'use_pager' => 1,
      'pager_id' => '2',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Popular Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '08050382-f32b-4f1f-9116-1c12c119bb18';
    $display->content['new-08050382-f32b-4f1f-9116-1c12c119bb18'] = $pane;
    $display->panels['contentcolumn1'][1] = 'new-08050382-f32b-4f1f-9116-1c12c119bb18';
    $pane = new stdClass();
    $pane->pid = 'new-f5fda60a-e2ac-404e-bc2c-14daa30da93e';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_news-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '126',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => '135',
        'tid' => '15',
      ),
      'more_link' => 1,
      'use_pager' => 1,
      'pager_id' => '3',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'body' => 0,
        'created' => 1,
        'og_vocabulary' => 0,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent Documents',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f5fda60a-e2ac-404e-bc2c-14daa30da93e';
    $display->content['new-f5fda60a-e2ac-404e-bc2c-14daa30da93e'] = $pane;
    $display->panels['contentcolumn2'][0] = 'new-f5fda60a-e2ac-404e-bc2c-14daa30da93e';
    $pane = new stdClass();
    $pane->pid = 'new-7de3370b-cfde-4478-b19f-a9a5ca18dc8b';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_worktracker-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '126',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'realname_1' => '',
        'realname' => '',
        'field_oa_worktracker_task_status_value' => array(
          'open' => 'open',
        ),
        'field_oa_worktracker_priority_value' => array(),
        'tid' => '15',
      ),
      'use_pager' => 1,
      'pager_id' => '4',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'timestamp' => 0,
        'field_oa_worktracker_duedate' => 0,
        'realname_1' => 0,
        'realname' => 0,
        'og_group_ref' => 0,
        'title_1' => 0,
        'field_oa_worktracker_priority' => 1,
        'field_oa_worktracker_task_type' => 0,
        'field_oa_worktracker_task_status' => 0,
        'comment_count' => 0,
        'last_updated' => 1,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Open tasks',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7de3370b-cfde-4478-b19f-a9a5ca18dc8b';
    $display->content['new-7de3370b-cfde-4478-b19f-a9a5ca18dc8b'] = $pane;
    $display->panels['contentcolumn2'][1] = 'new-7de3370b-cfde-4478-b19f-a9a5ca18dc8b';
    $pane = new stdClass();
    $pane->pid = 'new-91d7fcf2-665a-4285-835d-7a66170e250a';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_recent_activity-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'type' => array(
          'panopoly_page' => 'panopoly_page',
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
        'oa_section_ref_target_id' => 'All',
        'tid' => '15',
      ),
      'items_per_page' => '10',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent activity',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '91d7fcf2-665a-4285-835d-7a66170e250a';
    $display->content['new-91d7fcf2-665a-4285-835d-7a66170e250a'] = $pane;
    $display->panels['sidebar'][0] = 'new-91d7fcf2-665a-4285-835d-7a66170e250a';
    $pane = new stdClass();
    $pane->pid = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_event_list-oa_events_upcoming_small';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => 'All',
      ),
      'items_per_page' => '10',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'db389465-6c69-49c4-acf4-e4bd253dd367';
    $display->content['new-db389465-6c69-49c4-acf4-e4bd253dd367'] = $pane;
    $display->panels['sidebar'][1] = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_corporate_subareas_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'corporate_subareas';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Corporate: Finance',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'remove-top-menu',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'corporate_subareas' => 'corporate_subareas',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '5',
            1 => array(),
            5 => array(
              18 => '18',
            ),
            6 => array(),
            7 => array(),
            4 => array(),
            3 => array(),
            2 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bartlett_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = '93368bda-2aee-4b1b-afd5-4e08deaf9131';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-206d6dc0-3aa5-4527-b4a7-6f7a85b9f935';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '126',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid' => '18',
      ),
      'use_pager' => 1,
      'pager_id' => '1',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Latest Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '206d6dc0-3aa5-4527-b4a7-6f7a85b9f935';
    $display->content['new-206d6dc0-3aa5-4527-b4a7-6f7a85b9f935'] = $pane;
    $display->panels['contentcolumn1'][0] = 'new-206d6dc0-3aa5-4527-b4a7-6f7a85b9f935';
    $pane = new stdClass();
    $pane->pid = 'new-2996082d-7c87-44ea-b967-474d2de9dc59';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '126',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid' => '18',
      ),
      'use_pager' => 1,
      'pager_id' => '1',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Popular Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2996082d-7c87-44ea-b967-474d2de9dc59';
    $display->content['new-2996082d-7c87-44ea-b967-474d2de9dc59'] = $pane;
    $display->panels['contentcolumn1'][1] = 'new-2996082d-7c87-44ea-b967-474d2de9dc59';
    $pane = new stdClass();
    $pane->pid = 'new-838256dc-b15c-4c37-b589-72a0e4aa3482';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_news-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '126',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => '',
        'tid' => '18',
      ),
      'more_link' => 1,
      'use_pager' => 1,
      'pager_id' => '3',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'body' => 0,
        'created' => 1,
        'og_vocabulary' => 0,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent Documents',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '838256dc-b15c-4c37-b589-72a0e4aa3482';
    $display->content['new-838256dc-b15c-4c37-b589-72a0e4aa3482'] = $pane;
    $display->panels['contentcolumn2'][0] = 'new-838256dc-b15c-4c37-b589-72a0e4aa3482';
    $pane = new stdClass();
    $pane->pid = 'new-30111d06-20ed-4b3f-bdff-22e9cb4d8727';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_worktracker-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '126',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'realname_1' => '',
        'realname' => '',
        'field_oa_worktracker_task_status_value' => array(
          'open' => 'open',
        ),
        'field_oa_worktracker_priority_value' => array(),
        'tid' => '18',
      ),
      'use_pager' => 1,
      'pager_id' => '4',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'timestamp' => 0,
        'field_oa_worktracker_duedate' => 0,
        'realname_1' => 0,
        'realname' => 0,
        'og_group_ref' => 0,
        'title_1' => 0,
        'field_oa_worktracker_priority' => 1,
        'field_oa_worktracker_task_type' => 0,
        'field_oa_worktracker_task_status' => 0,
        'comment_count' => 0,
        'last_updated' => 1,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Open Tasks',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '30111d06-20ed-4b3f-bdff-22e9cb4d8727';
    $display->content['new-30111d06-20ed-4b3f-bdff-22e9cb4d8727'] = $pane;
    $display->panels['contentcolumn2'][1] = 'new-30111d06-20ed-4b3f-bdff-22e9cb4d8727';
    $pane = new stdClass();
    $pane->pid = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_event_list-oa_events_upcoming_small';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => 'All',
      ),
      'items_per_page' => '10',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'db389465-6c69-49c4-acf4-e4bd253dd367';
    $display->content['new-db389465-6c69-49c4-acf4-e4bd253dd367'] = $pane;
    $display->panels['sidebar'][0] = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
    $pane = new stdClass();
    $pane->pid = 'new-cc810b13-7cc9-47de-82e9-9c904969856d';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_recent_activity-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'type' => array(
          'panopoly_page' => 'panopoly_page',
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
        'oa_section_ref_target_id' => 'All',
        'tid' => '18',
      ),
      'items_per_page' => '10',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent activity',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cc810b13-7cc9-47de-82e9-9c904969856d';
    $display->content['new-cc810b13-7cc9-47de-82e9-9c904969856d'] = $pane;
    $display->panels['sidebar'][1] = 'new-cc810b13-7cc9-47de-82e9-9c904969856d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_corporate_subareas_panel_context_3';
  $handler->task = 'page';
  $handler->subtask = 'corporate_subareas';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Corporate: Legal',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'remove-top-menu',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'corporate_subareas' => 'corporate_subareas',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '5',
            1 => array(),
            5 => array(
              17 => '17',
            ),
            6 => array(),
            7 => array(),
            4 => array(),
            3 => array(),
            2 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bartlett_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = '93368bda-2aee-4b1b-afd5-4e08deaf9131';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6407d518-15b1-4779-a837-60dde723ea0e';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '126',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid' => '17',
      ),
      'use_pager' => 1,
      'pager_id' => '1',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Latest Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6407d518-15b1-4779-a837-60dde723ea0e';
    $display->content['new-6407d518-15b1-4779-a837-60dde723ea0e'] = $pane;
    $display->panels['contentcolumn1'][0] = 'new-6407d518-15b1-4779-a837-60dde723ea0e';
    $pane = new stdClass();
    $pane->pid = 'new-42f7d5fc-d58c-4a62-a729-d0e39c67738c';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '126',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid' => '17',
      ),
      'use_pager' => 1,
      'pager_id' => '2',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Popular Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '42f7d5fc-d58c-4a62-a729-d0e39c67738c';
    $display->content['new-42f7d5fc-d58c-4a62-a729-d0e39c67738c'] = $pane;
    $display->panels['contentcolumn1'][1] = 'new-42f7d5fc-d58c-4a62-a729-d0e39c67738c';
    $pane = new stdClass();
    $pane->pid = 'new-a2575ea0-17bd-408b-a7ec-9d99f4b753c6';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_news-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '126',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => 'All',
        'tid' => '17',
      ),
      'more_link' => 1,
      'use_pager' => 1,
      'pager_id' => '3',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'body' => 0,
        'created' => 1,
        'og_vocabulary' => 0,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent Documents',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a2575ea0-17bd-408b-a7ec-9d99f4b753c6';
    $display->content['new-a2575ea0-17bd-408b-a7ec-9d99f4b753c6'] = $pane;
    $display->panels['contentcolumn2'][0] = 'new-a2575ea0-17bd-408b-a7ec-9d99f4b753c6';
    $pane = new stdClass();
    $pane->pid = 'new-52c2f655-d63c-4553-b697-7bc3e43b70c7';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_worktracker-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '126',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'realname_1' => '',
        'realname' => '',
        'field_oa_worktracker_task_status_value' => array(
          'open' => 'open',
        ),
        'field_oa_worktracker_priority_value' => array(),
        'tid' => '17',
      ),
      'use_pager' => 1,
      'pager_id' => '4',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'timestamp' => 1,
        'field_oa_worktracker_duedate' => 1,
        'realname_1' => 1,
        'realname' => 1,
        'og_group_ref' => 1,
        'title_1' => 1,
        'field_oa_worktracker_priority' => 1,
        'field_oa_worktracker_task_type' => 1,
        'field_oa_worktracker_task_status' => 1,
        'comment_count' => 1,
        'last_updated' => 1,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Open Tasks',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '52c2f655-d63c-4553-b697-7bc3e43b70c7';
    $display->content['new-52c2f655-d63c-4553-b697-7bc3e43b70c7'] = $pane;
    $display->panels['contentcolumn2'][1] = 'new-52c2f655-d63c-4553-b697-7bc3e43b70c7';
    $pane = new stdClass();
    $pane->pid = 'new-c597b25a-c679-4eee-a450-a736dd049285';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_recent_activity-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'type' => array(
          'panopoly_page' => 'panopoly_page',
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
        'tid' => '17',
      ),
      'items_per_page' => '10',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent activity',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c597b25a-c679-4eee-a450-a736dd049285';
    $display->content['new-c597b25a-c679-4eee-a450-a736dd049285'] = $pane;
    $display->panels['sidebar'][0] = 'new-c597b25a-c679-4eee-a450-a736dd049285';
    $pane = new stdClass();
    $pane->pid = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_event_list-oa_events_upcoming_small';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => 'All',
      ),
      'items_per_page' => '10',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'db389465-6c69-49c4-acf4-e4bd253dd367';
    $display->content['new-db389465-6c69-49c4-acf4-e4bd253dd367'] = $pane;
    $display->panels['sidebar'][1] = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_corporate_subareas_panel_context_4';
  $handler->task = 'page';
  $handler->subtask = 'corporate_subareas';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Corporate: Strategy',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'remove-top-menu',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'corporate_subareas' => 'corporate_subareas',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '5',
            1 => array(),
            5 => array(
              16 => '16',
            ),
            6 => array(),
            7 => array(),
            4 => array(),
            3 => array(),
            2 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bartlett_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = '93368bda-2aee-4b1b-afd5-4e08deaf9131';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-09350c48-30b0-40b5-b873-c7914d276f9d';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '126',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid' => '16',
      ),
      'use_pager' => 1,
      'pager_id' => '1',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Latest Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '09350c48-30b0-40b5-b873-c7914d276f9d';
    $display->content['new-09350c48-30b0-40b5-b873-c7914d276f9d'] = $pane;
    $display->panels['contentcolumn1'][0] = 'new-09350c48-30b0-40b5-b873-c7914d276f9d';
    $pane = new stdClass();
    $pane->pid = 'new-533b31e7-bf08-4f86-9451-bd06f1229ae3';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '126',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid' => '16',
      ),
      'use_pager' => 1,
      'pager_id' => '2',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Popular Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '533b31e7-bf08-4f86-9451-bd06f1229ae3';
    $display->content['new-533b31e7-bf08-4f86-9451-bd06f1229ae3'] = $pane;
    $display->panels['contentcolumn1'][1] = 'new-533b31e7-bf08-4f86-9451-bd06f1229ae3';
    $pane = new stdClass();
    $pane->pid = 'new-5a10f0f7-9e22-42d5-87ef-25f0b21f582a';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_news-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '126',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => '135',
        'tid' => '16',
      ),
      'more_link' => 1,
      'use_pager' => 1,
      'pager_id' => '3',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'body' => 0,
        'created' => 1,
        'og_vocabulary' => 0,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent Documents',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5a10f0f7-9e22-42d5-87ef-25f0b21f582a';
    $display->content['new-5a10f0f7-9e22-42d5-87ef-25f0b21f582a'] = $pane;
    $display->panels['contentcolumn2'][0] = 'new-5a10f0f7-9e22-42d5-87ef-25f0b21f582a';
    $pane = new stdClass();
    $pane->pid = 'new-f6df1197-ff3a-4e18-bcbe-c16dfc3c21f2';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_worktracker-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '126',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'realname_1' => '',
        'realname' => '',
        'field_oa_worktracker_task_status_value' => array(
          'open' => 'open',
        ),
        'field_oa_worktracker_priority_value' => array(),
        'tid' => '16',
      ),
      'use_pager' => 1,
      'pager_id' => '4',
      'items_per_page' => '10',
      'fields_override' => array(
        'title' => 1,
        'timestamp' => 0,
        'field_oa_worktracker_duedate' => 0,
        'realname_1' => 0,
        'realname' => 0,
        'og_group_ref' => 0,
        'title_1' => 0,
        'field_oa_worktracker_priority' => 1,
        'field_oa_worktracker_task_type' => 0,
        'field_oa_worktracker_task_status' => 0,
        'comment_count' => 0,
        'last_updated' => 1,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Open Tasks',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f6df1197-ff3a-4e18-bcbe-c16dfc3c21f2';
    $display->content['new-f6df1197-ff3a-4e18-bcbe-c16dfc3c21f2'] = $pane;
    $display->panels['contentcolumn2'][1] = 'new-f6df1197-ff3a-4e18-bcbe-c16dfc3c21f2';
    $pane = new stdClass();
    $pane->pid = 'new-b76be32d-34ff-40f6-8e87-7c301b50f011';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_recent_activity-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'type' => array(
          'panopoly_page' => 'panopoly_page',
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
        'oa_section_ref_target_id' => 'All',
        'tid' => '16',
      ),
      'items_per_page' => '10',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent activity',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b76be32d-34ff-40f6-8e87-7c301b50f011';
    $display->content['new-b76be32d-34ff-40f6-8e87-7c301b50f011'] = $pane;
    $display->panels['sidebar'][0] = 'new-b76be32d-34ff-40f6-8e87-7c301b50f011';
    $pane = new stdClass();
    $pane->pid = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_event_list-oa_events_upcoming_small';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => 'All',
      ),
      'items_per_page' => '10',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'db389465-6c69-49c4-acf4-e4bd253dd367';
    $display->content['new-db389465-6c69-49c4-acf4-e4bd253dd367'] = $pane;
    $display->panels['sidebar'][1] = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['corporate_subareas'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'data_subareas';
  $page->task = 'page';
  $page->admin_title = 'Data subareas';
  $page->admin_description = '';
  $page->path = 'data/%term';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'term' => array(
      'id' => 1,
      'identifier' => 'Subarea',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'term',
        'vids' => array(
          6 => '6',
          1 => 0,
          5 => 0,
          7 => 0,
          4 => 0,
          3 => 0,
          2 => 0,
        ),
        'breadcrumb' => 0,
        'transform' => 1,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_data_subareas_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'data_subareas';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Data: Harvesting',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'remove-top-menu',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'data_subareas' => 'data_subareas',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '6',
            1 => array(),
            5 => array(),
            6 => array(
              19 => '19',
            ),
            7 => array(),
            4 => array(),
            3 => array(),
            2 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bartlett_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = '93368bda-2aee-4b1b-afd5-4e08deaf9131';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7ca9b1d7-bf4d-4891-bd5b-ade133350d70';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '127',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid' => '19',
      ),
      'use_pager' => 1,
      'pager_id' => '1',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Latest Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7ca9b1d7-bf4d-4891-bd5b-ade133350d70';
    $display->content['new-7ca9b1d7-bf4d-4891-bd5b-ade133350d70'] = $pane;
    $display->panels['contentcolumn1'][0] = 'new-7ca9b1d7-bf4d-4891-bd5b-ade133350d70';
    $pane = new stdClass();
    $pane->pid = 'new-bdb6ffde-ee72-44fc-a8ba-87a7ef4dba78';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '127',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid' => '19',
      ),
      'use_pager' => 1,
      'pager_id' => '2',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Popular Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'bdb6ffde-ee72-44fc-a8ba-87a7ef4dba78';
    $display->content['new-bdb6ffde-ee72-44fc-a8ba-87a7ef4dba78'] = $pane;
    $display->panels['contentcolumn1'][1] = 'new-bdb6ffde-ee72-44fc-a8ba-87a7ef4dba78';
    $pane = new stdClass();
    $pane->pid = 'new-172b7d35-2222-4417-b30c-9c68acf23da6';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_news-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '127',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => '136',
        'tid' => 'Harvesting',
      ),
      'more_link' => 1,
      'use_pager' => 1,
      'pager_id' => '3',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'body' => 0,
        'created' => 1,
        'og_vocabulary' => 0,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent Documents',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '172b7d35-2222-4417-b30c-9c68acf23da6';
    $display->content['new-172b7d35-2222-4417-b30c-9c68acf23da6'] = $pane;
    $display->panels['contentcolumn2'][0] = 'new-172b7d35-2222-4417-b30c-9c68acf23da6';
    $pane = new stdClass();
    $pane->pid = 'new-e82c5e5f-63a2-4c09-aff7-ecc0bc1422ec';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_worktracker-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '127',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'realname_1' => '',
        'realname' => '',
        'field_oa_worktracker_task_status_value' => array(
          'open' => 'open',
        ),
        'field_oa_worktracker_priority_value' => array(),
        'tid' => 'Harvesting',
      ),
      'use_pager' => 1,
      'pager_id' => '4',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'timestamp' => 0,
        'field_oa_worktracker_duedate' => 0,
        'realname_1' => 0,
        'realname' => 0,
        'og_group_ref' => 0,
        'title_1' => 0,
        'field_oa_worktracker_priority' => 1,
        'field_oa_worktracker_task_type' => 0,
        'field_oa_worktracker_task_status' => 0,
        'comment_count' => 0,
        'last_updated' => 1,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Open Tasks',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e82c5e5f-63a2-4c09-aff7-ecc0bc1422ec';
    $display->content['new-e82c5e5f-63a2-4c09-aff7-ecc0bc1422ec'] = $pane;
    $display->panels['contentcolumn2'][1] = 'new-e82c5e5f-63a2-4c09-aff7-ecc0bc1422ec';
    $pane = new stdClass();
    $pane->pid = 'new-5634e178-2bc7-44ba-a910-d276a24c87b2';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_recent_activity-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'type' => array(
          'panopoly_page' => 'panopoly_page',
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
        'oa_section_ref_target_id' => '',
        'tid' => '19',
      ),
      'items_per_page' => '10',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent activity',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5634e178-2bc7-44ba-a910-d276a24c87b2';
    $display->content['new-5634e178-2bc7-44ba-a910-d276a24c87b2'] = $pane;
    $display->panels['sidebar'][0] = 'new-5634e178-2bc7-44ba-a910-d276a24c87b2';
    $pane = new stdClass();
    $pane->pid = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_event_list-oa_events_upcoming_small';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => 'All',
      ),
      'items_per_page' => '10',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'db389465-6c69-49c4-acf4-e4bd253dd367';
    $display->content['new-db389465-6c69-49c4-acf4-e4bd253dd367'] = $pane;
    $display->panels['sidebar'][1] = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_data_subareas_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'data_subareas';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Data: Processing',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'remove-top-menu',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'data_subareas' => 'data_subareas',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '6',
            1 => array(),
            5 => array(),
            6 => array(
              20 => '20',
            ),
            7 => array(),
            4 => array(),
            3 => array(),
            2 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bartlett_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = '93368bda-2aee-4b1b-afd5-4e08deaf9131';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-40c8434b-9440-45f9-9230-13129311e0de';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '127',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid' => '20',
      ),
      'use_pager' => 1,
      'pager_id' => '1',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Latest Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '40c8434b-9440-45f9-9230-13129311e0de';
    $display->content['new-40c8434b-9440-45f9-9230-13129311e0de'] = $pane;
    $display->panels['contentcolumn1'][0] = 'new-40c8434b-9440-45f9-9230-13129311e0de';
    $pane = new stdClass();
    $pane->pid = 'new-608c3c28-1de1-4e1c-a7da-c09238f400c6';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '127',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid' => '20',
      ),
      'use_pager' => 1,
      'pager_id' => '2',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Popular Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '608c3c28-1de1-4e1c-a7da-c09238f400c6';
    $display->content['new-608c3c28-1de1-4e1c-a7da-c09238f400c6'] = $pane;
    $display->panels['contentcolumn1'][1] = 'new-608c3c28-1de1-4e1c-a7da-c09238f400c6';
    $pane = new stdClass();
    $pane->pid = 'new-2ff71193-c4d5-46fb-97d4-a395cc89a44c';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_news-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '127',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => '',
        'tid' => 'Processing',
      ),
      'more_link' => 1,
      'use_pager' => 1,
      'pager_id' => '3',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'body' => 0,
        'created' => 1,
        'og_vocabulary' => 0,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent Documents',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2ff71193-c4d5-46fb-97d4-a395cc89a44c';
    $display->content['new-2ff71193-c4d5-46fb-97d4-a395cc89a44c'] = $pane;
    $display->panels['contentcolumn2'][0] = 'new-2ff71193-c4d5-46fb-97d4-a395cc89a44c';
    $pane = new stdClass();
    $pane->pid = 'new-8c83dad0-1a96-441b-88e3-717f93dabe71';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_worktracker-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '127',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'realname_1' => '',
        'realname' => '',
        'field_oa_worktracker_task_status_value' => array(
          'open' => 'open',
        ),
        'field_oa_worktracker_priority_value' => array(),
        'tid' => 'Processing',
      ),
      'use_pager' => 1,
      'pager_id' => '4',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'timestamp' => 0,
        'field_oa_worktracker_duedate' => 0,
        'realname_1' => 0,
        'realname' => 0,
        'og_group_ref' => 0,
        'title_1' => 0,
        'field_oa_worktracker_priority' => 1,
        'field_oa_worktracker_task_type' => 0,
        'field_oa_worktracker_task_status' => 0,
        'comment_count' => 0,
        'last_updated' => 1,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Open Tasks',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8c83dad0-1a96-441b-88e3-717f93dabe71';
    $display->content['new-8c83dad0-1a96-441b-88e3-717f93dabe71'] = $pane;
    $display->panels['contentcolumn2'][1] = 'new-8c83dad0-1a96-441b-88e3-717f93dabe71';
    $pane = new stdClass();
    $pane->pid = 'new-cbaf350a-671e-4454-b94e-5da47c23bad0';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_recent_activity-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'type' => array(
          'panopoly_page' => 'panopoly_page',
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
        'oa_section_ref_target_id' => '',
        'tid' => '20',
      ),
      'items_per_page' => '10',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent activity',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cbaf350a-671e-4454-b94e-5da47c23bad0';
    $display->content['new-cbaf350a-671e-4454-b94e-5da47c23bad0'] = $pane;
    $display->panels['sidebar'][0] = 'new-cbaf350a-671e-4454-b94e-5da47c23bad0';
    $pane = new stdClass();
    $pane->pid = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_event_list-oa_events_upcoming_small';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => 'All',
      ),
      'items_per_page' => '10',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'db389465-6c69-49c4-acf4-e4bd253dd367';
    $display->content['new-db389465-6c69-49c4-acf4-e4bd253dd367'] = $pane;
    $display->panels['sidebar'][1] = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_data_subareas_panel_context_3';
  $handler->task = 'page';
  $handler->subtask = 'data_subareas';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Data: Securing',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'remove-top-menu',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'data_subareas' => 'data_subareas',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '6',
            1 => array(),
            5 => array(),
            6 => array(
              21 => '21',
            ),
            7 => array(),
            4 => array(),
            3 => array(),
            2 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bartlett_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = '93368bda-2aee-4b1b-afd5-4e08deaf9131';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e423c8f2-2caf-44a7-95f1-34ded3546102';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '127',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid' => '21',
      ),
      'use_pager' => 1,
      'pager_id' => '1',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Latest Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e423c8f2-2caf-44a7-95f1-34ded3546102';
    $display->content['new-e423c8f2-2caf-44a7-95f1-34ded3546102'] = $pane;
    $display->panels['contentcolumn1'][0] = 'new-e423c8f2-2caf-44a7-95f1-34ded3546102';
    $pane = new stdClass();
    $pane->pid = 'new-22a97cb7-ca64-4d44-8497-0f2885db6895';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '127',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid' => '21',
      ),
      'use_pager' => 1,
      'pager_id' => '2',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Popular Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '22a97cb7-ca64-4d44-8497-0f2885db6895';
    $display->content['new-22a97cb7-ca64-4d44-8497-0f2885db6895'] = $pane;
    $display->panels['contentcolumn1'][1] = 'new-22a97cb7-ca64-4d44-8497-0f2885db6895';
    $pane = new stdClass();
    $pane->pid = 'new-6eb3fd0d-0b62-4743-a100-6883c7858ac0';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_news-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '127',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => '',
        'tid' => 'Securing',
      ),
      'more_link' => 1,
      'use_pager' => 1,
      'pager_id' => '3',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'body' => 0,
        'created' => 1,
        'og_vocabulary' => 0,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent Documents',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6eb3fd0d-0b62-4743-a100-6883c7858ac0';
    $display->content['new-6eb3fd0d-0b62-4743-a100-6883c7858ac0'] = $pane;
    $display->panels['contentcolumn2'][0] = 'new-6eb3fd0d-0b62-4743-a100-6883c7858ac0';
    $pane = new stdClass();
    $pane->pid = 'new-38c2cd8b-06a4-49d5-9026-9678c4966577';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_worktracker-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '127',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'realname_1' => '',
        'realname' => '',
        'field_oa_worktracker_task_status_value' => array(
          'open' => 'open',
        ),
        'field_oa_worktracker_priority_value' => array(),
        'tid' => 'Securing',
      ),
      'use_pager' => 1,
      'pager_id' => '1',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'timestamp' => 0,
        'field_oa_worktracker_duedate' => 0,
        'realname_1' => 0,
        'realname' => 0,
        'og_group_ref' => 0,
        'title_1' => 0,
        'field_oa_worktracker_priority' => 1,
        'field_oa_worktracker_task_type' => 0,
        'field_oa_worktracker_task_status' => 0,
        'comment_count' => 0,
        'last_updated' => 1,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Open Tasks',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '38c2cd8b-06a4-49d5-9026-9678c4966577';
    $display->content['new-38c2cd8b-06a4-49d5-9026-9678c4966577'] = $pane;
    $display->panels['contentcolumn2'][1] = 'new-38c2cd8b-06a4-49d5-9026-9678c4966577';
    $pane = new stdClass();
    $pane->pid = 'new-a24b273c-7373-4a51-be50-a32aa110bc8d';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_recent_activity-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'type' => array(
          'panopoly_page' => 'panopoly_page',
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
        'oa_section_ref_target_id' => '',
        'tid' => '21',
      ),
      'items_per_page' => '10',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent activity',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a24b273c-7373-4a51-be50-a32aa110bc8d';
    $display->content['new-a24b273c-7373-4a51-be50-a32aa110bc8d'] = $pane;
    $display->panels['sidebar'][0] = 'new-a24b273c-7373-4a51-be50-a32aa110bc8d';
    $pane = new stdClass();
    $pane->pid = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_event_list-oa_events_upcoming_small';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => 'All',
      ),
      'items_per_page' => '10',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'db389465-6c69-49c4-acf4-e4bd253dd367';
    $display->content['new-db389465-6c69-49c4-acf4-e4bd253dd367'] = $pane;
    $display->panels['sidebar'][1] = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_data_subareas_panel_context_4';
  $handler->task = 'page';
  $handler->subtask = 'data_subareas';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Data: Trading',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'remove-top-menu',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'data_subareas' => 'data_subareas',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '6',
            1 => array(),
            5 => array(),
            6 => array(
              22 => '22',
            ),
            7 => array(),
            4 => array(),
            3 => array(),
            2 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bartlett_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = '93368bda-2aee-4b1b-afd5-4e08deaf9131';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e4b133d5-b969-43b8-9152-14139cd74af8';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '127',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid' => '22',
      ),
      'use_pager' => 1,
      'pager_id' => '1',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Latest Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e4b133d5-b969-43b8-9152-14139cd74af8';
    $display->content['new-e4b133d5-b969-43b8-9152-14139cd74af8'] = $pane;
    $display->panels['contentcolumn1'][0] = 'new-e4b133d5-b969-43b8-9152-14139cd74af8';
    $pane = new stdClass();
    $pane->pid = 'new-9496d877-b1c9-4927-b12d-7898199c134e';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '127',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid' => '22',
      ),
      'use_pager' => 1,
      'pager_id' => '2',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Popular Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9496d877-b1c9-4927-b12d-7898199c134e';
    $display->content['new-9496d877-b1c9-4927-b12d-7898199c134e'] = $pane;
    $display->panels['contentcolumn1'][1] = 'new-9496d877-b1c9-4927-b12d-7898199c134e';
    $pane = new stdClass();
    $pane->pid = 'new-8f62ee44-1ae5-4d0b-a349-87cb1e779725';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_news-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '127',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => '136',
        'tid' => 'Trading',
      ),
      'more_link' => 1,
      'use_pager' => 1,
      'pager_id' => '3',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'body' => 0,
        'created' => 1,
        'og_vocabulary' => 0,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent Documents',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8f62ee44-1ae5-4d0b-a349-87cb1e779725';
    $display->content['new-8f62ee44-1ae5-4d0b-a349-87cb1e779725'] = $pane;
    $display->panels['contentcolumn2'][0] = 'new-8f62ee44-1ae5-4d0b-a349-87cb1e779725';
    $pane = new stdClass();
    $pane->pid = 'new-e93218df-393d-4628-ab5c-f97c4f081008';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_worktracker-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '127',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'realname_1' => '',
        'realname' => '',
        'field_oa_worktracker_task_status_value' => array(
          'open' => 'open',
        ),
        'field_oa_worktracker_priority_value' => array(),
        'tid' => 'Trading',
      ),
      'use_pager' => 1,
      'pager_id' => '4',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'timestamp' => 0,
        'field_oa_worktracker_duedate' => 0,
        'realname_1' => 0,
        'realname' => 0,
        'og_group_ref' => 0,
        'title_1' => 0,
        'field_oa_worktracker_priority' => 1,
        'field_oa_worktracker_task_type' => 0,
        'field_oa_worktracker_task_status' => 0,
        'comment_count' => 0,
        'last_updated' => 1,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Open Tasks',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e93218df-393d-4628-ab5c-f97c4f081008';
    $display->content['new-e93218df-393d-4628-ab5c-f97c4f081008'] = $pane;
    $display->panels['contentcolumn2'][1] = 'new-e93218df-393d-4628-ab5c-f97c4f081008';
    $pane = new stdClass();
    $pane->pid = 'new-b4d13ffe-d4d7-4a34-b8af-c2218adf97c7';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_recent_activity-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'type' => array(
          'panopoly_page' => 'panopoly_page',
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
        'tid' => '22',
      ),
      'items_per_page' => '10',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent activity',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b4d13ffe-d4d7-4a34-b8af-c2218adf97c7';
    $display->content['new-b4d13ffe-d4d7-4a34-b8af-c2218adf97c7'] = $pane;
    $display->panels['sidebar'][0] = 'new-b4d13ffe-d4d7-4a34-b8af-c2218adf97c7';
    $pane = new stdClass();
    $pane->pid = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_event_list-oa_events_upcoming_small';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => 'All',
      ),
      'items_per_page' => '10',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'db389465-6c69-49c4-acf4-e4bd253dd367';
    $display->content['new-db389465-6c69-49c4-acf4-e4bd253dd367'] = $pane;
    $display->panels['sidebar'][1] = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['data_subareas'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'people_subareas';
  $page->task = 'page';
  $page->admin_title = 'People subareas';
  $page->admin_description = '';
  $page->path = 'people/%term';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'term' => array(
      'id' => 1,
      'identifier' => 'Subarea',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'term',
        'vids' => array(
          7 => '7',
          1 => 0,
          5 => 0,
          6 => 0,
          4 => 0,
          3 => 0,
          2 => 0,
        ),
        'breadcrumb' => 0,
        'transform' => 1,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_people_subareas_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'people_subareas';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'People: Collaborators',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'remove-top-menu',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'people_subareas' => 'people_subareas',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '7',
            1 => array(),
            5 => array(
              15 => '15',
            ),
            6 => array(),
            7 => array(
              23 => '23',
            ),
            4 => array(),
            3 => array(),
            2 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bartlett_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = '93368bda-2aee-4b1b-afd5-4e08deaf9131';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c3c6c137-02bf-454d-9446-b3d2f39b7de7';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '128',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid' => '23',
      ),
      'use_pager' => 1,
      'pager_id' => '1',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Latest Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c3c6c137-02bf-454d-9446-b3d2f39b7de7';
    $display->content['new-c3c6c137-02bf-454d-9446-b3d2f39b7de7'] = $pane;
    $display->panels['contentcolumn1'][0] = 'new-c3c6c137-02bf-454d-9446-b3d2f39b7de7';
    $pane = new stdClass();
    $pane->pid = 'new-e2f06a54-f58b-4e2f-8b1b-6f71b170867b';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '128',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid_1' => '23',
      ),
      'use_pager' => 1,
      'pager_id' => '2',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Popular Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e2f06a54-f58b-4e2f-8b1b-6f71b170867b';
    $display->content['new-e2f06a54-f58b-4e2f-8b1b-6f71b170867b'] = $pane;
    $display->panels['contentcolumn1'][1] = 'new-e2f06a54-f58b-4e2f-8b1b-6f71b170867b';
    $pane = new stdClass();
    $pane->pid = 'new-21fb2555-a7ff-498b-a019-0971fbe151f4';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_news-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '128',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => '137',
        'tid' => '23',
      ),
      'more_link' => 1,
      'use_pager' => 1,
      'pager_id' => '3',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'body' => 0,
        'created' => 1,
        'og_vocabulary' => 0,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent Documents',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '21fb2555-a7ff-498b-a019-0971fbe151f4';
    $display->content['new-21fb2555-a7ff-498b-a019-0971fbe151f4'] = $pane;
    $display->panels['contentcolumn2'][0] = 'new-21fb2555-a7ff-498b-a019-0971fbe151f4';
    $pane = new stdClass();
    $pane->pid = 'new-fd090f26-7e98-410b-81b0-986fab0b257f';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_worktracker-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '128',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'realname_1' => '',
        'realname' => '',
        'field_oa_worktracker_task_status_value' => array(
          'open' => 'open',
        ),
        'field_oa_worktracker_priority_value' => array(),
        'tid' => '23',
      ),
      'use_pager' => 1,
      'pager_id' => '4',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'timestamp' => 0,
        'field_oa_worktracker_duedate' => 0,
        'realname_1' => 0,
        'realname' => 0,
        'og_group_ref' => 0,
        'title_1' => 0,
        'field_oa_worktracker_priority' => 1,
        'field_oa_worktracker_task_type' => 0,
        'field_oa_worktracker_task_status' => 0,
        'comment_count' => 0,
        'last_updated' => 1,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Open Tasks',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fd090f26-7e98-410b-81b0-986fab0b257f';
    $display->content['new-fd090f26-7e98-410b-81b0-986fab0b257f'] = $pane;
    $display->panels['contentcolumn2'][1] = 'new-fd090f26-7e98-410b-81b0-986fab0b257f';
    $pane = new stdClass();
    $pane->pid = 'new-6f62d734-eaa1-475b-80d0-cfeb5a61a732';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_recent_activity-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'type' => array(
          'panopoly_page' => 'panopoly_page',
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
        'tid' => '23',
      ),
      'items_per_page' => '10',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent activity',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6f62d734-eaa1-475b-80d0-cfeb5a61a732';
    $display->content['new-6f62d734-eaa1-475b-80d0-cfeb5a61a732'] = $pane;
    $display->panels['sidebar'][0] = 'new-6f62d734-eaa1-475b-80d0-cfeb5a61a732';
    $pane = new stdClass();
    $pane->pid = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_event_list-oa_events_upcoming_small';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => 'All',
      ),
      'items_per_page' => '10',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'db389465-6c69-49c4-acf4-e4bd253dd367';
    $display->content['new-db389465-6c69-49c4-acf4-e4bd253dd367'] = $pane;
    $display->panels['sidebar'][1] = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_people_subareas_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'people_subareas';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'People: Users',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'remove-top-menu',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'people_subareas' => 'people_subareas',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '7',
            1 => array(),
            5 => array(
              15 => '15',
            ),
            6 => array(),
            7 => array(
              26 => '26',
            ),
            4 => array(),
            3 => array(),
            2 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bartlett_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = '93368bda-2aee-4b1b-afd5-4e08deaf9131';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b9eb8592-89f0-4524-ba7d-525fac33b083';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '128',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid' => '26',
      ),
      'use_pager' => 1,
      'pager_id' => '1',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Latest Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b9eb8592-89f0-4524-ba7d-525fac33b083';
    $display->content['new-b9eb8592-89f0-4524-ba7d-525fac33b083'] = $pane;
    $display->panels['contentcolumn1'][0] = 'new-b9eb8592-89f0-4524-ba7d-525fac33b083';
    $pane = new stdClass();
    $pane->pid = 'new-57fba372-7c91-4de2-b5a5-c020d4569e12';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '128',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid_1' => '26',
      ),
      'use_pager' => 1,
      'pager_id' => '2',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Popular Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '57fba372-7c91-4de2-b5a5-c020d4569e12';
    $display->content['new-57fba372-7c91-4de2-b5a5-c020d4569e12'] = $pane;
    $display->panels['contentcolumn1'][1] = 'new-57fba372-7c91-4de2-b5a5-c020d4569e12';
    $pane = new stdClass();
    $pane->pid = 'new-85d768c8-dd6e-4974-bbe2-5b40bfc378ca';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_news-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '128',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => '137',
        'tid' => '26',
      ),
      'more_link' => 1,
      'use_pager' => 1,
      'pager_id' => '3',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'body' => 0,
        'created' => 1,
        'og_vocabulary' => 0,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent Documents',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '85d768c8-dd6e-4974-bbe2-5b40bfc378ca';
    $display->content['new-85d768c8-dd6e-4974-bbe2-5b40bfc378ca'] = $pane;
    $display->panels['contentcolumn2'][0] = 'new-85d768c8-dd6e-4974-bbe2-5b40bfc378ca';
    $pane = new stdClass();
    $pane->pid = 'new-2732faf0-f632-40d3-924a-338fc9465b36';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_worktracker-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '128',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'realname_1' => '',
        'realname' => '',
        'field_oa_worktracker_task_status_value' => array(
          'open' => 'open',
        ),
        'field_oa_worktracker_priority_value' => array(),
        'tid' => '26',
      ),
      'use_pager' => 1,
      'pager_id' => '4',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'timestamp' => 0,
        'field_oa_worktracker_duedate' => 0,
        'realname_1' => 0,
        'realname' => 0,
        'og_group_ref' => 0,
        'title_1' => 0,
        'field_oa_worktracker_priority' => 1,
        'field_oa_worktracker_task_type' => 0,
        'field_oa_worktracker_task_status' => 0,
        'comment_count' => 0,
        'last_updated' => 1,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Open Tasks',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2732faf0-f632-40d3-924a-338fc9465b36';
    $display->content['new-2732faf0-f632-40d3-924a-338fc9465b36'] = $pane;
    $display->panels['contentcolumn2'][1] = 'new-2732faf0-f632-40d3-924a-338fc9465b36';
    $pane = new stdClass();
    $pane->pid = 'new-ec00f6f7-19c2-4844-8cf8-c06ea6308f04';
    $pane->panel = 'sidebar';
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
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => 'All',
      ),
      'items_per_page' => '10',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent activity',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ec00f6f7-19c2-4844-8cf8-c06ea6308f04';
    $display->content['new-ec00f6f7-19c2-4844-8cf8-c06ea6308f04'] = $pane;
    $display->panels['sidebar'][0] = 'new-ec00f6f7-19c2-4844-8cf8-c06ea6308f04';
    $pane = new stdClass();
    $pane->pid = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_event_list-oa_events_upcoming_small';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => 'All',
      ),
      'items_per_page' => '10',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'db389465-6c69-49c4-acf4-e4bd253dd367';
    $display->content['new-db389465-6c69-49c4-acf4-e4bd253dd367'] = $pane;
    $display->panels['sidebar'][1] = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_people_subareas_panel_context_3';
  $handler->task = 'page';
  $handler->subtask = 'people_subareas';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'People: Members',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'remove-top-menu',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'people_subareas' => 'people_subareas',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '7',
            1 => array(),
            5 => array(
              15 => '15',
            ),
            6 => array(),
            7 => array(
              24 => '24',
            ),
            4 => array(),
            3 => array(),
            2 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bartlett_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = '93368bda-2aee-4b1b-afd5-4e08deaf9131';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7e1621e0-4c75-400a-9bb3-228d64177163';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '128',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid' => '24',
      ),
      'use_pager' => 1,
      'pager_id' => '1',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Latest Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7e1621e0-4c75-400a-9bb3-228d64177163';
    $display->content['new-7e1621e0-4c75-400a-9bb3-228d64177163'] = $pane;
    $display->panels['contentcolumn1'][0] = 'new-7e1621e0-4c75-400a-9bb3-228d64177163';
    $pane = new stdClass();
    $pane->pid = 'new-2cc45814-a904-45a5-853d-505386e98467';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '128',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid_1' => '24',
      ),
      'use_pager' => 1,
      'pager_id' => '2',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Popular Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2cc45814-a904-45a5-853d-505386e98467';
    $display->content['new-2cc45814-a904-45a5-853d-505386e98467'] = $pane;
    $display->panels['contentcolumn1'][1] = 'new-2cc45814-a904-45a5-853d-505386e98467';
    $pane = new stdClass();
    $pane->pid = 'new-af4efd45-f5fb-403e-a990-608187515ae0';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_news-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '128',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => 'All',
        'tid' => '24',
      ),
      'more_link' => 1,
      'use_pager' => 1,
      'pager_id' => '3',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'body' => 0,
        'created' => 1,
        'og_vocabulary' => 0,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent Documents',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'af4efd45-f5fb-403e-a990-608187515ae0';
    $display->content['new-af4efd45-f5fb-403e-a990-608187515ae0'] = $pane;
    $display->panels['contentcolumn2'][0] = 'new-af4efd45-f5fb-403e-a990-608187515ae0';
    $pane = new stdClass();
    $pane->pid = 'new-8a9b27a3-63d3-418e-8a6d-4247e49f24d1';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_worktracker-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '128',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'realname_1' => '',
        'realname' => '',
        'field_oa_worktracker_task_status_value' => array(
          'open' => 'open',
        ),
        'field_oa_worktracker_priority_value' => array(),
        'tid' => '24',
      ),
      'use_pager' => 1,
      'pager_id' => '4',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'timestamp' => 0,
        'field_oa_worktracker_duedate' => 0,
        'realname_1' => 0,
        'realname' => 0,
        'og_group_ref' => 0,
        'title_1' => 0,
        'field_oa_worktracker_priority' => 1,
        'field_oa_worktracker_task_type' => 0,
        'field_oa_worktracker_task_status' => 0,
        'comment_count' => 0,
        'last_updated' => 1,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Open Tasks',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8a9b27a3-63d3-418e-8a6d-4247e49f24d1';
    $display->content['new-8a9b27a3-63d3-418e-8a6d-4247e49f24d1'] = $pane;
    $display->panels['contentcolumn2'][1] = 'new-8a9b27a3-63d3-418e-8a6d-4247e49f24d1';
    $pane = new stdClass();
    $pane->pid = 'new-dcf6b69f-3021-4881-aacc-00cc7595c437';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_recent_activity-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'type' => array(
          'panopoly_page' => 'panopoly_page',
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
        'oa_section_ref_target_id' => '',
        'tid' => '24',
      ),
      'items_per_page' => '10',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent activity',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dcf6b69f-3021-4881-aacc-00cc7595c437';
    $display->content['new-dcf6b69f-3021-4881-aacc-00cc7595c437'] = $pane;
    $display->panels['sidebar'][0] = 'new-dcf6b69f-3021-4881-aacc-00cc7595c437';
    $pane = new stdClass();
    $pane->pid = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_event_list-oa_events_upcoming_small';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => 'All',
      ),
      'items_per_page' => '10',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'db389465-6c69-49c4-acf4-e4bd253dd367';
    $display->content['new-db389465-6c69-49c4-acf4-e4bd253dd367'] = $pane;
    $display->panels['sidebar'][1] = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_people_subareas_panel_context_4';
  $handler->task = 'page';
  $handler->subtask = 'people_subareas';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'People: Social Impact',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'remove-top-menu',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'people_subareas' => 'people_subareas',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '7',
            1 => array(),
            5 => array(
              15 => '15',
            ),
            6 => array(),
            7 => array(
              25 => '25',
            ),
            4 => array(),
            3 => array(),
            2 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bartlett_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = '93368bda-2aee-4b1b-afd5-4e08deaf9131';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5f124359-43c7-4d77-8710-5ab624b27f71';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '128',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid' => '25',
      ),
      'use_pager' => 1,
      'pager_id' => '1',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Latest Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5f124359-43c7-4d77-8710-5ab624b27f71';
    $display->content['new-5f124359-43c7-4d77-8710-5ab624b27f71'] = $pane;
    $display->panels['contentcolumn1'][0] = 'new-5f124359-43c7-4d77-8710-5ab624b27f71';
    $pane = new stdClass();
    $pane->pid = 'new-cd41ce4f-ee75-4f67-aeab-36005edda669';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '128',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid_1' => '25',
      ),
      'use_pager' => 1,
      'pager_id' => '2',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Popular Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cd41ce4f-ee75-4f67-aeab-36005edda669';
    $display->content['new-cd41ce4f-ee75-4f67-aeab-36005edda669'] = $pane;
    $display->panels['contentcolumn1'][1] = 'new-cd41ce4f-ee75-4f67-aeab-36005edda669';
    $pane = new stdClass();
    $pane->pid = 'new-e4c5a3c2-66ae-40f2-90a1-e6f18f712bce';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_news-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '128',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => '',
        'tid' => '25',
      ),
      'more_link' => 1,
      'use_pager' => 1,
      'pager_id' => '3',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'body' => 0,
        'created' => 1,
        'og_vocabulary' => 0,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent Documents',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e4c5a3c2-66ae-40f2-90a1-e6f18f712bce';
    $display->content['new-e4c5a3c2-66ae-40f2-90a1-e6f18f712bce'] = $pane;
    $display->panels['contentcolumn2'][0] = 'new-e4c5a3c2-66ae-40f2-90a1-e6f18f712bce';
    $pane = new stdClass();
    $pane->pid = 'new-9c778226-0014-4499-81e2-50e72cceef90';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_worktracker-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '128',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'realname_1' => '',
        'realname' => '',
        'field_oa_worktracker_task_status_value' => array(
          'open' => 'open',
        ),
        'field_oa_worktracker_priority_value' => array(),
        'tid' => '25',
      ),
      'use_pager' => 1,
      'pager_id' => '4',
      'items_per_page' => '10',
      'fields_override' => array(
        'title' => 1,
        'timestamp' => 0,
        'field_oa_worktracker_duedate' => 0,
        'realname_1' => 0,
        'realname' => 0,
        'og_group_ref' => 0,
        'title_1' => 0,
        'field_oa_worktracker_priority' => 1,
        'field_oa_worktracker_task_type' => 0,
        'field_oa_worktracker_task_status' => 0,
        'comment_count' => 0,
        'last_updated' => 1,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Open Tasks',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9c778226-0014-4499-81e2-50e72cceef90';
    $display->content['new-9c778226-0014-4499-81e2-50e72cceef90'] = $pane;
    $display->panels['contentcolumn2'][1] = 'new-9c778226-0014-4499-81e2-50e72cceef90';
    $pane = new stdClass();
    $pane->pid = 'new-7f9791cd-ab71-491c-aa6f-45d0bb52253d';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_recent_activity-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'type' => array(
          'panopoly_page' => 'panopoly_page',
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
        'oa_section_ref_target_id' => '',
        'tid' => '25',
      ),
      'items_per_page' => '10',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent activity',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7f9791cd-ab71-491c-aa6f-45d0bb52253d';
    $display->content['new-7f9791cd-ab71-491c-aa6f-45d0bb52253d'] = $pane;
    $display->panels['sidebar'][0] = 'new-7f9791cd-ab71-491c-aa6f-45d0bb52253d';
    $pane = new stdClass();
    $pane->pid = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_event_list-oa_events_upcoming_small';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => 'All',
      ),
      'items_per_page' => '10',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'db389465-6c69-49c4-acf4-e4bd253dd367';
    $display->content['new-db389465-6c69-49c4-acf4-e4bd253dd367'] = $pane;
    $display->panels['sidebar'][1] = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['people_subareas'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'product_subareas';
  $page->task = 'page';
  $page->admin_title = 'Product subareas';
  $page->admin_description = '';
  $page->path = 'product/%term';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'term' => array(
      'id' => 1,
      'identifier' => 'Subarea',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'term',
        'vids' => array(
          4 => '4',
          1 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          3 => 0,
          2 => 0,
        ),
        'breadcrumb' => 0,
        'transform' => 1,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_product_subareas_panel_context_4';
  $handler->task = 'page';
  $handler->subtask = 'product_subareas';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Produc: Pipeline',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'remove-top-menu',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'product_subareas' => 'product_subareas',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '4',
            1 => array(),
            5 => array(),
            6 => array(),
            7 => array(),
            4 => array(
              13 => '13',
            ),
            3 => array(),
            2 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bartlett_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = '93368bda-2aee-4b1b-afd5-4e08deaf9131';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c3427202-4e4a-4d8b-ac71-6ed404dc036a';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '129',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid' => '13',
      ),
      'use_pager' => 1,
      'pager_id' => '1',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Latest Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c3427202-4e4a-4d8b-ac71-6ed404dc036a';
    $display->content['new-c3427202-4e4a-4d8b-ac71-6ed404dc036a'] = $pane;
    $display->panels['contentcolumn1'][0] = 'new-c3427202-4e4a-4d8b-ac71-6ed404dc036a';
    $pane = new stdClass();
    $pane->pid = 'new-60b0bb24-a86b-42ab-9de8-50824c07562d';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '129',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid' => '13',
      ),
      'use_pager' => 1,
      'pager_id' => '2',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Popular Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '60b0bb24-a86b-42ab-9de8-50824c07562d';
    $display->content['new-60b0bb24-a86b-42ab-9de8-50824c07562d'] = $pane;
    $display->panels['contentcolumn1'][1] = 'new-60b0bb24-a86b-42ab-9de8-50824c07562d';
    $pane = new stdClass();
    $pane->pid = 'new-9205e95b-4c30-40af-a59f-c6ad4e47f471';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_news-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '129',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => '132',
        'tid' => '13',
      ),
      'more_link' => 1,
      'use_pager' => 1,
      'pager_id' => '3',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'body' => 0,
        'created' => 1,
        'og_vocabulary' => 0,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent Documents',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9205e95b-4c30-40af-a59f-c6ad4e47f471';
    $display->content['new-9205e95b-4c30-40af-a59f-c6ad4e47f471'] = $pane;
    $display->panels['contentcolumn2'][0] = 'new-9205e95b-4c30-40af-a59f-c6ad4e47f471';
    $pane = new stdClass();
    $pane->pid = 'new-fad6ea96-322e-48cc-a2fa-177cdf61acb9';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_worktracker-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '129',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'realname_1' => '',
        'realname' => '',
        'field_oa_worktracker_task_status_value' => array(
          'open' => 'open',
        ),
        'field_oa_worktracker_priority_value' => array(),
        'tid' => '13',
      ),
      'use_pager' => 1,
      'pager_id' => '4',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'timestamp' => 0,
        'field_oa_worktracker_duedate' => 0,
        'realname_1' => 0,
        'realname' => 0,
        'og_group_ref' => 0,
        'title_1' => 0,
        'field_oa_worktracker_priority' => 1,
        'field_oa_worktracker_task_type' => 0,
        'field_oa_worktracker_task_status' => 0,
        'comment_count' => 0,
        'last_updated' => 1,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Open Tasks',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fad6ea96-322e-48cc-a2fa-177cdf61acb9';
    $display->content['new-fad6ea96-322e-48cc-a2fa-177cdf61acb9'] = $pane;
    $display->panels['contentcolumn2'][1] = 'new-fad6ea96-322e-48cc-a2fa-177cdf61acb9';
    $pane = new stdClass();
    $pane->pid = 'new-4877d886-e265-4904-a87a-cf747acf17fa';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_recent_activity-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'type' => array(
          'panopoly_page' => 'panopoly_page',
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
        'tid' => '13',
      ),
      'items_per_page' => '10',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent Activity',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4877d886-e265-4904-a87a-cf747acf17fa';
    $display->content['new-4877d886-e265-4904-a87a-cf747acf17fa'] = $pane;
    $display->panels['sidebar'][0] = 'new-4877d886-e265-4904-a87a-cf747acf17fa';
    $pane = new stdClass();
    $pane->pid = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_event_list-oa_events_upcoming_small';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => 'All',
      ),
      'items_per_page' => '10',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'db389465-6c69-49c4-acf4-e4bd253dd367';
    $display->content['new-db389465-6c69-49c4-acf4-e4bd253dd367'] = $pane;
    $display->panels['sidebar'][1] = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_product_subareas_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'product_subareas';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'Product: Collaborative Platform',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'remove-top-menu',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'product_subareas' => 'product_subareas',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '4',
            1 => array(),
            5 => array(),
            6 => array(),
            7 => array(),
            4 => array(
              10 => '10',
            ),
            3 => array(),
            2 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bartlett_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = '93368bda-2aee-4b1b-afd5-4e08deaf9131';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c3427202-4e4a-4d8b-ac71-6ed404dc036a';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '129',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid' => '10',
      ),
      'use_pager' => 1,
      'pager_id' => '1',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Latest Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c3427202-4e4a-4d8b-ac71-6ed404dc036a';
    $display->content['new-c3427202-4e4a-4d8b-ac71-6ed404dc036a'] = $pane;
    $display->panels['contentcolumn1'][0] = 'new-c3427202-4e4a-4d8b-ac71-6ed404dc036a';
    $pane = new stdClass();
    $pane->pid = 'new-60b0bb24-a86b-42ab-9de8-50824c07562d';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '129',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid' => '10',
      ),
      'use_pager' => 1,
      'pager_id' => '2',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Popular Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '60b0bb24-a86b-42ab-9de8-50824c07562d';
    $display->content['new-60b0bb24-a86b-42ab-9de8-50824c07562d'] = $pane;
    $display->panels['contentcolumn1'][1] = 'new-60b0bb24-a86b-42ab-9de8-50824c07562d';
    $pane = new stdClass();
    $pane->pid = 'new-9205e95b-4c30-40af-a59f-c6ad4e47f471';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_news-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '129',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => '132',
        'tid' => '10',
      ),
      'more_link' => 1,
      'use_pager' => 1,
      'pager_id' => '3',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'body' => 0,
        'created' => 1,
        'og_vocabulary' => 0,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent Documents',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9205e95b-4c30-40af-a59f-c6ad4e47f471';
    $display->content['new-9205e95b-4c30-40af-a59f-c6ad4e47f471'] = $pane;
    $display->panels['contentcolumn2'][0] = 'new-9205e95b-4c30-40af-a59f-c6ad4e47f471';
    $pane = new stdClass();
    $pane->pid = 'new-fad6ea96-322e-48cc-a2fa-177cdf61acb9';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_worktracker-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '129',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'realname_1' => '',
        'realname' => '',
        'field_oa_worktracker_task_status_value' => array(
          'open' => 'open',
        ),
        'field_oa_worktracker_priority_value' => array(),
        'tid' => '10',
      ),
      'use_pager' => 1,
      'pager_id' => '4',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'timestamp' => 0,
        'field_oa_worktracker_duedate' => 0,
        'realname_1' => 0,
        'realname' => 0,
        'og_group_ref' => 0,
        'title_1' => 0,
        'field_oa_worktracker_priority' => 1,
        'field_oa_worktracker_task_type' => 0,
        'field_oa_worktracker_task_status' => 0,
        'comment_count' => 0,
        'last_updated' => 1,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Open Tasks',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fad6ea96-322e-48cc-a2fa-177cdf61acb9';
    $display->content['new-fad6ea96-322e-48cc-a2fa-177cdf61acb9'] = $pane;
    $display->panels['contentcolumn2'][1] = 'new-fad6ea96-322e-48cc-a2fa-177cdf61acb9';
    $pane = new stdClass();
    $pane->pid = 'new-4877d886-e265-4904-a87a-cf747acf17fa';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_recent_activity-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'type' => array(
          'panopoly_page' => 'panopoly_page',
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
        'tid' => '10',
      ),
      'items_per_page' => '10',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent Activity',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4877d886-e265-4904-a87a-cf747acf17fa';
    $display->content['new-4877d886-e265-4904-a87a-cf747acf17fa'] = $pane;
    $display->panels['sidebar'][0] = 'new-4877d886-e265-4904-a87a-cf747acf17fa';
    $pane = new stdClass();
    $pane->pid = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_event_list-oa_events_upcoming_small';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => 'All',
      ),
      'items_per_page' => '10',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'db389465-6c69-49c4-acf4-e4bd253dd367';
    $display->content['new-db389465-6c69-49c4-acf4-e4bd253dd367'] = $pane;
    $display->panels['sidebar'][1] = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_product_subareas_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'product_subareas';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'Product: Data Broker',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'remove-top-menu',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'product_subareas' => 'product_subareas',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '4',
            1 => array(),
            5 => array(),
            6 => array(),
            7 => array(),
            4 => array(
              11 => '11',
            ),
            3 => array(),
            2 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bartlett_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = '93368bda-2aee-4b1b-afd5-4e08deaf9131';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c3427202-4e4a-4d8b-ac71-6ed404dc036a';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '129',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid' => '11',
      ),
      'use_pager' => 1,
      'pager_id' => '1',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Latest Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c3427202-4e4a-4d8b-ac71-6ed404dc036a';
    $display->content['new-c3427202-4e4a-4d8b-ac71-6ed404dc036a'] = $pane;
    $display->panels['contentcolumn1'][0] = 'new-c3427202-4e4a-4d8b-ac71-6ed404dc036a';
    $pane = new stdClass();
    $pane->pid = 'new-60b0bb24-a86b-42ab-9de8-50824c07562d';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '129',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid' => '11',
      ),
      'use_pager' => 1,
      'pager_id' => '2',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Popular Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '60b0bb24-a86b-42ab-9de8-50824c07562d';
    $display->content['new-60b0bb24-a86b-42ab-9de8-50824c07562d'] = $pane;
    $display->panels['contentcolumn1'][1] = 'new-60b0bb24-a86b-42ab-9de8-50824c07562d';
    $pane = new stdClass();
    $pane->pid = 'new-9205e95b-4c30-40af-a59f-c6ad4e47f471';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_news-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '129',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => '132',
        'tid' => '11',
      ),
      'more_link' => 1,
      'use_pager' => 1,
      'pager_id' => '3',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'body' => 0,
        'created' => 1,
        'og_vocabulary' => 0,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent Documents',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9205e95b-4c30-40af-a59f-c6ad4e47f471';
    $display->content['new-9205e95b-4c30-40af-a59f-c6ad4e47f471'] = $pane;
    $display->panels['contentcolumn2'][0] = 'new-9205e95b-4c30-40af-a59f-c6ad4e47f471';
    $pane = new stdClass();
    $pane->pid = 'new-fad6ea96-322e-48cc-a2fa-177cdf61acb9';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_worktracker-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '129',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'realname_1' => '',
        'realname' => '',
        'field_oa_worktracker_task_status_value' => array(
          'open' => 'open',
        ),
        'field_oa_worktracker_priority_value' => array(),
        'tid' => '11',
      ),
      'use_pager' => 1,
      'pager_id' => '4',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'timestamp' => 0,
        'field_oa_worktracker_duedate' => 0,
        'realname_1' => 0,
        'realname' => 0,
        'og_group_ref' => 0,
        'title_1' => 0,
        'field_oa_worktracker_priority' => 1,
        'field_oa_worktracker_task_type' => 0,
        'field_oa_worktracker_task_status' => 0,
        'comment_count' => 0,
        'last_updated' => 1,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Open Tasks',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fad6ea96-322e-48cc-a2fa-177cdf61acb9';
    $display->content['new-fad6ea96-322e-48cc-a2fa-177cdf61acb9'] = $pane;
    $display->panels['contentcolumn2'][1] = 'new-fad6ea96-322e-48cc-a2fa-177cdf61acb9';
    $pane = new stdClass();
    $pane->pid = 'new-4877d886-e265-4904-a87a-cf747acf17fa';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_recent_activity-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'type' => array(
          'panopoly_page' => 'panopoly_page',
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
        'tid' => '11',
      ),
      'items_per_page' => '10',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent Activity',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4877d886-e265-4904-a87a-cf747acf17fa';
    $display->content['new-4877d886-e265-4904-a87a-cf747acf17fa'] = $pane;
    $display->panels['sidebar'][0] = 'new-4877d886-e265-4904-a87a-cf747acf17fa';
    $pane = new stdClass();
    $pane->pid = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_event_list-oa_events_upcoming_small';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => 'All',
      ),
      'items_per_page' => '10',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'db389465-6c69-49c4-acf4-e4bd253dd367';
    $display->content['new-db389465-6c69-49c4-acf4-e4bd253dd367'] = $pane;
    $display->panels['sidebar'][1] = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_product_subareas_panel_context_3';
  $handler->task = 'page';
  $handler->subtask = 'product_subareas';
  $handler->handler = 'panel_context';
  $handler->weight = 6;
  $handler->conf = array(
    'title' => 'Product: Operations',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'remove-top-menu',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'product_subareas' => 'product_subareas',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '4',
            1 => array(),
            5 => array(),
            6 => array(),
            7 => array(),
            4 => array(
              12 => '12',
            ),
            3 => array(),
            2 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bartlett_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'contentheader' => NULL,
      'contentcolumn1' => NULL,
      'contentcolumn2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = '93368bda-2aee-4b1b-afd5-4e08deaf9131';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c3427202-4e4a-4d8b-ac71-6ed404dc036a';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '129',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid' => '12',
      ),
      'use_pager' => 1,
      'pager_id' => '1',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Latest Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c3427202-4e4a-4d8b-ac71-6ed404dc036a';
    $display->content['new-c3427202-4e4a-4d8b-ac71-6ed404dc036a'] = $pane;
    $display->panels['contentcolumn1'][0] = 'new-c3427202-4e4a-4d8b-ac71-6ed404dc036a';
    $pane = new stdClass();
    $pane->pid = 'new-60b0bb24-a86b-42ab-9de8-50824c07562d';
    $pane->panel = 'contentcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_discussions-panel_pane_8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '129',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'tid' => '12',
      ),
      'use_pager' => 1,
      'pager_id' => '2',
      'items_per_page' => '5',
      'offset' => '0',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Popular Topics',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '60b0bb24-a86b-42ab-9de8-50824c07562d';
    $display->content['new-60b0bb24-a86b-42ab-9de8-50824c07562d'] = $pane;
    $display->panels['contentcolumn1'][1] = 'new-60b0bb24-a86b-42ab-9de8-50824c07562d';
    $pane = new stdClass();
    $pane->pid = 'new-9205e95b-4c30-40af-a59f-c6ad4e47f471';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'open_atrium_news-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '129',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => '132',
        'tid' => '12',
      ),
      'more_link' => 1,
      'use_pager' => 1,
      'pager_id' => '3',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'body' => 0,
        'created' => 1,
        'og_vocabulary' => 0,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent Documents',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9205e95b-4c30-40af-a59f-c6ad4e47f471';
    $display->content['new-9205e95b-4c30-40af-a59f-c6ad4e47f471'] = $pane;
    $display->panels['contentcolumn2'][0] = 'new-9205e95b-4c30-40af-a59f-c6ad4e47f471';
    $pane = new stdClass();
    $pane->pid = 'new-fad6ea96-322e-48cc-a2fa-177cdf61acb9';
    $pane->panel = 'contentcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_worktracker-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '129',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'realname_1' => '',
        'realname' => '',
        'field_oa_worktracker_task_status_value' => array(
          'open' => 'open',
        ),
        'field_oa_worktracker_priority_value' => array(),
        'tid' => '12',
      ),
      'use_pager' => 1,
      'pager_id' => '4',
      'items_per_page' => '5',
      'fields_override' => array(
        'title' => 1,
        'timestamp' => 0,
        'field_oa_worktracker_duedate' => 0,
        'realname_1' => 0,
        'realname' => 0,
        'og_group_ref' => 0,
        'title_1' => 0,
        'field_oa_worktracker_priority' => 1,
        'field_oa_worktracker_task_type' => 0,
        'field_oa_worktracker_task_status' => 0,
        'comment_count' => 0,
        'last_updated' => 1,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Open Tasks',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fad6ea96-322e-48cc-a2fa-177cdf61acb9';
    $display->content['new-fad6ea96-322e-48cc-a2fa-177cdf61acb9'] = $pane;
    $display->panels['contentcolumn2'][1] = 'new-fad6ea96-322e-48cc-a2fa-177cdf61acb9';
    $pane = new stdClass();
    $pane->pid = 'new-4877d886-e265-4904-a87a-cf747acf17fa';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_recent_activity-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'type' => array(
          'panopoly_page' => 'panopoly_page',
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
        'tid' => '12',
      ),
      'items_per_page' => '10',
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Recent Activity',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4877d886-e265-4904-a87a-cf747acf17fa';
    $display->content['new-4877d886-e265-4904-a87a-cf747acf17fa'] = $pane;
    $display->panels['sidebar'][0] = 'new-4877d886-e265-4904-a87a-cf747acf17fa';
    $pane = new stdClass();
    $pane->pid = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'oa_event_list-oa_events_upcoming_small';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'exposed' => array(
        'og_group_ref_target_id' => '',
        'og_group_ref_target_id_mine' => 0,
        'og_subspaces_view_all' => 0,
        'oa_section_ref_target_id' => 'All',
      ),
      'items_per_page' => '10',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'oa_styles_oa_pane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'db389465-6c69-49c4-acf4-e4bd253dd367';
    $display->content['new-db389465-6c69-49c4-acf4-e4bd253dd367'] = $pane;
    $display->panels['sidebar'][1] = 'new-db389465-6c69-49c4-acf4-e4bd253dd367';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['product_subareas'] = $page;

  return $pages;

}
