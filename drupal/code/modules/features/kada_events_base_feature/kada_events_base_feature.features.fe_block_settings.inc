<?php

/**
 * @file
 * kada_events_base_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function kada_events_base_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['kada_events_division-kadacalendar_switcher'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'kadacalendar_switcher',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'kada_events_division',
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
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['quicktabs-calendar_content_tabs'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'calendar_content_tabs',
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

  $export['quicktabs-calendar_top_tabs'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'calendar_top_tabs',
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
