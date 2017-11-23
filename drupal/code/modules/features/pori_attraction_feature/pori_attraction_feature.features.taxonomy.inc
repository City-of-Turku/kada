<?php
/**
 * @file
 * pori_attraction_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function pori_attraction_feature_taxonomy_default_vocabularies() {
  return array(
    'attraction_category' => array(
      'name' => 'Attraction category',
      'machine_name' => 'attraction_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
  );
}
