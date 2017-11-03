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
    'description_page' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'duplicate_info_box_bottom' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:12:"text_default";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:0:{}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:26:"node:field_info_box_bottom";}',
        'load_terms' => 0,
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'info-box--dupicate',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'places_for_services' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_contact_information' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'info-box--additional',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
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
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'domain',
        1 => 'field_topic',
        2 => 'field_info_box',
        3 => 'duplicate_info_box_bottom',
        4 => 'field_contact_information',
        5 => 'body',
        6 => 'description_page',
        7 => 'field_info_box_bottom',
        8 => 'field_keywords',
        9 => 'field_district',
        10 => 'places_for_services',
        11 => 'field_subpage',
      ),
    ),
    'fields' => array(
      'domain' => 'ds_content',
      'field_topic' => 'ds_content',
      'field_info_box' => 'ds_content',
      'duplicate_info_box_bottom' => 'ds_content',
      'field_contact_information' => 'ds_content',
      'body' => 'ds_content',
      'description_page' => 'ds_content',
      'field_info_box_bottom' => 'ds_content',
      'field_keywords' => 'ds_content',
      'field_district' => 'ds_content',
      'places_for_services' => 'ds_content',
      'field_subpage' => 'ds_content',
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
