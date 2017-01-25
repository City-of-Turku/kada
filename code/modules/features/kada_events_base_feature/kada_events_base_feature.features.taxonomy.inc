<?php
/**
 * @file
 * kada_events_base_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function kada_events_base_feature_taxonomy_default_vocabularies() {
  return array(
    'event_types' => array(
      'name' => 'Event types',
      'machine_name' => 'event_types',
      'description' => 'Event and Hobby terms for events',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
  );
}
