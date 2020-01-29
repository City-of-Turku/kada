<?php

/**
 * @file
 * kada_sections_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function kada_sections_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create section content'.
  $permissions['create section content'] = array(
    'name' => 'create section content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create section content on assigned domains'.
  $permissions['create section content on assigned domains'] = array(
    'name' => 'create section content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete any section content'.
  $permissions['delete any section content'] = array(
    'name' => 'delete any section content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own section content'.
  $permissions['delete own section content'] = array(
    'name' => 'delete own section content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete section content on assigned domains'.
  $permissions['delete section content on assigned domains'] = array(
    'name' => 'delete section content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'edit any section content'.
  $permissions['edit any section content'] = array(
    'name' => 'edit any section content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own section content'.
  $permissions['edit own section content'] = array(
    'name' => 'edit own section content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'update section content on assigned domains'.
  $permissions['update section content on assigned domains'] = array(
    'name' => 'update section content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'view any node section page'.
  $permissions['view any node section page'] = array(
    'name' => 'view any node section page',
    'roles' => array(
      'admin' => 'admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'web journalist' => 'web journalist',
    ),
    'module' => 'restrict_node_page_view',
  );

  // Exported permission: 'view any unpublished section content'.
  $permissions['view any unpublished section content'] = array(
    'name' => 'view any unpublished section content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
