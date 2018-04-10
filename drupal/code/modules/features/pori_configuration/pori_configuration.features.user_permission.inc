<?php
/**
 * @file
 * pori_configuration.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pori_configuration_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use bigmenu'.
  $permissions['use bigmenu'] = array(
    'name' => 'use bigmenu',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'bigmenu',
  );

  return $permissions;
}
