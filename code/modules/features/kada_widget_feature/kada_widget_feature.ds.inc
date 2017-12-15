<?php
/**
 * @file
 * kada_widget_feature.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function kada_widget_feature_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'widget|event_carousel|default';
  $ds_fieldsetting->entity_type = 'widget';
  $ds_fieldsetting->bundle = 'event_carousel';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'widget_carousel_view' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'widget_event_calendar' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['widget|event_carousel|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'widget|event_mosaic|default';
  $ds_fieldsetting->entity_type = 'widget';
  $ds_fieldsetting->bundle = 'event_mosaic';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'widget_event_mosaic_view' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'widget_event_calendar' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['widget|event_mosaic|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function kada_widget_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'widget|event_carousel|default';
  $ds_layout->entity_type = 'widget';
  $ds_layout->bundle = 'event_carousel';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'widget_carousel_view',
        1 => 'widget_event_calendar',
      ),
    ),
    'fields' => array(
      'widget_carousel_view' => 'ds_content',
      'widget_event_calendar' => 'ds_content',
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
  $export['widget|event_carousel|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'widget|event_mosaic|default';
  $ds_layout->entity_type = 'widget';
  $ds_layout->bundle = 'event_mosaic';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'widget_event_mosaic_view',
        1 => 'widget_event_calendar',
      ),
    ),
    'fields' => array(
      'widget_event_mosaic_view' => 'ds_content',
      'widget_event_calendar' => 'ds_content',
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
  $export['widget|event_mosaic|default'] = $ds_layout;

  return $export;
}
