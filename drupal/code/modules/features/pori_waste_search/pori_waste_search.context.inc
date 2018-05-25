<?php
/**
 * @file
 * pori_waste_search.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pori_waste_search_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'waste_search';
  $context->description = 'Context that triggers on waste search';
  $context->tag = 'waste';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'waste/search' => 'waste/search',
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
        'menu_block-38' => array(
          'module' => 'menu_block',
          'delta' => '38',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'menu_block-39' => array(
          'module' => 'menu_block',
          'delta' => '39',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'menu_block-40' => array(
          'module' => 'menu_block',
          'delta' => '40',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'menu_block-41' => array(
          'module' => 'menu_block',
          'delta' => '41',
          'region' => 'sidebar_second',
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
    'theme_html' => array(
      'class' => 'waste-search',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context that triggers on waste search');
  t('waste');
  $export['waste_search'] = $context;

  return $export;
}
