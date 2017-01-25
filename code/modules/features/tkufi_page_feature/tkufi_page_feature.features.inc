<?php
/**
 * @file
 * tkufi_page_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tkufi_page_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tkufi_page_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tkufi_page_feature_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('Contains more or less static information. Is used for building site structure where other content can linked to.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('More or less every page has to be in the menu structure for automatic URL generation. Menu link visibility can be controlled separately from the structure.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
