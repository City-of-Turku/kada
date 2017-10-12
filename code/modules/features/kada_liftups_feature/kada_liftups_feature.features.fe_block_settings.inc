<?php
/**
 * @file
 * kada_liftups_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function kada_liftups_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['quicktabs-feed_tabs'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'feed_tabs',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'quicktabs',
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
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['quicktabs-feed_tabs_section'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'feed_tabs_section',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'quicktabs',
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
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
