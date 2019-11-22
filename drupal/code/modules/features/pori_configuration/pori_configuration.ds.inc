<?php

/**
 * @file
 * pori_configuration.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function pori_configuration_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'page_places';
  $ds_field->label = 'page_places';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'page|*';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['page_places'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function pori_configuration_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|liftup|presentation';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'liftup';
  $ds_layout->view_mode = 'presentation';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_visible_title',
        1 => 'body',
        2 => 'field_presentation_link',
      ),
      'right' => array(
        3 => 'field_main_image',
      ),
    ),
    'fields' => array(
      'field_visible_title' => 'left',
      'body' => 'left',
      'field_presentation_link' => 'left',
      'field_main_image' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|liftup|presentation'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function pori_configuration_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'presentation';
  $ds_view_mode->label = 'Presentation';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['presentation'] = $ds_view_mode;

  return $export;
}
