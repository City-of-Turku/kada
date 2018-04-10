<?php
/**
 * @file
 * pori_news.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function pori_news_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news_item|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news_item';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'post_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_post_date_kada_date_only',
    ),
  );
  $export['node|news_item|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function pori_news_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news_item|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news_item';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'page_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'main_content' => array(
        0 => 'post_date',
        1 => 'field_lead_paragraph_long_text',
        2 => 'field_info_box',
        3 => 'body',
        4 => 'field_content_image',
      ),
      'sidebar' => array(
        5 => 'field_keywords',
      ),
      'additional_information' => array(
        6 => 'field_additional_info_link',
        7 => 'field_file_attachment',
      ),
      'contact_information' => array(
        8 => 'field_contact_person',
      ),
    ),
    'fields' => array(
      'post_date' => 'main_content',
      'field_lead_paragraph_long_text' => 'main_content',
      'field_info_box' => 'main_content',
      'body' => 'main_content',
      'field_content_image' => 'main_content',
      'field_keywords' => 'sidebar',
      'field_additional_info_link' => 'additional_information',
      'field_file_attachment' => 'additional_information',
      'field_contact_person' => 'contact_information',
    ),
    'classes' => array(),
    'wrappers' => array(
      'main_content' => 'div',
      'sidebar' => 'div',
      'additional_information' => 'div',
      'contact_information' => 'div',
      'after_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|news_item|default'] = $ds_layout;

  return $export;
}
