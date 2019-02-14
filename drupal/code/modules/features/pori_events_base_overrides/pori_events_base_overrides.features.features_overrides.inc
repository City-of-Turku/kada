<?php
/**
 * @file
 * pori_events_base_overrides.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function pori_events_base_overrides_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: user_permission
  $overrides["user_permission.create event content.roles|anonymous user"]["DELETED"] = TRUE;
  $overrides["user_permission.create event content.roles|authenticated user"]["DELETED"] = TRUE;
  $overrides["user_permission.create event content.roles|content editor"] = 'content editor';

 return $overrides;
}
