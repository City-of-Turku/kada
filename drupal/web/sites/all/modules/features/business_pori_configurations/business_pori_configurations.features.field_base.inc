<?php

/**
 * @file
 * business_pori_configurations.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function business_pori_configurations_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_news_title'.
  $field_bases['field_news_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_news_title',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
