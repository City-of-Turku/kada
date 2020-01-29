<?php

/**
 * @file
 * kada_contact_information_feature.relation_type_default.inc
 */

/**
 * Implements hook_relation_default_relation_types().
 */
function kada_contact_information_feature_relation_default_relation_types() {
  $export = array();

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'trustee_person';
  $relation_type->label = 'Trustee person';
  $relation_type->reverse_label = 'position of trust';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 0;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'node:position_of_trust',
  );
  $relation_type->target_bundles = array(
    0 => 'node:person',
  );
  $export['trustee_person'] = $relation_type;

  return $export;
}
