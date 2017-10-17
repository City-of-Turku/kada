<?php
/**
 * @file
 * kada_events_base_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function kada_events_base_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer event settings'.
  $permissions['administer event settings'] = array(
    'name' => 'administer event settings',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'kada_events_base_feature',
  );

  // Exported permission: 'create event content'.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      'admin' => 'admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'event editor' => 'event editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create event content on assigned domains'.
  $permissions['create event content on assigned domains'] = array(
    'name' => 'create event content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete any event content'.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete event content on assigned domains'.
  $permissions['delete event content on assigned domains'] = array(
    'name' => 'delete event content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete own event content'.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      'admin' => 'admin',
      'event editor' => 'event editor',
      'event external editor' => 'event external editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any event content'.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      'admin' => 'admin',
      'event editor' => 'event editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own event content'.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      'admin' => 'admin',
      'event editor' => 'event editor',
      'event external editor' => 'event external editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'publish any event content'.
  $permissions['publish any event content'] = array(
    'name' => 'publish any event content',
    'roles' => array(
      'event editor' => 'event editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own event content'.
  $permissions['publish own event content'] = array(
    'name' => 'publish own event content',
    'roles' => array(
      'event external editor' => 'event external editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any event content'.
  $permissions['unpublish any event content'] = array(
    'name' => 'unpublish any event content',
    'roles' => array(
      'event editor' => 'event editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own event content'.
  $permissions['unpublish own event content'] = array(
    'name' => 'unpublish own event content',
    'roles' => array(
      'event external editor' => 'event external editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'update event content on assigned domains'.
  $permissions['update event content on assigned domains'] = array(
    'name' => 'update event content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'view any node event page'.
  $permissions['view any node event page'] = array(
    'name' => 'view any node event page',
    'roles' => array(
      'admin' => 'admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'content editor' => 'content editor',
      'event editor' => 'event editor',
      'external editor' => 'external editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'restrict_node_page_view',
  );

  // Exported permission: 'view any unpublished event content'.
  $permissions['view any unpublished event content'] = array(
    'name' => 'view any unpublished event content',
    'roles' => array(
      'admin' => 'admin',
      'event editor' => 'event editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
