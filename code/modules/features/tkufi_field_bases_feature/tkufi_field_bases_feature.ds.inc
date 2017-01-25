<?php
/**
 * @file
 * tkufi_field_bases_feature.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function tkufi_field_bases_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_accessibility|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_accessibility';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_accessibility_type_er',
        1 => 'field_description_fi',
        2 => 'field_description_sv',
        3 => 'field_description_en',
      ),
    ),
    'fields' => array(
      'field_accessibility_type_er' => 'ds_content',
      'field_description_fi' => 'ds_content',
      'field_description_sv' => 'ds_content',
      'field_description_en' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_accessibility|default'] = $ds_layout;

  return $export;
}
