<?php

/**
 * @file
 * pori_facts_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pori_facts_feature_ctools_plugin_api($module = NULL, $api = NULL) {
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
function pori_facts_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pori_facts_feature_node_info() {
  $items = array(
    'fact' => array(
      'name' => t('Fact'),
      'base' => 'node_content',
      'description' => t('Fact liftup'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
