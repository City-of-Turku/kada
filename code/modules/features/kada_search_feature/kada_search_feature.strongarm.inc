<?php
/**
 * @file
 * kada_search_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function kada_search_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi:block_cache:search_api@default_node_index';
  $strongarm->value = -1;
  $export['facetapi:block_cache:search_api@default_node_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi:block_cache:search_api@kada_content';
  $strongarm->value = -1;
  $export['facetapi:block_cache:search_api@kada_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi_pretty_paths_searcher_search_api@default_node_index';
  $strongarm->value = 1;
  $export['facetapi_pretty_paths_searcher_search_api@default_node_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi_pretty_paths_searcher_search_api@default_node_index_options';
  $strongarm->value = array(
    'sort_path_segments' => 1,
    'base_path_provider' => 'default',
  );
  $export['facetapi_pretty_paths_searcher_search_api@default_node_index_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi_pretty_paths_searcher_search_api@kada_content';
  $strongarm->value = 1;
  $export['facetapi_pretty_paths_searcher_search_api@kada_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi_pretty_paths_searcher_search_api@kada_content_options';
  $strongarm->value = array(
    'sort_path_segments' => 1,
    'base_path_provider' => 'default',
  );
  $export['facetapi_pretty_paths_searcher_search_api@kada_content_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_ajax_pages';
  $strongarm->value = '';
  $export['search_api_ajax_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_ajax_visibility';
  $strongarm->value = '0';
  $export['search_api_ajax_visibility'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_facets_search_ids';
  $strongarm->value = array(
    'default_node_index' => array(
      'search_api_views:kada_events_indexed_list_and_map:indexed_event_list' => 'search_api_views:kada_events_indexed_list_and_map:indexed_event_list',
      'search_api_views:kada_events_indexed_list_and_map:map_indexed' => 'search_api_views:kada_events_indexed_list_and_map:map_indexed',
      'search_api_views:kada_search:page' => 'search_api_views:kada_search:page',
      'SearchApiQuery' => 'SearchApiQuery',
      'search_api_views:kada_events_indexed_list_and_map:list_page' => 'search_api_views:kada_events_indexed_list_and_map:list_page',
      'search_api_views:kada_events_indexed_list_and_map:page_1' => 'search_api_views:kada_events_indexed_list_and_map:page_1',
      'search_api_views:kada_events_indexed_list_and_map:page_2' => 'search_api_views:kada_events_indexed_list_and_map:page_2',
      'search_api_views:kada_events_indexed_list_and_map:indexed_event_map' => 'search_api_views:kada_events_indexed_list_and_map:indexed_event_map',
      'search_api_views:kada_events_indexed_list_and_map:default' => 'search_api_views:kada_events_indexed_list_and_map:default',
    ),
    'kada_content' => array(
      'search_api_views:kada_solr_search:page' => 'search_api_views:kada_solr_search:page',
      'search_api_views:kada_events_indexed:default' => 'search_api_views:kada_events_indexed:default',
      'search_api_views:kada_events_indexed:indexed_event_list' => 'search_api_views:kada_events_indexed:indexed_event_list',
      'search_api_views:kada_events_indexed:map_indexed' => 'search_api_views:kada_events_indexed:map_indexed',
      'search_api_views:kada_events_indexed:page_1' => 'search_api_views:kada_events_indexed:page_1',
      'search_api_views:kada_event_search_page:event_search_page' => 'search_api_views:kada_event_search_page:event_search_page',
      'search_api_views:kada_widget_helper_event_calendar:default' => 'search_api_views:kada_widget_helper_event_calendar:default',
      'search_api_views:kada_solr_service_map:default' => 'search_api_views:kada_solr_service_map:default',
      'search_api_views:kada_solr_service_map:openlayers_1' => 'search_api_views:kada_solr_service_map:openlayers_1',
      'search_api_views:kada_solr_service_map:page_1' => 'search_api_views:kada_solr_service_map:page_1',
      'search_api_views:kada_solr_service_map:ol_data' => 'search_api_views:kada_solr_service_map:ol_data',
      'search_api_views:kada_solr_service_map:list' => 'search_api_views:kada_solr_service_map:list',
    ),
    'sarnia_kada_sarnia_search' => array(
      'search_api_views:kada_sarnia_search:page' => 'search_api_views:kada_sarnia_search:page',
      'search_api_views:kada_sarnia_search:openlayers_1' => 'search_api_views:kada_sarnia_search:openlayers_1',
    ),
    'kada_event_search' => array(
      'search_api_views:kada_event_search_page:event_search_page' => 'search_api_views:kada_event_search_page:event_search_page',
    ),
  );
  $export['search_api_facets_search_ids'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kada_search_feature_alphabetical_sort_types';
  $strongarm->value = array(
    'attraction_card' => 'attraction_card',
    'blog' => 0,
    'blog_post' => 0,
    'feed_import_facebook' => 0,
    'feed_import_instagram' => 0,
    'feed_import_twitter' => 0,
    'feed_import_youtube_channel' => 0,
    'person' => 0,
    'landing_page' => 0,
    'position_of_trust' => 0,
    'liftup' => 0,
    'service' => 0,
    'service_offer' => 0,
    'affiliate' => 0,
    'page' => 0,
    'section' => 0,
    'social_media_update' => 0,
    'event' => 0,
    'place' => 0,
    'news_item' => 0,
    'webform' => 0,
  );
  $export['kada_search_feature_alphabetical_sort_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kada_search_feature_date_sort_types';
  $strongarm->value = array(
    'blog_post' => 'blog_post',
    'news_item' => 'news_item',
    'blog' => 0,
    'feed_import_facebook' => 0,
    'feed_import_instagram' => 0,
    'feed_import_twitter' => 0,
    'feed_import_youtube_channel' => 0,
    'person' => 0,
    'attraction_card' => 0,
    'landing_page' => 0,
    'position_of_trust' => 0,
    'liftup' => 0,
    'service' => 0,
    'service_offer' => 0,
    'affiliate' => 0,
    'page' => 0,
    'section' => 0,
    'social_media_update' => 0,
    'event' => 0,
    'place' => 0,
    'webform' => 0,
  );
  $export['kada_search_feature_date_sort_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kada_search_feature_date_sort_types_nd';
  $strongarm->value = array(
    'proceeding' => 'proceeding',
  );
  $export['kada_search_feature_date_sort_types_nd'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'kada_search_feature_sort_event_date';
  $strongarm->value = 1;
  $export['kada_search_feature_sort_event_date'] = $strongarm;

  return $export;
}
