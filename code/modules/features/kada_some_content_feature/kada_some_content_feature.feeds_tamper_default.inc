<?php
/**
 * @file
 * kada_some_content_feature.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function kada_some_content_feature_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_facebook_json-blank_source_1-default_value';
  $feeds_tamper->importer = 'kada_facebook_json';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'facebook',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Default value to Facebook';
  $export['kada_facebook_json-blank_source_1-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_facebook_json-blank_source_2-rewrite';
  $feeds_tamper->importer = 'kada_facebook_json';
  $feeds_tamper->source = 'Blank source 2';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'Facebook: [message]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Facebook: message';
  $export['kada_facebook_json-blank_source_2-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_facebook_json-blank_source_2-truncate_text';
  $feeds_tamper->importer = 'kada_facebook_json';
  $feeds_tamper->source = 'Blank source 2';
  $feeds_tamper->plugin_id = 'truncate_text';
  $feeds_tamper->settings = array(
    'num_char' => '160',
    'ellipses' => 1,
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Truncate';
  $export['kada_facebook_json-blank_source_2-truncate_text'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_facebook_json-blank_source_2-utf8_chars_only';
  $feeds_tamper->importer = 'kada_facebook_json';
  $feeds_tamper->source = 'Blank source 2';
  $feeds_tamper->plugin_id = 'utf8_chars_only';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Strip non utf8 characters';
  $export['kada_facebook_json-blank_source_2-utf8_chars_only'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_facebook_json-message-utf8_chars_only';
  $feeds_tamper->importer = 'kada_facebook_json';
  $feeds_tamper->source = 'message';
  $feeds_tamper->plugin_id = 'utf8_chars_only';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Strip non utf8 characters';
  $export['kada_facebook_json-message-utf8_chars_only'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_facebook_json-picture-convert_php_image';
  $feeds_tamper->importer = 'kada_facebook_json';
  $feeds_tamper->source = 'picture';
  $feeds_tamper->plugin_id = 'convert_php_image';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 6;
  $feeds_tamper->description = 'Convert Facebook Safeimage PHP to images';
  $export['kada_facebook_json-picture-convert_php_image'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_facebook_json-picture-fb_bigger_image';
  $feeds_tamper->importer = 'kada_facebook_json';
  $feeds_tamper->source = 'picture';
  $feeds_tamper->plugin_id = 'fb_bigger_image';
  $feeds_tamper->settings = array(
    'graph_url' => 'https://graph.facebook.com/',
    'object_id_field' => 'object_id',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Facebook BIG image';
  $export['kada_facebook_json-picture-fb_bigger_image'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_facebook_json-picture-strip_tags';
  $feeds_tamper->importer = 'kada_facebook_json';
  $feeds_tamper->source = 'picture';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Strip tags';
  $export['kada_facebook_json-picture-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_facebook_json-share_caption-truncate_text';
  $feeds_tamper->importer = 'kada_facebook_json';
  $feeds_tamper->source = 'share_caption';
  $feeds_tamper->plugin_id = 'truncate_text';
  $feeds_tamper->settings = array(
    'num_char' => '995',
    'ellipses' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Truncate';
  $export['kada_facebook_json-share_caption-truncate_text'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_facebook_json-share_description-truncate_text';
  $feeds_tamper->importer = 'kada_facebook_json';
  $feeds_tamper->source = 'share_description';
  $feeds_tamper->plugin_id = 'truncate_text';
  $feeds_tamper->settings = array(
    'num_char' => '300',
    'ellipses' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Truncate';
  $export['kada_facebook_json-share_description-truncate_text'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_facebook_json-share_description-utf8_chars_only';
  $feeds_tamper->importer = 'kada_facebook_json';
  $feeds_tamper->source = 'share_description';
  $feeds_tamper->plugin_id = 'utf8_chars_only';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Strip non utf8 characters';
  $export['kada_facebook_json-share_description-utf8_chars_only'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_facebook_json-share_title-utf8_chars_only';
  $feeds_tamper->importer = 'kada_facebook_json';
  $feeds_tamper->source = 'share_title';
  $feeds_tamper->plugin_id = 'utf8_chars_only';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Strip non utf8 characters';
  $export['kada_facebook_json-share_title-utf8_chars_only'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_instagram-blank_source_1-rewrite_title';
  $feeds_tamper->importer = 'kada_instagram';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'Instagram: [caption]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Instagram: caption';
  $export['kada_instagram-blank_source_1-rewrite_title'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_instagram-blank_source_1-truncate_text';
  $feeds_tamper->importer = 'kada_instagram';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'truncate_text';
  $feeds_tamper->settings = array(
    'num_char' => '160',
    'ellipses' => 1,
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Truncate';
  $export['kada_instagram-blank_source_1-truncate_text'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_instagram-blank_source_1-utf8_chars_only';
  $feeds_tamper->importer = 'kada_instagram';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'utf8_chars_only';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Strip non utf8 characters';
  $export['kada_instagram-blank_source_1-utf8_chars_only'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_instagram-blank_source_2-default_value_instagram';
  $feeds_tamper->importer = 'kada_instagram';
  $feeds_tamper->source = 'Blank source 2';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'instagram',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Default value to instagram';
  $export['kada_instagram-blank_source_2-default_value_instagram'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_instagram-caption-utf8_chars_only';
  $feeds_tamper->importer = 'kada_instagram';
  $feeds_tamper->source = 'caption';
  $feeds_tamper->plugin_id = 'utf8_chars_only';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Strip non utf8 characters';
  $export['kada_instagram-caption-utf8_chars_only'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_instagram-tags-implode';
  $feeds_tamper->importer = 'kada_instagram';
  $feeds_tamper->source = 'tags';
  $feeds_tamper->plugin_id = 'implode';
  $feeds_tamper->settings = array(
    'glue' => ',',
    'real_glue' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Implode';
  $export['kada_instagram-tags-implode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_linkedin_json-blank_source_2-rewrite_title';
  $feeds_tamper->importer = 'kada_linkedin_json';
  $feeds_tamper->source = 'Blank source 2';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'LinkedIn: [share_title]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'LinkedIn: title';
  $export['kada_linkedin_json-blank_source_2-rewrite_title'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_linkedin_json-blank_source_4-default_value_business';
  $feeds_tamper->importer = 'kada_linkedin_json';
  $feeds_tamper->source = 'Blank source 4';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'Business',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set value Business';
  $export['kada_linkedin_json-blank_source_4-default_value_business'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_linkedin_json-blank_source_5-default_value_linkedin';
  $feeds_tamper->importer = 'kada_linkedin_json';
  $feeds_tamper->source = 'Blank source 5';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'linkedin',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Default value to LinkedIn';
  $export['kada_linkedin_json-blank_source_5-default_value_linkedin'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_linkedin_json-created-cast_to_int';
  $feeds_tamper->importer = 'kada_linkedin_json';
  $feeds_tamper->source = 'created';
  $feeds_tamper->plugin_id = 'cast_to_int';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 7;
  $feeds_tamper->description = 'Cast to integer';
  $export['kada_linkedin_json-created-cast_to_int'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_linkedin_json-created-remove_milliseconds';
  $feeds_tamper->importer = 'kada_linkedin_json';
  $feeds_tamper->source = 'created';
  $feeds_tamper->plugin_id = 'math';
  $feeds_tamper->settings = array(
    'operation' => 'division',
    'value' => '1000',
  );
  $feeds_tamper->weight = 6;
  $feeds_tamper->description = 'Remove milliseconds';
  $export['kada_linkedin_json-created-remove_milliseconds'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_tweets_json-blank_source_1-rewrite';
  $feeds_tamper->importer = 'kada_tweets_json';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'Twitter: [text]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Twitter: text';
  $export['kada_tweets_json-blank_source_1-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_tweets_json-blank_source_2-default_value';
  $feeds_tamper->importer = 'kada_tweets_json';
  $feeds_tamper->source = 'Blank source 2';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'twitter',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Default value to Twitter';
  $export['kada_tweets_json-blank_source_2-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_youtube_channel-blank_source_1-rewrite';
  $feeds_tamper->importer = 'kada_youtube_channel';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'Youtube: [title]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['kada_youtube_channel-blank_source_1-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_youtube_channel-blank_source_1-truncate_text';
  $feeds_tamper->importer = 'kada_youtube_channel';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'truncate_text';
  $feeds_tamper->settings = array(
    'num_char' => '160',
    'ellipses' => 1,
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Truncate';
  $export['kada_youtube_channel-blank_source_1-truncate_text'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_youtube_channel-blank_source_2-default_value';
  $feeds_tamper->importer = 'kada_youtube_channel';
  $feeds_tamper->source = 'Blank source 2';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'youtube',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value';
  $export['kada_youtube_channel-blank_source_2-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_youtube_channel-blank_source_3-default_value';
  $feeds_tamper->importer = 'kada_youtube_channel';
  $feeds_tamper->source = 'Blank source 3';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'fi',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value';
  $export['kada_youtube_channel-blank_source_3-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_youtube_channel-blank_source_4-rewrite';
  $feeds_tamper->importer = 'kada_youtube_channel';
  $feeds_tamper->source = 'Blank source 4';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'http://www.youtube.com/watch?v=[id]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['kada_youtube_channel-blank_source_4-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_youtube_channel-created-strtotime';
  $feeds_tamper->importer = 'kada_youtube_channel';
  $feeds_tamper->source = 'created';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['kada_youtube_channel-created-strtotime'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'kada_youtube_channel-kind-keyword_filter';
  $feeds_tamper->importer = 'kada_youtube_channel';
  $feeds_tamper->source = 'kind';
  $feeds_tamper->plugin_id = 'keyword_filter';
  $feeds_tamper->settings = array(
    'words' => 'video',
    'word_boundaries' => 0,
    'exact' => 0,
    'case_sensitive' => 0,
    'invert' => 0,
    'word_list' => array(
      0 => 'video',
    ),
    'regex' => FALSE,
    'func' => 'mb_stripos',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Keyword filter';
  $export['kada_youtube_channel-kind-keyword_filter'] = $feeds_tamper;

  return $export;
}
