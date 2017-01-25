<?php
/**
 * @file
 * tkufi_widget_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tkufi_widget_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tkufi_widget_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function tkufi_widget_feature_eck_bundle_info() {
  $items = array(
    'widget_event_carousel' => array(
      'machine_name' => 'widget_event_carousel',
      'entity_type' => 'widget',
      'name' => 'event_carousel',
      'label' => 'Event carousel',
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
    'widget_event_mosaic' => array(
      'machine_name' => 'widget_event_mosaic',
      'entity_type' => 'widget',
      'name' => 'event_mosaic',
      'label' => 'Event mosaic',
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
 * Implements hook_eck_entity_type_info().
 */
function tkufi_widget_feature_eck_entity_type_info() {
  $items = array(
    'widget' => array(
      'name' => 'widget',
      'label' => 'Widget',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
        'uid' => array(
          'label' => 'Author',
          'type' => 'integer',
          'behavior' => 'author',
        ),
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'changed' => array(
          'label' => 'Changed',
          'type' => 'integer',
          'behavior' => 'changed',
        ),
        'language' => array(
          'label' => 'Entity language',
          'type' => 'language',
          'behavior' => 'language',
        ),
      ),
    ),
  );
  return $items;
}
