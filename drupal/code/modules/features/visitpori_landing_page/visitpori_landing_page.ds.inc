<?php
/**
 * @file
 * visitpori_landing_page.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function visitpori_landing_page_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|project';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'project';
  $ds_fieldsetting->settings = array(
    'duplicate_title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => 'a',
        'ctools' => 'a:3:{s:4:"conf";a:8:{s:4:"link";i:1;s:6:"markup";s:4:"none";s:2:"id";s:0:"";s:5:"class";s:12:"link-to-node";s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:10:"node_title";s:7:"subtype";s:10:"node_title";}',
        'load_terms' => 0,
      ),
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|page|project'] = $ds_fieldsetting;

  return $export;
}

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
