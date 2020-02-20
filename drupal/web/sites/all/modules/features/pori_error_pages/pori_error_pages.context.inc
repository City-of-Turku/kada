<?php

/**
 * @file
 * pori_error_pages.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pori_error_pages_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'error_page';
  $context->description = 'Context that triggers on error pages';
  $context->tag = 'error pages';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        'pori_fi' => 'pori_fi',
      ),
    ),
    'error' => array(
      'values' => array(
        403 => 403,
        404 => 404,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-main_search-page' => array(
          'module' => 'views',
          'delta' => '-exp-main_search-page',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'branding',
          'weight' => '-9',
        ),
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
        'menu_block-31' => array(
          'module' => 'menu_block',
          'delta' => '31',
          'region' => 'navigation_top',
          'weight' => '-7',
        ),
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
        'menu_block-30' => array(
          'module' => 'menu_block',
          'delta' => '30',
          'region' => 'navigation',
          'weight' => '-7',
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
        'menu_block-29' => array(
          'module' => 'menu_block',
          'delta' => '29',
          'region' => 'footer',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context that triggers on error pages');
  t('error pages');
  $export['error_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'visitpori_error_page';
  $context->description = 'Context that triggers on error pages on Visitpori.fi';
  $context->tag = 'error pages';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        'visitpori_fi' => 'visitpori_fi',
      ),
    ),
    'error' => array(
      'values' => array(
        403 => 403,
        404 => 404,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-main_search-page' => array(
          'module' => 'views',
          'delta' => '-exp-main_search-page',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'branding',
          'weight' => '-9',
        ),
        'menu_block-25' => array(
          'module' => 'menu_block',
          'delta' => '25',
          'region' => 'navigation_top',
          'weight' => '-10',
        ),
        'menu_block-28' => array(
          'module' => 'menu_block',
          'delta' => '28',
          'region' => 'navigation_top',
          'weight' => '-9',
        ),
        'menu_block-36' => array(
          'module' => 'menu_block',
          'delta' => '36',
          'region' => 'navigation_top',
          'weight' => '-8',
        ),
        'menu_block-37' => array(
          'module' => 'menu_block',
          'delta' => '37',
          'region' => 'navigation_top',
          'weight' => '-7',
        ),
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
        'menu_block-30' => array(
          'module' => 'menu_block',
          'delta' => '30',
          'region' => 'navigation',
          'weight' => '-7',
        ),
        'menu_block-26' => array(
          'module' => 'menu_block',
          'delta' => '26',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'menu_block-32' => array(
          'module' => 'menu_block',
          'delta' => '32',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'menu_block-33' => array(
          'module' => 'menu_block',
          'delta' => '33',
          'region' => 'footer',
          'weight' => '-8',
        ),
        'menu_block-23' => array(
          'module' => 'menu_block',
          'delta' => '23',
          'region' => 'footer',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context that triggers on error pages on Visitpori.fi');
  t('error pages');
  $export['visitpori_error_page'] = $context;

  return $export;
}
