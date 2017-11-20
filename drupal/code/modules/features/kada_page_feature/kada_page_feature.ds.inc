<?php
/**
 * @file
 * kada_page_feature.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function kada_page_feature_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'places_for_services' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|page|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function kada_page_feature_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'description_page';
  $ds_field->label = 'Description | Page';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'page|*';
  $ds_field->properties = array(
    'block' => 'views|9c3148258968c2422cf7dc197c359d4e',
    'block_render' => '3',
  );
  $export['description_page'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'duplicate_info_box_bottom';
  $ds_field->label = 'Duplicate info box (bottom)';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
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
  $export['duplicate_info_box_bottom'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'places_for_services';
  $ds_field->label = 'Places for services';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'page|*';
  $ds_field->properties = array(
    'block' => 'quicktabs|places_for_pages_tabs',
    'block_render' => '1',
  );
  $export['places_for_services'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function kada_page_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'page_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'main_content' => array(
        0 => 'domain',
        1 => 'field_lead_paragraph',
        2 => 'body',
      ),
      'sidebar' => array(
        3 => 'field_keywords',
        4 => 'field_info_box_bottom',
        5 => 'field_subpage',
        6 => 'field_contact_information',
        7 => 'places_for_services',
      ),
      'after_content' => array(
        8 => 'field_topic',
      ),
    ),
    'fields' => array(
      'domain' => 'main_content',
      'field_lead_paragraph' => 'main_content',
      'body' => 'main_content',
      'field_keywords' => 'sidebar',
      'field_info_box_bottom' => 'sidebar',
      'field_subpage' => 'sidebar',
      'field_contact_information' => 'sidebar',
      'places_for_services' => 'sidebar',
      'field_topic' => 'after_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'main_content' => 'div',
      'sidebar' => 'div',
      'after_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'search_result_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'media' => array(
        0 => 'field_main_image',
      ),
      'main' => array(
        1 => 'body',
        2 => 'field_keywords',
      ),
    ),
    'fields' => array(
      'field_main_image' => 'media',
      'body' => 'main',
      'field_keywords' => 'main',
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
  $export['node|page|search_result'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function kada_page_feature_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'only_title';
  $ds_view_mode->label = 'Only title';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['only_title'] = $ds_view_mode;

  return $export;
}
