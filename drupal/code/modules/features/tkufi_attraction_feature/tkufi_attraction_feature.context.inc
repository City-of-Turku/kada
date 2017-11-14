<?php
/**
 * @file
 * tkufi_attraction_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tkufi_attraction_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'attraction_card';
  $context->description = 'Attraction card content';
  $context->tag = 'content type';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'attraction_card' => 'attraction_card',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-db1194ead192bb011e766c9725a85121' => array(
          'module' => 'views',
          'delta' => 'db1194ead192bb011e766c9725a85121',
          'region' => 'sidebar_second',
          'weight' => '-99',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Attraction card content');
  t('content type');
  $export['attraction_card'] = $context;

  return $export;
}
