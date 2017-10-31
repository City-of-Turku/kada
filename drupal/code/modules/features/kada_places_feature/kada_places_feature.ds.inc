<?php
/**
 * @file
 * kada_places_feature.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function kada_places_feature_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|place|accordion';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'place';
  $ds_fieldsetting->view_mode = 'accordion';
  $ds_fieldsetting->settings = array(
    'field_availability' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lbw' => 1,
          'lbw-el' => 'div',
          'lbw-cl' => 'field__label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field field--name-opening-hours field--label-inline clearfix',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'field__items',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'field__item',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|place|accordion'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|place|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'place';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'acessibility_icon_label' => array(
      'weight' => '13',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'map_place' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['node|place|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|place|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'place';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'field_description' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|place|search_result'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|place|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'place';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'field_availability' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lbw' => 1,
          'lbw-el' => 'div',
          'lbw-cl' => 'field__label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field field--name-field-availability',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'field__items',
          'fis-at' => '',
          'fis-def-at' => FALSE,
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
    'field_email' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lbw' => 1,
          'lbw-el' => 'div',
          'lbw-cl' => 'field__label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field field--name-field-email',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'field__items',
          'fis-at' => '',
          'fis-def-at' => FALSE,
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
    'field_phone' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lbw' => 1,
          'lbw-el' => 'div',
          'lbw-cl' => 'field__label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field field--field-name-field-phone',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'field__items',
          'fis-at' => '',
          'fis-def-at' => FALSE,
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
    'field_visiting_address' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lbw' => 1,
          'lbw-el' => 'div',
          'lbw-cl' => 'field__label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field field--name-field-visiting-address',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'field__items',
          'fis-at' => '',
          'fis-def-at' => FALSE,
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
  );
  $export['node|place|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function kada_places_feature_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'acessibility_icon_label';
  $ds_field->label = 'Acessibility icon + label';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'place|*';
  $ds_field->properties = array(
    'block' => 'views|e0b0eb411e93d502e33c5c1ef1d24814',
    'block_render' => '3',
  );
  $export['acessibility_icon_label'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'map_place';
  $ds_field->label = 'Map | Place';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'place|*';
  $ds_field->properties = array(
    'block' => 'views|kada_place_map-map',
    'block_render' => '3',
  );
  $export['map_place'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function kada_places_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|place|accordion';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'place';
  $ds_layout->view_mode = 'accordion';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_availability',
      ),
    ),
    'fields' => array(
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
  );
  $export['node|place|accordion'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|place|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'place';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'turku_dual_column_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'left_content' => array(
        0 => 'field_description',
        1 => 'field_person_responsible',
        2 => 'field_phone',
        3 => 'field_phone_switch',
        4 => 'field_fax_number',
        5 => 'field_email',
        6 => 'field_website_et',
        7 => 'field_availability',
      ),
      'right_content' => array(
        8 => 'map_place',
        9 => 'field_address_postal',
        10 => 'field_address_street',
        11 => 'field_address_visiting',
        12 => 'field_billing_address',
        13 => 'acessibility_icon_label',
      ),
    ),
    'fields' => array(
      'field_description' => 'left_content',
      'field_person_responsible' => 'left_content',
      'field_phone' => 'left_content',
      'field_phone_switch' => 'left_content',
      'field_fax_number' => 'left_content',
      'field_email' => 'left_content',
      'field_website_et' => 'left_content',
      'field_availability' => 'left_content',
      'map_place' => 'right_content',
      'field_address_postal' => 'right_content',
      'field_address_street' => 'right_content',
      'field_address_visiting' => 'right_content',
      'field_billing_address' => 'right_content',
      'acessibility_icon_label' => 'right_content',
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
  $export['node|place|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|place|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'place';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'search_result_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'media' => array(
        0 => 'field_main_image',
      ),
      'main' => array(
        1 => 'field_description',
        2 => 'field_availability',
        3 => 'field_website_et',
      ),
    ),
    'fields' => array(
      'field_main_image' => 'media',
      'field_description' => 'main',
      'field_availability' => 'main',
      'field_website_et' => 'main',
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
  $export['node|place|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|place|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'place';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'domain',
        1 => 'title',
        3 => 'field_phone',
        4 => 'field_email',
        5 => 'field_availability',
      ),
    ),
    'fields' => array(
      'domain' => 'ds_content',
      'title' => 'ds_content',
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
  );
  $export['node|place|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function kada_places_feature_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'map';
  $ds_view_mode->label = 'Map';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['map'] = $ds_view_mode;

  return $export;
}
