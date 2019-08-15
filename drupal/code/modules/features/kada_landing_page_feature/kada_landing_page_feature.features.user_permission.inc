<?php

/**
 * @file
 * kada_landing_page_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function kada_landing_page_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create landing_page content'.
  $permissions['create landing_page content'] = array(
    'name' => 'create landing_page content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create landing_page content on assigned domains'.
  $permissions['create landing_page content on assigned domains'] = array(
    'name' => 'create landing_page content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete any landing_page content'.
  $permissions['delete any landing_page content'] = array(
    'name' => 'delete any landing_page content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete landing_page content on assigned domains'.
  $permissions['delete landing_page content on assigned domains'] = array(
    'name' => 'delete landing_page content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete own landing_page content'.
  $permissions['delete own landing_page content'] = array(
    'name' => 'delete own landing_page content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any landing_page content'.
  $permissions['edit any landing_page content'] = array(
    'name' => 'edit any landing_page content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own landing_page content'.
  $permissions['edit own landing_page content'] = array(
    'name' => 'edit own landing_page content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'update landing_page content on assigned domains'.
  $permissions['update landing_page content on assigned domains'] = array(
    'name' => 'update landing_page content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'view any node landing_page page'.
  $permissions['view any node landing_page page'] = array(
    'name' => 'view any node landing_page page',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'restrict_node_page_view',
  );

  // Exported permission: 'view any unpublished landing_page content'.
  $permissions['view any unpublished landing_page content'] = array(
    'name' => 'view any unpublished landing_page content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
