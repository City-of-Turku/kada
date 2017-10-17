<?php
/**
 * @file
 * kada_geo_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function kada_geo_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'proximity';
  $context->description = 'Proximity demo';
  $context->tag = 'proximity';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'lahella' => 'lahella',
        'lahella/kartta' => 'lahella/kartta',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => '2',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'menu_block-14' => array(
          'module' => 'menu_block',
          'delta' => '14',
          'region' => 'navigation',
          'weight' => '-9',
        ),
        'menu_block-15' => array(
          'module' => 'menu_block',
          'delta' => '15',
          'region' => 'navigation',
          'weight' => '-8',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
      'layout' => 'driveturku-front',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Proximity demo');
  t('proximity');
  $export['proximity'] = $context;

  return $export;
}
