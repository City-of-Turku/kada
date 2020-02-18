<?php

/**
 * @file
 * pori_search.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pori_search_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['facetapi-LDiK3bsqDgJ3l5dan8vi7Upa0GW1K6Og'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'LDiK3bsqDgJ3l5dan8vi7Upa0GW1K6Og',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'businesspori' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'businesspori',
        'weight' => 0,
      ),
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
