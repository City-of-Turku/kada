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
  $context->name = 'visitpori_front_page';
  $context->description = 'This context is triggered on the visitpori front page';
  $context->tag = 'front page';
  $context->conditions = array(
    'context_all' => array(
      'values' => array(
        'visitpori_domain' => 'visitpori_domain',
      ),
    ),
    'node' => array(
      'values' => array(
        'section' => 'section',
      ),
      'options' => array(
        'node_form' => '0',
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
        'views-89b484a51bf5cdc2db6af339b2d71883' => array(
          'module' => 'views',
          'delta' => '89b484a51bf5cdc2db6af339b2d71883',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'views-kada_news-block_1' => array(
          'module' => 'views',
          'delta' => 'kada_news-block_1',
          'region' => 'highlighted',
          'weight' => '-9',
        ),
        'views-kada_project_liftups-block_1' => array(
          'module' => 'views',
          'delta' => 'kada_project_liftups-block_1',
          'region' => 'before_content',
          'weight' => '-10',
        ),
        'views-dfe4333f7892fdabcb0e2f26cc029be6' => array(
          'module' => 'views',
          'delta' => 'dfe4333f7892fdabcb0e2f26cc029be6',
          'region' => 'before_content',
          'weight' => '-8',
        ),
        'kada_widget_feature-widget_before_content' => array(
          'module' => 'kada_widget_feature',
          'delta' => 'widget_before_content',
          'region' => 'after_content',
          'weight' => '-9',
        ),
        'quicktabs-feed_tabs_frontpage_promoted_con' => array(
          'module' => 'quicktabs',
          'delta' => 'feed_tabs_frontpage_promoted_con',
          'region' => 'after_content',
          'weight' => '-8',
        ),
        'kada_news_feature-news_archive_link' => array(
          'module' => 'kada_news_feature',
          'delta' => 'news_archive_link',
          'region' => 'after_content',
          'weight' => '-7',
        ),
        'kada_export_feature-kada_rss_feed_for_section' => array(
          'module' => 'kada_export_feature',
          'delta' => 'kada_rss_feed_for_section',
          'region' => 'after_content',
          'weight' => '-6',
        ),
        'views-4e860b19463e3f674732c95e074be424' => array(
          'module' => 'views',
          'delta' => '4e860b19463e3f674732c95e074be424',
          'region' => 'above_footer',
          'weight' => '-10',
        ),
        'views-972eaabfd2a39ff790e08eab4766b876' => array(
          'module' => 'views',
          'delta' => '972eaabfd2a39ff790e08eab4766b876',
          'region' => 'above_footer',
          'weight' => '-9',
        ),
        'views-kada_section_footer-block_1' => array(
          'module' => 'views',
          'delta' => 'kada_section_footer-block_1',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('This context is triggered on the visitpori front page');
  t('front page');
  $export['visitpori_front_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'visitpori_sitewide_de';
  $context->description = 'This sitewide context is triggered when using page in German';
  $context->tag = 'section';
  $context->conditions = array(
    'context_all' => array(
      'values' => array(
        'visitpori_domain' => 'visitpori_domain',
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
        'block-7' => array(
          'module' => 'block',
          'delta' => '7',
          'region' => 'footer',
          'weight' => '-20',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('This sitewide context is triggered when using page in German');
  t('section');
  $export['visitpori_sitewide_de'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'visitpori_sitewide_en';
  $context->description = 'This sitewide context is triggered when using page in English';
  $context->tag = 'section';
  $context->conditions = array(
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
          'weight' => '-20',
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
          'weight' => '-20',
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
  $context->name = 'visitpori_sitewide_sv';
  $context->description = 'This sitewide context is triggered when using page in Swedish';
  $context->tag = 'section';
  $context->conditions = array(
    'context_all' => array(
      'values' => array(
        'visitpori_domain' => 'visitpori_domain',
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
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
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
  $export['visitpori_sitewide_sv'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'visitpori_theme_liftups';
  $context->description = 'Liftups per visitpori theme';
  $context->tag = 'section';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        'visitpori_fi' => 'visitpori_fi',
      ),
    ),
    'entity_field' => array(
      'values' => array(
        'entity_type' => 'a:1:{s:4:"node";s:4:"node";}',
        'view_mode' => 'a:44:{s:4:"full";s:4:"full";s:6:"teaser";i:0;s:3:"rss";i:0;s:13:"diff_standard";i:0;s:19:"live_results_search";i:0;s:5:"token";i:0;s:9:"accordion";i:0;s:8:"carousel";i:0;s:7:"current";i:0;s:7:"project";i:0;s:15:"event_grid_item";i:0;s:15:"event_list_item";i:0;s:14:"event_map_item";i:0;s:17:"event_mosaic_item";i:0;s:19:"event_search_result";i:0;s:19:"event_tab_list_item";i:0;s:18:"event_top_carousel";i:0;s:9:"main_news";i:0;s:14:"main_news_wide";i:0;s:10:"only_title";i:0;s:3:"map";i:0;s:27:"attraction_card_mosaic_item";i:0;s:7:"product";i:0;s:11:"person_card";i:0;s:8:"revision";i:0;s:10:"label_icon";i:0;s:9:"term_name";i:0;s:5:"title";i:0;s:12:"content_full";i:0;s:12:"content_half";i:0;s:6:"topics";i:0;s:16:"main_liftup_wide";i:0;s:11:"main_liftup";i:0;s:12:"main_content";i:0;s:10:"full_modal";i:0;s:10:"event_list";i:0;s:9:"grid_item";i:0;s:10:"event_node";i:0;s:14:"event_tab_item";i:0;s:6:"person";i:0;s:17:"file_linked_title";i:0;s:13:"search_result";i:0;s:9:"opengraph";i:0;s:16:"content_250_wide";i:0;}',
        'field_name' => 'field_theme_main_page',
        'field_status' => 'match',
        'field_value' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'kada_widget_feature-widget_before_content' => array(
          'module' => 'kada_widget_feature',
          'delta' => 'widget_before_content',
          'region' => 'highlighted',
          'weight' => '-88',
        ),
        'quicktabs-feed_tabs' => array(
          'module' => 'quicktabs',
          'delta' => 'feed_tabs',
          'region' => 'content',
          'weight' => '-10',
        ),
        'kada_export_feature-kada_rss_feed_for_theme' => array(
          'module' => 'kada_export_feature',
          'delta' => 'kada_rss_feed_for_theme',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
    'region' => array(
      'kada' => array(
        'disable' => array(
          'emergency_messages' => 0,
          'before_header' => 0,
          'branding' => 0,
          'navigation_top' => 0,
          'navigation' => 0,
          'header_top' => 0,
          'header' => 0,
          'top_carousel' => 0,
          'top_tabs' => 0,
          'highlighted' => 0,
          'help' => 0,
          'tools_container' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'before_content' => 0,
          'after_content' => 0,
          'before_footer' => 0,
          'footer' => 0,
          'after_footer' => 0,
          'event_mosaic' => 0,
          'event_list' => 0,
          'event_map' => 0,
          'filters' => 0,
        ),
      ),
      'omega' => array(
        'disable' => array(
          'branding' => 0,
          'header' => 0,
          'navigation' => 0,
          'highlighted' => 0,
          'help' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'footer' => 0,
        ),
      ),
      'seven' => array(
        'disable' => array(
          'content' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'sidebar_first' => 0,
        ),
      ),
      'visitpori' => array(
        'disable' => array(
          'emergency_messages' => 0,
          'before_header' => 0,
          'branding' => 0,
          'navigation_top' => 0,
          'navigation' => 0,
          'header_top' => 0,
          'header' => 0,
          'top_carousel' => 0,
          'top_tabs' => 0,
          'highlighted' => 0,
          'help' => 0,
          'tools_container' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'before_content' => 0,
          'after_content' => 0,
          'before_footer' => 0,
          'footer' => 0,
          'after_footer' => 0,
          'event_mosaic' => 0,
          'event_list' => 0,
          'event_map' => 0,
          'filters' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Liftups per visitpori theme');
  t('section');
  $export['visitpori_theme_liftups'] = $context;

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
          'delta' => 36,
          'region' => 'navigation_top',
          'weight' => -8,
        ),
        'menu_block-37' => array(
          'module' => 'menu_block',
          'delta' => 37,
          'region' => 'navigation_top',
          'weight' => -7,
        ),
        'menu_block-24' => array(
          'module' => 'menu_block',
          'delta' => '24',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'menu_block-27' => array(
          'module' => 'menu_block',
          'delta' => '27',
          'region' => 'navigation',
          'weight' => '-9',
        ),
        'menu_block-34' => array(
          'module' => 'menu_block',
          'delta' => 34,
          'region' => 'navigation',
          'weight' => -8,
        ),
        'menu_block-35' => array(
          'module' => 'menu_block',
          'delta' => 35,
          'region' => 'navigation',
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
  $export['visitpori_top_menu'] = $context;

  return $export;
}
