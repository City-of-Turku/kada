<?php
/**
 * @file
 * pori_attraction_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pori_attraction_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_attraction_card';
  $strongarm->value = 0;
  $export['comment_anonymous_attraction_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_attraction_card';
  $strongarm->value = '0';
  $export['comment_attraction_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_attraction_card';
  $strongarm->value = 1;
  $export['comment_default_mode_attraction_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_attraction_card';
  $strongarm->value = '50';
  $export['comment_default_per_page_attraction_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_attraction_card';
  $strongarm->value = 1;
  $export['comment_form_location_attraction_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_attraction_card';
  $strongarm->value = '1';
  $export['comment_preview_attraction_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_attraction_card';
  $strongarm->value = 1;
  $export['comment_subject_field_attraction_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_node__attraction_card';
  $strongarm->value = array(
    'default_language' => 'fi',
    'hide_language_selector' => 0,
    'exclude_language_none' => 1,
    'lock_language' => 0,
    'shared_fields_original_only' => 0,
  );
  $export['entity_translation_settings_node__attraction_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__attraction_card';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'carousel' => array(
        'custom_settings' => FALSE,
      ),
      'current' => array(
        'custom_settings' => FALSE,
      ),
      'project' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'event_grid_item' => array(
        'custom_settings' => FALSE,
      ),
      'event_list_item' => array(
        'custom_settings' => FALSE,
      ),
      'event_map_item' => array(
        'custom_settings' => FALSE,
      ),
      'event_mosaic_item' => array(
        'custom_settings' => FALSE,
      ),
      'event_search_result' => array(
        'custom_settings' => FALSE,
      ),
      'event_tab_list_item' => array(
        'custom_settings' => FALSE,
      ),
      'event_top_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'main_news' => array(
        'custom_settings' => FALSE,
      ),
      'main_news_wide' => array(
        'custom_settings' => FALSE,
      ),
      'only_title' => array(
        'custom_settings' => TRUE,
      ),
      'map' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'product' => array(
        'custom_settings' => FALSE,
      ),
      'attraction_card_mosaic_item' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'domain' => array(
          'weight' => '7',
        ),
        'metatags' => array(
          'weight' => '10',
        ),
        'title' => array(
          'weight' => '6',
        ),
        'path' => array(
          'weight' => '8',
        ),
        'redirect' => array(
          'weight' => '9',
        ),
        'language' => array(
          'weight' => '20',
        ),
      ),
      'display' => array(
        'domain' => array(
          'default' => array(
            'weight' => '33',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '26',
            'visible' => FALSE,
          ),
          'only_title' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
          'attraction_card_mosaic_item' => array(
            'weight' => '35',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__attraction_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_attraction_card';
  $strongarm->value = 1;
  $export['i18n_node_extended_attraction_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_attraction_card';
  $strongarm->value = array();
  $export['i18n_node_options_attraction_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_attraction_card';
  $strongarm->value = '4';
  $export['language_content_type_attraction_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_attraction_card';
  $strongarm->value = array();
  $export['menu_options_attraction_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_attraction_card';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_attraction_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__attraction_card';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__attraction_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_attraction_card';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_attraction_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_attraction_card';
  $strongarm->value = '1';
  $export['node_preview_attraction_card'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_attraction_card';
  $strongarm->value = 0;
  $export['node_submitted_attraction_card'] = $strongarm;

  return $export;
}
