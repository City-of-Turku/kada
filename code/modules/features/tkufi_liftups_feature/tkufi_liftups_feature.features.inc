<?php
/**
 * @file
 * tkufi_liftups_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tkufi_liftups_feature_ctools_plugin_api($module = NULL, $api = NULL) {
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
function tkufi_liftups_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tkufi_liftups_feature_node_info() {
  $items = array(
    'liftup' => array(
      'name' => t('Liftup'),
      'base' => 'node_content',
      'description' => t('Basic content type for displaying content in different places in different ways. We will see later if this content type will get different types (same fields, different looks) or if more liftup content types will be created (different fields basically).'),
      'has_title' => '1',
      'title_label' => t('Admin title'),
      'help' => t('The administrative title is not visible for site visitors, it only helps content editors to find this liftup.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
