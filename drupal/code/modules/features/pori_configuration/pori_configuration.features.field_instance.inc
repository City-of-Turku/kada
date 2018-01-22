<?php
/**
 * @file
 * pori_configuration.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function pori_configuration_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-accessibility-field_class'.
  $field_instances['taxonomy_term-accessibility-field_class'] = array(
    'bundle' => 'accessibility',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_class',
    'label' => 'Class',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Class');

  return $field_instances;
}
