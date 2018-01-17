<?php
/**
 * @file
 * pori_user_permissions.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function pori_user_permissions_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: user_permission
  $overrides["user_permission.access contextual links.roles|authenticated user"] = 'authenticated user';
  $overrides["user_permission.administer nodes.roles|content editor"]["DELETED"] = TRUE;
  $overrides["user_permission.administer nodes.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.administer taxonomy.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.create attraction_card content.roles|web journalist"] = 'web journalist';
  $overrides["user_permission.delete any blog content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any blog_post content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any event content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any feed_import_facebook content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any feed_import_instagram content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any feed_import_twitter content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any landing_page content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any liftup content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any news_item content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any page content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any place content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any section content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any service content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any service_offer content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any social_media_update content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own blog content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own blog_post content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own event content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own feed_import_facebook content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own feed_import_instagram content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own feed_import_twitter content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own landing_page content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own liftup content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own news_item content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own page content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own place content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own section content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own service content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own service_offer content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own social_media_update content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete revisions.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.edit any attraction_card content.roles|web journalist"] = 'web journalist';
  $overrides["user_permission.edit own attraction_card content.roles|web journalist"] = 'web journalist';

 return $overrides;
}
