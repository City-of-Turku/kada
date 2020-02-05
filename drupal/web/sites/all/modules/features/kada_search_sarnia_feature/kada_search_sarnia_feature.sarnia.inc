<?php
/**
 * @file
 * kada_search_sarnia_feature.sarnia.inc
 */

/**
 * Implements hook_default_sarnia_preset().
 */
function kada_search_sarnia_feature_default_sarnia_preset() {
  $export = array();

  $sarnia_index = new stdClass();
  $sarnia_index->disabled = FALSE; /* Edit this to true to make a default sarnia_index disabled initially */
  $sarnia_index->api_version = 1;
  $sarnia_index->machine_name = 'sarnia_kada_sarnia_search';
  $sarnia_index->label = 'KADA Sarnia search (Sarnia index)';
  $sarnia_index->search_api_server = 'kada_sarnia_search';
  $sarnia_index->search_api_index = 'sarnia_kada_sarnia_search';
  $sarnia_index->id_field = 'id';
  $export['sarnia_kada_sarnia_search'] = $sarnia_index;

  return $export;
}
