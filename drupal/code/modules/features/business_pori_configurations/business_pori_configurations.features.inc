<?php

/**
 * @file
 * business_pori_configurations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function business_pori_configurations_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function business_pori_configurations_field_default_field_instances_alter(&$data) {
  if (isset($data['node-liftup-field_businesspori_theme'])) {
    $data['node-liftup-field_businesspori_theme']['display']['small_liftup_banner']['weight'] = 19; /* WAS: 0 */
  }
}
