<?php
/**
 * @file
 * kada_some_content_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function kada_some_content_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer some_content settings'.
  $permissions['administer some_content settings'] = array(
    'name' => 'administer some_content settings',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'kada_some_content_feature',
  );

  // Exported permission: 'clear kada_facebook_json feeds'.
  $permissions['clear kada_facebook_json feeds'] = array(
    'name' => 'clear kada_facebook_json feeds',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear kada_instagram feeds'.
  $permissions['clear kada_instagram feeds'] = array(
    'name' => 'clear kada_instagram feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear kada_linkedin_json feeds'.
  $permissions['clear kada_linkedin_json feeds'] = array(
    'name' => 'clear kada_linkedin_json feeds',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear kada_tweets_json feeds'.
  $permissions['clear kada_tweets_json feeds'] = array(
    'name' => 'clear kada_tweets_json feeds',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear kada_youtube_channel feeds'.
  $permissions['clear kada_youtube_channel feeds'] = array(
    'name' => 'clear kada_youtube_channel feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'create feed_import_facebook content'.
  $permissions['create feed_import_facebook content'] = array(
    'name' => 'create feed_import_facebook content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create feed_import_facebook content on assigned domains'.
  $permissions['create feed_import_facebook content on assigned domains'] = array(
    'name' => 'create feed_import_facebook content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create feed_import_instagram content'.
  $permissions['create feed_import_instagram content'] = array(
    'name' => 'create feed_import_instagram content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create feed_import_instagram content on assigned domains'.
  $permissions['create feed_import_instagram content on assigned domains'] = array(
    'name' => 'create feed_import_instagram content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create feed_import_twitter content'.
  $permissions['create feed_import_twitter content'] = array(
    'name' => 'create feed_import_twitter content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create feed_import_twitter content on assigned domains'.
  $permissions['create feed_import_twitter content on assigned domains'] = array(
    'name' => 'create feed_import_twitter content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'create feed_import_youtube_channel content'.
  $permissions['create feed_import_youtube_channel content'] = array(
    'name' => 'create feed_import_youtube_channel content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create feed_import_youtube_channel content on assigned domains'.
  $permissions['create feed_import_youtube_channel content on assigned domains'] = array(
    'name' => 'create feed_import_youtube_channel content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'create social_media_update content'.
  $permissions['create social_media_update content'] = array(
    'name' => 'create social_media_update content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create social_media_update content on assigned domains'.
  $permissions['create social_media_update content on assigned domains'] = array(
    'name' => 'create social_media_update content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete any feed_import_facebook content'.
  $permissions['delete any feed_import_facebook content'] = array(
    'name' => 'delete any feed_import_facebook content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any feed_import_instagram content'.
  $permissions['delete any feed_import_instagram content'] = array(
    'name' => 'delete any feed_import_instagram content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any feed_import_twitter content'.
  $permissions['delete any feed_import_twitter content'] = array(
    'name' => 'delete any feed_import_twitter content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any feed_import_youtube_channel content'.
  $permissions['delete any feed_import_youtube_channel content'] = array(
    'name' => 'delete any feed_import_youtube_channel content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any social_media_update content'.
  $permissions['delete any social_media_update content'] = array(
    'name' => 'delete any social_media_update content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete feed_import_facebook content on assigned domains'.
  $permissions['delete feed_import_facebook content on assigned domains'] = array(
    'name' => 'delete feed_import_facebook content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete feed_import_instagram content on assigned domains'.
  $permissions['delete feed_import_instagram content on assigned domains'] = array(
    'name' => 'delete feed_import_instagram content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete feed_import_twitter content on assigned domains'.
  $permissions['delete feed_import_twitter content on assigned domains'] = array(
    'name' => 'delete feed_import_twitter content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'delete feed_import_youtube_channel content on assigned domains'.
  $permissions['delete feed_import_youtube_channel content on assigned domains'] = array(
    'name' => 'delete feed_import_youtube_channel content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'delete own feed_import_facebook content'.
  $permissions['delete own feed_import_facebook content'] = array(
    'name' => 'delete own feed_import_facebook content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own feed_import_instagram content'.
  $permissions['delete own feed_import_instagram content'] = array(
    'name' => 'delete own feed_import_instagram content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own feed_import_twitter content'.
  $permissions['delete own feed_import_twitter content'] = array(
    'name' => 'delete own feed_import_twitter content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own feed_import_youtube_channel content'.
  $permissions['delete own feed_import_youtube_channel content'] = array(
    'name' => 'delete own feed_import_youtube_channel content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own social_media_update content'.
  $permissions['delete own social_media_update content'] = array(
    'name' => 'delete own social_media_update content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete social_media_update content on assigned domains'.
  $permissions['delete social_media_update content on assigned domains'] = array(
    'name' => 'delete social_media_update content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'edit any feed_import_facebook content'.
  $permissions['edit any feed_import_facebook content'] = array(
    'name' => 'edit any feed_import_facebook content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any feed_import_instagram content'.
  $permissions['edit any feed_import_instagram content'] = array(
    'name' => 'edit any feed_import_instagram content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any feed_import_twitter content'.
  $permissions['edit any feed_import_twitter content'] = array(
    'name' => 'edit any feed_import_twitter content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any feed_import_youtube_channel content'.
  $permissions['edit any feed_import_youtube_channel content'] = array(
    'name' => 'edit any feed_import_youtube_channel content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any social_media_update content'.
  $permissions['edit any social_media_update content'] = array(
    'name' => 'edit any social_media_update content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own feed_import_facebook content'.
  $permissions['edit own feed_import_facebook content'] = array(
    'name' => 'edit own feed_import_facebook content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own feed_import_instagram content'.
  $permissions['edit own feed_import_instagram content'] = array(
    'name' => 'edit own feed_import_instagram content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own feed_import_twitter content'.
  $permissions['edit own feed_import_twitter content'] = array(
    'name' => 'edit own feed_import_twitter content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own feed_import_youtube_channel content'.
  $permissions['edit own feed_import_youtube_channel content'] = array(
    'name' => 'edit own feed_import_youtube_channel content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own social_media_update content'.
  $permissions['edit own social_media_update content'] = array(
    'name' => 'edit own social_media_update content',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'import kada_facebook_json feeds'.
  $permissions['import kada_facebook_json feeds'] = array(
    'name' => 'import kada_facebook_json feeds',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import kada_instagram feeds'.
  $permissions['import kada_instagram feeds'] = array(
    'name' => 'import kada_instagram feeds',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import kada_linkedin_json feeds'.
  $permissions['import kada_linkedin_json feeds'] = array(
    'name' => 'import kada_linkedin_json feeds',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import kada_tweets_json feeds'.
  $permissions['import kada_tweets_json feeds'] = array(
    'name' => 'import kada_tweets_json feeds',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import kada_youtube_channel feeds'.
  $permissions['import kada_youtube_channel feeds'] = array(
    'name' => 'import kada_youtube_channel feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'tamper kada_facebook_json'.
  $permissions['tamper kada_facebook_json'] = array(
    'name' => 'tamper kada_facebook_json',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper kada_tweets_json'.
  $permissions['tamper kada_tweets_json'] = array(
    'name' => 'tamper kada_tweets_json',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper kada_youtube_channel'.
  $permissions['tamper kada_youtube_channel'] = array(
    'name' => 'tamper kada_youtube_channel',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock kada_facebook_json feeds'.
  $permissions['unlock kada_facebook_json feeds'] = array(
    'name' => 'unlock kada_facebook_json feeds',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock kada_instagram feeds'.
  $permissions['unlock kada_instagram feeds'] = array(
    'name' => 'unlock kada_instagram feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock kada_linkedin_json feeds'.
  $permissions['unlock kada_linkedin_json feeds'] = array(
    'name' => 'unlock kada_linkedin_json feeds',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock kada_tweets_json feeds'.
  $permissions['unlock kada_tweets_json feeds'] = array(
    'name' => 'unlock kada_tweets_json feeds',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock kada_youtube_channel feeds'.
  $permissions['unlock kada_youtube_channel feeds'] = array(
    'name' => 'unlock kada_youtube_channel feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'update feed_import_facebook content on assigned domains'.
  $permissions['update feed_import_facebook content on assigned domains'] = array(
    'name' => 'update feed_import_facebook content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update feed_import_instagram content on assigned domains'.
  $permissions['update feed_import_instagram content on assigned domains'] = array(
    'name' => 'update feed_import_instagram content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update feed_import_twitter content on assigned domains'.
  $permissions['update feed_import_twitter content on assigned domains'] = array(
    'name' => 'update feed_import_twitter content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'update feed_import_youtube_channel content on assigned domains'.
  $permissions['update feed_import_youtube_channel content on assigned domains'] = array(
    'name' => 'update feed_import_youtube_channel content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'update social_media_update content on assigned domains'.
  $permissions['update social_media_update content on assigned domains'] = array(
    'name' => 'update social_media_update content on assigned domains',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'view any node feed_import_facebook page'.
  $permissions['view any node feed_import_facebook page'] = array(
    'name' => 'view any node feed_import_facebook page',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'restrict_node_page_view',
  );

  // Exported permission: 'view any node feed_import_instagram page'.
  $permissions['view any node feed_import_instagram page'] = array(
    'name' => 'view any node feed_import_instagram page',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'restrict_node_page_view',
  );

  // Exported permission: 'view any node feed_import_twitter page'.
  $permissions['view any node feed_import_twitter page'] = array(
    'name' => 'view any node feed_import_twitter page',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'restrict_node_page_view',
  );

  // Exported permission: 'view any node feed_import_youtube_channel page'.
  $permissions['view any node feed_import_youtube_channel page'] = array(
    'name' => 'view any node feed_import_youtube_channel page',
    'roles' => array(
      'admin' => 'admin',
      'web journalist' => 'web journalist',
    ),
    'module' => 'restrict_node_page_view',
  );

  // Exported permission: 'view any node social_media_update page'.
  $permissions['view any node social_media_update page'] = array(
    'name' => 'view any node social_media_update page',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'restrict_node_page_view',
  );

  // Exported permission: 'view any unpublished feed_import_facebook content'.
  $permissions['view any unpublished feed_import_facebook content'] = array(
    'name' => 'view any unpublished feed_import_facebook content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished feed_import_instagram content'.
  $permissions['view any unpublished feed_import_instagram content'] = array(
    'name' => 'view any unpublished feed_import_instagram content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished feed_import_twitter content'.
  $permissions['view any unpublished feed_import_twitter content'] = array(
    'name' => 'view any unpublished feed_import_twitter content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished feed_import_youtube_channel content'.
  $permissions['view any unpublished feed_import_youtube_channel content'] = array(
    'name' => 'view any unpublished feed_import_youtube_channel content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished social_media_update content'.
  $permissions['view any unpublished social_media_update content'] = array(
    'name' => 'view any unpublished social_media_update content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
