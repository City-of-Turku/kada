<?php

/**
 * @file
 * pori_liftups.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function pori_liftups_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|liftup|small_liftup_banner';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'liftup';
  $ds_layout->view_mode = 'small_liftup_banner';
  $ds_layout->layout = 'small_liftup_banner_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'main' => array(
        0 => 'field_main_image',
        1 => 'field_link_to_content',
      ),
    ),
    'fields' => array(
      'field_main_image' => 'main',
      'field_link_to_content' => 'main',
    ),
    'classes' => array(),
    'wrappers' => array(
      'main' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|liftup|small_liftup_banner'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function pori_liftups_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'small_liftup_banner';
  $ds_view_mode->label = 'Small liftup banner';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['small_liftup_banner'] = $ds_view_mode;

  return $export;
}
