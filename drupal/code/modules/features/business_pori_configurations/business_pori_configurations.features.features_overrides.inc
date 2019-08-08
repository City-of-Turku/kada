<?php

/**
 * @file
 * business_pori_configurations.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function business_pori_configurations_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-liftup-field_businesspori_theme.display|small_liftup_banner|weight"] = 19;

 return $overrides;
}
