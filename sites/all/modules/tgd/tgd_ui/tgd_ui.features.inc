<?php
/**
 * @file
 * tgd_ui.features.inc
 */

/**
 * Implements hook_default_panels_mini_alter().
 */
function tgd_ui_default_panels_mini_alter(&$data) {
  if (isset($data['oa_footer_panel'])) {
    $data['oa_footer_panel']->display->content['new-4d26d0af-a79e-421d-9541-7c71cb36c3b1'] = (object) array(
          'pid' => 'new-4d26d0af-a79e-421d-9541-7c71cb36c3b1',
          'panel' => 'contentmain',
          'type' => 'custom',
          'subtype' => 'custom',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'admin_title' => 'The Good Data Footer',
            'title' => '',
            'body' => '
                            <div class="container clearfix">
                                <ul>
                                    <h4>service</h4>
                                    <li><a href="https://pre.thegooddata.org/product">Product</a></li>
                                    <li><a href="https://pre.thegooddata.org/faq">FAQs</a></li>
                                    <li><a href="mailto:support@thegooddata.org">Support</a></li>
                                </ul>
                                <ul>
                                    <h4>third parties</h4>
                                    <li><a href="https://pre.thegooddata.org/partners">Partners</a></li>
                                    <li><a href="https://pre.thegooddata.org/coders">Coders</a></li>
                                    <li><a href="mailto:media@thegooddata.org">Media</a></li>
                                </ul>
                                <ul>
                                    <h4>company</h4>
                                    <li><a href="https://pre.thegooddata.org/your-company">Your Company</a></li>
                                    <li><a href="//collaborate.thegooddata.org" class="red exclude">Collaborate</a></li>
                                    <li><a href="https://pre.thegooddata.org/support-us" class="red">Donate</a></li>
                                </ul>
                                <ul>
                                    <h4>contact</h4>
                                    <li>82 Clerkenwell Road</li>
                                    <li>London EC1M 5RF, UK</li>
                                    <li><a href="mailto:info@thegooddata.org">Email Us</a></li>
                                </ul>
                                <ul id="fifth">
                                    <h4>legal stuff</h4>
                                    <li><a href="https://pre.thegooddata.org/legal#terms">Terms of Use</a></li>
                                    <li><a href="https://pre.thegooddata.org/legal#privacy">Privacy & Cookies</a></li>
                                    <li><a href="https://pre.thegooddata.org/legal#rules">Company Rules</a></li>
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
          ),
          'cache' => array(),
          'css' => array(),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => '4d26d0af-a79e-421d-9541-7c71cb36c3b1',
        ); /* WAS: '' */
    $data['oa_footer_panel']->display->layout = 'boxton'; /* WAS: 'geary' */
    $data['oa_footer_panel']->display->panel_settings['style_settings']['contentmain'] = NULL; /* WAS: '' */
    $data['oa_footer_panel']->display->panels['contentmain'] = array(
      0 => 'new-4d26d0af-a79e-421d-9541-7c71cb36c3b1',
    ); /* WAS: '' */
    unset($data['oa_footer_panel']->display->content['new-39727060-3c1c-4478-ac3f-fa1a0800ad6f']);
    unset($data['oa_footer_panel']->display->content['new-acef9208-6753-4fee-8b2b-834b2ed0909a']);
    unset($data['oa_footer_panel']->display->panels['column1']);
    unset($data['oa_footer_panel']->display->panels['column3']);
  }
  if (isset($data['oa_toolbar_panel'])) {
    $data['oa_toolbar_panel']->display->content['new-3bd6fb98-8bec-48c8-9777-cf8850617d9f']->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    ); /* WAS: '' */
    $data['oa_toolbar_panel']->display->content['new-bf0e9047-1f82-4bcf-bf9b-f97fe6748f41']->css = array(
      'css_id' => '',
      'css_class' => 'pull-right',
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function tgd_ui_strongarm_alter(&$data) {
  if (isset($data['chosen_minimum_multiple'])) {
    $data['chosen_minimum_multiple']->value = 0; /* WAS: 'Always Apply' */
  }
  if (isset($data['chosen_minimum_single'])) {
    $data['chosen_minimum_single']->value = 0; /* WAS: 'Always Apply' */
  }
  if (isset($data['contextual_tabs_extract'])) {
    $data['contextual_tabs_extract']->value = 'user*:Edit|Edit profile,icon-pencil
    user*:Notifications
    node/*/clone/confirm:View|Cancel,icon-remove
    node/*/edit:View|Cancel,icon-remove
    View
    Edit,icon-pencil
    Members,icon-user; /* WAS: user*:Edit|Edit profile,icon-pencil */
    node/*/clone/confirm:View|Cancel,icon-remove
    node/*/edit:View|Cancel,icon-remove
    View
    Edit,icon-pencil
    Members,icon-user';
  }
}
