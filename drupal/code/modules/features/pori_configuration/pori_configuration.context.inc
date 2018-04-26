<?php
/**
 * @file
 * pori_configuration.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pori_configuration_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_item_de';
  $context->description = 'News item content when browsing page in German';
  $context->tag = 'content type';
  $context->conditions = array(
    'language' => array(
      'values' => array(
        'de' => 'de',
      ),
    ),
    'node' => array(
      'values' => array(
        'news_item' => 'news_item',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('News item content when browsing page in German');
  t('content type');
  $export['news_item_de'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'page_de';
  $context->description = 'Page content when browsing page in German';
  $context->tag = 'content type';
  $context->conditions = array(
    'language' => array(
      'values' => array(
        'de' => 'de',
      ),
    ),
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Page content when browsing page in German');
  t('content type');
  $export['page_de'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_de';
  $context->description = 'This sitewide context is triggered when using page in German';
  $context->tag = 'section';
  $context->conditions = array(
    'context_all' => array(
      'values' => array(
        'default_domain' => 'default_domain',
      ),
    ),
    'language' => array(
      'values' => array(
        'de' => 'de',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('This sitewide context is triggered when using page in German');
  t('section');
  $export['sitewide_de'] = $context;

  return $export;
}
