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

  // Exported overrides for: user_permission
  $overrides["user_permission.access inactive domains.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.administer domains.roles|web journalist"]["DELETED"] = TRUE;

 return $overrides;
}
