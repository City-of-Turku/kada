<?php
/**
 * @file
 * kada_liftups_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function kada_liftups_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'theme_liftups';
  $context->description = 'Liftups per theme';
  $context->tag = 'section';
  $context->conditions = array(
    'entity_field' => array(
      'values' => array(
        'entity_type' => 'a:1:{s:4:"node";s:4:"node";}',
        'view_mode' => 'a:39:{s:4:"full";s:4:"full";s:6:"teaser";i:0;s:3:"rss";i:0;s:13:"diff_standard";i:0;s:5:"token";i:0;s:9:"accordion";i:0;s:8:"carousel";i:0;s:7:"current";i:0;s:7:"project";i:0;s:13:"search_result";i:0;s:15:"event_grid_item";i:0;s:15:"event_list_item";i:0;s:14:"event_map_item";i:0;s:17:"event_mosaic_item";i:0;s:19:"event_search_result";i:0;s:19:"event_tab_list_item";i:0;s:18:"event_top_carousel";i:0;s:9:"main_news";i:0;s:14:"main_news_wide";i:0;s:10:"only_title";i:0;s:3:"map";i:0;s:8:"revision";i:0;s:10:"label_icon";i:0;s:9:"term_name";i:0;s:5:"title";i:0;s:12:"content_full";i:0;s:12:"content_half";i:0;s:6:"topics";i:0;s:16:"main_liftup_wide";i:0;s:11:"main_liftup";i:0;s:12:"main_content";i:0;s:10:"full_modal";i:0;s:10:"event_list";i:0;s:9:"grid_item";i:0;s:10:"event_node";i:0;s:14:"event_tab_item";i:0;s:6:"person";i:0;s:17:"file_linked_title";i:0;s:9:"opengraph";i:0;}',
        'field_name' => 'field_theme_main_page',
        'field_status' => 'match',
        'field_value' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-kada_top_carousel-slider' => array(
          'module' => 'views',
          'delta' => 'kada_top_carousel-slider',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-kada_recommended-block' => array(
          'module' => 'views',
          'delta' => 'kada_recommended-block',
          'region' => 'header',
          'weight' => '-9',
        ),
        'kada_widget_feature-widget_before_content' => array(
          'module' => 'kada_widget_feature',
          'delta' => 'widget_before_content',
          'region' => 'highlighted',
          'weight' => '-88',
        ),
        'views-kada_news-front_block' => array(
          'module' => 'views',
          'delta' => 'kada_news-front_block',
          'region' => 'highlighted',
          'weight' => '-87',
        ),
        'quicktabs-feed_tabs' => array(
          'module' => 'quicktabs',
          'delta' => 'feed_tabs',
          'region' => 'before_content',
          'weight' => '-9',
        ),
        'kada_export_feature-kada_rss_feed_for_theme' => array(
          'module' => 'kada_export_feature',
          'delta' => 'kada_rss_feed_for_theme',
          'region' => 'before_content',
          'weight' => '-8',
        ),
        'views-kada_project_liftups-block' => array(
           'module' => 'views',
           'delta' => 'kada_project_liftups-block',
           'region' => 'before_footer',
           'weight' => '-10',
        ),
      ),
      'layout' => 'driveturku-front',
    ),
    'region' => array(
      'driveturku' => array(
        'disable' => array(
          'sidebar_first' => 'sidebar_first',
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
    'theme_html' => array(
      'class' => 'theme-front',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Liftups per theme');
  t('section');
  $export['theme_liftups'] = $context;

  return $export;
}
