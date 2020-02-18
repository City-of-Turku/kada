<?php

/**
 * @file
 * pori_liftups.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pori_liftups_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'flag small_liftup_banner'.
  $permissions['flag small_liftup_banner'] = array(
    'name' => 'flag small_liftup_banner',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag small_liftup_banner'.
  $permissions['unflag small_liftup_banner'] = array(
    'name' => 'unflag small_liftup_banner',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'flag',
  );

  return $permissions;
}
