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
      'weight' => '17',
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
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'body',
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
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'liftup-box__image',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h4',
          'fi-cl' => 'share-title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_share_caption' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'share-caption',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_share_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'share-description',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_some_id' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
  );
  $export['node|social_media_update|current'] = $ds_fieldsetting;

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
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'event__link',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
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
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_top',
        1 => 'body',
        2 => 'field_image',
        3 => 'field_link',
        4 => 'field_image_url',
        5 => 'field_share_caption',
        6 => 'field_share_description',
        7 => 'field_some_id',
        8 => 'post_date',
      ),
    ),
    'fields' => array(
      'group_top' => 'ds_content',
      'body' => 'ds_content',
      'field_image' => 'ds_content',
      'field_link' => 'ds_content',
      'field_image_url' => 'ds_content',
      'field_share_caption' => 'ds_content',
      'field_share_description' => 'ds_content',
      'field_some_id' => 'ds_content',
      'post_date' => 'ds_content',
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
  $export['node|social_media_update|current'] = $ds_layout;

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
