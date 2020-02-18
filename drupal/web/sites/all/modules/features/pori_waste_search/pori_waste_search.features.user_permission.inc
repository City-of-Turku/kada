<?php

/**
 * @file
 * pori_waste_search.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pori_waste_search_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in waste'.
  $permissions['add terms in waste'] = array(
    'name' => 'add terms in waste',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in waste_type'.
  $permissions['add terms in waste_type'] = array(
    'name' => 'add terms in waste_type',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'taxonomy_access_fix',
  );

  return $permissions;
}
