<?php

/**
 * @file
 * pori_waste_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pori_waste_search_ctools_plugin_api($module = NULL, $api = NULL) {
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
  if ($module == "taxonomy_display" && $api == "taxonomy_display") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pori_waste_search_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function pori_waste_search_field_default_field_instances_alter(&$data) {
  if (isset($data['node-place-field_location'])) {
    $data['node-place-field_location']['widget']['settings']['geocoder_handler'] = 'openstreetmap_nominatim'; /* WAS: 'google' */
    $data['node-place-field_location']['widget']['settings']['handler_settings']['google']['biasing'] = array(
      'bounds' => '',
      'components' => '',
      'region' => '',
    ); /* WAS: '' */
  }
}
