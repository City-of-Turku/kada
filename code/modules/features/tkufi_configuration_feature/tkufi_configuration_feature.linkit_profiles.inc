<?php
/**
 * @file
 * tkufi_configuration_feature.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function tkufi_configuration_feature_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'editor';
  $linkit_profile->admin_title = 'Editor';
  $linkit_profile->admin_description = 'Used with CKeditor';
  $linkit_profile->profile_type = '1';
  $linkit_profile->data = array(
    'text_formats' => array(
      'wysiwyg' => 'wysiwyg',
      'full_html' => 'full_html',
      'plain_text' => 0,
      'ds_code' => 0,
    ),
    'search_plugins' => array(
      'entity:search_api_server' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:node' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:taxonomy_term' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:file' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:comment' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:relation' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:scald_atom' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:search_api_index' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:widget' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:user' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'blog' => 'blog',
        'blog_post' => 'blog_post',
        'event' => 'event',
        'landing_page' => 'landing_page',
        'news_item' => 'news_item',
        'page' => 'page',
        'person' => 'person',
        'place' => 'place',
        'section' => 'section',
        'service' => 'service',
        'feed_import_facebook' => 0,
        'feed_import_instagram' => 0,
        'feed_import_twitter' => 0,
        'feed_import_youtube_channel' => 0,
        'liftup' => 0,
        'position_of_trust' => 0,
        'service_offer' => 0,
        'social_media_update' => 0,
      ),
      'group_by_bundle' => 1,
      'include_unpublished' => 0,
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'theme' => 0,
        'scald_authors' => 0,
        'scald_tags' => 0,
        'district' => 0,
        'keywords' => 0,
        'target_audience' => 0,
        'event_types' => 0,
        'accessibility' => 0,
        'office' => 0,
        'political_party' => 0,
        'trust_unit' => 0,
        'trustee_role' => 0,
        'service_classification' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:comment' => array(
      'result_description' => '',
      'bundles' => array(
        'comment_node_blog' => 0,
        'comment_node_blog_post' => 0,
        'comment_node_event' => 0,
        'comment_node_feed_import_facebook' => 0,
        'comment_node_feed_import_instagram' => 0,
        'comment_node_feed_import_twitter' => 0,
        'comment_node_feed_import_youtube_channel' => 0,
        'comment_node_landing_page' => 0,
        'comment_node_liftup' => 0,
        'comment_node_news_item' => 0,
        'comment_node_page' => 0,
        'comment_node_person' => 0,
        'comment_node_place' => 0,
        'comment_node_position_of_trust' => 0,
        'comment_node_section' => 0,
        'comment_node_service' => 0,
        'comment_node_service_offer' => 0,
        'comment_node_social_media_update' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:scald_atom' => array(
      'result_description' => '',
      'bundles' => array(
        'file' => 0,
        'image' => 0,
        'video' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:widget' => array(
      'result_description' => '',
      'bundles' => array(
        'event_carousel' => 0,
        'event_mosaic' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:relation' => array(
      'result_description' => '',
      'bundles' => array(
        'place_location' => 0,
        'trustee_person' => 0,
        'related_service' => 0,
        'place_service' => 0,
        'service_offer_service' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:search_api_server' => array(
      'result_description' => '',
    ),
    'entity:search_api_index' => array(
      'result_description' => '',
    ),
    'entity:file' => array(
      'result_description' => '',
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'url_type' => 'direct',
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'insert_plugin' => array(
      'url_method' => '2',
    ),
    'attribute_plugins' => array(
      'accesskey' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'target' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'class' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'rel' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'id' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'title' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'autocomplete' => array(
      'charLimit' => '2',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ),
  );
  $export['editor'] = $linkit_profile;

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'fields';
  $linkit_profile->admin_title = 'Fields';
  $linkit_profile->admin_description = '';
  $linkit_profile->profile_type = '2';
  $linkit_profile->data = array(
    'search_plugins' => array(
      'entity:search_api_server' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:node' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:taxonomy_term' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:file' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:comment' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:relation' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:scald_atom' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:search_api_index' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:widget' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:user' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'entity:node' => array(
      'result_description' => '[node:created:short] - [node:author]',
      'bundles' => array(
        'blog' => 'blog',
        'blog_post' => 'blog_post',
        'event' => 'event',
        'news_item' => 'news_item',
        'page' => 'page',
        'place' => 'place',
        'section' => 'section',
        'service' => 'service',
        'feed_import_facebook' => 0,
        'feed_import_instagram' => 0,
        'feed_import_twitter' => 0,
        'feed_import_youtube_channel' => 0,
        'landing_page' => 0,
        'liftup' => 0,
        'person' => 0,
        'position_of_trust' => 0,
        'service_offer' => 0,
        'social_media_update' => 0,
      ),
      'group_by_bundle' => 1,
      'include_unpublished' => 1,
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'theme' => 0,
        'scald_authors' => 0,
        'scald_tags' => 0,
        'district' => 0,
        'keywords' => 0,
        'target_audience' => 0,
        'event_types' => 0,
        'accessibility' => 0,
        'office' => 0,
        'political_party' => 0,
        'trust_unit' => 0,
        'trustee_role' => 0,
        'service_classification' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:comment' => array(
      'result_description' => '',
      'bundles' => array(
        'comment_node_blog' => 0,
        'comment_node_blog_post' => 0,
        'comment_node_event' => 0,
        'comment_node_feed_import_facebook' => 0,
        'comment_node_feed_import_instagram' => 0,
        'comment_node_feed_import_twitter' => 0,
        'comment_node_feed_import_youtube_channel' => 0,
        'comment_node_landing_page' => 0,
        'comment_node_liftup' => 0,
        'comment_node_news_item' => 0,
        'comment_node_page' => 0,
        'comment_node_person' => 0,
        'comment_node_place' => 0,
        'comment_node_position_of_trust' => 0,
        'comment_node_section' => 0,
        'comment_node_service' => 0,
        'comment_node_service_offer' => 0,
        'comment_node_social_media_update' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:scald_atom' => array(
      'result_description' => '',
      'bundles' => array(
        'file' => 0,
        'image' => 0,
        'video' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:widget' => array(
      'result_description' => '',
      'bundles' => array(
        'event_carousel' => 0,
        'event_mosaic' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:relation' => array(
      'result_description' => '',
      'bundles' => array(
        'place_location' => 0,
        'trustee_person' => 0,
        'related_service' => 0,
        'place_service' => 0,
        'service_offer_service' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:search_api_server' => array(
      'result_description' => '',
    ),
    'entity:search_api_index' => array(
      'result_description' => '',
    ),
    'entity:file' => array(
      'result_description' => '',
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'url_type' => 'direct',
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'insert_plugin' => array(
      'plugin' => 'raw_url',
      'url_method' => '1',
    ),
    'attribute_plugins' => array(
      'accesskey' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'target' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'class' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'rel' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'id' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'title' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'autocomplete' => array(
      'charLimit' => '3',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ),
  );
  $export['fields'] = $linkit_profile;

  return $export;
}
