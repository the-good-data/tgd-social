<?php
/**
 * @file
 * tgd_ui.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function tgd_ui_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:oa_discussion_post:default.display|content|new-35d06055-8f3f-4790-b785-bb5d0d336ecb|position"] = 2;
  $overrides["panelizer_defaults.node:oa_discussion_post:default.display|content|new-3ce319e2-91c0-4ea6-8ad7-e71ec219a797"] = (object) array(
      'pid' => 'new-3ce319e2-91c0-4ea6-8ad7-e71ec219a797',
      'panel' => 'sidebar',
      'type' => 'subscribe_group',
      'subtype' => 'subscribe_group',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => 'panelizer',
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => '3ce319e2-91c0-4ea6-8ad7-e71ec219a797',
    );
  $overrides["panelizer_defaults.node:oa_discussion_post:default.display|content|new-5391a87c-2b91-4ee7-a17d-07a99957758b|position"] = 3;
  $overrides["panelizer_defaults.node:oa_discussion_post:default.display|panels|sidebar|3"] = 'new-3ce319e2-91c0-4ea6-8ad7-e71ec219a797';

  // Exported overrides for: panels_mini
  $overrides["panels_mini.oa_footer_panel.display|content|new-39727060-3c1c-4478-ac3f-fa1a0800ad6f"]["DELETED"] = TRUE;
  $overrides["panels_mini.oa_footer_panel.display|content|new-4d26d0af-a79e-421d-9541-7c71cb36c3b1"] = (object) array(
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
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '4d26d0af-a79e-421d-9541-7c71cb36c3b1',
    );
  $overrides["panels_mini.oa_footer_panel.display|content|new-acef9208-6753-4fee-8b2b-834b2ed0909a"]["DELETED"] = TRUE;
  $overrides["panels_mini.oa_footer_panel.display|layout"] = 'boxton';
  $overrides["panels_mini.oa_footer_panel.display|panel_settings|style_settings|contentmain"] = NULL;
  $overrides["panels_mini.oa_footer_panel.display|panels|column1"]["DELETED"] = TRUE;
  $overrides["panels_mini.oa_footer_panel.display|panels|column3"]["DELETED"] = TRUE;
  $overrides["panels_mini.oa_footer_panel.display|panels|contentmain"] = array(
    0 => 'new-4d26d0af-a79e-421d-9541-7c71cb36c3b1',
  );

  // Exported overrides for: variable
  $overrides["variable.contextual_tabs_extract.value"] = 'user*:Edit|Edit profile,icon-pencil
  user*:Notifications
  node/*:Google drive content|Google drive
  node/*/clone/confirm:View|Cancel,icon-remove
  node/*/edit:View|Cancel,icon-remove
  View
  Edit,icon-pencil
  Members,icon-user';

 return $overrides;
}
