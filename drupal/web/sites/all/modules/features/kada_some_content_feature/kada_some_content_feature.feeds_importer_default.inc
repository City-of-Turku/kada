<?php

/**
 * @file
 * kada_some_content_feature.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function kada_some_content_feature_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'kada_facebook_json';
  $feeds_importer->config = array(
    'name' => 'Facebook JSON',
    'description' => 'Uses a custom Feeds Tamper plugin for fetching big images',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExJsonPath',
      'config' => array(
        'sources' => array(
          'id' => array(
            'name' => 'id',
            'value' => 'id',
            'debug' => 0,
            'weight' => '1',
          ),
          'created' => array(
            'name' => 'created',
            'value' => 'created_time',
            'debug' => 0,
            'weight' => '2',
          ),
          'message' => array(
            'name' => 'message',
            'value' => 'message',
            'debug' => 0,
            'weight' => '3',
          ),
          'picture' => array(
            'name' => 'picture',
            'value' => 'full_picture',
            'debug' => 0,
            'weight' => '4',
          ),
          'link' => array(
            'name' => 'link',
            'value' => 'attachments.data[0].unshimmed_url',
            'debug' => 0,
            'weight' => '5',
          ),
          'share_title' => array(
            'name' => 'Share title',
            'value' => 'attachments.data[0].title',
            'debug' => 0,
            'weight' => '6',
          ),
          'share_caption' => array(
            'name' => 'Share caption',
            'value' => 'caption',
            'debug' => 0,
            'weight' => '7',
          ),
          'share_description' => array(
            'name' => 'Share description',
            'value' => 'attachments.data[0].description',
            'debug' => 0,
            'weight' => '8',
          ),
          'type' => array(
            'name' => 'Share type',
            'value' => 'attachments.data[0].media_type',
            'debug' => 0,
            'weight' => '9',
          ),
          'object_id' => array(
            'name' => 'Object ID',
            'value' => 'attachments.data[0].target.id',
            'debug' => 0,
            'weight' => '10',
          ),
        ),
        'context' => array(
          'value' => '$.data.*',
        ),
        'display_errors' => 0,
        'source_encoding' => array(
          0 => 'auto',
        ),
        'debug_mode' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'id',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'id',
            'target' => 'field_some_id',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'created',
            'target' => 'created',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'picture',
            'target' => 'field_image:uri',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'message',
            'target' => 'body',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'link',
            'target' => 'field_link:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'share_title',
            'target' => 'field_link:title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'share_title',
            'target' => 'field_share_title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'share_caption',
            'target' => 'field_share_caption',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'share_description',
            'target' => 'field_share_description',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'Blank source 1',
            'target' => 'field_some_type',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'Blank source 2',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'type',
            'target' => 'field_share_type',
            'unique' => FALSE,
            'language' => 'und',
          ),
          13 => array(
            'source' => 'object_id',
            'target' => 'field_object_id',
            'unique' => FALSE,
            'language' => 'und',
          ),
          14 => array(
            'source' => 'parent:taxonomy:theme',
            'target' => 'field_theme',
            'unique' => FALSE,
            'language' => 'und',
          ),
          15 => array(
            'source' => 'parent:og:og_group_ref',
            'target' => 'og_group_ref:etid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          16 => array(
            'source' => 'parent:language',
            'target' => 'language',
            'unique' => FALSE,
            'language' => 'und',
          ),
          17 => array(
            'source' => 'parent:taxonomy:target_audience',
            'target' => 'field_target_audience',
            'unique' => FALSE,
            'language' => 'und',
          ),
          18 => array(
            'source' => 'parent:taxonomy:district',
            'target' => 'field_district',
            'unique' => FALSE,
            'language' => 'und',
          ),
          19 => array(
            'source' => 'parent:taxonomy:keywords',
            'target' => 'field_keywords',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'wysiwyg',
        'skip_hash_check' => 0,
        'bundle' => 'social_media_update',
        'insert_new' => '1',
        'update_non_existent' => 'delete',
        'language' => 'und',
      ),
    ),
    'content_type' => 'feed_import_facebook',
    'update' => 0,
    'import_period' => '0',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['kada_facebook_json'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'kada_instagram';
  $feeds_importer->config = array(
    'name' => 'Instagram JSON',
    'description' => 'Import Instragram updates from JSON feed',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExJsonPath',
      'config' => array(
        'context' => array(
          'value' => '$.data.*',
        ),
        'sources' => array(
          'id' => array(
            'name' => 'id',
            'value' => 'id',
            'debug' => 0,
            'weight' => '1',
          ),
          'share_type' => array(
            'name' => 'Share type',
            'value' => 'type',
            'debug' => 0,
            'weight' => '2',
          ),
          'created' => array(
            'name' => 'Created',
            'value' => 'caption.created_time',
            'debug' => 0,
            'weight' => '3',
          ),
          'caption' => array(
            'name' => 'Caption',
            'value' => 'caption.text',
            'debug' => 0,
            'weight' => '4',
          ),
          'link' => array(
            'name' => 'Link',
            'value' => 'link',
            'debug' => 0,
            'weight' => '5',
          ),
          'image' => array(
            'name' => 'Image',
            'value' => 'images.standard_resolution.url',
            'debug' => 0,
            'weight' => '6',
          ),
          'tags' => array(
            'name' => 'Tags',
            'value' => 'tags.*',
            'debug' => 0,
            'weight' => '7',
          ),
          'latitude' => array(
            'name' => 'Latitude',
            'value' => 'location.latitude',
            'debug' => 0,
            'weight' => '8',
          ),
          'longitude' => array(
            'name' => 'Longitude',
            'value' => 'location.longitude',
            'debug' => 0,
            'weight' => '9',
          ),
        ),
        'display_errors' => 0,
        'debug_mode' => 0,
        'source_encoding' => array(
          0 => 'auto',
        ),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'id',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'id',
            'target' => 'field_some_id',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'caption',
            'target' => 'body',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'created',
            'target' => 'created',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'link',
            'target' => 'field_link:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'share_type',
            'target' => 'field_share_type',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'tags',
            'target' => 'field_keywords',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'latitude',
            'target' => 'field_location:lat',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'longitude',
            'target' => 'field_location:lon',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'Blank source 1',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'Blank source 2',
            'target' => 'field_some_type',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'image',
            'target' => 'field_image:uri',
            'unique' => FALSE,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'parent:taxonomy:theme',
            'target' => 'field_theme',
            'unique' => FALSE,
            'language' => 'und',
          ),
          13 => array(
            'source' => 'parent:og:og_group_ref',
            'target' => 'og_group_ref:etid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          14 => array(
            'source' => 'parent:language',
            'target' => 'language',
            'unique' => FALSE,
            'language' => 'und',
          ),
          15 => array(
            'source' => 'parent:taxonomy:keywords',
            'target' => 'field_keywords',
            'unique' => FALSE,
            'language' => 'und',
          ),
          16 => array(
            'source' => 'parent:taxonomy:district',
            'target' => 'field_district',
            'unique' => FALSE,
            'language' => 'und',
          ),
          17 => array(
            'source' => 'parent:taxonomy:target_audience',
            'target' => 'field_target_audience',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'social_media_update',
        'insert_new' => '1',
        'update_non_existent' => 'delete',
        'language' => 'und',
      ),
    ),
    'content_type' => 'feed_import_instagram',
    'update' => 0,
    'import_period' => '0',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['kada_instagram'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'kada_linkedin_json';
  $feeds_importer->config = array(
    'name' => 'LinkedIn JSON',
    'description' => 'Import LinkedIn updates',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExJsonPath',
      'config' => array(
        'context' => array(
          'value' => '$.values.*',
        ),
        'sources' => array(
          'id' => array(
            'name' => 'id',
            'value' => 'updateContent.companyStatusUpdate.share.id',
            'debug' => 0,
            'weight' => '1',
          ),
          'created' => array(
            'name' => 'created',
            'value' => 'updateContent.companyStatusUpdate.share.timestamp',
            'debug' => 0,
            'weight' => '2',
          ),
          'message' => array(
            'name' => 'message',
            'value' => 'updateContent.companyStatusUpdate.share.content.description',
            'debug' => 0,
            'weight' => '3',
          ),
          'picture' => array(
            'name' => 'picture',
            'value' => 'updateContent.companyStatusUpdate.share.content.submittedImageUrl',
            'debug' => 0,
            'weight' => '4',
          ),
          'link' => array(
            'name' => 'link',
            'value' => 'updateContent.companyStatusUpdate.share.content.submittedUrl',
            'debug' => 0,
            'weight' => '5',
          ),
          'share_title' => array(
            'name' => 'Share title',
            'value' => 'updateContent.companyStatusUpdate.share.content.title',
            'debug' => 0,
            'weight' => '6',
          ),
          'share_description' => array(
            'name' => 'Share description',
            'value' => 'updateContent.companyStatusUpdate.share.content.description',
            'debug' => 0,
            'weight' => '7',
          ),
        ),
        'display_errors' => 0,
        'debug_mode' => 0,
        'source_encoding' => array(
          0 => 'auto',
        ),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'id',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'id',
            'target' => 'field_some_id',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'created',
            'target' => 'created',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'picture',
            'target' => 'field_image:uri',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'link',
            'target' => 'field_link:url',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'share_title',
            'target' => 'field_link:title',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'share_title',
            'target' => 'field_share_title',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'share_description',
            'target' => 'field_share_description',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Blank source 2',
            'target' => 'title',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Blank source 3',
            'target' => 'language',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Blank source 4',
            'target' => 'field_theme',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          11 => array(
            'source' => 'Blank source 5',
            'target' => 'field_some_type',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'wysiwyg',
        'skip_hash_check' => 0,
        'bundle' => 'social_media_update',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['kada_linkedin_json'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'kada_tweets_json';
  $feeds_importer->config = array(
    'name' => 'Tweets JSON',
    'description' => 'There is a custom form for storing access token and secret.',
    'fetcher' => array(
      'plugin_key' => 'OAuthHTTPFetcher',
      'config' => array(
        'authenticator' => 'kada_some_content_feature_get_tokens_twitter',
        'site_id' => 'kada',
        'consumer_key' => 'consumerkey',
        'consumer_secret' => 'consumersecret',
        'request_token_url' => 'https://api.twitter.com/oauth/request_token',
        'access_token_url' => 'https://api.twitter.com/oauth/access_token',
        'authorize_url' => 'https://api.twitter.com/oauth/authorize',
        'method' => 'get',
        'uid' => '',
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => '',
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExJsonPath',
      'config' => array(
        'context' => array(
          'value' => '$.*',
        ),
        'sources' => array(
          'guid' => array(
            'name' => 'GUID',
            'value' => 'id_str',
            'debug' => 0,
            'weight' => '0',
          ),
          'text' => array(
            'name' => 'text',
            'value' => 'text',
            'debug' => 0,
            'weight' => '1',
          ),
          'created' => array(
            'name' => 'created',
            'value' => 'created_at',
            'debug' => 0,
            'weight' => '2',
          ),
          'image' => array(
            'name' => 'image',
            'value' => 'entities.media.*.media_url',
            'debug' => 0,
            'weight' => '3',
          ),
          'image_display_url' => array(
            'name' => 'Image display URL',
            'value' => 'entities.media.*.expanded_url',
            'debug' => 0,
            'weight' => '4',
          ),
          'hashtags' => array(
            'name' => 'hashtags',
            'value' => 'entities.hashtags.*.text',
            'debug' => 0,
            'weight' => '5',
          ),
          'original_url' => array(
            'name' => 'Original URL',
            'value' => 'entities.urls.*.expanded_url',
            'debug' => 0,
            'weight' => '6',
          ),
          'url_title' => array(
            'name' => 'URL title',
            'value' => 'entities.urls.*.display_url',
            'debug' => 0,
            'weight' => '7',
          ),
        ),
        'display_errors' => 0,
        'debug_mode' => 0,
        'source_encoding' => array(
          0 => 'auto',
        ),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'guid',
            'target' => 'field_some_id',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'text',
            'target' => 'body',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Blank source 1',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'created',
            'target' => 'created',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'image',
            'target' => 'field_image:uri',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'original_url',
            'target' => 'field_link:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'url_title',
            'target' => 'field_link:title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'image_display_url',
            'target' => 'field_image_url:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'Blank source 2',
            'target' => 'field_some_type',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'parent:taxonomy:theme',
            'target' => 'field_theme',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'parent:og:og_group_ref',
            'target' => 'og_group_ref:etid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'parent:language',
            'target' => 'language',
            'unique' => FALSE,
            'language' => 'und',
          ),
          13 => array(
            'source' => 'parent:taxonomy:target_audience',
            'target' => 'field_target_audience',
            'unique' => FALSE,
            'language' => 'und',
          ),
          14 => array(
            'source' => 'parent:taxonomy:district',
            'target' => 'field_district',
            'unique' => FALSE,
            'language' => 'und',
          ),
          15 => array(
            'source' => 'parent:taxonomy:keywords',
            'target' => 'field_keywords',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'wysiwyg',
        'skip_hash_check' => 0,
        'bundle' => 'social_media_update',
        'insert_new' => '1',
        'update_non_existent' => 'delete',
        'language' => 'und',
      ),
    ),
    'content_type' => 'feed_import_twitter',
    'update' => 0,
    'import_period' => '0',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['kada_tweets_json'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'kada_youtube_channel';
  $feeds_importer->config = array(
    'name' => 'Youtube channel',
    'description' => 'Importer for Youtube channel videos, stores API key in custom code.',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
        'cache_http_result' => TRUE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExJsonPath',
      'config' => array(
        'context' => array(
          'value' => '$.items.*',
        ),
        'sources' => array(
          'id' => array(
            'name' => 'id',
            'value' => 'id.videoId',
            'debug' => 0,
            'weight' => '0',
          ),
          'kind' => array(
            'name' => 'Kind',
            'value' => 'id.kind',
            'debug' => 0,
            'weight' => '1',
          ),
          'created' => array(
            'name' => 'Created',
            'value' => 'snippet.publishedAt',
            'debug' => 0,
            'weight' => '2',
          ),
          'title' => array(
            'name' => 'Title',
            'value' => 'snippet.title',
            'debug' => 0,
            'weight' => '3',
          ),
          'description' => array(
            'name' => 'Description',
            'value' => 'snippet.description',
            'debug' => 0,
            'weight' => '4',
          ),
          'image' => array(
            'name' => 'Image',
            'value' => 'snippet.thumbnails.high.url',
            'debug' => 0,
            'weight' => '5',
          ),
        ),
        'display_errors' => 0,
        'debug_mode' => 0,
        'source_encoding' => array(
          0 => 'auto',
        ),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'id',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'id',
            'target' => 'field_some_id',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'created',
            'target' => 'created',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'title',
            'target' => 'field_link:title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'image',
            'target' => 'field_image:uri',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Blank source 1',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'Blank source 2',
            'target' => 'field_some_type',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'Blank source 4',
            'target' => 'field_link:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'parent:taxonomy:theme',
            'target' => 'field_theme',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'parent:og:og_group_ref',
            'target' => 'og_group_ref:etid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'kind',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'parent:language',
            'target' => 'language',
            'unique' => FALSE,
            'language' => 'und',
          ),
          13 => array(
            'source' => 'parent:taxonomy:district',
            'target' => 'field_district',
            'unique' => FALSE,
            'language' => 'und',
          ),
          14 => array(
            'source' => 'parent:taxonomy:keywords',
            'target' => 'field_keywords',
            'unique' => FALSE,
            'language' => 'und',
          ),
          15 => array(
            'source' => 'parent:taxonomy:target_audience',
            'target' => 'field_target_audience',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'social_media_update',
        'insert_new' => '1',
        'update_non_existent' => 'delete',
        'language' => 'und',
      ),
    ),
    'content_type' => 'feed_import_youtube_channel',
    'update' => 0,
    'import_period' => '10800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['kada_youtube_channel'] = $feeds_importer;

  return $export;
}
