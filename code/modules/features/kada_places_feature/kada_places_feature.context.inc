<?php
/**
 * @file
 * kada_places_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function kada_places_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'place';
  $context->description = 'Place content type';
  $context->tag = 'services';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'place' => 'place',
      ),
      'options' => array(
        'node_form' => '0',
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
        'views-kada_pages-top_image' => array(
          'module' => 'views',
          'delta' => 'kada_pages-top_image',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-kada_services-services' => array(
          'module' => 'views',
          'delta' => 'kada_services-services',
          'region' => 'content',
          'weight' => '1',
        ),
        'kada_places_feature-place_events_list_link' => array(
          'module' => 'kada_places_feature',
          'delta' => 'place_events_list_link',
          'region' => 'content',
          'weight' => '2',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Place content type');
  t('services');
  $export['place'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'place_tools';
  $context->description = 'Context to place tools on places';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'place' => 'place',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'user' => array(
      'values' => array(
        'admin' => 'admin',
        'content editor' => 'content editor',
        'external editor' => 'external editor',
        'web journalist' => 'web journalist',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'tkufi_service_offer_feature-service_offer_add' => array(
          'module' => 'tkufi_service_offer_feature',
          'delta' => 'service_offer_add',
          'region' => 'tools_container',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context to place tools on places');
  $export['place_tools'] = $context;

  return $export;
}
