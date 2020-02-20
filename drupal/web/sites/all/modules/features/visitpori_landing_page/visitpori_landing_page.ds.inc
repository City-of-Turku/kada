<?php

/**
 * @file
 * visitpori_landing_page.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function visitpori_landing_page_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|project';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'project';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'domain',
        1 => 'title',
        2 => 'body',
        3 => 'duplicate_title',
      ),
      'right' => array(
        4 => 'field_main_image',
      ),
    ),
    'fields' => array(
      'domain' => 'left',
      'title' => 'left',
      'body' => 'left',
      'duplicate_title' => 'left',
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
    'layout_link_attribute' => 'content',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|page|project'] = $ds_layout;

  return $export;
}
