<?php
/**
 * @file
 * pori_user_permissions.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pori_user_permissions_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['simplesamlphp_auth-0'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'simplesamlphp_auth',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'kada' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'kada',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'visitpori' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'visitpori',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
