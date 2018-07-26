<?php
/**
 * @file
 * pori_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pori_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi_pretty_paths_searcher_search_api@pori_search_index';
  $strongarm->value = 1;
  $export['facetapi_pretty_paths_searcher_search_api@pori_search_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi_pretty_paths_searcher_search_api@pori_search_index_options';
  $strongarm->value = array(
    'sort_path_segments' => 0,
    'base_path_provider' => 'default',
  );
  $export['facetapi_pretty_paths_searcher_search_api@pori_search_index_options'] = $strongarm;

  return $export;
}
