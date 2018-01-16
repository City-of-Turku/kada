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
 * Implements hook_strongarm_alter().
 */
function pori_configuration_overrides_feature_strongarm_alter(&$data) {
  if (isset($data['menu_block_8_depth'])) {
    $data['menu_block_8_depth']->value = 2; /* WAS: 0 */
  }
}
