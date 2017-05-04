<?php
/**
 * @file
 * kada_configuration_feature.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function kada_configuration_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|accessibility|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'accessibility';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'minimal_layout';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'regions' => array(
      'main_content' => array(
        0 => 'name_field',
        1 => 'field_icon',
      ),
    ),
    'fields' => array(
      'name_field' => 'main_content',
      'field_icon' => 'main_content',
    ),
  );
  $export['taxonomy_term|accessibility|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|accessibility|label_icon';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'accessibility';
  $ds_layout->view_mode = 'label_icon';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_icon',
        1 => 'name_field',
      ),
    ),
    'fields' => array(
      'field_icon' => 'ds_content',
      'name_field' => 'ds_content',
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
  $export['taxonomy_term|accessibility|label_icon'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function kada_configuration_feature_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'accordion';
  $ds_view_mode->label = 'Accordion';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['accordion'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'carousel';
  $ds_view_mode->label = 'Carousel';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['carousel'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'current';
  $ds_view_mode->label = 'Current';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['current'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'label_icon';
  $ds_view_mode->label = 'Label + icon';
  $ds_view_mode->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['label_icon'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'project';
  $ds_view_mode->label = 'Project';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['project'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'search_result';
  $ds_view_mode->label = 'Search result';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['search_result'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'term_name';
  $ds_view_mode->label = 'Term name';
  $ds_view_mode->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['term_name'] = $ds_view_mode;

  return $export;
}
