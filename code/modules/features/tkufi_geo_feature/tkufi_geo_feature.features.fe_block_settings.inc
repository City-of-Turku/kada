<?php
/**
 * @file
 * tkufi_geo_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function tkufi_geo_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['ip_geoloc-geocode_address'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'geocode_address',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'ip_geoloc',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'driveturku' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'driveturku',
        'weight' => 0,
      ),
    ),
    'title' => 'My location',
    'visibility' => 0,
  );

  return $export;
}
