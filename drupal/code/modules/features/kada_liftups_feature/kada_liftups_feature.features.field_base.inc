<?php

/**
 * @file
 * kada_liftups_feature.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function kada_liftups_feature_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_secondary_image'.
  $field_bases['field_secondary_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_secondary_image',
    'indexes' => array(
      'sid' => array(
        0 => 'sid',
      ),
    ),
    'locked' => 0,
    'module' => 'atom_reference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'atom_reference',
  );

  return $field_bases;
}
