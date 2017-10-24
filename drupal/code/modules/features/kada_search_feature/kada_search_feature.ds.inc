<?php
/**
 * @file
 * kada_search_feature.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function kada_search_feature_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'search_result';
  $ds_view_mode->label = 'Search result';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['search_result'] = $ds_view_mode;

  return $export;
}
