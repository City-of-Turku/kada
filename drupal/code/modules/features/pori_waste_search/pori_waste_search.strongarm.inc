<?php
/**
 * @file
 * pori_waste_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pori_waste_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_waste_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_waste_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_waste_type_pattern';
  $strongarm->value = 'waste/type/[term:name]';
  $export['pathauto_taxonomy_term_waste_type_pattern'] = $strongarm;

  return $export;
}
