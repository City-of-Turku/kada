<?php

/**
 * @file
 * pori_contact_information_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function pori_contact_information_feature_taxonomy_default_vocabularies() {
  return array(
    'skills' => array(
      'name' => 'Skills',
      'machine_name' => 'skills',
      'description' => 'Special skills for persons',
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
