<?php
/**
 * @file
 * pori_user_permissions.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function pori_user_permissions_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: user_permission
  $overrides["user_permission.administer nodes.roles|content editor"]["DELETED"] = TRUE;
  $overrides["user_permission.administer nodes.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.administer taxonomy.roles|web journalist"]["DELETED"] = TRUE;

 return $overrides;
}
