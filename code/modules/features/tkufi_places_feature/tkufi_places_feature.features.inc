<?php
/**
 * @file
 * tkufi_places_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tkufi_places_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tkufi_places_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tkufi_places_feature_node_info() {
  $items = array(
    'place' => array(
      'name' => t('Place'),
      'base' => 'node_content',
      'description' => t('Places may offer services defined in service offers.'),
      'has_title' => '1',
      'title_label' => t('Nimi'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
