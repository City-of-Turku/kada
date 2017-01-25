<?php
/**
 * @file
 * tkufi_service_offer_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tkufi_service_offer_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tkufi_service_offer_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tkufi_service_offer_feature_node_info() {
  $items = array(
    'service_offer' => array(
      'name' => t('Service offer'),
      'base' => 'node_content',
      'description' => t('Service offers connect places with service descriptions'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Service offer connects a service description and a provider, usually a place, where the service is provided. Combinations can be included in one service, meaning multiple service descriptions can be offered in multiple places.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
