<?php

/**
 * @file
 * kada_page_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function kada_page_feature_taxonomy_default_vocabularies() {
  return array(
    'visitpori_theme' => array(
      'name' => 'Visitpori-theme',
      'machine_name' => 'visitpori_theme',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
      'base_i18n_mode' => 1,
      'base_language' => 'und',
    ),
  );
}
