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
  $context->name = 'section_page';
  $context->description = 'Section page node type content';
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
        'view_mode' => 'a:46:{s:4:"full";s:4:"full";s:6:"teaser";i:0;s:3:"rss";i:0;s:13:"diff_standard";i:0;s:19:"live_results_search";i:0;s:5:"token";i:0;s:9:"accordion";i:0;s:8:"carousel";i:0;s:7:"current";i:0;s:7:"project";i:0;s:15:"event_grid_item";i:0;s:15:"event_list_item";i:0;s:14:"event_map_item";i:0;s:17:"event_mosaic_item";i:0;s:19:"event_search_result";i:0;s:19:"event_tab_list_item";i:0;s:18:"event_top_carousel";i:0;s:9:"main_news";i:0;s:14:"main_news_wide";i:0;s:10:"only_title";i:0;s:3:"map";i:0;s:27:"attraction_card_mosaic_item";i:0;s:7:"product";i:0;s:11:"person_card";i:0;s:19:"small_liftup_banner";i:0;s:8:"revision";i:0;s:10:"label_icon";i:0;s:9:"term_name";i:0;s:5:"title";i:0;s:12:"content_full";i:0;s:12:"content_half";i:0;s:6:"topics";i:0;s:16:"main_liftup_wide";i:0;s:11:"main_liftup";i:0;s:12:"main_content";i:0;s:10:"full_modal";i:0;s:10:"event_list";i:0;s:9:"grid_item";i:0;s:10:"event_node";i:0;s:14:"event_tab_item";i:0;s:6:"person";i:0;s:17:"file_linked_title";i:0;s:13:"search_result";i:0;s:9:"opengraph";i:0;s:16:"content_250_wide";i:0;s:13:"page_carousel";i:0;}',
        'field_name' => 'og_group_ref',
        'field_status' => 'all',
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
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Section page node type content');
  t('sections');
  $export['section_page'] = $context;

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
