<?php

/**
 * @file
 * kada_news_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function kada_news_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_news_item';
  $strongarm->value = 0;
  $export['comment_anonymous_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_news_item';
  $strongarm->value = 1;
  $export['comment_default_mode_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_news_item';
  $strongarm->value = '50';
  $export['comment_default_per_page_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_news_item';
  $strongarm->value = 1;
  $export['comment_form_location_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_news_item';
  $strongarm->value = '1';
  $export['comment_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_news_item';
  $strongarm->value = '1';
  $export['comment_preview_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_news_item';
  $strongarm->value = 1;
  $export['comment_subject_field_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_news_item';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_news_item';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_news_item';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_comment_filter_news_item';
  $strongarm->value = 0;
  $export['entity_translation_comment_filter_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_hide_translation_links_news_item';
  $strongarm->value = 0;
  $export['entity_translation_hide_translation_links_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_node_metadata_news_item';
  $strongarm->value = '0';
  $export['entity_translation_node_metadata_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__news_item';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'current' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
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
      'carousel' => array(
        'custom_settings' => FALSE,
      ),
      'project' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'main_news' => array(
        'custom_settings' => TRUE,
      ),
      'main_news_wide' => array(
        'custom_settings' => TRUE,
      ),
      'only_title' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
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
      'event_tab_list_item' => array(
        'custom_settings' => FALSE,
      ),
      'event_top_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'map' => array(
        'custom_settings' => FALSE,
      ),
      'attraction_card_mosaic_item' => array(
        'custom_settings' => FALSE,
      ),
      'event_mosaic_item' => array(
        'custom_settings' => FALSE,
      ),
      'event_search_result' => array(
        'custom_settings' => FALSE,
      ),
      'live_results_search' => array(
        'custom_settings' => TRUE,
      ),
      'person_card' => array(
        'custom_settings' => FALSE,
      ),
      'product' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'flag' => array(
          'weight' => '16',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => 6,
        ),
        'redirect' => array(
          'weight' => 7,
        ),
        'domain' => array(
          'weight' => 4,
        ),
        'language' => array(
          'weight' => '0',
        ),
        'metatags' => array(
          'weight' => 5,
        ),
      ),
      'display' => array(
        'domain' => array(
          'current' => array(
            'weight' => '28',
            'visible' => FALSE,
          ),
          'main_news' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => 23,
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
          'main_news_wide' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
        ),
        'language' => array(
          'current' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => 24,
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '27',
            'visible' => FALSE,
          ),
          'main_news' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'main_news_wide' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
        ),
        'sharethis' => array(
          'full' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flag_current_default_news_item';
  $strongarm->value = 1;
  $export['flag_current_default_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flag_main_news_default_news_item';
  $strongarm->value = 0;
  $export['flag_main_news_default_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_news_item';
  $strongarm->value = '1';
  $export['i18n_node_extended_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_news_item';
  $strongarm->value = array(
    0 => 'current',
    1 => 'required',
  );
  $export['i18n_node_options_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_news_item';
  $strongarm->value = '2';
  $export['language_content_type_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_news_item';
  $strongarm->value = array();
  $export['menu_options_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_news_item';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_news_item';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_news_item';
  $strongarm->value = '1';
  $export['node_preview_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_news_item';
  $strongarm->value = 1;
  $export['node_submitted_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_menu_single_group_content__node__news_item';
  $strongarm->value = 0;
  $export['og_menu_single_group_content__node__news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_menu_single_group__node__news_item';
  $strongarm->value = 0;
  $export['og_menu_single_group__node__news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_news_item_en_pattern';
  $strongarm->value = 'news/[node:created:custom:Y-m-d]_[node:title]';
  $export['pathauto_node_news_item_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_news_item_fi_pattern';
  $strongarm->value = 'uutinen/[node:created:custom:Y-m-d]_[node:title]';
  $export['pathauto_node_news_item_fi_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_news_item_pattern';
  $strongarm->value = '';
  $export['pathauto_node_news_item_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_news_item_sv_pattern';
  $strongarm->value = 'nyhet/[node:created:custom:Y-m-d]_[node:title]';
  $export['pathauto_node_news_item_sv_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_news_item_und_pattern';
  $strongarm->value = 'uutinen/[node:created:custom:Y-m-d]_[node:title]';
  $export['pathauto_node_news_item_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'publishcontent_news_item';
  $strongarm->value = 0;
  $export['publishcontent_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_expand_fieldset_news_item';
  $strongarm->value = '0';
  $export['scheduler_expand_fieldset_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_news_item';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_past_date_news_item';
  $strongarm->value = 'publish';
  $export['scheduler_publish_past_date_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_news_item';
  $strongarm->value = 0;
  $export['scheduler_publish_required_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_news_item';
  $strongarm->value = 1;
  $export['scheduler_publish_revision_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_news_item';
  $strongarm->value = 1;
  $export['scheduler_publish_touch_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_news_item';
  $strongarm->value = 1;
  $export['scheduler_unpublish_enable_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_news_item';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_news_item';
  $strongarm->value = 1;
  $export['scheduler_unpublish_revision_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_use_vertical_tabs_news_item';
  $strongarm->value = '1';
  $export['scheduler_use_vertical_tabs_news_item'] = $strongarm;

  return $export;
}
