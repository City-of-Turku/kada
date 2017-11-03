<?php
/**
 * @file
 * kada_events_base_feature.relation_type_default.inc
 */

/**
 * Implements hook_relation_default_relation_types().
 */
function kada_events_base_feature_relation_default_relation_types() {
  $export = array();

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'super_event';
  $relation_type->label = 'super event';
  $relation_type->reverse_label = 'sub event';
  $relation_type->directional = 1;
  $relation_type->transitive = 1;
  $relation_type->r_unique = 1;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'node:event',
  );
  $relation_type->target_bundles = array(
    0 => 'node:event',
  );
  $export['super_event'] = $relation_type;

  return $export;
}
