<?php

/**
 * @file
 * pori_search.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pori_search_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search_page';
  $context->description = 'Context for search page pori.fi';
  $context->tag = 'views';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        'pori_fi' => 'pori_fi',
      ),
    ),
    'views' => array(
      'values' => array(
        'main_search:page' => 'main_search:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-LDiK3bsqDgJ3l5dan8vi7Upa0GW1K6Og' => array(
          'module' => 'facetapi',
          'delta' => 'LDiK3bsqDgJ3l5dan8vi7Upa0GW1K6Og',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views--exp-main_search-page' => array(
          'module' => 'views',
          'delta' => '-exp-main_search-page',
          'region' => 'before_content',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'search-page',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for search page pori.fi');
  t('views');
  $export['search_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search_page_visitpori';
  $context->description = 'Context for search page pori.fi';
  $context->tag = 'views';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        'visitpori_fi' => 'visitpori_fi',
      ),
    ),
    'views' => array(
      'values' => array(
        'main_search:page' => 'main_search:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-LDiK3bsqDgJ3l5dan8vi7Upa0GW1K6Og' => array(
          'module' => 'facetapi',
          'delta' => 'LDiK3bsqDgJ3l5dan8vi7Upa0GW1K6Og',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views--exp-main_search-page' => array(
          'module' => 'views',
          'delta' => '-exp-main_search-page',
          'region' => 'before_content',
          'weight' => '-10',
        ),
        'views-kada_section_footer-block_5' => array(
          'module' => 'views',
          'delta' => 'kada_section_footer-block_5',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'views-kada_section_footer-block_6' => array(
          'module' => 'views',
          'delta' => 'kada_section_footer-block_6',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'views-kada_section_footer-block_7' => array(
          'module' => 'views',
          'delta' => 'kada_section_footer-block_7',
          'region' => 'footer',
          'weight' => '-8',
        ),
        'views-kada_section_footer-block_8' => array(
          'module' => 'views',
          'delta' => 'kada_section_footer-block_8',
          'region' => 'footer',
          'weight' => '-7',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'search-page',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for search page pori.fi');
  t('views');
  $export['search_page_visitpori'] = $context;

  return $export;
}
