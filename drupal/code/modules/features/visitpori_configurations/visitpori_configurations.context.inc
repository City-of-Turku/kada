<?php
/**
 * @file
 * visitpori_configurations.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function visitpori_configurations_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'visitpori_domain';
  $context->description = 'Triggered on domains that don\'t have a domain context defined.';
  $context->tag = 'domains';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        'visitpori_fi' => 'visitpori_fi',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Triggered on domains that don\'t have a domain context defined.');
  t('domains');
  $export['visitpori_domain'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'visitpori_footer_menu';
  $context->description = 'Displays the footer menu';
  $context->tag = 'menus';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'visitpori_domain' => 'visitpori_domain',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-27' => array(
          'module' => 'menu_block',
          'delta' => '27',
          'region' => 'footer',
          'weight' => '0',
        ),
        'menu_block-25' => array(
          'module' => 'menu_block',
          'delta' => '25',
          'region' => 'footer',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Displays the footer menu');
  t('menus');
  $export['visitpori_footer_menu'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'visitpori_sitewide_en';
  $context->description = 'This sitewide context is triggered when using page in English';
  $context->tag = 'section';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~section' => '~section',
        '~section_front' => '~section_front',
      ),
    ),
    'context_all' => array(
      'values' => array(
        'visitpori_domain' => 'visitpori_domain',
      ),
    ),
    'language' => array(
      'values' => array(
        'en' => 'en',
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
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'footer',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('This sitewide context is triggered when using page in English');
  t('section');
  $export['visitpori_sitewide_en'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'visitpori_sitewide_fi';
  $context->description = 'This sitewide context is triggered when using page in Finnish';
  $context->tag = 'section';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~section' => '~section',
        '~section_front' => '~section_front',
      ),
    ),
    'context_all' => array(
      'values' => array(
        'visitpori_domain' => 'visitpori_domain',
      ),
    ),
    'language' => array(
      'values' => array(
        'fi' => 'fi',
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
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'footer',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('This sitewide context is triggered when using page in Finnish');
  t('section');
  $export['visitpori_sitewide_fi'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'visitpori_top_menu';
  $context->description = 'Displays the top menu';
  $context->tag = 'menus';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'visitpori_domain' => 'visitpori_domain',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-visitpori-top-menu-en' => array(
          'module' => 'menu',
          'delta' => 'menu-visitpori-top-menu-en',
          'region' => 'navigation_top',
          'weight' => '-10',
        ),
        'menu-menu-visitpori-top-menu-fi' => array(
          'module' => 'menu',
          'delta' => 'menu-visitpori-top-menu-fi',
          'region' => 'navigation_top',
          'weight' => '-9',
        ),
        'menu_block-26' => array(
          'module' => 'menu_block',
          'delta' => '26',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'menu_block-24' => array(
          'module' => 'menu_block',
          'delta' => '24',
          'region' => 'navigation',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Displays the top menu');
  t('menus');
  $export['visitpori_top_menu'] = $context;

  return $export;
}
