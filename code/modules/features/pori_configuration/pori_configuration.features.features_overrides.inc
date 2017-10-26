<?php
/**
 * @file
 * pori_configuration.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function pori_configuration_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: variable
  $overrides["variable.responsive_menus_media_size.value"] = 1025;
  $overrides["variable.responsive_menus_media_unit.value"] = 'px';

 return $overrides;
}
