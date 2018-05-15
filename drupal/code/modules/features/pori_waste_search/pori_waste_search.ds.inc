<?php
/**
 * @file
 * pori_waste_search.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function pori_waste_search_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|place|waste_map';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'place';
  $ds_layout->view_mode = 'waste_map';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'field_availability',
        2 => 'field_phone',
        3 => 'field_email',
        4 => 'field_address_visiting',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'field_availability' => 'ds_content',
      'field_phone' => 'ds_content',
      'field_email' => 'ds_content',
      'field_address_visiting' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|place|waste_map'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|place|waste_search';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'place';
  $ds_layout->view_mode = 'waste_search';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'field_address_visiting',
        2 => 'field_phone',
        3 => 'field_email',
        4 => 'field_availability',
        5 => 'field_description',
        6 => 'field_website_et',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'field_address_visiting' => 'ds_content',
      'field_phone' => 'ds_content',
      'field_email' => 'ds_content',
      'field_availability' => 'ds_content',
      'field_description' => 'ds_content',
      'field_website_et' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|place|waste_search'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|waste_type|waste_search';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'waste_type';
  $ds_layout->view_mode = 'waste_search';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'name_field',
        1 => 'field_waste_type_short_desc',
      ),
    ),
    'fields' => array(
      'name_field' => 'ds_content',
      'field_waste_type_short_desc' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['taxonomy_term|waste_type|waste_search'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|waste|waste_search';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'waste';
  $ds_layout->view_mode = 'waste_search';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'name_field',
        1 => 'description_field',
      ),
    ),
    'fields' => array(
      'name_field' => 'ds_content',
      'description_field' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['taxonomy_term|waste|waste_search'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function pori_waste_search_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'waste_map';
  $ds_view_mode->label = 'Waste map';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['waste_map'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'waste_search';
  $ds_view_mode->label = 'Waste search';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['waste_search'] = $ds_view_mode;

  return $export;
}
