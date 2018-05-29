<?php
/**
 * @file
 * pori_waste_search.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function pori_waste_search_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|waste_type|default';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'waste_type';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'duplicate_images' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:7:"current";s:11:"delta_limit";s:1:"0";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:1:{s:4:"link";s:1:"0";}s:7:"context";s:34:"argument_entity_id:taxonomy_term_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:26:"taxonomy_term:field_images";}',
        'load_terms' => 0,
      ),
    ),
  );
  $export['taxonomy_term|waste_type|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|waste_type|full';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'waste_type';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'duplicate_images' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:7:"current";s:11:"delta_limit";s:1:"0";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:1:{s:4:"link";s:1:"0";}s:7:"context";s:34:"argument_entity_id:taxonomy_term_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:26:"taxonomy_term:field_images";}',
        'load_terms' => 0,
      ),
    ),
  );
  $export['taxonomy_term|waste_type|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|waste_type|waste_search';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'waste_type';
  $ds_fieldsetting->view_mode = 'waste_search';
  $ds_fieldsetting->settings = array(
    'more_link' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['taxonomy_term|waste_type|waste_search'] = $ds_fieldsetting;

  return $export;
}

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
        1 => 'field_address_visiting',
        2 => 'field_phone',
        3 => 'field_email',
        4 => 'field_availability',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'field_address_visiting' => 'ds_content',
      'field_phone' => 'ds_content',
      'field_email' => 'ds_content',
      'field_availability' => 'ds_content',
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
    'layout_disable_css' => FALSE,
  );
  $export['node|place|waste_map'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|place|waste_search';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'place';
  $ds_layout->view_mode = 'waste_search';
  $ds_layout->layout = 'waste_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'main_content' => array(
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
      'title_field' => 'main_content',
      'field_address_visiting' => 'main_content',
      'field_phone' => 'main_content',
      'field_email' => 'main_content',
      'field_availability' => 'main_content',
      'field_description' => 'main_content',
      'field_website_et' => 'main_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'main_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|place|waste_search'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|waste_type|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'waste_type';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'image_container' => 'div',
      'main_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'regions' => array(
      'ds_content' => array(
        0 => 'description_field',
      ),
    ),
    'fields' => array(
      'description_field' => 'ds_content',
    ),
  );
  $export['taxonomy_term|waste_type|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|waste_type|full';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'waste_type';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_image_container',
        1 => 'description_field',
        2 => 'field_images',
        3 => 'duplicate_images',
      ),
    ),
    'fields' => array(
      'group_image_container' => 'ds_content',
      'description_field' => 'ds_content',
      'field_images' => 'ds_content',
      'duplicate_images' => 'ds_content',
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
    'layout_disable_css' => FALSE,
  );
  $export['taxonomy_term|waste_type|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|waste_type|waste_search';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'waste_type';
  $ds_layout->view_mode = 'waste_search';
  $ds_layout->layout = 'ds_1col';
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
    'layout_disable_css' => FALSE,
    'regions' => array(
      'ds_content' => array(
        0 => 'name_field',
        1 => 'field_waste_type_short_desc',
        2 => 'more_link',
      ),
    ),
    'fields' => array(
      'name_field' => 'ds_content',
      'field_waste_type_short_desc' => 'ds_content',
      'more_link' => 'ds_content',
    ),
  );
  $export['taxonomy_term|waste_type|waste_search'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|waste|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'waste';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
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
    'layout_disable_css' => FALSE,
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
  );
  $export['taxonomy_term|waste|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|waste|waste_search';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'waste';
  $ds_layout->view_mode = 'waste_search';
  $ds_layout->layout = 'ds_1col';
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
    'layout_disable_css' => FALSE,
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
