<?php

/**
 * @file
 * pori_facts_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pori_facts_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-facts-domain_facts'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'facts-domain_facts',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
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

  $export['views-facts-page_facts'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'facts-page_facts',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
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

  $export['views-facts-section_facts'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'facts-section_facts',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
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
