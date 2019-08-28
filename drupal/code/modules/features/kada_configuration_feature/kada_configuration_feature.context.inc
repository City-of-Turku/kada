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
        'news_list' => 'news_list',
        'person_list' => 'person_list',
        'search_page' => 'search_page',
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
        'menu_block-29' => array(
          'module' => 'menu_block',
          'delta' => 29,
          'region' => 'footer',
          'weight' => -7,
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
  $context->reactions = array();
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
    'context' => array(
      'values' => array(
        '~visitpori_domain' => '~visitpori_domain',
        '~businesspori_domain' => '~businesspori_domain',
      ),
    ),
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
        'views-kada_top_carousel-block_1' => array(
          'module' => 'views',
          'delta' => 'kada_top_carousel-block_1',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-kada_recommended-block' => array(
          'module' => 'views',
          'delta' => 'kada_recommended-block',
          'region' => 'header',
          'weight' => '-9',
        ),
        'views-85d7d54088e83da79a6f4da7cf5639a5' => array(
          'module' => 'views',
          'delta' => '85d7d54088e83da79a6f4da7cf5639a5',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'views-kada_news-block_1' => array(
          'module' => 'views',
          'delta' => 'kada_news-block_1',
          'region' => 'highlighted',
          'weight' => '-9',
        ),
        'kada_widget_feature-widget_before_content' => array(
          'module' => 'kada_widget_feature',
          'delta' => 'widget_before_content',
          'region' => 'before_content',
          'weight' => '-9',
        ),
        'quicktabs-feed_tabs_frontpage_promoted_con' => array(
          'module' => 'quicktabs',
          'delta' => 'feed_tabs_frontpage_promoted_con',
          'region' => 'before_content',
          'weight' => '-8',
        ),
        'kada_news_feature-news_archive_link' => array(
          'module' => 'kada_news_feature',
          'delta' => 'news_archive_link',
          'region' => 'before_content',
          'weight' => '-7',
        ),
        'kada_export_feature-kada_rss_feed_for_news_archive' => array(
          'module' => 'kada_export_feature',
          'delta' => 'kada_rss_feed_for_news_archive',
          'region' => 'before_content',
          'weight' => '-6',
        ),
        'views-kada_project_liftups-block_1' => array(
          'module' => 'views',
          'delta' => 'kada_project_liftups-block_1',
          'region' => 'before_footer',
          'weight' => '-10',
        ),
        'views-pori_small_liftup_banner-block' => array(
          'module' => 'views',
          'delta' => 'pori_small_liftup_banner-block',
          'region' => 'above_footer',
          'weight' => '-10',
        ),
      ),
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
        'landing_page' => 'landing_page',
        'news_list' => 'news_list',
        'person_list' => 'person_list',
        'search_page' => 'search_page',
        'visitpori_domain' => 'visitpori_domain',
        'businesspori_domain' => 'businesspori_domain',
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
        'news_list' => 'news_list',
        'person_list' => 'person_list',
        'search_page' => 'search_page',
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
        'menu_block-30' => array(
          'module' => 'menu_block',
          'delta' => 30,
          'region' => 'navigation',
          'weight' => -7,
        ),
      ),
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
    'context_all' => array(
      'values' => array(
        '~visitpori_domain' => '~visitpori_domain',
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
          'weight' => -40,
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
          'weight' => -40,
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
        'news_list' => 'news_list',
        'person_list' => 'person_list',
        'search_page' => 'search_page',
      ),
    ),
    'domain' => array(
      'values' => array(
        'pori_fi' => 'pori_fi',
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
        'menu_block-31' => array(
          'module' => 'menu_block',
          'delta' => 31,
          'region' => 'navigation_top',
          'weight' => -7,
        ),
      ),
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
