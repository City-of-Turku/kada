<?php
/**
 * @file
 * tkufi_attraction_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tkufi_attraction_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create attraction_card content'.
  $permissions['create attraction_card content'] = array(
    'name' => 'create attraction_card content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create attraction_card content on assigned domains'.
  $permissions['create attraction_card content on assigned domains'] = array(
    'name' => 'create attraction_card content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete any attraction_card content'.
  $permissions['delete any attraction_card content'] = array(
    'name' => 'delete any attraction_card content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete attraction_card content on assigned domains'.
  $permissions['delete attraction_card content on assigned domains'] = array(
    'name' => 'delete attraction_card content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete own attraction_card content'.
  $permissions['delete own attraction_card content'] = array(
    'name' => 'delete own attraction_card content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any attraction_card content'.
  $permissions['edit any attraction_card content'] = array(
    'name' => 'edit any attraction_card content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own attraction_card content'.
  $permissions['edit own attraction_card content'] = array(
    'name' => 'edit own attraction_card content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'update attraction_card content on assigned domains'.
  $permissions['update attraction_card content on assigned domains'] = array(
    'name' => 'update attraction_card content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'view any node attraction_card page'.
  $permissions['view any node attraction_card page'] = array(
    'name' => 'view any node attraction_card page',
    'roles' => array(
      'admin' => 'admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'restrict_node_page_view',
  );

  // Exported permission: 'view any unpublished attraction_card content'.
  $permissions['view any unpublished attraction_card content'] = array(
    'name' => 'view any unpublished attraction_card content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
