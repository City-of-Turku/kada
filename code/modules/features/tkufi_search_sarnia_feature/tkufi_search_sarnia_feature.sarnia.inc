<?php
/**
 * @file
 * tkufi_search_sarnia_feature.sarnia.inc
 */

/**
 * Implements hook_default_sarnia_preset().
 */
function tkufi_search_sarnia_feature_default_sarnia_preset() {
  $export = array();

  $sarnia_index = new stdClass();
  $sarnia_index->disabled = FALSE; /* Edit this to true to make a default sarnia_index disabled initially */
  $sarnia_index->api_version = 1;
  $sarnia_index->machine_name = 'sarnia_driveturku_sarnia_search';
  $sarnia_index->label = 'DriveTurku Sarnia search (Sarnia index)';
  $sarnia_index->search_api_server = 'driveturku_sarnia_search';
  $sarnia_index->search_api_index = 'sarnia_driveturku_sarnia_search';
  $sarnia_index->id_field = 'id';
  $export['sarnia_driveturku_sarnia_search'] = $sarnia_index;

  return $export;
}
