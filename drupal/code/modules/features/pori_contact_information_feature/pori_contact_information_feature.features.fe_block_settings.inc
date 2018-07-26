<?php
/**
 * @file
 * pori_contact_information_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pori_contact_information_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['facetapi-cIe1ii4J1UAtqVemZV00yM9RFOt0vovl'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'cIe1ii4J1UAtqVemZV00yM9RFOt0vovl',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
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
    'title' => 'Branch',
    'visibility' => 0,
  );

  $export['facetapi-rE0DEkspoEoPRA4nwBbnkSjc5ld7P5yJ'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'rE0DEkspoEoPRA4nwBbnkSjc5ld7P5yJ',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
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
    'title' => 'Unit',
    'visibility' => 0,
  );

  return $export;
}
