<?php
/**
 * @file
 * kada_liftups_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function kada_liftups_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create liftup content'.
  $permissions['create liftup content'] = array(
    'name' => 'create liftup content',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create liftup content on assigned domains'.
  $permissions['create liftup content on assigned domains'] = array(
    'name' => 'create liftup content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete any liftup content'.
  $permissions['delete any liftup content'] = array(
    'name' => 'delete any liftup content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete liftup content on assigned domains'.
  $permissions['delete liftup content on assigned domains'] = array(
    'name' => 'delete liftup content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete own liftup content'.
  $permissions['delete own liftup content'] = array(
    'name' => 'delete own liftup content',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any liftup content'.
  $permissions['edit any liftup content'] = array(
    'name' => 'edit any liftup content',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own liftup content'.
  $permissions['edit own liftup content'] = array(
    'name' => 'edit own liftup content',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'update liftup content on assigned domains'.
  $permissions['update liftup content on assigned domains'] = array(
    'name' => 'update liftup content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'view any node liftup page'.
  $permissions['view any node liftup page'] = array(
    'name' => 'view any node liftup page',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'external editor' => 'external editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'restrict_node_page_view',
  );

  // Exported permission: 'view any unpublished liftup content'.
  $permissions['view any unpublished liftup content'] = array(
    'name' => 'view any unpublished liftup content',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'external editor' => 'external editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
