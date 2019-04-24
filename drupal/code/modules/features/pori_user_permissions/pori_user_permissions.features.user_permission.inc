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

  // Exported permission: 'access language de'.
  $permissions['access language de'] = array(
    'name' => 'access language de',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'language_access',
  );

  // Exported permission: 'check out documents'.
  $permissions['check out documents'] = array(
    'name' => 'check out documents',
    'roles' => array(
      'admin' => 'admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'content_lock',
  );

  // Exported permission: 'create field_show_main_image'.
  $permissions['create field_show_main_image'] = array(
    'name' => 'create field_show_main_image',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_show_main_image'.
  $permissions['edit field_show_main_image'] = array(
    'name' => 'edit field_show_main_image',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_show_main_image'.
  $permissions['edit own field_show_main_image'] = array(
    'name' => 'edit own field_show_main_image',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_show_main_image'.
  $permissions['view field_show_main_image'] = array(
    'name' => 'view field_show_main_image',
    'roles' => array(
      'admin' => 'admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_show_main_image'.
  $permissions['view own field_show_main_image'] = array(
    'name' => 'view own field_show_main_image',
    'roles' => array(
      'admin' => 'admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
