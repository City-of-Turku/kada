<?php
/**
 * @file
 * tkufi_sections_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tkufi_sections_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'og_menu';
  $context->description = 'Display OG menu for content which is not in the menu per se';
  $context->tag = 'sections';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'event' => 'event',
        'news_item' => 'news_item',
        'blog_page' => 'blog_page',
        'blog_post' => 'blog_post',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'og_menu_single-menu' => array(
          'module' => 'og_menu_single',
          'delta' => 'menu',
          'region' => 'navigation',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Display OG menu for content which is not in the menu per se');
  t('sections');
  $export['og_menu'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'section';
  $context->description = 'Section page content, should never be active for normal pages';
  $context->tag = 'sections';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~page' => '~page',
      ),
    ),
    'entity_field' => array(
      'values' => array(
        'entity_type' => 'a:1:{s:4:"node";s:4:"node";}',
        'view_mode' => 'a:39:{s:4:"full";s:4:"full";s:6:"teaser";i:0;s:3:"rss";i:0;s:13:"diff_standard";i:0;s:5:"token";i:0;s:9:"accordion";i:0;s:8:"carousel";i:0;s:7:"current";i:0;s:7:"project";i:0;s:13:"search_result";i:0;s:15:"event_grid_item";i:0;s:15:"event_list_item";i:0;s:14:"event_map_item";i:0;s:17:"event_mosaic_item";i:0;s:19:"event_search_result";i:0;s:19:"event_tab_list_item";i:0;s:18:"event_top_carousel";i:0;s:9:"main_news";i:0;s:14:"main_news_wide";i:0;s:10:"only_title";i:0;s:3:"map";i:0;s:8:"revision";i:0;s:10:"label_icon";i:0;s:9:"term_name";i:0;s:5:"title";i:0;s:12:"content_full";i:0;s:12:"content_half";i:0;s:6:"topics";i:0;s:16:"main_liftup_wide";i:0;s:11:"main_liftup";i:0;s:12:"main_content";i:0;s:10:"full_modal";i:0;s:10:"event_list";i:0;s:9:"grid_item";i:0;s:10:"event_node";i:0;s:14:"event_tab_item";i:0;s:6:"person";i:0;s:17:"file_linked_title";i:0;s:9:"opengraph";i:0;}',
        'field_name' => 'og_group_ref',
        'field_status' => 'all',
        'field_value' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-kada_pages-top_image' => array(
          'module' => 'views',
          'delta' => 'kada_pages-top_image',
          'region' => 'header',
          'weight' => '-10',
        ),
        'og_extras-node_links' => array(
          'module' => 'og_extras',
          'delta' => 'node_links',
          'region' => 'tools_container',
          'weight' => '-10',
        ),
        'views-022fce84329c415f416a08a7d3abf9d2' => array(
          'module' => 'views',
          'delta' => '022fce84329c415f416a08a7d3abf9d2',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-0a0d9387bc0aa482d252922194524b92' => array(
          'module' => 'views',
          'delta' => '0a0d9387bc0aa482d252922194524b92',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Section page content, should never be active for normal pages');
  t('sections');
  $export['section'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'section_front';
  $context->description = 'Section main page';
  $context->tag = 'section';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'default_section' => 'default_section',
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
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-driveturku_top_carousel-section' => array(
          'module' => 'views',
          'delta' => 'driveturku_top_carousel-section',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-driveturku_recommended-block' => array(
          'module' => 'views',
          'delta' => 'driveturku_recommended-block',
          'region' => 'header',
          'weight' => '-9',
        ),
        'views-driveturku_news-section_main' => array(
          'module' => 'views',
          'delta' => 'driveturku_news-section_main',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'og_extras-node_links' => array(
          'module' => 'og_extras',
          'delta' => 'node_links',
          'region' => 'tools_container',
          'weight' => '-10',
        ),
        'kada_widget_feature-widget_before_content' => array(
          'module' => 'kada_widget_feature',
          'delta' => 'widget_before_content',
          'region' => 'before_content',
          'weight' => '-10',
        ),
        'quicktabs-feed_tabs_section' => array(
          'module' => 'quicktabs',
          'delta' => 'feed_tabs_section',
          'region' => 'before_content',
          'weight' => '-9',
        ),
        'tkufi_export_feature-tkufi_rss_feed_for_section' => array(
          'module' => 'tkufi_export_feature',
          'delta' => 'tkufi_rss_feed_for_section',
          'region' => 'before_content',
          'weight' => '-8',
        ),
        'views-b036322676ddcc7223120f5722503e9c' => array(
          'module' => 'views',
          'delta' => 'b036322676ddcc7223120f5722503e9c',
          'region' => 'before_footer',
          'weight' => '-10',
        ),
        'views-b49e46913a83593047ac68546f073a62' => array(
          'module' => 'views',
          'delta' => 'b49e46913a83593047ac68546f073a62',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'views-0a0d9387bc0aa482d252922194524b92' => array(
          'module' => 'views',
          'delta' => '0a0d9387bc0aa482d252922194524b92',
          'region' => 'footer',
          'weight' => '-9',
        ),
      ),
      'layout' => 'driveturku-front',
    ),
    'theme_html' => array(
      'class' => 'theme-front',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Section main page');
  t('section');
  $export['section_front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'section_header';
  $context->description = 'Displays the default section header';
  $context->tag = 'sections';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'section' => 'section',
        'section_front' => 'section_front',
      ),
    ),
    'context_all' => array(
      'values' => array(
        'default_section' => 'default_section',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-ac941ffb7d27a34f919a463725a1dac6' => array(
          'module' => 'views',
          'delta' => 'ac941ffb7d27a34f919a463725a1dac6',
          'region' => 'header_top',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Displays the default section header');
  t('sections');
  $export['section_header'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'section_menus';
  $context->description = 'Displays menus on sections';
  $context->tag = 'menus';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'section_front' => 'section_front',
        'section' => 'section',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-5' => array(
          'module' => 'menu_block',
          'delta' => '5',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'menu_block-4' => array(
          'module' => 'menu_block',
          'delta' => '4',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Displays menus on sections');
  t('menus');
  $export['section_menus'] = $context;

  return $export;
}
