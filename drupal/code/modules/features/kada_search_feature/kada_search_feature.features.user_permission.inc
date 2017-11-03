<?php
/**
 * @file
 * kada_search_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function kada_search_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer search_api'.
  $permissions['administer search_api'] = array(
    'name' => 'administer search_api',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'search_api',
  );

  return $permissions;
}
