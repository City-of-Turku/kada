<?php

/**
 * @file
 * kada_liftups_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function kada_liftups_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_news_item';
  $strongarm->value = 'edit-i18n';
  $export['additional_settings__active_tab_news_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_liftup';
  $strongarm->value = 0;
  $export['comment_anonymous_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_liftup';
  $strongarm->value = 1;
  $export['comment_default_mode_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_liftup';
  $strongarm->value = '50';
  $export['comment_default_per_page_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_liftup';
  $strongarm->value = 1;
  $export['comment_form_location_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_liftup';
  $strongarm->value = '1';
  $export['comment_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_liftup';
  $strongarm->value = '1';
  $export['comment_preview_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_liftup';
  $strongarm->value = 1;
  $export['comment_subject_field_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_liftup';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_liftup';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_liftup';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_comment_filter_liftup';
  $strongarm->value = 0;
  $export['entity_translation_comment_filter_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_hide_translation_links_liftup';
  $strongarm->value = 0;
  $export['entity_translation_hide_translation_links_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_node_metadata_liftup';
  $strongarm->value = '0';
  $export['entity_translation_node_metadata_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_node__liftup';
  $strongarm->value = array(
    'default_language' => 'xx-et-current',
    'hide_language_selector' => 0,
    'exclude_language_none' => 1,
    'lock_language' => 0,
    'shared_fields_original_only' => 1,
  );
  $export['entity_translation_settings_node__liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__liftup';
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
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'carousel' => array(
        'custom_settings' => TRUE,
      ),
      'current' => array(
        'custom_settings' => TRUE,
      ),
      'project' => array(
        'custom_settings' => TRUE,
      ),
      'main_news' => array(
        'custom_settings' => FALSE,
      ),
      'event_top_carousel' => array(
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
      'main_news_wide' => array(
        'custom_settings' => FALSE,
      ),
      'only_title' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'event_mosaic_item' => array(
        'custom_settings' => FALSE,
      ),
      'map' => array(
        'custom_settings' => FALSE,
      ),
      'attraction_card_mosaic_item' => array(
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
      'small_liftup_banner' => array(
        'custom_settings' => TRUE,
      ),
      'waste_map' => array(
        'custom_settings' => FALSE,
      ),
      'waste_search' => array(
        'custom_settings' => FALSE,
      ),
      'contact_card' => array(
        'custom_settings' => FALSE,
      ),
      'person_card_with_skills' => array(
        'custom_settings' => FALSE,
      ),
      'presentation' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => '2',
        ),
        'title' => array(
          'weight' => '3',
        ),
        'path' => array(
          'weight' => '5',
        ),
        'redirect' => array(
          'weight' => '4',
        ),
        'flag' => array(
          'weight' => '6',
        ),
        'domain' => array(
          'weight' => '1',
        ),
        'metatags' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'carousel' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
          'current' => array(
            'weight' => '28',
            'visible' => FALSE,
          ),
          'project' => array(
            'weight' => '28',
            'visible' => FALSE,
          ),
          'event_top_carousel' => array(
            'weight' => '26',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'small_liftup_banner' => array(
            'weight' => '29',
            'visible' => FALSE,
          ),
          'presentation' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
        ),
        'domain' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'current' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
          'event_top_carousel' => array(
            'weight' => '28',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'project' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
          'small_liftup_banner' => array(
            'weight' => '30',
            'visible' => FALSE,
          ),
          'carousel' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
          'presentation' => array(
            'weight' => '26',
            'visible' => FALSE,
          ),
        ),
        'sharethis' => array(
          'default' => array(
            'weight' => '12',
            'visible' => TRUE,
          ),
          'carousel' => array(
            'weight' => '26',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'event_top_carousel' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'small_liftup_banner' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'presentation' => array(
            'weight' => '28',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flag_carousel_default_liftup';
  $strongarm->value = 0;
  $export['flag_carousel_default_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flag_current_default_liftup';
  $strongarm->value = 0;
  $export['flag_current_default_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flag_project_default_liftup';
  $strongarm->value = 0;
  $export['flag_project_default_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_liftup';
  $strongarm->value = '1';
  $export['i18n_node_extended_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_liftup';
  $strongarm->value = array(
    0 => 'current',
    1 => 'required',
  );
  $export['i18n_node_options_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_liftup';
  $strongarm->value = '2';
  $export['language_content_type_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_liftup';
  $strongarm->value = array();
  $export['menu_options_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_liftup';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_liftup';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_liftup';
  $strongarm->value = '0';
  $export['node_preview_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_liftup';
  $strongarm->value = 0;
  $export['node_submitted_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_menu_single_group_content__node__liftup';
  $strongarm->value = 0;
  $export['og_menu_single_group_content__node__liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_menu_single_group__node__liftup';
  $strongarm->value = 0;
  $export['og_menu_single_group__node__liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_liftup_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_liftup_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_liftup_fi_pattern';
  $strongarm->value = '';
  $export['pathauto_node_liftup_fi_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_liftup_pattern';
  $strongarm->value = '';
  $export['pathauto_node_liftup_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_liftup_sv_pattern';
  $strongarm->value = '';
  $export['pathauto_node_liftup_sv_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_liftup_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_liftup_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'publishcontent_liftup';
  $strongarm->value = 0;
  $export['publishcontent_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_expand_fieldset_liftup';
  $strongarm->value = '0';
  $export['scheduler_expand_fieldset_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_liftup';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_past_date_liftup';
  $strongarm->value = 'publish';
  $export['scheduler_publish_past_date_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_liftup';
  $strongarm->value = 0;
  $export['scheduler_publish_required_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_liftup';
  $strongarm->value = 1;
  $export['scheduler_publish_revision_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_liftup';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_liftup';
  $strongarm->value = 1;
  $export['scheduler_unpublish_enable_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_liftup';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_liftup';
  $strongarm->value = 1;
  $export['scheduler_unpublish_revision_liftup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_use_vertical_tabs_liftup';
  $strongarm->value = '1';
  $export['scheduler_use_vertical_tabs_liftup'] = $strongarm;

  return $export;
}
