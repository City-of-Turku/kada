<?php

/**
 * @file
 * pori_waste_search.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function pori_waste_search_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-place-field_location.widget|settings|geocoder_handler"] = 'openstreetmap_nominatim';
  $overrides["field_instance.node-place-field_location.widget|settings|handler_settings|google|biasing"] = array(
    'bounds' => '',
    'components' => '',
    'region' => '',
  );

 return $overrides;
}
