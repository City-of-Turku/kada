<?php
/**
 * @file
 * pori_visitpori_override_feature.features.inc
 */

/**
 * Implements hook_context_default_contexts_alter().
 */
function pori_visitpori_override_feature_context_default_contexts_alter(&$data) {
  if (isset($data['non_content_special_page'])) {
    $data['non_content_special_page']->conditions['context_all'] = array(
      'values' => array(
        '~visitpori_domain' => '~visitpori_domain',
      ),
    ); /* WAS: '' */
  }
  if (isset($data['visitpori_footer_menu'])) {
    $data['visitpori_footer_menu']->reactions['block']['blocks']['menu_block-32'] = array(
      'module' => 'menu_block',
      'delta' => 32,
      'region' => 'footer',
      'weight' => -8,
    ); /* WAS: '' */
    $data['visitpori_footer_menu']->reactions['block']['blocks']['menu_block-33'] = array(
      'module' => 'menu_block',
      'delta' => 33,
      'region' => 'footer',
      'weight' => -7,
    ); /* WAS: '' */
  }
  if (isset($data['visitpori_top_menu'])) {
    $data['visitpori_top_menu']->reactions['block']['blocks']['menu_block-34'] = array(
      'module' => 'menu_block',
      'delta' => 34,
      'region' => 'navigation',
      'weight' => -8,
    ); /* WAS: '' */
    $data['visitpori_top_menu']->reactions['block']['blocks']['menu_block-35'] = array(
      'module' => 'menu_block',
      'delta' => 35,
      'region' => 'navigation',
      'weight' => -7,
    ); /* WAS: '' */
    $data['visitpori_top_menu']->reactions['block']['blocks']['menu_block-36'] = array(
      'module' => 'menu_block',
      'delta' => 36,
      'region' => 'navigation_top',
      'weight' => -8,
    ); /* WAS: '' */
    $data['visitpori_top_menu']->reactions['block']['blocks']['menu_block-37'] = array(
      'module' => 'menu_block',
      'delta' => 37,
      'region' => 'navigation_top',
      'weight' => -7,
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function pori_visitpori_override_feature_strongarm_alter(&$data) {
  if (isset($data['menu_options_landing_page'])) {
    $data['menu_options_landing_page']->value[0] = 'menu-footer-fi'; /* WAS: 'menu-footer-en' */
    $data['menu_options_landing_page']->value[1] = 'menu-footer-en'; /* WAS: 'menu-footer-fi' */
    $data['menu_options_landing_page']->value[10] = 'menu-visitpori-footer-menu-fi'; /* WAS: '' */
    $data['menu_options_landing_page']->value[11] = 'menu-visitpori-main-navigation'; /* WAS: '' */
    $data['menu_options_landing_page']->value[12] = 'menu-visitpori-main-menu'; /* WAS: '' */
    $data['menu_options_landing_page']->value[13] = 'menu-visitpori-top-menu-en'; /* WAS: '' */
    $data['menu_options_landing_page']->value[14] = 'menu-visitpori-top-menu-fi'; /* WAS: '' */
    $data['menu_options_landing_page']->value[9] = 'menu-visitpori-footer-menu-en'; /* WAS: '' */
  }
  if (isset($data['menu_options_page'])) {
    $data['menu_options_page']->value[10] = 'menu-visitpori-footer-menu-en'; /* WAS: '' */
    $data['menu_options_page']->value[11] = 'menu-visitpori-footer-menu-fi'; /* WAS: '' */
    $data['menu_options_page']->value[12] = 'menu-visitpori-main-navigation'; /* WAS: '' */
    $data['menu_options_page']->value[13] = 'menu-visitpori-main-menu'; /* WAS: '' */
    $data['menu_options_page']->value[14] = 'menu-visitpori-top-menu-en'; /* WAS: '' */
    $data['menu_options_page']->value[15] = 'menu-visitpori-top-menu-fi'; /* WAS: '' */
  }
}
