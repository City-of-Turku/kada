<?php

/**
 * @file
 * kada_news_feature.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function kada_news_feature_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news_item|current';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news_item';
  $ds_fieldsetting->view_mode = 'current';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => 2,
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => 'liftup-box__title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'links' => array(
      'weight' => 4,
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => 1,
      'label' => 'hidden',
      'format' => 'ds_post_date_kada_date_only',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'liftup-box__date',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|news_item|current'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news_item|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news_item';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'post_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_post_date_kada_date_only',
    ),
  );
  $export['node|news_item|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news_item|main_news';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news_item';
  $ds_fieldsetting->view_mode = 'main_news';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_kada_date_only',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'main-liftup-box__post-date',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|news_item|main_news'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news_item|main_news_wide';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news_item';
  $ds_fieldsetting->view_mode = 'main_news_wide';
  $ds_fieldsetting->settings = array(
    'duplicate_title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:7:{s:4:"link";i:1;s:6:"markup";s:4:"none";s:2:"id";s:0:"";s:5:"class";s:0:"";s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:10:"node_title";s:7:"subtype";s:10:"node_title";}',
        'load_terms' => 0,
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h2',
          'fi-cl' => 'main-liftup-box__title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'post_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_post_date_kada_date_only',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'main-liftup-box__post-date',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_lead_paragraph_long_text' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'main-liftup-box__text',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_vignette' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'main-liftup-box__caption',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|news_item|main_news_wide'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news_item|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news_item';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_kada_date_only',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|news_item|search_result'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news_item|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news_item';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'liftup-box__title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'post_date' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_post_date_kada_date_only',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'liftup-box__date',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|news_item|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function kada_news_feature_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'duplicate_title';
  $ds_field->label = 'Duplicate title';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
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
  $export['duplicate_title'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function kada_news_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news_item|current';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news_item';
  $ds_layout->view_mode = 'current';
  $ds_layout->layout = 'liftup_current_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_content_image',
        1 => 'post_date',
      ),
      'main' => array(
        3 => 'field_lead_paragraph_long_text',
        4 => 'links',
        2 => 'title',
      ),
    ),
    'fields' => array(
      'post_date' => 'header',
      'field_content_image' => 'header',
      'title' => 'main',
      'field_lead_paragraph_long_text' => 'main',
      'links' => 'main',
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
  $export['node|news_item|current'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news_item|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news_item';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'page_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'main_content' => array(
        0 => 'post_date',
        1 => 'field_lead_paragraph_long_text',
        2 => 'field_info_box',
        3 => 'body',
        4 => 'sharethis',
        5 => 'field_content_image',
      ),
      'sidebar' => array(
        6 => 'field_keywords',
      ),
      'additional_information' => array(
        7 => 'field_additional_info_link',
        8 => 'field_file_attachment',
      ),
      'contact_information' => array(
        9 => 'field_contact_person',
      ),
    ),
    'fields' => array(
      'post_date' => 'main_content',
      'field_lead_paragraph_long_text' => 'main_content',
      'field_info_box' => 'main_content',
      'body' => 'main_content',
      'sharethis' => 'main_content',
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
  $export['node|news_item|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news_item|main_news';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news_item';
  $ds_layout->view_mode = 'main_news';
  $ds_layout->layout = 'main_liftup_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'media' => array(
        0 => 'field_content_image',
      ),
      'main' => array(
        1 => 'post_date',
        2 => 'title',
        3 => 'field_lead_paragraph_long_text',
      ),
    ),
    'fields' => array(
      'field_content_image' => 'media',
      'post_date' => 'main',
      'title' => 'main',
      'field_lead_paragraph_long_text' => 'main',
    ),
    'classes' => array(),
    'wrappers' => array(
      'media' => 'div',
      'main' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => 'content',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|news_item|main_news'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news_item|main_news_wide';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news_item';
  $ds_layout->view_mode = 'main_news_wide';
  $ds_layout->layout = 'main_liftup_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'main' => array(
        0 => 'post_date',
        1 => 'duplicate_title',
        4 => 'field_lead_paragraph_long_text',
      ),
      'media' => array(
        2 => 'field_content_image',
        3 => 'field_vignette',
      ),
    ),
    'fields' => array(
      'post_date' => 'main',
      'duplicate_title' => 'main',
      'field_content_image' => 'media',
      'field_vignette' => 'media',
      'field_lead_paragraph_long_text' => 'main',
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
  $export['node|news_item|main_news_wide'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news_item|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news_item';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'search_result_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'media' => array(
        0 => 'field_content_image',
      ),
      'main' => array(
        1 => 'post_date',
        2 => 'field_lead_paragraph_long_text',
        3 => 'body',
        4 => 'field_keywords',
      ),
    ),
    'fields' => array(
      'field_content_image' => 'media',
      'post_date' => 'main',
      'field_lead_paragraph_long_text' => 'main',
      'body' => 'main',
      'field_keywords' => 'main',
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
  $export['node|news_item|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news_item|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news_item';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'liftup_teaser_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_content_image',
      ),
      'main' => array(
        1 => 'title',
        2 => 'post_date',
        3 => 'field_lead_paragraph_long_text',
      ),
    ),
    'fields' => array(
      'field_content_image' => 'header',
      'title' => 'main',
      'post_date' => 'main',
      'field_lead_paragraph_long_text' => 'main',
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
  $export['node|news_item|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function kada_news_feature_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'main_news';
  $ds_view_mode->label = 'Main news';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['main_news'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'main_news_wide';
  $ds_view_mode->label = 'Main news, wide';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['main_news_wide'] = $ds_view_mode;

  return $export;
}
