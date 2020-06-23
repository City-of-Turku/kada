<?php

/**
 * @file
 * kada_configuration_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function kada_configuration_feature_taxonomy_default_vocabularies() {
  return array(
    'accessibility' => array(
      'name' => 'Accessibility',
      'machine_name' => 'accessibility',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
      'base_i18n_mode' => 0,
      'base_language' => 'und',
    ),
    'district' => array(
      'name' => 'District',
      'machine_name' => 'district',
      'description' => 'Districts and service areas',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
      'base_i18n_mode' => 1,
      'base_language' => 'und',
    ),
    'keywords' => array(
      'name' => 'Keywords',
      'machine_name' => 'keywords',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
      'base_i18n_mode' => 0,
      'base_language' => 'und',
    ),
    'municipality' => array(
      'name' => 'Municipality',
      'machine_name' => 'municipality',
      'description' => 'Pre-defined list of municipalities, used with address fields etc',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
      'base_i18n_mode' => 1,
      'base_language' => 'und',
    ),
    'service_classification' => array(
      'name' => 'Service classification',
      'machine_name' => 'service_classification',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
      'base_i18n_mode' => 0,
      'base_language' => 'und',
    ),
    'target_audience' => array(
      'name' => 'Target audience',
      'machine_name' => 'target_audience',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
      'base_i18n_mode' => 1,
      'base_language' => 'und',
    ),
    'theme' => array(
      'name' => 'Theme',
      'machine_name' => 'theme',
      'description' => 'Main navigation levels also',
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
