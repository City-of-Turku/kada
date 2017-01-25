<?php
/**
 * @file
 * tkufi_sections_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function tkufi_sections_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-sections'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-sections',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
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
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-sections-en'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-sections-en',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
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
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-sections-sv'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-sections-sv',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
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
    'title' => '',
    'visibility' => 0,
  );

  $export['menu_block-14'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 14,
    'i18n_block_language' => array(
      0 => 'fi',
    ),
    'i18n_mode' => 0,
    'module' => 'menu_block',
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
    'title' => '',
    'visibility' => 0,
  );

  $export['menu_block-15'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 15,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu_block',
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
    'title' => '',
    'visibility' => 0,
  );

  $export['menu_block-16'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 16,
    'i18n_block_language' => array(
      0 => 'en',
    ),
    'i18n_mode' => 0,
    'module' => 'menu_block',
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
    'title' => '',
    'visibility' => 0,
  );

  $export['menu_block-17'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 17,
    'i18n_block_language' => array(
      0 => 'en',
    ),
    'i18n_mode' => 0,
    'module' => 'menu_block',
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
    'title' => '',
    'visibility' => 0,
  );

  $export['menu_block-18'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 18,
    'i18n_block_language' => array(
      0 => 'sv',
    ),
    'i18n_mode' => 0,
    'module' => 'menu_block',
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
    'title' => '',
    'visibility' => 0,
  );

  $export['menu_block-19'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 19,
    'i18n_block_language' => array(
      0 => 'sv',
    ),
    'i18n_mode' => 0,
    'module' => 'menu_block',
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
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
