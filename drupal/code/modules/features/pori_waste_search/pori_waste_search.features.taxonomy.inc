<?php
/**
 * @file
 * pori_waste_search.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function pori_waste_search_taxonomy_default_vocabularies() {
  return array(
    'waste' => array(
      'name' => 'Waste (individual)',
      'machine_name' => 'waste',
      'description' => 'Such as oily waste',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 4,
    ),
    'waste_type' => array(
      'name' => 'Waste',
      'machine_name' => 'waste_type',
      'description' => 'Such as dangerous waste',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 4,
    ),
  );
}
