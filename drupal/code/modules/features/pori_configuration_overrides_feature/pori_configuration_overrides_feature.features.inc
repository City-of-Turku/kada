<?php
/**
 * @file
 * pori_configuration_overrides_feature.features.inc
 */

/**
 * Implements hook_context_default_contexts_alter().
 */
function pori_configuration_overrides_feature_context_default_contexts_alter(&$data) {
  if (isset($data['footer_navigation'])) {
    unset($data['footer_navigation']->reactions['block']);
  }
  if (isset($data['language_switcher'])) {
    $data['language_switcher']->conditions['context']['values']['visitpori_domain'] = 'visitpori_domain'; /* WAS: '' */
    $data['language_switcher']->reactions['block']['blocks']['locale-language']['region'] = 'branding'; /* WAS: 'navigation' */
    $data['language_switcher']->reactions['block']['blocks']['locale-language']['weight'] = -10; /* WAS: -50 */
  }
  if (isset($data['sitewide_en'])) {
    $data['sitewide_en']->reactions['block']['blocks']['block-1']['weight'] = -40; /* WAS: -10 */
  }
  if (isset($data['sitewide_fi'])) {
    $data['sitewide_fi']->reactions['block']['blocks']['block-2']['weight'] = -40; /* WAS: -10 */
  }
}

/**
 * Implements hook_ds_layout_settings_info_alter().
 */
function pori_configuration_overrides_feature_ds_layout_settings_info_alter(&$data) {
  if (isset($data['taxonomy_term|accessibility|default'])) {
    $data['taxonomy_term|accessibility|default']->layout = 'accessibility_layout'; /* WAS: 'minimal_layout' */
    $data['taxonomy_term|accessibility|default']->settings['fields']['description_field'] = 'main_content'; /* WAS: '' */
    $data['taxonomy_term|accessibility|default']->settings['layout_disable_css'] = FALSE; /* WAS: '' */
    $data['taxonomy_term|accessibility|default']->settings['regions']['main_content'][1] = 'description_field'; /* WAS: 'field_icon' */
    $data['taxonomy_term|accessibility|default']->settings['wrappers']['main_content'] = 'div'; /* WAS: '' */
    unset($data['taxonomy_term|accessibility|default']->settings['fields']['field_icon']);
    unset($data['taxonomy_term|accessibility|default']->settings['wrappers']['ds_content']);
  }
}

/**
 * Implements hook_field_default_field_bases_alter().
 */
function pori_configuration_overrides_feature_field_default_field_bases_alter(&$data) {
  if (isset($data['field_accessibility'])) {
    $data['field_accessibility']['settings']['hide_initial_item'] = FALSE; /* WAS: '' */
  }
  if (isset($data['field_icon'])) {
    unset($data['field_icon']);
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function pori_configuration_overrides_feature_field_default_field_instances_alter(&$data) {
  if (isset($data['taxonomy_term-accessibility-description_field'])) {
    $data['taxonomy_term-accessibility-description_field']['description'] = 'Write here a really short description of the accessibility feature in question if you want. Please notice that there is very little space for the description so it needs to be just a few words.'; /* WAS: '' */
    $data['taxonomy_term-accessibility-description_field']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
    $data['taxonomy_term-accessibility-description_field']['display']['default']['weight'] = 1; /* WAS: 2 */
    $data['taxonomy_term-accessibility-description_field']['settings']['context'] = 'title'; /* WAS: 'debug' */
    $data['taxonomy_term-accessibility-description_field']['settings']['linkit'] = array(
      'button_text' => 'Search',
      'enable' => 0,
      'profile' => '',
    ); /* WAS: '' */
    $data['taxonomy_term-accessibility-description_field']['settings']['text_processing'] = 0; /* WAS: 1 */
    $data['taxonomy_term-accessibility-description_field']['widget']['settings']['rows'] = 4; /* WAS: 1 */
    unset($data['taxonomy_term-accessibility-description_field']['widget']['settings']['maxlength_js']);
    unset($data['taxonomy_term-accessibility-description_field']['widget']['settings']['maxlength_js_enforce']);
    unset($data['taxonomy_term-accessibility-description_field']['widget']['settings']['maxlength_js_label']);
    unset($data['taxonomy_term-accessibility-description_field']['widget']['settings']['maxlength_js_label_summary']);
    unset($data['taxonomy_term-accessibility-description_field']['widget']['settings']['maxlength_js_summary']);
    unset($data['taxonomy_term-accessibility-description_field']['widget']['settings']['maxlength_js_truncate_html']);
  }
  if (isset($data['taxonomy_term-accessibility-field_icon'])) {
    unset($data['taxonomy_term-accessibility-field_icon']);
  }
  if (isset($data['taxonomy_term-accessibility-field_mds_code'])) {
    $data['taxonomy_term-accessibility-field_mds_code']['display']['default']['type'] = 'hidden'; /* WAS: 'number_integer' */
    $data['taxonomy_term-accessibility-field_mds_code']['display']['default']['weight'] = 5; /* WAS: 3 */
    unset($data['taxonomy_term-accessibility-field_mds_code']['display']['default']['module']);
    unset($data['taxonomy_term-accessibility-field_mds_code']['display']['default']['settings']['decimal_separator']);
    unset($data['taxonomy_term-accessibility-field_mds_code']['display']['default']['settings']['prefix_suffix']);
    unset($data['taxonomy_term-accessibility-field_mds_code']['display']['default']['settings']['scale']);
    unset($data['taxonomy_term-accessibility-field_mds_code']['display']['default']['settings']['thousand_separator']);
  }
  if (isset($data['taxonomy_term-accessibility-name_field'])) {
    $data['taxonomy_term-accessibility-name_field']['display']['default']['module'] = 'title'; /* WAS: 'text' */
    $data['taxonomy_term-accessibility-name_field']['display']['default']['settings']['title_class'] = ''; /* WAS: '' */
    $data['taxonomy_term-accessibility-name_field']['display']['default']['settings']['title_link'] = ''; /* WAS: '' */
    $data['taxonomy_term-accessibility-name_field']['display']['default']['settings']['title_style'] = ''; /* WAS: '' */
    $data['taxonomy_term-accessibility-name_field']['display']['default']['type'] = 'title_linked'; /* WAS: 'text_default' */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function pori_configuration_overrides_feature_strongarm_alter(&$data) {
  if (isset($data['menu_block_8_depth'])) {
    $data['menu_block_8_depth']->value = 2; /* WAS: 0 */
  }
}
