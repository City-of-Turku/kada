<?php

/**
 * @file
 * business_pori_configurations.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function business_pori_configurations_taxonomy_default_vocabularies() {
  return array(
    'businesspori_theme' => array(
      'name' => 'Businesspori-theme',
      'machine_name' => 'businesspori_theme',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
  );
}
