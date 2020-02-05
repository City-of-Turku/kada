<?php

/**
 * @file
 * kada_services_feature.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function kada_services_feature_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|service|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'service';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'map_service' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'related_content' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_described_by_er_et' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lbw' => 1,
          'lbw-el' => 'div',
          'lbw-cl' => 'field__label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field field--read-more',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'field__item',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_alternative_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lbw-el' => 'span',
          'fi' => TRUE,
          'fi-el' => 'em',
          'fi-cl' => 'synonym',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|service|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function kada_services_feature_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'map_service';
  $ds_field->label = 'Map | Service';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'service|*';
  $ds_field->properties = array(
    'block' => 'views|kada_service_map-map',
    'block_render' => '3',
  );
  $export['map_service'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'related_content';
  $ds_field->label = 'Related content';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'service|*';
  $ds_field->properties = array(
    'block' => 'kada_services_feature|related_services',
    'block_render' => '1',
  );
  $export['related_content'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function kada_services_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|service|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'service';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'turku_dual_column_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'left_content' => array(
        0 => 'field_alternative_name',
        1 => 'field_description',
        2 => 'field_target_audience',
        3 => 'field_described_by_er_et',
        6 => 'field_classification',
      ),
      'right_content' => array(
        4 => 'map_service',
        5 => 'related_content',
      ),
    ),
    'fields' => array(
      'field_alternative_name' => 'left_content',
      'field_description' => 'left_content',
      'field_target_audience' => 'left_content',
      'field_described_by_er_et' => 'left_content',
      'map_service' => 'right_content',
      'related_content' => 'right_content',
      'field_classification' => 'left_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left_content' => 'div',
      'right_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|service|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|service|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'service';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'search_result_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'main' => array(
        0 => 'field_description',
        1 => 'field_classification',
      ),
    ),
    'fields' => array(
      'field_description' => 'main',
      'field_classification' => 'main',
    ),
    'classes' => array(),
    'wrappers' => array(
      'media' => 'div',
      'main' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|service|search_result'] = $ds_layout;

  return $export;
}
