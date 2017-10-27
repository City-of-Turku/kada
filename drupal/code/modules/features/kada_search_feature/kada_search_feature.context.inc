<?php
/**
 * @file
 * kada_search_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function kada_search_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'event_search';
  $context->description = 'Event search page';
  $context->tag = 'section_kadacalendar';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'event-search' => 'event-search',
        'event-search/*' => 'event-search/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-d946dd52c7a4fe1d564447a7ed65b848' => array(
          'module' => 'views',
          'delta' => 'd946dd52c7a4fe1d564447a7ed65b848',
          'region' => 'content',
          'weight' => '-10',
        ),
        'facetapi-E7ldZFIeVv1Ub1Gc3juUsF7hagKOexgf' => array(
          'module' => 'facetapi',
          'delta' => 'E7ldZFIeVv1Ub1Gc3juUsF7hagKOexgf',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-YpWMqpO9gq7H1NpTx0H1Yqy6G2Z32O5I' => array(
          'module' => 'facetapi',
          'delta' => 'YpWMqpO9gq7H1NpTx0H1Yqy6G2Z32O5I',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-jLA0X0nAvfN2TSmyr5AbOSaJJAxgHBu7' => array(
          'module' => 'facetapi',
          'delta' => 'jLA0X0nAvfN2TSmyr5AbOSaJJAxgHBu7',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-abt29sonAsIxpQBrbW7aKx02aBCOxPqd' => array(
          'module' => 'facetapi',
          'delta' => 'abt29sonAsIxpQBrbW7aKx02aBCOxPqd',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-xDkZCxPDTYLmiV9y1IUrb3Mk1xGU1jgr' => array(
          'module' => 'facetapi',
          'delta' => 'xDkZCxPDTYLmiV9y1IUrb3Mk1xGU1jgr',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-eLvyvqnLMiBQK8hAXcdQDrRgH1TMljGY' => array(
          'module' => 'facetapi',
          'delta' => 'eLvyvqnLMiBQK8hAXcdQDrRgH1TMljGY',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Event search page');
  t('section_kadacalendar');
  $export['event_search'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'quick_search';
  $context->description = 'Displays the quick search';
  $context->tag = 'menus';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~event_search' => '~event_search',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'kada_search_feature-quicksearch' => array(
          'module' => 'kada_search_feature',
          'delta' => 'quicksearch',
          'region' => 'before_header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Displays the quick search');
  t('menus');
  $export['quick_search'] = $context;

  return $export;
}
