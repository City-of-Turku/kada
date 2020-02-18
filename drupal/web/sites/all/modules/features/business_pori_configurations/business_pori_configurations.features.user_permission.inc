<?php

/**
 * @file
 * business_pori_configurations.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function business_pori_configurations_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in businesspori_theme'.
  $permissions['add terms in businesspori_theme'] = array(
    'name' => 'add terms in businesspori_theme',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  return $permissions;
}
