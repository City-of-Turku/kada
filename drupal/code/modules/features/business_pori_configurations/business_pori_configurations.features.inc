<?php

/**
 * @file
 * business_pori_configurations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function business_pori_configurations_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function business_pori_configurations_strongarm_alter(&$data) {
  if (isset($data['menu_block_menu_order'])) {
    $data['menu_block_menu_order']->value['menu-business-pori-footer-menu-f'] = ''; /* WAS: '' */
    $data['menu_block_menu_order']->value['menu-business-pori-p-valikko'] = ''; /* WAS: '' */
    $data['menu_block_menu_order']->value['menu-business-pori-top-menu-fi'] = ''; /* WAS: '' */
  }
}
