<?php
/**
 * @file
 * kada_widget_feature.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function kada_widget_feature_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_widget_before_content'
  $field_bases['field_widget_before_content'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_widget_before_content',
    'foreign keys' => array(
      'eck_widget' => array(
        'columns' => array(
          'target_id' => 'id',
        ),
        'table' => 'eck_widget',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'entityqueue' => array(
            'status' => 0,
          ),
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(),
      ),
      'target_type' => 'widget',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
