<?php
/**
 * @file
 * kada_places_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function kada_places_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create place content'.
  $permissions['create place content'] = array(
    'name' => 'create place content',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create place content on assigned domains'.
  $permissions['create place content on assigned domains'] = array(
    'name' => 'create place content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete any place content'.
  $permissions['delete any place content'] = array(
    'name' => 'delete any place content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own place content'.
  $permissions['delete own place content'] = array(
    'name' => 'delete own place content',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete place content on assigned domains'.
  $permissions['delete place content on assigned domains'] = array(
    'name' => 'delete place content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'edit any place content'.
  $permissions['edit any place content'] = array(
    'name' => 'edit any place content',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own place content'.
  $permissions['edit own place content'] = array(
    'name' => 'edit own place content',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'update place content on assigned domains'.
  $permissions['update place content on assigned domains'] = array(
    'name' => 'update place content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'view any node place page'.
  $permissions['view any node place page'] = array(
    'name' => 'view any node place page',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'restrict_node_page_view',
  );

  // Exported permission: 'view any unpublished place content'.
  $permissions['view any unpublished place content'] = array(
    'name' => 'view any unpublished place content',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
