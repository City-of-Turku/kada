<?php
/**
 * @file
 * pori_contact_information_feature.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function pori_contact_information_feature_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|person|person_card';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'person';
  $ds_fieldsetting->view_mode = 'person_card';
  $ds_fieldsetting->settings = array(
    'person_organisation' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'person_full_name' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|person|person_card'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function pori_contact_information_feature_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'person_organisation';
  $ds_field->label = 'Person organisation';
  $ds_field->field_type = 3;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'person|*';
  $ds_field->properties = array();
  $export['person_organisation'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function pori_contact_information_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|person|person_card';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'person';
  $ds_layout->view_mode = 'person_card';
  $ds_layout->layout = 'person_card_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'main_content' => array(
        0 => 'field_person_image',
        1 => 'person_full_name',
        2 => 'field_employee_title',
        3 => 'person_organisation',
        4 => 'field_profession',
        5 => 'field_office_tr',
        6 => 'field_visiting_address',
        7 => 'field_email_single',
        8 => 'field_mobile_phone',
        9 => 'field_phone',
        10 => 'field_mobile_phone_work',
        11 => 'field_phone_switch',
        12 => 'field_fax_number',
      ),
    ),
    'fields' => array(
      'field_person_image' => 'main_content',
      'person_full_name' => 'main_content',
      'field_employee_title' => 'main_content',
      'person_organisation' => 'main_content',
      'field_profession' => 'main_content',
      'field_office_tr' => 'main_content',
      'field_visiting_address' => 'main_content',
      'field_email_single' => 'main_content',
      'field_mobile_phone' => 'main_content',
      'field_phone' => 'main_content',
      'field_mobile_phone_work' => 'main_content',
      'field_phone_switch' => 'main_content',
      'field_fax_number' => 'main_content',
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
  $export['node|person|person_card'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function pori_contact_information_feature_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'person_card';
  $ds_view_mode->label = 'Person card';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['person_card'] = $ds_view_mode;

  return $export;
}
