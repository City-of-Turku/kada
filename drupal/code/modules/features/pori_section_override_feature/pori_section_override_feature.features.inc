<?php
/**
 * @file
 * pori_section_override_feature.features.inc
 */

/**
 * Implements hook_context_default_contexts_alter().
 */
function pori_section_override_feature_context_default_contexts_alter(&$data) {
  if (isset($data['default_section'])) {
    $data['default_section']->conditions['context']['values']['~visitpori_domain'] = '~visitpori_domain'; /* WAS: '' */
  }
  if (isset($data['section_header'])) {
    $data['section_header']->reactions['block']['blocks']['locale-language'] = array(
      'module' => 'locale',
      'delta' => 'language',
      'region' => 'branding',
      'weight' => -8,
    ); /* WAS: '' */
    $data['section_header']->reactions['block']['blocks']['views--exp-main_search-page'] = array(
      'module' => 'views',
      'delta' => '-exp-main_search-page',
      'region' => 'branding',
      'weight' => -9,
    ); /* WAS: '' */
    $data['section_header']->reactions['block']['blocks']['views-kada_section_header-block_1']['region'] = 'branding'; /* WAS: 'header_top' */
    $data['section_header']->reactions['theme_html'] = array(
      'class' => 'section-context',
    ); /* WAS: '' */
  }
  if (isset($data['section_menus'])) {
    $data['section_menus']->condition_mode = 1; /* WAS: 0 */
    $data['section_menus']->conditions['context_all'] = array(
      'values' => array(
        'default_section' => 'default_section',
      ),
    ); /* WAS: '' */
    unset($data['section_menus']->reactions['block']['blocks']['menu_block-4']);
  }
}

/**
 * Implements hook_quicktabs_default_quicktabs_alter().
 */
function pori_section_override_feature_quicktabs_default_quicktabs_alter(&$data) {
  if (isset($data['feed_tabs_section'])) {
    $data['feed_tabs_section']->options['history'] = 0; /* WAS: '' */
    $data['feed_tabs_section']->renderer = 'ui_tabs'; /* WAS: 'quicktabs' */
    $data['feed_tabs_section']->tabs[1]['use_title'] = 0; /* WAS: '' */
    $data['feed_tabs_section']->tabs[2]['use_title'] = 0; /* WAS: '' */
    $data['feed_tabs_section']->tabs[3]['use_title'] = 0; /* WAS: '' */
    $data['feed_tabs_section']->tabs[4]['use_title'] = 0; /* WAS: '' */
    $data['feed_tabs_section']->tabs[5]['use_title'] = 0; /* WAS: '' */
    $data['feed_tabs_section']->tabs[6]['use_title'] = 0; /* WAS: '' */
    $data['feed_tabs_section']->tabs[7]['use_title'] = 0; /* WAS: '' */
    $data['feed_tabs_section']->tabs[8]['use_title'] = 0; /* WAS: '' */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function pori_section_override_feature_views_default_views_alter(&$data) {
  if (isset($data['og_extras_members'])) {
    $data['og_extras_members']->display['default']->display_options['arguments']['gid']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['og_extras_members']->display['default']->display_options['arguments']['gid']['title_enable'] = TRUE; /* WAS: 1 */
    $data['og_extras_members']->display['page_1']->display_options['access'] = array(
      'type' => 'role',
      'role' => array(
        2 => 2,
      ),
    ); /* WAS: '' */
    $data['og_extras_members']->display['page_1']->display_options['defaults'] = array(
      'access' => FALSE,
    ); /* WAS: '' */
    unset($data['og_extras_members']->display['block_1']->display_options['fields']['name']['alter']);
    unset($data['og_extras_members']->display['block_1']->display_options['fields']['name']['empty_zero']);
    unset($data['og_extras_members']->display['block_1']->display_options['fields']['name']['hide_empty']);
    unset($data['og_extras_members']->display['block_1']->display_options['fields']['name']['link_to_user']);
    unset($data['og_extras_members']->display['block_1']->display_options['fields']['name']['overwrite_anonymous']);
    unset($data['og_extras_members']->display['block_1']->display_options['use_more_always']);
    unset($data['og_extras_members']->display['default']->display_options['arguments']['gid']['break_phrase']);
    unset($data['og_extras_members']->display['default']->display_options['arguments']['gid']['default_argument_skip_url']);
    unset($data['og_extras_members']->display['default']->display_options['arguments']['gid']['not']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['name']['alter']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['name']['empty_zero']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['name']['hide_empty']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['name']['link_to_user']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['name']['overwrite_anonymous']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['picture']['alter']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['picture']['element_default_classes']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['picture']['empty_zero']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['picture']['hide_alter_empty']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['picture']['hide_empty']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['picture']['link_photo_to_profile']);
    unset($data['og_extras_members']->display['default']->display_options['pager']['options']['expose']);
    unset($data['og_extras_members']->display['default']->display_options['relationships']['og_membership_rel']['required']);
    unset($data['og_extras_members']->display['default']->display_options['style_options']);
  }
}
