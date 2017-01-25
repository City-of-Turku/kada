<?php
/**
 * @file
 * tkufi_search_sarnia_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tkufi_search_sarnia_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi_pretty_paths_searcher_search_api@sarnia_driveturku_sarnia_search';
  $strongarm->value = 1;
  $export['facetapi_pretty_paths_searcher_search_api@sarnia_driveturku_sarnia_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi_pretty_paths_searcher_search_api@sarnia_driveturku_sarnia_search_options';
  $strongarm->value = array(
    'sort_path_segments' => 1,
    'base_path_provider' => 'default',
  );
  $export['facetapi_pretty_paths_searcher_search_api@sarnia_driveturku_sarnia_search_options'] = $strongarm;

  return $export;
}
