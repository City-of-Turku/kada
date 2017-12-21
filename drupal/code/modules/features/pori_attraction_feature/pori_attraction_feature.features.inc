<?php
/**
 * @file
 * pori_attraction_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pori_attraction_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pori_attraction_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function pori_attraction_feature_eck_bundle_info() {
  $items = array(
    'widget_attraction_list' => array(
      'machine_name' => 'widget_attraction_list',
      'entity_type' => 'widget',
      'name' => 'attraction_list',
      'label' => 'Attraction list',
      'config' => array(
        'managed_properties' => array(
          'title' => 0,
          'uid' => 0,
          'created' => 0,
          'changed' => 0,
          'language' => 0,
        ),
        'multilingual' => 1,
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_node_info().
 */
function pori_attraction_feature_node_info() {
  $items = array(
    'attraction_card' => array(
      'name' => t('Attraction card'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Otsikko'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
