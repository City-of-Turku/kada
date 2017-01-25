<?php
/**
 * @file
 * tkufi_contact_information_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tkufi_contact_information_feature_ctools_plugin_api($module = NULL, $api = NULL) {
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
  if ($module == "taxonomy_display" && $api == "taxonomy_display") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tkufi_contact_information_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tkufi_contact_information_feature_node_info() {
  $items = array(
    'person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nimi'),
      'help' => '',
    ),
    'position_of_trust' => array(
      'name' => t('Position of trust'),
      'base' => 'node_content',
      'description' => t('Connects a person to a trust body, defines a role for the position and references a backup person for the position.'),
      'has_title' => '1',
      'title_label' => t('Otsikko'),
      'help' => t('Administrative title will be generated automatically'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
