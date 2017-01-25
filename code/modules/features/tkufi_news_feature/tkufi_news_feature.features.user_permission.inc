<?php
/**
 * @file
 * tkufi_news_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tkufi_news_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create news_item content'.
  $permissions['create news_item content'] = array(
    'name' => 'create news_item content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create news_item content on assigned domains'.
  $permissions['create news_item content on assigned domains'] = array(
    'name' => 'create news_item content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete any news_item content'.
  $permissions['delete any news_item content'] = array(
    'name' => 'delete any news_item content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete news_item content on assigned domains'.
  $permissions['delete news_item content on assigned domains'] = array(
    'name' => 'delete news_item content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete own news_item content'.
  $permissions['delete own news_item content'] = array(
    'name' => 'delete own news_item content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any news_item content'.
  $permissions['edit any news_item content'] = array(
    'name' => 'edit any news_item content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own news_item content'.
  $permissions['edit own news_item content'] = array(
    'name' => 'edit own news_item content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'flag emergency_message'.
  $permissions['flag emergency_message'] = array(
    'name' => 'flag emergency_message',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag main_news'.
  $permissions['flag main_news'] = array(
    'name' => 'flag main_news',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag emergency_message'.
  $permissions['unflag emergency_message'] = array(
    'name' => 'unflag emergency_message',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag main_news'.
  $permissions['unflag main_news'] = array(
    'name' => 'unflag main_news',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'update news_item content on assigned domains'.
  $permissions['update news_item content on assigned domains'] = array(
    'name' => 'update news_item content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'view any node news_item page'.
  $permissions['view any node news_item page'] = array(
    'name' => 'view any node news_item page',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'restrict_node_page_view',
  );

  // Exported permission: 'view any unpublished news_item content'.
  $permissions['view any unpublished news_item content'] = array(
    'name' => 'view any unpublished news_item content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
