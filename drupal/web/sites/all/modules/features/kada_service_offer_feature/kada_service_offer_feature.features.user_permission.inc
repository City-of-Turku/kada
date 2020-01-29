<?php

/**
 * @file
 * kada_service_offer_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function kada_service_offer_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create service_offer content'.
  $permissions['create service_offer content'] = array(
    'name' => 'create service_offer content',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create service_offer content on assigned domains'.
  $permissions['create service_offer content on assigned domains'] = array(
    'name' => 'create service_offer content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete any service_offer content'.
  $permissions['delete any service_offer content'] = array(
    'name' => 'delete any service_offer content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own service_offer content'.
  $permissions['delete own service_offer content'] = array(
    'name' => 'delete own service_offer content',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete service_offer content on assigned domains'.
  $permissions['delete service_offer content on assigned domains'] = array(
    'name' => 'delete service_offer content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'edit any service_offer content'.
  $permissions['edit any service_offer content'] = array(
    'name' => 'edit any service_offer content',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own service_offer content'.
  $permissions['edit own service_offer content'] = array(
    'name' => 'edit own service_offer content',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'update service_offer content on assigned domains'.
  $permissions['update service_offer content on assigned domains'] = array(
    'name' => 'update service_offer content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'view any node service_offer page'.
  $permissions['view any node service_offer page'] = array(
    'name' => 'view any node service_offer page',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'restrict_node_page_view',
  );

  // Exported permission: 'view any unpublished service_offer content'.
  $permissions['view any unpublished service_offer content'] = array(
    'name' => 'view any unpublished service_offer content',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
