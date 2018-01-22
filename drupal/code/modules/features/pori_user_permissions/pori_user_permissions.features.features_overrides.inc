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
  $overrides["user_permission.delete any person content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any place content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any position_of_trust content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any section content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any service content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any service_offer content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any social_media_update content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete blog content on assigned domains.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete blog_post content on assigned domains.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete domain content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete event content on assigned domains.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete feed_import_facebook content on assigned domains.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete feed_import_instagram content on assigned domains.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete feed_import_twitter content on assigned domains.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete landing_page content on assigned domains.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete liftup content on assigned domains.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete news_item content on assigned domains.roles|web journalist"]["DELETED"] = TRUE;
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
  $overrides["user_permission.delete own person content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own place content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own position_of_trust content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own section content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own service content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own service_offer content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own social_media_update content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete page content on assigned domains.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete person content on assigned domains.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete place content on assigned domains.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete position_of_trust content on assigned domains.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete revisions.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete section content on assigned domains.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete service content on assigned domains.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete service_offer content on assigned domains.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete social_media_update content on assigned domains.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.edit any attraction_card content.roles|web journalist"] = 'web journalist';
  $overrides["user_permission.edit own attraction_card content.roles|web journalist"] = 'web journalist';

 return $overrides;
}
