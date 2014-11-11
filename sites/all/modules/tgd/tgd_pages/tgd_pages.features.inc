<?php
/**
 * @file
 * tgd_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tgd_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tgd_pages_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_page_manager_pages_alter().
 */
function tgd_pages_default_page_manager_pages_alter(&$data) {
  if (isset($data['oa_homepage'])) {
    $data['oa_homepage']->default_handlers['page_oa_homepage_panel_context_3'] = (object) array(
          'disabled' => FALSE,
          'api_version' => 1,
          'name' => 'page_oa_homepage_panel_context_3',
          'task' => 'page',
          'subtask' => 'oa_homepage',
          'handler' => 'panel_context',
          'weight' => -28,
          'conf' => array(
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
            'display' => unserialize('O:14:"panels_display":16:{s:4:"args";a:0:{}s:7:"content";a:5:{s:40:"new-c9ba65ec-a8f3-412c-9f14-de0b2d5b8d98";O:8:"stdClass":14:{s:3:"pid";s:40:"new-c9ba65ec-a8f3-412c-9f14-de0b2d5b8d98";s:5:"panel";s:7:"column1";s:4:"type";s:11:"views_panes";s:7:"subtype";s:40:"oa_recent_activity-recent_activity_basic";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:8:{s:7:"exposed";a:6:{s:4:"type";a:5:{s:18:"oa_discussion_post";s:18:"oa_discussion_post";s:12:"oa_wiki_page";s:12:"oa_wiki_page";s:8:"oa_event";s:8:"oa_event";s:4:"poll";s:4:"poll";s:19:"oa_worktracker_task";s:19:"oa_worktracker_task";}s:8:"realname";s:0:"";s:22:"og_group_ref_target_id";s:3:"129";s:27:"og_group_ref_target_id_mine";i:0;s:21:"og_subspaces_view_all";i:0;s:24:"oa_section_ref_target_id";s:3:"All";}s:14:"items_per_page";s:1:"7";s:14:"override_title";s:0:"";s:19:"override_title_text";s:0:"";s:13:"view_settings";s:6:"fields";s:11:"header_type";s:4:"none";s:9:"view_mode";s:6:"teaser";s:12:"widget_title";s:29:"<a href="product">Product</a>";}s:5:"cache";a:0:{}s:5:"style";a:2:{s:8:"settings";a:0:{}s:5:"style";s:17:"oa_styles_oa_pane";}s:3:"css";a:2:{s:6:"css_id";s:18:"product-space-pane";s:9:"css_class";s:0:"";}s:6:"extras";a:0:{}s:8:"position";i:0;s:5:"locks";a:0:{}s:4:"uuid";s:36:"c9ba65ec-a8f3-412c-9f14-de0b2d5b8d98";}s:40:"new-fb18237e-dd67-4632-9798-67763212420a";O:8:"stdClass":14:{s:3:"pid";s:40:"new-fb18237e-dd67-4632-9798-67763212420a";s:5:"panel";s:7:"column2";s:4:"type";s:11:"views_panes";s:7:"subtype";s:40:"oa_recent_activity-recent_activity_basic";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:8:{s:7:"exposed";a:6:{s:4:"type";a:5:{s:18:"oa_discussion_post";s:18:"oa_discussion_post";s:12:"oa_wiki_page";s:12:"oa_wiki_page";s:8:"oa_event";s:8:"oa_event";s:4:"poll";s:4:"poll";s:19:"oa_worktracker_task";s:19:"oa_worktracker_task";}s:8:"realname";s:0:"";s:22:"og_group_ref_target_id";s:3:"126";s:27:"og_group_ref_target_id_mine";i:0;s:21:"og_subspaces_view_all";i:0;s:24:"oa_section_ref_target_id";s:0:"";}s:14:"items_per_page";s:1:"7";s:14:"override_title";s:0:"";s:19:"override_title_text";s:0:"";s:13:"view_settings";s:6:"fields";s:11:"header_type";s:4:"none";s:9:"view_mode";s:6:"teaser";s:12:"widget_title";s:33:"<a href="corporate">Corporate</a>";}s:5:"cache";a:0:{}s:5:"style";a:2:{s:8:"settings";a:0:{}s:5:"style";s:17:"oa_styles_oa_pane";}s:3:"css";a:2:{s:6:"css_id";s:20:"corporate-space-pane";s:9:"css_class";s:0:"";}s:6:"extras";a:0:{}s:8:"position";i:0;s:5:"locks";a:0:{}s:4:"uuid";s:36:"fb18237e-dd67-4632-9798-67763212420a";}s:40:"new-a61c7bbf-fccf-4b3f-92cd-53b07a99b12a";O:8:"stdClass":14:{s:3:"pid";s:40:"new-a61c7bbf-fccf-4b3f-92cd-53b07a99b12a";s:5:"panel";s:6:"header";s:4:"type";s:21:"fieldable_panels_pane";s:7:"subtype";s:6:"fpid:1";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:1:{s:9:"view_mode";s:4:"full";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:2:{s:6:"css_id";s:14:"tgd-home-intro";s:9:"css_class";s:0:"";}s:6:"extras";a:0:{}s:8:"position";i:0;s:5:"locks";a:0:{}s:4:"uuid";s:36:"a61c7bbf-fccf-4b3f-92cd-53b07a99b12a";}s:40:"new-7dcabce7-dfa7-466b-bfcc-41e2b4eda91f";O:8:"stdClass":14:{s:3:"pid";s:40:"new-7dcabce7-dfa7-466b-bfcc-41e2b4eda91f";s:5:"panel";s:13:"secondcolumn1";s:4:"type";s:11:"views_panes";s:7:"subtype";s:40:"oa_recent_activity-recent_activity_basic";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:8:{s:7:"exposed";a:6:{s:4:"type";a:5:{s:18:"oa_discussion_post";s:18:"oa_discussion_post";s:12:"oa_wiki_page";s:12:"oa_wiki_page";s:8:"oa_event";s:8:"oa_event";s:4:"poll";s:4:"poll";s:19:"oa_worktracker_task";s:19:"oa_worktracker_task";}s:8:"realname";s:0:"";s:22:"og_group_ref_target_id";s:3:"127";s:27:"og_group_ref_target_id_mine";i:0;s:21:"og_subspaces_view_all";i:0;s:24:"oa_section_ref_target_id";s:3:"All";}s:14:"items_per_page";s:1:"7";s:14:"override_title";s:0:"";s:19:"override_title_text";s:0:"";s:13:"view_settings";s:6:"fields";s:11:"header_type";s:4:"none";s:9:"view_mode";s:6:"teaser";s:12:"widget_title";s:23:"<a href="data">Data</a>";}s:5:"cache";a:0:{}s:5:"style";a:2:{s:8:"settings";a:0:{}s:5:"style";s:17:"oa_styles_oa_pane";}s:3:"css";a:2:{s:6:"css_id";s:15:"data-space-pane";s:9:"css_class";s:0:"";}s:6:"extras";a:0:{}s:8:"position";i:0;s:5:"locks";a:0:{}s:4:"uuid";s:36:"7dcabce7-dfa7-466b-bfcc-41e2b4eda91f";}s:40:"new-e5e28c45-fff6-42cb-98af-80c0347623ff";O:8:"stdClass":14:{s:3:"pid";s:40:"new-e5e28c45-fff6-42cb-98af-80c0347623ff";s:5:"panel";s:13:"secondcolumn2";s:4:"type";s:11:"views_panes";s:7:"subtype";s:40:"oa_recent_activity-recent_activity_basic";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:8:{s:7:"exposed";a:6:{s:4:"type";a:5:{s:18:"oa_discussion_post";s:18:"oa_discussion_post";s:12:"oa_wiki_page";s:12:"oa_wiki_page";s:8:"oa_event";s:8:"oa_event";s:4:"poll";s:4:"poll";s:19:"oa_worktracker_task";s:19:"oa_worktracker_task";}s:8:"realname";s:0:"";s:22:"og_group_ref_target_id";s:3:"128";s:27:"og_group_ref_target_id_mine";i:0;s:21:"og_subspaces_view_all";i:0;s:24:"oa_section_ref_target_id";s:3:"All";}s:14:"items_per_page";s:1:"7";s:14:"override_title";s:0:"";s:19:"override_title_text";s:0:"";s:13:"view_settings";s:6:"fields";s:11:"header_type";s:4:"none";s:9:"view_mode";s:6:"teaser";s:12:"widget_title";s:27:"<a href="people">People</a>";}s:5:"cache";a:0:{}s:5:"style";a:2:{s:8:"settings";a:0:{}s:5:"style";s:17:"oa_styles_oa_pane";}s:3:"css";a:2:{s:6:"css_id";s:16:"users-space-pane";s:9:"css_class";s:0:"";}s:6:"extras";a:0:{}s:8:"position";i:0;s:5:"locks";a:0:{}s:4:"uuid";s:36:"e5e28c45-fff6-42cb-98af-80c0347623ff";}}s:6:"panels";a:5:{s:7:"column1";a:1:{i:0;s:40:"new-c9ba65ec-a8f3-412c-9f14-de0b2d5b8d98";}s:7:"column2";a:1:{i:0;s:40:"new-fb18237e-dd67-4632-9798-67763212420a";}s:6:"header";a:1:{i:0;s:40:"new-a61c7bbf-fccf-4b3f-92cd-53b07a99b12a";}s:13:"secondcolumn1";a:1:{i:0;s:40:"new-7dcabce7-dfa7-466b-bfcc-41e2b4eda91f";}s:13:"secondcolumn2";a:1:{i:0;s:40:"new-e5e28c45-fff6-42cb-98af-80c0347623ff";}}s:16:"incoming_content";N;s:6:"css_id";N;s:7:"context";a:0:{}s:3:"did";s:3:"new";s:8:"renderer";s:8:"standard";s:6:"layout";s:12:"sutro_double";s:15:"layout_settings";a:0:{}s:14:"panel_settings";a:1:{s:14:"style_settings";a:14:{s:7:"default";N;s:7:"sidebar";N;s:11:"contentmain";N;s:7:"column1";N;s:7:"column2";N;s:7:"column3";N;s:16:"secondarycolumn1";N;s:16:"secondarycolumn2";N;s:6:"header";N;s:16:"secondarycolumn3";N;s:6:"footer";N;s:6:"middle";N;s:13:"secondcolumn1";N;s:13:"secondcolumn2";N;}}s:5:"cache";a:0:{}s:5:"title";s:38:"Welcome to the Collaboration platform!";s:4:"uuid";s:36:"96db1dfc-d20c-4feb-ad0f-c69755a5da59";s:10:"hide_title";i:0;s:10:"title_pane";s:1:"0";}'),
          ),
        ); /* WAS: '' */
    unset($data['oa_homepage']->default_handlers['page_oa_homepage_panel_context']);
    unset($data['oa_homepage']->default_handlers['page_oa_homepage_panel_context_2']);
  }
}
