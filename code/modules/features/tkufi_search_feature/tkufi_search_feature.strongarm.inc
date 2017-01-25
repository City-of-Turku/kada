<?php
/**
 * @file
 * tkufi_search_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tkufi_search_feature_strongarm() {
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
  $strongarm->name = 'facetapi:block_cache:search_api@driveturku_content';
  $strongarm->value = -1;
  $export['facetapi:block_cache:search_api@driveturku_content'] = $strongarm;

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
  $strongarm->name = 'facetapi_pretty_paths_searcher_search_api@driveturku_content';
  $strongarm->value = 1;
  $export['facetapi_pretty_paths_searcher_search_api@driveturku_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi_pretty_paths_searcher_search_api@driveturku_content_options';
  $strongarm->value = array(
    'sort_path_segments' => 1,
    'base_path_provider' => 'default',
  );
  $export['facetapi_pretty_paths_searcher_search_api@driveturku_content_options'] = $strongarm;

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
      'search_api_views:driveturku_events_indexed_list_and_map:indexed_event_list' => 'search_api_views:driveturku_events_indexed_list_and_map:indexed_event_list',
      'search_api_views:driveturku_events_indexed_list_and_map:map_indexed' => 'search_api_views:driveturku_events_indexed_list_and_map:map_indexed',
      'search_api_views:driveturku_search:page' => 'search_api_views:driveturku_search:page',
      'SearchApiQuery' => 'SearchApiQuery',
      'search_api_views:driveturku_events_indexed_list_and_map:list_page' => 'search_api_views:driveturku_events_indexed_list_and_map:list_page',
      'search_api_views:driveturku_events_indexed_list_and_map:page_1' => 'search_api_views:driveturku_events_indexed_list_and_map:page_1',
      'search_api_views:driveturku_events_indexed_list_and_map:page_2' => 'search_api_views:driveturku_events_indexed_list_and_map:page_2',
      'search_api_views:driveturku_events_indexed_list_and_map:indexed_event_map' => 'search_api_views:driveturku_events_indexed_list_and_map:indexed_event_map',
      'search_api_views:driveturku_events_indexed_list_and_map:default' => 'search_api_views:driveturku_events_indexed_list_and_map:default',
    ),
    'driveturku_content' => array(
      'search_api_views:driveturku_solr_search:page' => 'search_api_views:driveturku_solr_search:page',
      'search_api_views:driveturku_events_indexed:default' => 'search_api_views:driveturku_events_indexed:default',
      'search_api_views:driveturku_events_indexed:indexed_event_list' => 'search_api_views:driveturku_events_indexed:indexed_event_list',
      'search_api_views:driveturku_events_indexed:map_indexed' => 'search_api_views:driveturku_events_indexed:map_indexed',
      'search_api_views:driveturku_events_indexed:page_1' => 'search_api_views:driveturku_events_indexed:page_1',
      'search_api_views:driveturku_event_search_page:event_search_page' => 'search_api_views:driveturku_event_search_page:event_search_page',
      'search_api_views:driveturku_widget_helper_event_calendar:default' => 'search_api_views:driveturku_widget_helper_event_calendar:default',
      'search_api_views:driveturku_solr_service_map:default' => 'search_api_views:driveturku_solr_service_map:default',
      'search_api_views:driveturku_solr_service_map:openlayers_1' => 'search_api_views:driveturku_solr_service_map:openlayers_1',
      'search_api_views:driveturku_solr_service_map:page_1' => 'search_api_views:driveturku_solr_service_map:page_1',
      'search_api_views:driveturku_solr_service_map:ol_data' => 'search_api_views:driveturku_solr_service_map:ol_data',
      'search_api_views:driveturku_solr_service_map:list' => 'search_api_views:driveturku_solr_service_map:list',
    ),
    'sarnia_driveturku_sarnia_search' => array(
      'search_api_views:driveturku_sarnia_search:page' => 'search_api_views:driveturku_sarnia_search:page',
      'search_api_views:driveturku_sarnia_search:openlayers_1' => 'search_api_views:driveturku_sarnia_search:openlayers_1',
    ),
    'driveturku_event_search' => array(
      'search_api_views:driveturku_event_search_page:event_search_page' => 'search_api_views:driveturku_event_search_page:event_search_page',
    ),
  );
  $export['search_api_facets_search_ids'] = $strongarm;

  return $export;
}
