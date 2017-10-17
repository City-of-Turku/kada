<?php
/**
 * @file
 * kada_contact_information_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function kada_contact_information_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create person content'.
  $permissions['create person content'] = array(
    'name' => 'create person content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create person content on assigned domains'.
  $permissions['create person content on assigned domains'] = array(
    'name' => 'create person content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create position_of_trust content'.
  $permissions['create position_of_trust content'] = array(
    'name' => 'create position_of_trust content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create position_of_trust content on assigned domains'.
  $permissions['create position_of_trust content on assigned domains'] = array(
    'name' => 'create position_of_trust content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete any person content'.
  $permissions['delete any person content'] = array(
    'name' => 'delete any person content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any position_of_trust content'.
  $permissions['delete any position_of_trust content'] = array(
    'name' => 'delete any position_of_trust content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own person content'.
  $permissions['delete own person content'] = array(
    'name' => 'delete own person content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own position_of_trust content'.
  $permissions['delete own position_of_trust content'] = array(
    'name' => 'delete own position_of_trust content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete person content on assigned domains'.
  $permissions['delete person content on assigned domains'] = array(
    'name' => 'delete person content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete position_of_trust content on assigned domains'.
  $permissions['delete position_of_trust content on assigned domains'] = array(
    'name' => 'delete position_of_trust content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'edit any person content'.
  $permissions['edit any person content'] = array(
    'name' => 'edit any person content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any position_of_trust content'.
  $permissions['edit any position_of_trust content'] = array(
    'name' => 'edit any position_of_trust content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own person content'.
  $permissions['edit own person content'] = array(
    'name' => 'edit own person content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own position_of_trust content'.
  $permissions['edit own position_of_trust content'] = array(
    'name' => 'edit own position_of_trust content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'update person content on assigned domains'.
  $permissions['update person content on assigned domains'] = array(
    'name' => 'update person content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update position_of_trust content on assigned domains'.
  $permissions['update position_of_trust content on assigned domains'] = array(
    'name' => 'update position_of_trust content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'view any node person page'.
  $permissions['view any node person page'] = array(
    'name' => 'view any node person page',
    'roles' => array(
      'admin' => 'admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'content editor' => 'content editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'restrict_node_page_view',
  );

  // Exported permission: 'view any node position_of_trust page'.
  $permissions['view any node position_of_trust page'] = array(
    'name' => 'view any node position_of_trust page',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'restrict_node_page_view',
  );

  // Exported permission: 'view any unpublished person content'.
  $permissions['view any unpublished person content'] = array(
    'name' => 'view any unpublished person content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished position_of_trust content'.
  $permissions['view any unpublished position_of_trust content'] = array(
    'name' => 'view any unpublished position_of_trust content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
