<?php

/**
 * @file
 * business_pori_configurations.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function business_pori_configurations_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'businesspori_domain';
  $context->description = 'Triggered on domains that don\'t have a domain context defined.';
  $context->tag = 'domains';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        'businesspori_fi' => 'businesspori_fi',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Triggered on domains that don\'t have a domain context defined.');
  t('domains');
  $export['businesspori_domain'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'businesspori_error_page';
  $context->description = 'Context that triggers on error pages on businesspori.fi';
  $context->tag = 'error pages';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        'businesspori_fi' => 'businesspori_fi',
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
        'menu_block-42' => array(
          'module' => 'menu_block',
          'delta' => '42',
          'region' => 'navigation_top',
          'weight' => '-10',
        ),
        'menu_block-45' => array(
          'module' => 'menu_block',
          'delta' => '45',
          'region' => 'navigation_top',
          'weight' => '-9',
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
        'menu_block-44' => array(
          'module' => 'menu_block',
          'delta' => '44',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'menu_block-47' => array(
          'module' => 'menu_block',
          'delta' => '47',
          'region' => 'footer',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context that triggers on error pages on businesspori.fi');
  t('error pages');
  $export['businesspori_error_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'businesspori_front_page';
  $context->description = 'This context is triggered on the businesspori front page';
  $context->tag = 'front page';
  $context->conditions = array(
    'context_all' => array(
      'values' => array(
        'businesspori_domain' => 'businesspori_domain',
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
        'en/<front>' => 'en/<front>',
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
        'quicktabs-feed_tabs_frontpage_promoted_con' => array(
          'module' => 'quicktabs',
          'delta' => 'feed_tabs_frontpage_promoted_con',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'views-kada_news-news_title_block' => array(
          'module' => 'views',
          'delta' => 'kada_news-news_title_block',
          'region' => 'highlighted',
          'weight' => '-9',
        ),
        'views-kada_news-block_1' => array(
          'module' => 'views',
          'delta' => 'kada_news-block_1',
          'region' => 'highlighted',
          'weight' => '-8',
        ),
        'views-kada_project_liftups-block_1' => array(
          'module' => 'views',
          'delta' => 'kada_project_liftups-block_1',
          'region' => 'highlighted',
          'weight' => '-7',
        ),
        'views-dfe4333f7892fdabcb0e2f26cc029be6' => array(
          'module' => 'views',
          'delta' => 'dfe4333f7892fdabcb0e2f26cc029be6',
          'region' => 'highlighted',
          'weight' => '-6',
        ),
        'views-89b484a51bf5cdc2db6af339b2d71883' => array(
          'module' => 'views',
          'delta' => '89b484a51bf5cdc2db6af339b2d71883',
          'region' => 'highlighted',
          'weight' => '-5',
        ),
        'kada_widget_feature-widget_before_content' => array(
          'module' => 'kada_widget_feature',
          'delta' => 'widget_before_content',
          'region' => 'after_content',
          'weight' => '-7',
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
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('This context is triggered on the businesspori front page');
  t('front page');
  $export['businesspori_front_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'businesspori_landing_page';
  $context->description = 'Liftups per landing page for businesspori';
  $context->tag = 'sections';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'businesspori_domain' => 'businesspori_domain',
      ),
    ),
    'node' => array(
      'values' => array(
        'landing_page' => 'landing_page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-kada_top_carousel-block_2' => array(
          'module' => 'views',
          'delta' => 'kada_top_carousel-block_2',
          'region' => 'header',
          'weight' => '-100',
        ),
        'views-kada_recommended-block' => array(
          'module' => 'views',
          'delta' => 'kada_recommended-block',
          'region' => 'header',
          'weight' => '-99',
        ),
        'views-26cc4cf3ee6522528a15e4670acb444e' => array(
          'module' => 'views',
          'delta' => '26cc4cf3ee6522528a15e4670acb444e',
          'region' => 'after_content',
          'weight' => '-10',
        ),
        'views-kada_project_liftups-block' => array(
          'module' => 'views',
          'delta' => 'kada_project_liftups-block',
          'region' => 'after_content',
          'weight' => '-9',
        ),
        'views-pori_presentation_liftup-block' => array(
          'module' => 'views',
          'delta' => 'pori_presentation_liftup-block',
          'region' => 'after_content',
          'weight' => '-9',
        ),
        'quicktabs-feed_tabs' => array(
          'module' => 'quicktabs',
          'delta' => 'feed_tabs',
          'region' => 'after_content',
          'weight' => '-8',
        ),
        'kada_news_feature-news_archive_link' => array(
          'module' => 'kada_news_feature',
          'delta' => 'news_archive_link',
          'region' => 'after_content',
          'weight' => '-7',
        ),
        'kada_export_feature-kada_rss_feed_for_landing_page' => array(
          'module' => 'kada_export_feature',
          'delta' => 'kada_rss_feed_for_landing_page',
          'region' => 'after_content',
          'weight' => '-6',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'landing-page landing-page__businesspori',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Liftups per landing page for businesspori');
  t('sections');
  $export['businesspori_landing_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'businesspori_sitewide_en';
  $context->description = 'This sitewide context is triggered when using page in English';
  $context->tag = 'section';
  $context->conditions = array(
    'context_all' => array(
      'values' => array(
        'businesspori_domain' => 'businesspori_domain',
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
        'block-10' => array(
          'module' => 'block',
          'delta' => '10',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'views-kada_section_footer-block_1' => array(
          'module' => 'views',
          'delta' => 'kada_section_footer-block_1',
          'region' => 'footer',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('This sitewide context is triggered when using page in English');
  t('section');
  $export['businesspori_sitewide_en'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'businesspori_sitewide_fi';
  $context->description = 'This sitewide context is triggered when using page in Finnish';
  $context->tag = 'section';
  $context->conditions = array(
    'context_all' => array(
      'values' => array(
        'businesspori_domain' => 'businesspori_domain',
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
        'block-9' => array(
          'module' => 'block',
          'delta' => '9',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'views-kada_section_footer-block_1' => array(
          'module' => 'views',
          'delta' => 'kada_section_footer-block_1',
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
  $export['businesspori_sitewide_fi'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'businesspori_theme_liftups';
  $context->description = 'Liftups per businesspori theme';
  $context->tag = 'section';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        'businesspori_fi' => 'businesspori_fi',
      ),
    ),
    'entity_field' => array(
      'values' => array(
        'entity_type' => 'a:1:{s:4:"node";s:4:"node";}',
        'view_mode' => 'a:48:{s:4:"full";s:4:"full";s:6:"teaser";i:0;s:3:"rss";i:0;s:13:"diff_standard";i:0;s:19:"live_results_search";i:0;s:5:"token";i:0;s:9:"accordion";i:0;s:8:"carousel";i:0;s:7:"current";i:0;s:7:"project";i:0;s:15:"event_grid_item";i:0;s:15:"event_list_item";i:0;s:14:"event_map_item";i:0;s:17:"event_mosaic_item";i:0;s:19:"event_search_result";i:0;s:19:"event_tab_list_item";i:0;s:18:"event_top_carousel";i:0;s:9:"main_news";i:0;s:14:"main_news_wide";i:0;s:10:"only_title";i:0;s:3:"map";i:0;s:27:"attraction_card_mosaic_item";i:0;s:7:"product";i:0;s:11:"person_card";i:0;s:19:"small_liftup_banner";i:0;s:9:"waste_map";i:0;s:12:"waste_search";i:0;s:8:"revision";i:0;s:10:"label_icon";i:0;s:9:"term_name";i:0;s:5:"title";i:0;s:12:"content_full";i:0;s:12:"content_half";i:0;s:6:"topics";i:0;s:16:"main_liftup_wide";i:0;s:11:"main_liftup";i:0;s:12:"main_content";i:0;s:10:"full_modal";i:0;s:10:"event_list";i:0;s:9:"grid_item";i:0;s:10:"event_node";i:0;s:14:"event_tab_item";i:0;s:6:"person";i:0;s:17:"file_linked_title";i:0;s:13:"search_result";i:0;s:9:"opengraph";i:0;s:16:"content_250_wide";i:0;s:13:"page_carousel";i:0;}',
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
          'above_footer' => 0,
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
          'above_footer' => 0,
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
  t('Liftups per businesspori theme');
  t('section');
  $export['businesspori_theme_liftups'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'businesspori_top_menu';
  $context->description = 'Displays the top menu';
  $context->tag = 'menus';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'businesspori_domain' => 'businesspori_domain',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-42' => array(
          'module' => 'menu_block',
          'delta' => '42',
          'region' => 'navigation_top',
          'weight' => '-8',
        ),
        'menu_block-45' => array(
          'module' => 'menu_block',
          'delta' => '45',
          'region' => 'navigation_top',
          'weight' => '-7',
        ),
        'menu_block-43' => array(
          'module' => 'menu_block',
          'delta' => '43',
          'region' => 'navigation',
          'weight' => '-8',
        ),
        'menu_block-46' => array(
          'module' => 'menu_block',
          'delta' => '46',
          'region' => 'navigation',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Displays the top menu');
  t('menus');
  $export['businesspori_top_menu'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search_page_businesspori';
  $context->description = 'Context for search page pori.fi';
  $context->tag = 'views';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        'businesspori_fi' => 'businesspori_fi',
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
        'views-kada_section_footer-block_3' => array(
          'module' => 'views',
          'delta' => 'kada_section_footer-block_3',
          'region' => 'footer',
          'weight' => '-8',
        ),
        'views-kada_section_footer-block_4' => array(
          'module' => 'views',
          'delta' => 'kada_section_footer-block_4',
          'region' => 'footer',
          'weight' => '-8',
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
  $export['search_page_businesspori'] = $context;

  return $export;
}
