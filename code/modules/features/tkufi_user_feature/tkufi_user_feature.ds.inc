<?php
/**
 * @file
 * tkufi_user_feature.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function tkufi_user_feature_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|default';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'my_atoms' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => 'h2',
        'ctools' => 'a:3:{s:4:"conf";a:2:{s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:5:"block";s:7:"subtype";s:38:"views-b7535df9f51e08f2d64dd93a14dd6216";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'my_content' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => 'h2',
        'ctools' => 'a:3:{s:4:"conf";a:2:{s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:5:"block";s:7:"subtype";s:38:"views-b0cd6b011a1ade4c1970953b41ad21b1";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
  );
  $export['user|user|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function tkufi_user_feature_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'my_atoms';
  $ds_field->label = 'My Atoms';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'user' => 'user',
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
  $export['my_atoms'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'my_content';
  $ds_field->label = 'My Content';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'user' => 'user',
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
  $export['my_content'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function tkufi_user_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|default';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'turku_dual_column_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'left_content' => array(
        0 => 'my_content',
        1 => 'my_atoms',
      ),
      'right_content' => array(
        2 => 'og_user_node1',
        3 => 'domain',
        4 => 'summary',
      ),
    ),
    'fields' => array(
      'my_content' => 'left_content',
      'my_atoms' => 'left_content',
      'og_user_node1' => 'right_content',
      'domain' => 'right_content',
      'summary' => 'right_content',
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
  $export['user|user|default'] = $ds_layout;

  return $export;
}
