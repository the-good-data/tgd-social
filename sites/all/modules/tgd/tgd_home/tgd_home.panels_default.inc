<?php
/**
 * @file
 * tgd_home.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function tgd_home_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'tgd_footer_panel';
  $mini->category = 'Page Elements';
  $mini->admin_title = 'TGD Footer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c94dbbdc-f52c-491e-bde7-a61c98b5cbd3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4d26d0af-a79e-421d-9541-7c71cb36c3b1';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'The Good Data Footer',
      'title' => '',
      'body' => '               <div class="container clearfix">
                    <ul>
                        <h4>service</h4>
                        <li><a href="https://www.thegooddata.org/product">Product</a></li>
                        <li><a href="https://www.thegooddata.org/faq">FAQs</a></li>
                        <li><a href="mailto:support@thegooddata.org">Support</a></li>
                    </ul>
                    <ul>
                        <h4>third parties</h4>
                        <li><a href="https://www.thegooddata.org/partners">Partners</a></li>
                        <li><a href="https://www.thegooddata.org/coders">Coders</a></li>
                        <li><a href="mailto:media@thegooddata.org">Media</a></li>
                    </ul>
                    <ul>
                        <h4>company</h4>
                        <li><a href="https://www.thegooddata.org/your-company">Your Company</a></li>
                        <li><a href="//collaborate.thegooddata.org" class="red exclude">Collaborate</a></li>
                        <li><a href="https://www.thegooddata.org/support-us" class="red">Donate</a></li>
                    </ul>
                    <ul>
                        <h4>contact</h4>
                        <li>82 Clerkenwell Road</li>
                        <li>London EC1M 5RF, UK</li>
                        <li><a href="mailto:info@thegooddata.org">Email Us</a></li>
                    </ul>
                    <ul id="fifth">
                        <h4>legal stuff</h4>
                        <li><a href="https://www.thegooddata.org/legal#terms">Terms of Use</a></li>
                        <li><a href="https://www.thegooddata.org/legal#privacy">Privacy & Cookies</a></li>
                        <li><a href="https://www.thegooddata.org/legal#rules">Company Rules</a></li>
                    </ul>        
                    <ul class="social">
                        <li class="first">
                            <a id="gooddata" href="//collaborate.thegooddata.org" class="exclude"></a>
                        </li>
                        <li>
                            <a id="wordpress" href="//blog.thegooddata.org"></a>
                        </li>
                        <li>
                            <a id="reddit" href="http://www.reddit.com/user/thegooddata" class="exclude"></a>
                        </li>
                        <li class="last">
                            <a id="twitter" href="https://twitter.com/thegooddata" class="exclude"></a>
                        </li>
                        <em><a href="http://www.thegooddata.org">&copy; 2014, thegooddata.org</a></em>
                    </ul>
                </div> <!-- wrap -->',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4d26d0af-a79e-421d-9541-7c71cb36c3b1';
    $display->content['new-4d26d0af-a79e-421d-9541-7c71cb36c3b1'] = $pane;
    $display->panels['contentmain'][0] = 'new-4d26d0af-a79e-421d-9541-7c71cb36c3b1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['tgd_footer_panel'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'tgd_toolbar_panel';
  $mini->category = 'Page Elements';
  $mini->admin_title = 'TGD Toolbar';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'moscone_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'middle' => NULL,
      'secondcolumn1' => NULL,
      'secondcolumn2' => NULL,
      'footer' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '42cc7a4a-0bc0-4e2b-beca-b38e963ea867';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3bd6fb98-8bec-48c8-9777-cf8850617d9f';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'oa_toolbar-oa_toolbar_menu_button';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'admin-mobile-menu pull-left',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3bd6fb98-8bec-48c8-9777-cf8850617d9f';
    $display->content['new-3bd6fb98-8bec-48c8-9777-cf8850617d9f'] = $pane;
    $display->panels['footer'][0] = 'new-3bd6fb98-8bec-48c8-9777-cf8850617d9f';
    $pane = new stdClass();
    $pane->pid = 'new-2b828bf5-01a6-4805-a95d-6c64c67317ef';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'oa_toolbar-oa_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'spaces-mobile-menu pull-left',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2b828bf5-01a6-4805-a95d-6c64c67317ef';
    $display->content['new-2b828bf5-01a6-4805-a95d-6c64c67317ef'] = $pane;
    $display->panels['footer'][1] = 'new-2b828bf5-01a6-4805-a95d-6c64c67317ef';
    $pane = new stdClass();
    $pane->pid = 'new-bf0e9047-1f82-4bcf-bf9b-f97fe6748f41';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'oa_toolbar-oa_user_badge';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'user-mobile-menu pull-right',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'bf0e9047-1f82-4bcf-bf9b-f97fe6748f41';
    $display->content['new-bf0e9047-1f82-4bcf-bf9b-f97fe6748f41'] = $pane;
    $display->panels['footer'][2] = 'new-bf0e9047-1f82-4bcf-bf9b-f97fe6748f41';
    $pane = new stdClass();
    $pane->pid = 'new-818fa3a5-376e-4e7f-8f98-77ed1a6c3252';
    $pane->panel = 'footer';
    $pane->type = 'oa_toolbar_search';
    $pane->subtype = 'oa_toolbar_search';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'search-mobile-menu pull-right',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '818fa3a5-376e-4e7f-8f98-77ed1a6c3252';
    $display->content['new-818fa3a5-376e-4e7f-8f98-77ed1a6c3252'] = $pane;
    $display->panels['footer'][3] = 'new-818fa3a5-376e-4e7f-8f98-77ed1a6c3252';
    $pane = new stdClass();
    $pane->pid = 'new-738df920-1380-4622-ba4c-21f486060818';
    $pane->panel = 'footer';
    $pane->type = 'oa_favorites_favorites_button';
    $pane->subtype = 'oa_favorites_favorites_button';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'search-mobile-menu pull-right',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '738df920-1380-4622-ba4c-21f486060818';
    $display->content['new-738df920-1380-4622-ba4c-21f486060818'] = $pane;
    $display->panels['footer'][4] = 'new-738df920-1380-4622-ba4c-21f486060818';
    $pane = new stdClass();
    $pane->pid = 'new-70813a7e-2551-49da-bd7c-4acaff4cae42';
    $pane->panel = 'footer';
    $pane->type = 'add_space_content';
    $pane->subtype = 'add_space_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'spaces-mobile-menu pull-right',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '70813a7e-2551-49da-bd7c-4acaff4cae42';
    $display->content['new-70813a7e-2551-49da-bd7c-4acaff4cae42'] = $pane;
    $display->panels['footer'][5] = 'new-70813a7e-2551-49da-bd7c-4acaff4cae42';
    $pane = new stdClass();
    $pane->pid = 'new-d02119ab-43a7-4f5b-98a8-24506b23a2d2';
    $pane->panel = 'header';
    $pane->type = 'oa_space_banner';
    $pane->subtype = 'oa_space_banner';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'banner_position' => '1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd02119ab-43a7-4f5b-98a8-24506b23a2d2';
    $display->content['new-d02119ab-43a7-4f5b-98a8-24506b23a2d2'] = $pane;
    $display->panels['header'][0] = 'new-d02119ab-43a7-4f5b-98a8-24506b23a2d2';
    $pane = new stdClass();
    $pane->pid = 'new-86bc5dc1-c1f8-4b43-a40c-7e7a36198b24';
    $pane->panel = 'header';
    $pane->type = 'oa_navigation';
    $pane->subtype = 'oa_navigation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'return' => 'Save',
      'cancel' => 'Cancel',
      'preview' => 'Update Preview',
      'override_title' => 0,
      'override_title_text' => '',
      'menu_name' => 'main-menu',
      'form_build_id' => 'form-EF6I4nvJ3PuMvArFhpFJ5Kp2OcDwMvG8gl4B3NlDRx0',
      'form_token' => 'BZ3KmS-psxrtVGe71oapeoJx9emdlcwu-NeoYSCB2XA',
      'form_id' => 'oa_toolbar_oa_navigation_content_type_edit_form',
      'op' => 'Save',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '86bc5dc1-c1f8-4b43-a40c-7e7a36198b24';
    $display->content['new-86bc5dc1-c1f8-4b43-a40c-7e7a36198b24'] = $pane;
    $display->panels['header'][1] = 'new-86bc5dc1-c1f8-4b43-a40c-7e7a36198b24';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['tgd_toolbar_panel'] = $mini;

  return $export;
}
