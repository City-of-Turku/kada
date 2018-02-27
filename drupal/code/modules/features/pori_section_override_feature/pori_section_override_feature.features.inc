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
