<?php

/**
 * @file
 * kada_service_directory_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function kada_service_directory_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'service_directory';
  $context->description = '';
  $context->tag = 'services';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'service_directory' => 'service_directory',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-20' => array(
          'module' => 'menu_block',
          'delta' => '20',
          'region' => 'navigation_top',
          'weight' => '-10',
        ),
        'menu_block-21' => array(
          'module' => 'menu_block',
          'delta' => '21',
          'region' => 'navigation_top',
          'weight' => '-9',
        ),
        'menu_block-22' => array(
          'module' => 'menu_block',
          'delta' => '22',
          'region' => 'navigation_top',
          'weight' => '-8',
        ),
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => '2',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'menu_block-8' => array(
          'module' => 'menu_block',
          'delta' => '8',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'menu_block-9' => array(
          'module' => 'menu_block',
          'delta' => '9',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'menu_block-10' => array(
          'module' => 'menu_block',
          'delta' => '10',
          'region' => 'footer',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('services');
  $export['service_directory'] = $context;

  return $export;
}
