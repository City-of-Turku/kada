<?php
/**
 * @file
 * pori_user_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pori_user_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'check out documents'.
  $permissions['check out documents'] = array(
    'name' => 'check out documents',
    'roles' => array(
      'admin' => 'admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'content_lock',
  );

  return $permissions;
}
