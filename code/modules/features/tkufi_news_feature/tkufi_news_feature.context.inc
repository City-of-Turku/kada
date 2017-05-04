<?php
/**
 * @file
 * tkufi_news_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tkufi_news_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'emergency_message';
  $context->description = 'Emergency message on page top';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-4a4b63fe461a5be841eb9efb087e7362' => array(
          'module' => 'views',
          'delta' => '4a4b63fe461a5be841eb9efb087e7362',
          'region' => 'emergency_messages',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Emergency message on page top');
  $export['emergency_message'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_item';
  $context->description = 'News item content';
  $context->tag = 'content type';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'news_item' => 'news_item',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-driveturku_news-top_image' => array(
          'module' => 'views',
          'delta' => 'driveturku_news-top_image',
          'region' => 'header',
          'weight' => '-9',
        ),
        'views-b49e46913a83593047ac68546f073a62' => array(
          'module' => 'views',
          'delta' => 'b49e46913a83593047ac68546f073a62',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-022fce84329c415f416a08a7d3abf9d2' => array(
          'module' => 'views',
          'delta' => '022fce84329c415f416a08a7d3abf9d2',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'kada_configuration_feature-tweet_embed' => array(
          'module' => 'kada_configuration_feature',
          'delta' => 'tweet_embed',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('News item content');
  t('content type');
  $export['news_item'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_item_en';
  $context->description = 'News item content when browsing page in English';
  $context->tag = 'content type';
  $context->conditions = array(
    'language' => array(
      'values' => array(
        'en' => 'en',
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
  t('News item content when browsing page in English');
  t('content type');
  $export['news_item_en'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_item_fi';
  $context->description = 'News item content when browsing page in Finnish';
  $context->tag = 'content type';
  $context->conditions = array(
    'language' => array(
      'values' => array(
        'fi' => 'fi',
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
  t('News item content when browsing page in Finnish');
  t('content type');
  $export['news_item_fi'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_item_se';
  $context->description = 'News item content when browsing page in Swedish';
  $context->tag = 'content type';
  $context->conditions = array(
    'language' => array(
      'values' => array(
        'sv' => 'sv',
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
  t('News item content when browsing page in Swedish');
  t('content type');
  $export['news_item_se'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_list';
  $context->description = 'News archive/list';
  $context->tag = 'views';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news' => 'news',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'tkufi_export_feature-tkufi_rss_feed_for_news_archive' => array(
          'module' => 'tkufi_export_feature',
          'delta' => 'tkufi_rss_feed_for_news_archive',
          'region' => 'after_content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('News archive/list');
  t('views');
  $export['news_list'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_rss_feed';
  $context->description = 'Links news RSS feed to theme page';
  $context->tag = 'sections';
  $context->conditions = array(
    'entity_field' => array(
      'values' => array(
        'entity_type' => 'a:1:{s:4:"node";s:4:"node";}',
        'field_name' => 'field_theme_main_page',
        'field_status' => 'match',
        'field_value' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-3590991374f20d869c5637f7bd5ec6a1' => array(
          'module' => 'views',
          'delta' => '3590991374f20d869c5637f7bd5ec6a1',
          'region' => 'highlighted',
          'weight' => '42',
        ),
      ),
      'layout' => 'driveturku-front',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Links news RSS feed to theme page');
  t('sections');
  $export['news_rss_feed'] = $context;

  return $export;
}
