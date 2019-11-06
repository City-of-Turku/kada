<?php

/**
 * @file
 * pori_contact_information_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pori_contact_information_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in skills'.
  $permissions['add terms in skills'] = array(
    'name' => 'add terms in skills',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'taxonomy_access_fix',
  );

  return $permissions;
}
