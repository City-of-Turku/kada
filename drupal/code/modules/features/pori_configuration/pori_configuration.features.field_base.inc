<?php
/**
 * @file
 * pori_configuration.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function pori_configuration_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_class'.
  $field_bases['field_class'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_class',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'disabled-access' => 'disabled-access',
        'induction-loop' => 'induction-loop',
        'no-disabled-access' => 'no-disabled-access',
        'no-induction-loop' => 'no-induction-loop',
        'no-visually-disabled-access' => 'no-visually-disabled-access',
        'visually-disabled-access' => 'visually-disabled-access',
        'free-wifi' => 'free-wifi',
        'free-parking' => 'free-parking',
        'pets-allowed' => 'pets-allowed',
        'allergy-friendly' => 'allergy-friendly',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
