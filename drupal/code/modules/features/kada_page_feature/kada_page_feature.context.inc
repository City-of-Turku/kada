<?php

/**
 * @file
 * kada_page_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function kada_page_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'page';
  $context->description = 'Normal Page content not in sections';
  $context->tag = 'content type';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~front_page' => '~front_page',
      ),
    ),
    'entity_field' => array(
      'values' => array(
        'entity_type' => 'a:1:{s:4:"node";s:4:"node";}',
        'view_mode' => 'a:50:{s:4:"full";s:4:"full";s:6:"teaser";i:0;s:3:"rss";i:0;s:13:"diff_standard";i:0;s:19:"live_results_search";i:0;s:5:"token";i:0;s:9:"accordion";i:0;s:8:"carousel";i:0;s:7:"current";i:0;s:7:"project";i:0;s:15:"event_grid_item";i:0;s:15:"event_list_item";i:0;s:14:"event_map_item";i:0;s:17:"event_mosaic_item";i:0;s:19:"event_search_result";i:0;s:19:"event_tab_list_item";i:0;s:18:"event_top_carousel";i:0;s:9:"main_news";i:0;s:14:"main_news_wide";i:0;s:10:"only_title";i:0;s:3:"map";i:0;s:27:"attraction_card_mosaic_item";i:0;s:7:"product";i:0;s:11:"person_card";i:0;s:19:"small_liftup_banner";i:0;s:9:"waste_map";i:0;s:12:"waste_search";i:0;s:8:"revision";i:0;s:10:"label_icon";i:0;s:9:"term_name";i:0;s:5:"title";i:0;s:12:"content_full";i:0;s:12:"content_half";i:0;s:6:"topics";i:0;s:16:"main_liftup_wide";i:0;s:11:"main_liftup";i:0;s:12:"main_content";i:0;s:10:"full_modal";i:0;s:10:"event_list";i:0;s:9:"grid_item";i:0;s:10:"event_node";i:0;s:14:"event_tab_item";i:0;s:6:"person";i:0;s:17:"file_linked_title";i:0;s:13:"search_result";i:0;s:9:"opengraph";i:0;s:16:"content_250_wide";i:0;s:13:"page_carousel";i:0;s:18:"top_video_carousel";i:0;s:12:"video_liftup";i:0;}',
        'field_name' => 'og_group_ref',
        'field_status' => 'empty',
        'field_value' => '1',
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
        'views-pori_main_image_for_page-block' => array(
          'module' => 'views',
          'delta' => 'pori_main_image_for_page-block',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'views-09708f3bf4cf5bd7917e7b662c6c2bc6' => array(
          'module' => 'views',
          'delta' => '09708f3bf4cf5bd7917e7b662c6c2bc6',
          'region' => 'content',
          'weight' => '-10',
        ),
        'kada_widget_feature-widget_before_content' => array(
          'module' => 'kada_widget_feature',
          'delta' => 'widget_before_content',
          'region' => 'before_content',
          'weight' => '-10',
        ),
        'views-972eaabfd2a39ff790e08eab4766b876' => array(
          'module' => 'views',
          'delta' => '972eaabfd2a39ff790e08eab4766b876',
          'region' => 'before_footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Normal Page content not in sections');
  t('content type');
  $export['page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'page_en';
  $context->description = 'Page content when browsing page in English';
  $context->tag = 'content type';
  $context->conditions = array(
    'language' => array(
      'values' => array(
        'en' => 'en',
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
  t('Page content when browsing page in English');
  t('content type');
  $export['page_en'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'page_fi';
  $context->description = 'Page content when browsing page in Finnish';
  $context->tag = 'content type';
  $context->conditions = array(
    'entity_field' => array(
      'values' => array(
        'entity_type' => 'a:1:{s:4:"node";s:4:"node";}',
        'field_name' => 'field_theme_main_page',
        'field_status' => 'empty',
        'field_value' => '1',
      ),
    ),
    'language' => array(
      'values' => array(
        'fi' => 'fi',
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
  t('Page content when browsing page in Finnish');
  t('content type');
  $export['page_fi'] = $context;

  $context = new stdClass();
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'page_menus';
  $context->description = 'Displays menus on pages';
  $context->tag = 'menus';
  $context->conditions = array(
    'context_all' => array(
      'values' => array(
        'default_domain' => 'default_domain',
        'page' => 'page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-7' => array(
          'module' => 'menu_block',
          'delta' => '7',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Displays menus on pages');
  t('menus');
  $export['page_menus'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'page_sv';
  $context->description = 'Page content when browsing page in Swedish';
  $context->tag = 'content type';
  $context->conditions = array(
    'language' => array(
      'values' => array(
        'sv' => 'sv',
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
  t('Page content when browsing page in Swedish');
  t('content type');
  $export['page_sv'] = $context;

  return $export;
}
