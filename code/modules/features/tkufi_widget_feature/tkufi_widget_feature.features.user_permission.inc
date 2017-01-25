<?php
/**
 * @file
 * tkufi_widget_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tkufi_widget_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'eck add widget bundles'.
  $permissions['eck add widget bundles'] = array(
    'name' => 'eck add widget bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck add widget event_carousel entities'.
  $permissions['eck add widget event_carousel entities'] = array(
    'name' => 'eck add widget event_carousel entities',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add widget event_mosaic entities'.
  $permissions['eck add widget event_mosaic entities'] = array(
    'name' => 'eck add widget event_mosaic entities',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer widget bundles'.
  $permissions['eck administer widget bundles'] = array(
    'name' => 'eck administer widget bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer widget event_carousel entities'.
  $permissions['eck administer widget event_carousel entities'] = array(
    'name' => 'eck administer widget event_carousel entities',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer widget event_mosaic entities'.
  $permissions['eck administer widget event_mosaic entities'] = array(
    'name' => 'eck administer widget event_mosaic entities',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete widget bundles'.
  $permissions['eck delete widget bundles'] = array(
    'name' => 'eck delete widget bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete widget event_carousel entities'.
  $permissions['eck delete widget event_carousel entities'] = array(
    'name' => 'eck delete widget event_carousel entities',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete widget event_mosaic entities'.
  $permissions['eck delete widget event_mosaic entities'] = array(
    'name' => 'eck delete widget event_mosaic entities',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit widget bundles'.
  $permissions['eck edit widget bundles'] = array(
    'name' => 'eck edit widget bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit widget event_carousel entities'.
  $permissions['eck edit widget event_carousel entities'] = array(
    'name' => 'eck edit widget event_carousel entities',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit widget event_mosaic entities'.
  $permissions['eck edit widget event_mosaic entities'] = array(
    'name' => 'eck edit widget event_mosaic entities',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list widget bundles'.
  $permissions['eck list widget bundles'] = array(
    'name' => 'eck list widget bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list widget event_carousel entities'.
  $permissions['eck list widget event_carousel entities'] = array(
    'name' => 'eck list widget event_carousel entities',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list widget event_mosaic entities'.
  $permissions['eck list widget event_mosaic entities'] = array(
    'name' => 'eck list widget event_mosaic entities',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view widget bundles'.
  $permissions['eck view widget bundles'] = array(
    'name' => 'eck view widget bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view widget event_carousel entities'.
  $permissions['eck view widget event_carousel entities'] = array(
    'name' => 'eck view widget event_carousel entities',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view widget event_mosaic entities'.
  $permissions['eck view widget event_mosaic entities'] = array(
    'name' => 'eck view widget event_mosaic entities',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'manage widget properties'.
  $permissions['manage widget properties'] = array(
    'name' => 'manage widget properties',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'translate widget entities'.
  $permissions['translate widget entities'] = array(
    'name' => 'translate widget entities',
    'roles' => array(),
    'module' => 'entity_translation',
  );

  return $permissions;
}
