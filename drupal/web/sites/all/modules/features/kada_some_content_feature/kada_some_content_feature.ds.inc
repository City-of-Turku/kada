<?php

/**
 * @file
 * kada_some_content_feature.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function kada_some_content_feature_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|social_media_update|current';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'social_media_update';
  $ds_fieldsetting->view_mode = 'current';
  $ds_fieldsetting->settings = array(
    'post_date' => array(
      'weight' => 1,
      'label' => 'hidden',
      'format' => 'ds_post_date_short',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'date',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|social_media_update|current'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|social_media_update|current_twitter';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'social_media_update';
  $ds_fieldsetting->view_mode = 'current_twitter';
  $ds_fieldsetting->settings = array(
    'post_date' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'ds_post_date_short',
    ),
  );
  $export['node|social_media_update|current_twitter'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|social_media_update|event_grid_item';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'social_media_update';
  $ds_fieldsetting->view_mode = 'event_grid_item';
  $ds_fieldsetting->settings = array(
    'duplicate_title' => array(
      'weight' => '14',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:7:{s:4:"link";i:0;s:6:"markup";s:4:"none";s:2:"id";s:0:"";s:5:"class";s:0:"";s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:10:"node_title";s:7:"subtype";s:10:"node_title";}',
        'load_terms' => 0,
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'event__title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'post_date' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'ds_post_date_kada_date_only',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'event__date',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['node|social_media_update|event_grid_item'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function kada_some_content_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|social_media_update|current';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'social_media_update';
  $ds_layout->view_mode = 'current';
  $ds_layout->layout = 'liftup_current_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_some_id',
        1 => 'group_top',
        2 => 'field_image',
        3 => 'post_date',
      ),
      'main' => array(
        4 => 'body',
        5 => 'field_link',
        6 => 'field_image_url',
        7 => 'field_share_caption',
        8 => 'field_share_description',
      ),
    ),
    'fields' => array(
      'group_top' => 'header',
      'body' => 'main',
      'field_image' => 'header',
      'field_link' => 'main',
      'field_image_url' => 'main',
      'field_share_caption' => 'main',
      'field_share_description' => 'main',
      'field_some_id' => 'header',
      'post_date' => 'header',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'main' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|social_media_update|current'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|social_media_update|current_twitter';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'social_media_update';
  $ds_layout->view_mode = 'current_twitter';
  $ds_layout->layout = 'liftup_current_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'main' => array(
        0 => 'body',
        3 => 'field_share_caption',
        4 => 'field_share_description',
        6 => 'field_image_url',
      ),
      'header' => array(
        1 => 'group_top',
        2 => 'field_image',
        5 => 'field_some_id',
        7 => 'post_date',
      ),
    ),
    'fields' => array(
      'body' => 'main',
      'group_top' => 'header',
      'field_image' => 'header',
      'field_share_caption' => 'main',
      'field_share_description' => 'main',
      'field_some_id' => 'header',
      'field_image_url' => 'main',
      'post_date' => 'header',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'main' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|social_media_update|current_twitter'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|social_media_update|event_grid_item';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'social_media_update';
  $ds_layout->view_mode = 'event_grid_item';
  $ds_layout->layout = 'grid_item_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'image' => array(
        0 => 'field_image',
        1 => 'field_link',
      ),
      'content_bottom' => array(
        2 => 'post_date',
        3 => 'duplicate_title',
      ),
    ),
    'fields' => array(
      'field_image' => 'image',
      'field_link' => 'image',
      'post_date' => 'content_bottom',
      'duplicate_title' => 'content_bottom',
    ),
    'classes' => array(),
    'wrappers' => array(
      'image' => 'div',
      'content_top' => 'div',
      'content_bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|social_media_update|event_grid_item'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function kada_some_content_feature_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'current_twitter';
  $ds_view_mode->label = 'Current Twitter';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['current_twitter'] = $ds_view_mode;

  return $export;
}
