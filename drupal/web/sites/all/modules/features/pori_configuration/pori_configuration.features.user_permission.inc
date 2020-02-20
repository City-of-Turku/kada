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

  // Exported permission: 'flag presentation'.
  $permissions['flag presentation'] = array(
    'name' => 'flag presentation',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag presentation'.
  $permissions['unflag presentation'] = array(
    'name' => 'unflag presentation',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'flag',
  );

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
