<?php

/**
 * @file
 * pori_facts_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pori_facts_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fact content'.
  $permissions['create fact content'] = array(
    'name' => 'create fact content',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create fact content on assigned domains'.
  $permissions['create fact content on assigned domains'] = array(
    'name' => 'create fact content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete any fact content'.
  $permissions['delete any fact content'] = array(
    'name' => 'delete any fact content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete fact content on assigned domains'.
  $permissions['delete fact content on assigned domains'] = array(
    'name' => 'delete fact content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete own fact content'.
  $permissions['delete own fact content'] = array(
    'name' => 'delete own fact content',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any fact content'.
  $permissions['edit any fact content'] = array(
    'name' => 'edit any fact content',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own fact content'.
  $permissions['edit own fact content'] = array(
    'name' => 'edit own fact content',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'update fact content on assigned domains'.
  $permissions['update fact content on assigned domains'] = array(
    'name' => 'update fact content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'view any node fact page'.
  $permissions['view any node fact page'] = array(
    'name' => 'view any node fact page',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'restrict_node_page_view',
  );

  // Exported permission: 'view any unpublished fact content'.
  $permissions['view any unpublished fact content'] = array(
    'name' => 'view any unpublished fact content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
