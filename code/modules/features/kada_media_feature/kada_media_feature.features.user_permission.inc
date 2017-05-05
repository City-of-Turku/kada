<?php
/**
 * @file
 * kada_media_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function kada_media_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access scald dnd library'.
  $permissions['access scald dnd library'] = array(
    'name' => 'access scald dnd library',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'event editor' => 'event editor',
      'event external editor' => 'event external editor',
      'external editor' => 'external editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'scald_dnd_library',
  );

  // Exported permission: 'administer scald'.
  $permissions['administer scald'] = array(
    'name' => 'administer scald',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'administer scald atoms'.
  $permissions['administer scald atoms'] = array(
    'name' => 'administer scald atoms',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'bypass atom access restrictions'.
  $permissions['bypass atom access restrictions'] = array(
    'name' => 'bypass atom access restrictions',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of any type'.
  $permissions['create atom of any type'] = array(
    'name' => 'create atom of any type',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'event editor' => 'event editor',
      'event external editor' => 'event external editor',
      'external editor' => 'external editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of file type'.
  $permissions['create atom of file type'] = array(
    'name' => 'create atom of file type',
    'roles' => array(),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of image type'.
  $permissions['create atom of image type'] = array(
    'name' => 'create atom of image type',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'event editor' => 'event editor',
      'event external editor' => 'event external editor',
      'external editor' => 'external editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of video type'.
  $permissions['create atom of video type'] = array(
    'name' => 'create atom of video type',
    'roles' => array(),
    'module' => 'scald',
  );

  // Exported permission: 'delete any atom'.
  $permissions['delete any atom'] = array(
    'name' => 'delete any atom',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'delete own atom'.
  $permissions['delete own atom'] = array(
    'name' => 'delete own atom',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'event external editor' => 'event external editor',
      'external editor' => 'external editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'edit any atom'.
  $permissions['edit any atom'] = array(
    'name' => 'edit any atom',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'external editor' => 'external editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'edit own atom'.
  $permissions['edit own atom'] = array(
    'name' => 'edit own atom',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'event editor' => 'event editor',
      'event external editor' => 'event external editor',
      'external editor' => 'external editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'fetch any atom'.
  $permissions['fetch any atom'] = array(
    'name' => 'fetch any atom',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'event editor' => 'event editor',
      'event external editor' => 'event external editor',
      'external editor' => 'external editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'fetch own atom'.
  $permissions['fetch own atom'] = array(
    'name' => 'fetch own atom',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'event editor' => 'event editor',
      'event external editor' => 'event external editor',
      'external editor' => 'external editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'restrict atom access'.
  $permissions['restrict atom access'] = array(
    'name' => 'restrict atom access',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'show format selection for scald_atom'.
  $permissions['show format selection for scald_atom'] = array(
    'name' => 'show format selection for scald_atom',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'kada_media_feature view only own atoms'.
  $permissions['kada_media_feature view only own atoms'] = array(
    'name' => 'kada_media_feature view only own atoms',
    'roles' => array(
      'event external editor' => 'event external editor',
    ),
    'module' => 'kada_media_feature',
  );

  // Exported permission: 'view any atom'.
  $permissions['view any atom'] = array(
    'name' => 'view any atom',
    'roles' => array(
      'admin' => 'admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'event editor' => 'event editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'view own atom'.
  $permissions['view own atom'] = array(
    'name' => 'view own atom',
    'roles' => array(
      'admin' => 'admin',
      'content editor' => 'content editor',
      'event editor' => 'event editor',
      'external editor' => 'external editor',
      'web journalist' => 'web journalist',
    ),
    'module' => 'scald',
  );

  return $permissions;
}
