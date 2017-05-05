<?php
/**
 * @file
 * kada_configuration_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function kada_configuration_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'footer_menu';
  $context->description = 'Displays the footer menu';
  $context->tag = 'menus';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'default_menu' => 'default_menu',
        'landing_page' => 'landing_page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
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
  t('Displays the footer menu');
  t('menus');
  $export['footer_menu'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'footer_navigation';
  $context->description = 'Display footer navigation on the left for footer pages';
  $context->tag = 'region';
  $context->conditions = array(
    'kada_activemenu' => array(
      'values' => array(
        'menu-footer-en' => 'menu-footer-en',
        'menu-footer-fi' => 'menu-footer-fi',
        'menu-footer-sv' => 'menu-footer-sv',
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
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-11' => array(
          'module' => 'menu_block',
          'delta' => '11',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'menu_block-12' => array(
          'module' => 'menu_block',
          'delta' => '12',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'menu_block-13' => array(
          'module' => 'menu_block',
          'delta' => '13',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Display footer navigation on the left for footer pages');
  t('region');
  $export['footer_navigation'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_page';
  $context->description = 'This context is triggered on the site main front page';
  $context->tag = 'front page';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-driveturku_recommended-block' => array(
          'module' => 'views',
          'delta' => 'driveturku_recommended-block',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-driveturku_news-front_block' => array(
          'module' => 'views',
          'delta' => 'driveturku_news-front_block',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'kada_widget_feature-widget_before_content' => array(
          'module' => 'kada_widget_feature',
          'delta' => 'widget_before_content',
          'region' => 'highlighted',
          'weight' => '-9',
        ),
      ),
      'layout' => 'driveturku-front',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('This context is triggered on the site main front page');
  t('front page');
  $export['front_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'language_switcher';
  $context->description = 'Display the language switcher';
  $context->tag = 'menus';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'default_menu' => 'default_menu',
        'section_menus' => 'section_menus',
        'landing_page' => 'landing_page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'navigation',
          'weight' => '-50',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Display the language switcher');
  t('menus');
  $export['language_switcher'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'main_menu';
  $context->description = 'Displays the main menu';
  $context->tag = 'menus';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'default_menu' => 'default_menu',
        'landing_page' => 'landing_page',
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
      ),
      'layout' => 'driveturku-default',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Displays the main menu');
  t('menus');
  $export['main_menu'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'non_content_special_page';
  $context->description = 'Triggers on specific pages that are not in scope of normal content.';
  $context->tag = 'special non-content page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'page-not-translated' => 'page-not-translated',
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
      ),
    ),
    'breadcrumb' => '0',
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Triggers on specific pages that are not in scope of normal content.');
  t('special non-content page');
  $export['non_content_special_page'] = $context;

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
        'tkufi_search_feature-quicksearch' => array(
          'module' => 'tkufi_search_feature',
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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = 'Common for all pages';
  $context->tag = 'section';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~section' => '~section',
        '~section_front' => '~section_front',
        '~event_search' => '~event_search',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Common for all pages');
  t('section');
  $export['sitewide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_en';
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
        'default_domain' => 'default_domain',
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
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('This sitewide context is triggered when using page in English');
  t('section');
  $export['sitewide_en'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_fi';
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
        'default_domain' => 'default_domain',
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
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('This sitewide context is triggered when using page in Finnish');
  t('section');
  $export['sitewide_fi'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_sv';
  $context->description = 'This sitewide context is triggered when using page in Swedish';
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
        'default_domain' => 'default_domain',
      ),
    ),
    'language' => array(
      'values' => array(
        'sv' => 'sv',
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
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('This sitewide context is triggered when using page in Swedish');
  t('section');
  $export['sitewide_sv'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'top_menu';
  $context->description = 'Displays the top menu';
  $context->tag = 'menus';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'default_menu' => 'default_menu',
        'landing_page' => 'landing_page',
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
      ),
      'layout' => 'driveturku-default',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Displays the top menu');
  t('menus');
  $export['top_menu'] = $context;

  return $export;
}
