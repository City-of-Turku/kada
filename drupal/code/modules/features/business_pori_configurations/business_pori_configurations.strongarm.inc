<?php

/**
 * @file
 * business_pori_configurations.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function business_pori_configurations_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_taxonomy_term__businesspori_theme';
  $strongarm->value = TRUE;
  $export['metatag_enable_taxonomy_term__businesspori_theme'] = $strongarm;

  return $export;
}
