<?php

/**
 * @file
 * kada_service_offer_feature.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function kada_service_offer_feature_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|service_offer|accordion';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'service_offer';
  $ds_fieldsetting->view_mode = 'accordion';
  $ds_fieldsetting->settings = array(
    'field_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|service_offer|accordion'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function kada_service_offer_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|service_offer|accordion';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'service_offer';
  $ds_layout->view_mode = 'accordion';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_description',
        1 => 'field_fee',
      ),
    ),
    'fields' => array(
      'field_description' => 'ds_content',
      'field_fee' => 'ds_content',
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
  $export['node|service_offer|accordion'] = $ds_layout;

  return $export;
}
