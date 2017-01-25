<?php
/**
 * @file
 * tkufi_contact_information_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tkufi_contact_information_feature_taxonomy_default_vocabularies() {
  return array(
    'office' => array(
      'name' => 'Office',
      'machine_name' => 'office',
      'description' => 'City offices',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'political_party' => array(
      'name' => 'Political party',
      'machine_name' => 'political_party',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'trust_unit' => array(
      'name' => 'Trust unit',
      'machine_name' => 'trust_unit',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'trustee_role' => array(
      'name' => 'Trustee role',
      'machine_name' => 'trustee_role',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
  );
}
