<?php
/**
 * @file
 * pori_visitpori_override_feature.features.inc
 */

/**
 * Implements hook_strongarm_alter().
 */
function pori_visitpori_override_feature_strongarm_alter(&$data) {
  if (isset($data['menu_block_ids'])) {
    $data['menu_block_ids']->value[25] = 23; /* WAS: '' */
    $data['menu_block_ids']->value[26] = 28; /* WAS: '' */
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
