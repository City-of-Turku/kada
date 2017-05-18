<?php
/**
 * @file
 * kada_service_offer_feature.relation_type_default.inc
 */

/**
 * Implements hook_relation_default_relation_types().
 */
function kada_service_offer_feature_relation_default_relation_types() {
  $export = array();

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'place_service';
  $relation_type->label = 'provides';
  $relation_type->reverse_label = 'provided at';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 0;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'node:place',
  );
  $relation_type->target_bundles = array(
    0 => 'node:event',
    1 => 'node:service_offer',
  );
  $export['place_service'] = $relation_type;

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'service_offer_service';
  $relation_type->label = 'offered service';
  $relation_type->reverse_label = 'service offer';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 0;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'node:service_offer',
  );
  $relation_type->target_bundles = array(
    0 => 'node:service',
  );
  $export['service_offer_service'] = $relation_type;

  return $export;
}
