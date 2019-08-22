<?php

/**
 * @file
 * kada_some_content_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function kada_some_content_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_feed_import_facebook';
  $strongarm->value = 0;
  $export['comment_anonymous_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_feed_import_instagram';
  $strongarm->value = 0;
  $export['comment_anonymous_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_feed_import_twitter';
  $strongarm->value = 0;
  $export['comment_anonymous_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_feed_import_youtube_channel';
  $strongarm->value = 0;
  $export['comment_anonymous_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_social_media_update';
  $strongarm->value = 0;
  $export['comment_anonymous_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_feed_import_facebook';
  $strongarm->value = 1;
  $export['comment_default_mode_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_feed_import_instagram';
  $strongarm->value = 1;
  $export['comment_default_mode_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_feed_import_twitter';
  $strongarm->value = 1;
  $export['comment_default_mode_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_feed_import_youtube_channel';
  $strongarm->value = 1;
  $export['comment_default_mode_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_social_media_update';
  $strongarm->value = 1;
  $export['comment_default_mode_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_feed_import_facebook';
  $strongarm->value = '50';
  $export['comment_default_per_page_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_feed_import_instagram';
  $strongarm->value = '50';
  $export['comment_default_per_page_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_feed_import_twitter';
  $strongarm->value = '50';
  $export['comment_default_per_page_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_feed_import_youtube_channel';
  $strongarm->value = '50';
  $export['comment_default_per_page_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_social_media_update';
  $strongarm->value = '50';
  $export['comment_default_per_page_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_feed_import_facebook';
  $strongarm->value = '0';
  $export['comment_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_feed_import_instagram';
  $strongarm->value = '0';
  $export['comment_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_feed_import_twitter';
  $strongarm->value = '0';
  $export['comment_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_feed_import_youtube_channel';
  $strongarm->value = '0';
  $export['comment_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_feed_import_facebook';
  $strongarm->value = 1;
  $export['comment_form_location_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_feed_import_instagram';
  $strongarm->value = 1;
  $export['comment_form_location_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_feed_import_twitter';
  $strongarm->value = 1;
  $export['comment_form_location_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_feed_import_youtube_channel';
  $strongarm->value = 1;
  $export['comment_form_location_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_social_media_update';
  $strongarm->value = 1;
  $export['comment_form_location_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_feed_import_facebook';
  $strongarm->value = '1';
  $export['comment_preview_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_feed_import_instagram';
  $strongarm->value = '1';
  $export['comment_preview_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_feed_import_twitter';
  $strongarm->value = '1';
  $export['comment_preview_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_feed_import_youtube_channel';
  $strongarm->value = '1';
  $export['comment_preview_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_social_media_update';
  $strongarm->value = '1';
  $export['comment_preview_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_social_media_update';
  $strongarm->value = '1';
  $export['comment_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_feed_import_facebook';
  $strongarm->value = 1;
  $export['comment_subject_field_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_feed_import_instagram';
  $strongarm->value = 1;
  $export['comment_subject_field_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_feed_import_twitter';
  $strongarm->value = 1;
  $export['comment_subject_field_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_feed_import_youtube_channel';
  $strongarm->value = 1;
  $export['comment_subject_field_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_social_media_update';
  $strongarm->value = 1;
  $export['comment_subject_field_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_feed_import_facebook';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_feed_import_instagram';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_feed_import_twitter';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_feed_import_youtube_channel';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_social_media_update';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_feed_import_facebook';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_feed_import_instagram';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_feed_import_twitter';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_feed_import_youtube_channel';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_social_media_update';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_feed_import_facebook';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_feed_import_instagram';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_feed_import_twitter';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_feed_import_youtube_channel';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_social_media_update';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_feed_import_facebook';
  $strongarm->value = array(
    0 => 'DOMAIN_ALL',
    1 => 'DOMAIN_ACTIVE',
  );
  $export['domain_node_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_feed_import_instagram';
  $strongarm->value = array(
    0 => 'DOMAIN_ALL',
    1 => 'DOMAIN_ACTIVE',
  );
  $export['domain_node_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_feed_import_twitter';
  $strongarm->value = array(
    0 => 'DOMAIN_ALL',
    1 => 'DOMAIN_ACTIVE',
  );
  $export['domain_node_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'domain_node_feed_import_youtube_channel';
  $strongarm->value = array(
    0 => 'DOMAIN_ALL',
    1 => 'DOMAIN_ACTIVE',
  );
  $export['domain_node_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_comment_filter_feed_import_facebook';
  $strongarm->value = 0;
  $export['entity_translation_comment_filter_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_comment_filter_feed_import_instagram';
  $strongarm->value = 0;
  $export['entity_translation_comment_filter_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_comment_filter_feed_import_twitter';
  $strongarm->value = 0;
  $export['entity_translation_comment_filter_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_comment_filter_feed_import_youtube_channel';
  $strongarm->value = 0;
  $export['entity_translation_comment_filter_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_comment_filter_social_media_update';
  $strongarm->value = 0;
  $export['entity_translation_comment_filter_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_hide_translation_links_feed_import_facebook';
  $strongarm->value = 0;
  $export['entity_translation_hide_translation_links_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_hide_translation_links_feed_import_instagram';
  $strongarm->value = 0;
  $export['entity_translation_hide_translation_links_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_hide_translation_links_feed_import_twitter';
  $strongarm->value = 0;
  $export['entity_translation_hide_translation_links_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_hide_translation_links_feed_import_youtube_channel';
  $strongarm->value = 0;
  $export['entity_translation_hide_translation_links_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_hide_translation_links_social_media_update';
  $strongarm->value = 0;
  $export['entity_translation_hide_translation_links_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_node_metadata_feed_import_facebook';
  $strongarm->value = '0';
  $export['entity_translation_node_metadata_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_node_metadata_feed_import_instagram';
  $strongarm->value = '0';
  $export['entity_translation_node_metadata_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_node_metadata_feed_import_twitter';
  $strongarm->value = '0';
  $export['entity_translation_node_metadata_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_node_metadata_feed_import_youtube_channel';
  $strongarm->value = '0';
  $export['entity_translation_node_metadata_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_node_metadata_social_media_update';
  $strongarm->value = '0';
  $export['entity_translation_node_metadata_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__feed_import_facebook';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'domain' => array(
          'weight' => '10',
        ),
        'metatags' => array(
          'weight' => '14',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '12',
        ),
        'redirect' => array(
          'weight' => '13',
        ),
        'feeds' => array(
          'weight' => '2',
        ),
        'language' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__feed_import_instagram';
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
        'custom_settings' => FALSE,
      ),
      'map' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'domain' => array(
          'weight' => '11',
        ),
        'metatags' => array(
          'weight' => '14',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '12',
        ),
        'redirect' => array(
          'weight' => '13',
        ),
        'feeds' => array(
          'weight' => '10',
        ),
        'language' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(
        'domain' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
        'language' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__feed_import_twitter';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'domain' => array(
          'weight' => '9',
        ),
        'metatags' => array(
          'weight' => '12',
        ),
        'title' => array(
          'weight' => '2',
        ),
        'path' => array(
          'weight' => '10',
        ),
        'redirect' => array(
          'weight' => '11',
        ),
        'feeds' => array(
          'weight' => '1',
        ),
        'language' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__feed_import_youtube_channel';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'domain' => array(
          'weight' => '10',
        ),
        'metatags' => array(
          'weight' => '13',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '11',
        ),
        'redirect' => array(
          'weight' => '12',
        ),
        'feeds' => array(
          'weight' => '2',
        ),
        'language' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__social_media_update';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'current' => array(
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
      'carousel' => array(
        'custom_settings' => FALSE,
      ),
      'project' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'accordion' => array(
        'custom_settings' => FALSE,
      ),
      'event_grid_item' => array(
        'custom_settings' => TRUE,
      ),
      'event_list_item' => array(
        'custom_settings' => FALSE,
      ),
      'main_news' => array(
        'custom_settings' => FALSE,
      ),
      'main_news_wide' => array(
        'custom_settings' => FALSE,
      ),
      'only_title' => array(
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
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'event_mosaic_item' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '23',
        ),
        'redirect' => array(
          'weight' => '22',
        ),
        'flag' => array(
          'weight' => '21',
        ),
        'domain' => array(
          'weight' => '2',
        ),
        'metatags' => array(
          'weight' => '24',
        ),
        'language' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(
        'domain' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'current' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'event_grid_item' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
        'language' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'current' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'event_grid_item' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flag_current_default_social_media_update';
  $strongarm->value = 0;
  $export['flag_current_default_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_feed_import_facebook';
  $strongarm->value = '1';
  $export['i18n_node_extended_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_feed_import_instagram';
  $strongarm->value = 1;
  $export['i18n_node_extended_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_feed_import_twitter';
  $strongarm->value = 1;
  $export['i18n_node_extended_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_feed_import_youtube_channel';
  $strongarm->value = 1;
  $export['i18n_node_extended_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_social_media_update';
  $strongarm->value = 1;
  $export['i18n_node_extended_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_feed_import_facebook';
  $strongarm->value = array(
    0 => 'current',
    1 => 'required',
  );
  $export['i18n_node_options_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_feed_import_instagram';
  $strongarm->value = array();
  $export['i18n_node_options_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_feed_import_twitter';
  $strongarm->value = array();
  $export['i18n_node_options_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_feed_import_youtube_channel';
  $strongarm->value = array();
  $export['i18n_node_options_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_social_media_update';
  $strongarm->value = array();
  $export['i18n_node_options_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_feed_import_facebook';
  $strongarm->value = '1';
  $export['language_content_type_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_feed_import_instagram';
  $strongarm->value = '1';
  $export['language_content_type_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_feed_import_twitter';
  $strongarm->value = '1';
  $export['language_content_type_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_feed_import_youtube_channel';
  $strongarm->value = '1';
  $export['language_content_type_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_social_media_update';
  $strongarm->value = '1';
  $export['language_content_type_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maxlength_js_feed_import_facebook';
  $strongarm->value = '';
  $export['maxlength_js_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maxlength_js_feed_import_instagram';
  $strongarm->value = '';
  $export['maxlength_js_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maxlength_js_feed_import_twitter';
  $strongarm->value = '';
  $export['maxlength_js_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maxlength_js_feed_import_youtube_channel';
  $strongarm->value = '';
  $export['maxlength_js_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maxlength_js_label_feed_import_facebook';
  $strongarm->value = 'Content limited to @limit characters, remaining: <strong>@remaining</strong>';
  $export['maxlength_js_label_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maxlength_js_label_feed_import_instagram';
  $strongarm->value = 'Content limited to @limit characters, remaining: <strong>@remaining</strong>';
  $export['maxlength_js_label_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maxlength_js_label_feed_import_twitter';
  $strongarm->value = 'Content limited to @limit characters, remaining: <strong>@remaining</strong>';
  $export['maxlength_js_label_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maxlength_js_label_feed_import_youtube_channel';
  $strongarm->value = 'Content limited to @limit characters, remaining: <strong>@remaining</strong>';
  $export['maxlength_js_label_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maxlength_js_label_social_media_update';
  $strongarm->value = 'Content limited to @limit characters, remaining: <strong>@remaining</strong>';
  $export['maxlength_js_label_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maxlength_js_social_media_update';
  $strongarm->value = '';
  $export['maxlength_js_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_feed_import_facebook';
  $strongarm->value = array();
  $export['menu_options_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_feed_import_instagram';
  $strongarm->value = array();
  $export['menu_options_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_feed_import_twitter';
  $strongarm->value = array();
  $export['menu_options_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_feed_import_youtube_channel';
  $strongarm->value = array();
  $export['menu_options_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_social_media_update';
  $strongarm->value = array();
  $export['menu_options_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_feed_import_facebook';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_feed_import_instagram';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_feed_import_twitter';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_feed_import_youtube_channel';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_social_media_update';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_feed_import_facebook';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_feed_import_instagram';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_feed_import_twitter';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_feed_import_youtube_channel';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_social_media_update';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_feed_import_facebook';
  $strongarm->value = '0';
  $export['node_preview_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_feed_import_instagram';
  $strongarm->value = '0';
  $export['node_preview_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_feed_import_twitter';
  $strongarm->value = '0';
  $export['node_preview_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_feed_import_youtube_channel';
  $strongarm->value = '0';
  $export['node_preview_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_social_media_update';
  $strongarm->value = '0';
  $export['node_preview_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_feed_import_facebook';
  $strongarm->value = 1;
  $export['node_submitted_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_feed_import_instagram';
  $strongarm->value = 0;
  $export['node_submitted_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_feed_import_twitter';
  $strongarm->value = 1;
  $export['node_submitted_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_feed_import_youtube_channel';
  $strongarm->value = 0;
  $export['node_submitted_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_social_media_update';
  $strongarm->value = 0;
  $export['node_submitted_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_menu_single_group_content__node__feed_import_facebook';
  $strongarm->value = 1;
  $export['og_menu_single_group_content__node__feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_menu_single_group_content__node__feed_import_instagram';
  $strongarm->value = 1;
  $export['og_menu_single_group_content__node__feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_menu_single_group_content__node__feed_import_twitter';
  $strongarm->value = 1;
  $export['og_menu_single_group_content__node__feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_menu_single_group_content__node__feed_import_youtube_channel';
  $strongarm->value = 1;
  $export['og_menu_single_group_content__node__feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_menu_single_group_content__node__social_media_update';
  $strongarm->value = 0;
  $export['og_menu_single_group_content__node__social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_menu_single_group__node__feed_import_facebook';
  $strongarm->value = 0;
  $export['og_menu_single_group__node__feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_menu_single_group__node__feed_import_instagram';
  $strongarm->value = 0;
  $export['og_menu_single_group__node__feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_menu_single_group__node__feed_import_twitter';
  $strongarm->value = 0;
  $export['og_menu_single_group__node__feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_menu_single_group__node__feed_import_youtube_channel';
  $strongarm->value = 0;
  $export['og_menu_single_group__node__feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_menu_single_group__node__social_media_update';
  $strongarm->value = 0;
  $export['og_menu_single_group__node__social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_feed_import_facebook_pattern';
  $strongarm->value = '';
  $export['pathauto_node_feed_import_facebook_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_feed_import_instagram_pattern';
  $strongarm->value = '';
  $export['pathauto_node_feed_import_instagram_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_feed_import_twitter_pattern';
  $strongarm->value = '';
  $export['pathauto_node_feed_import_twitter_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'publishcontent_feed_import_facebook';
  $strongarm->value = 0;
  $export['publishcontent_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'publishcontent_feed_import_instagram';
  $strongarm->value = 0;
  $export['publishcontent_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'publishcontent_feed_import_twitter';
  $strongarm->value = 0;
  $export['publishcontent_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'publishcontent_feed_import_youtube_channel';
  $strongarm->value = 0;
  $export['publishcontent_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'publishcontent_social_media_update';
  $strongarm->value = 0;
  $export['publishcontent_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_expand_fieldset_feed_import_facebook';
  $strongarm->value = '0';
  $export['scheduler_expand_fieldset_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_expand_fieldset_feed_import_instagram';
  $strongarm->value = '0';
  $export['scheduler_expand_fieldset_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_expand_fieldset_feed_import_twitter';
  $strongarm->value = '0';
  $export['scheduler_expand_fieldset_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_expand_fieldset_feed_import_youtube_channel';
  $strongarm->value = '0';
  $export['scheduler_expand_fieldset_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_expand_fieldset_social_media_update';
  $strongarm->value = '0';
  $export['scheduler_expand_fieldset_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_feed_import_facebook';
  $strongarm->value = 0;
  $export['scheduler_publish_enable_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_feed_import_instagram';
  $strongarm->value = 0;
  $export['scheduler_publish_enable_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_feed_import_twitter';
  $strongarm->value = 0;
  $export['scheduler_publish_enable_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_feed_import_youtube_channel';
  $strongarm->value = 0;
  $export['scheduler_publish_enable_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_social_media_update';
  $strongarm->value = 0;
  $export['scheduler_publish_enable_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_past_date_feed_import_facebook';
  $strongarm->value = 'error';
  $export['scheduler_publish_past_date_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_past_date_feed_import_instagram';
  $strongarm->value = 'error';
  $export['scheduler_publish_past_date_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_past_date_feed_import_twitter';
  $strongarm->value = 'error';
  $export['scheduler_publish_past_date_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_past_date_feed_import_youtube_channel';
  $strongarm->value = 'error';
  $export['scheduler_publish_past_date_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_past_date_social_media_update';
  $strongarm->value = 'error';
  $export['scheduler_publish_past_date_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_feed_import_facebook';
  $strongarm->value = 0;
  $export['scheduler_publish_required_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_feed_import_instagram';
  $strongarm->value = 0;
  $export['scheduler_publish_required_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_feed_import_twitter';
  $strongarm->value = 0;
  $export['scheduler_publish_required_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_feed_import_youtube_channel';
  $strongarm->value = 0;
  $export['scheduler_publish_required_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_social_media_update';
  $strongarm->value = 0;
  $export['scheduler_publish_required_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_feed_import_facebook';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_feed_import_instagram';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_feed_import_twitter';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_feed_import_youtube_channel';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_social_media_update';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_feed_import_facebook';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_feed_import_instagram';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_feed_import_twitter';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_feed_import_youtube_channel';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_social_media_update';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_feed_import_facebook';
  $strongarm->value = 0;
  $export['scheduler_unpublish_enable_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_feed_import_instagram';
  $strongarm->value = 0;
  $export['scheduler_unpublish_enable_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_feed_import_twitter';
  $strongarm->value = 0;
  $export['scheduler_unpublish_enable_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_feed_import_youtube_channel';
  $strongarm->value = 0;
  $export['scheduler_unpublish_enable_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_social_media_update';
  $strongarm->value = 0;
  $export['scheduler_unpublish_enable_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_feed_import_facebook';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_feed_import_instagram';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_feed_import_twitter';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_feed_import_youtube_channel';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_social_media_update';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_feed_import_facebook';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_feed_import_instagram';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_feed_import_twitter';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_feed_import_youtube_channel';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_social_media_update';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_use_vertical_tabs_feed_import_facebook';
  $strongarm->value = '1';
  $export['scheduler_use_vertical_tabs_feed_import_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_use_vertical_tabs_feed_import_instagram';
  $strongarm->value = '1';
  $export['scheduler_use_vertical_tabs_feed_import_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_use_vertical_tabs_feed_import_twitter';
  $strongarm->value = '1';
  $export['scheduler_use_vertical_tabs_feed_import_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_use_vertical_tabs_feed_import_youtube_channel';
  $strongarm->value = '1';
  $export['scheduler_use_vertical_tabs_feed_import_youtube_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_use_vertical_tabs_social_media_update';
  $strongarm->value = '1';
  $export['scheduler_use_vertical_tabs_social_media_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_news_item_options';
  $strongarm->value = array(
    'full' => 0,
    'teaser' => 0,
    'rss' => 0,
    'diff_standard' => 0,
    'live_results_search' => 0,
    'token' => 0,
    'accordion' => 0,
    'carousel' => 0,
    'current' => 0,
    'project' => 0,
    'event_grid_item' => 0,
    'event_list_item' => 0,
    'event_map_item' => 0,
    'event_mosaic_item' => 0,
    'event_search_result' => 0,
    'event_tab_list_item' => 0,
    'event_top_carousel' => 0,
    'main_news' => 0,
    'main_news_wide' => 0,
    'only_title' => 0,
    'map' => 0,
    'attraction_card_mosaic_item' => 0,
    'product' => 0,
    'person_card' => 0,
    'small_liftup_banner' => 0,
    'waste_map' => 0,
    'waste_search' => 0,
    'revision' => 0,
  );
  $export['sharethis_news_item_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_node_types';
  $strongarm->value = array(
    'event' => 'event',
    'news_item' => 'news_item',
    'attraction_card' => 0,
    'blog' => 0,
    'blog_post' => 0,
    'feed_import_facebook' => 0,
    'feed_import_instagram' => 0,
    'feed_import_twitter' => 0,
    'feed_import_youtube_channel' => 0,
    'landing_page' => 0,
    'liftup' => 0,
    'page' => 0,
    'person' => 0,
    'place' => 0,
    'position_of_trust' => 0,
    'section' => 0,
    'service' => 0,
    'service_offer' => 0,
    'social_media_update' => 0,
    'webform' => 0,
  );
  $export['sharethis_node_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_option_extras';
  $strongarm->value = array(
    'Google Plus One:plusone' => 0,
    'Facebook Like:fblike' => 0,
    'Facebook Recommend:fbrec' => 0,
    'Facebook Send:fbsend' => 0,
  );
  $export['sharethis_option_extras'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'sharethis_weight';
  $strongarm->value = '10';
  $export['sharethis_weight'] = $strongarm;

  return $export;
}
