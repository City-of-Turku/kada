<?php
/**
 * @file
 * pori_user_permissions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pori_user_permissions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_user_default_permissions_alter().
 */
function pori_user_permissions_user_default_permissions_alter(&$data) {
  if (isset($data['access contextual links'])) {
    $data['access contextual links']['roles']['authenticated user'] = 'authenticated user'; /* WAS: '' */
  }
  if (isset($data['administer nodes'])) {
    unset($data['administer nodes']['roles']['content editor']);
    unset($data['administer nodes']['roles']['web journalist']);
  }
  if (isset($data['administer taxonomy'])) {
    unset($data['administer taxonomy']['roles']['web journalist']);
  }
  if (isset($data['delete any blog content'])) {
    unset($data['delete any blog content']['roles']['web journalist']);
  }
  if (isset($data['delete any blog_post content'])) {
    unset($data['delete any blog_post content']['roles']['web journalist']);
  }
  if (isset($data['delete any event content'])) {
    unset($data['delete any event content']['roles']['web journalist']);
  }
  if (isset($data['delete any feed_import_facebook content'])) {
    unset($data['delete any feed_import_facebook content']['roles']['web journalist']);
  }
  if (isset($data['delete any feed_import_instagram content'])) {
    unset($data['delete any feed_import_instagram content']['roles']['web journalist']);
  }
  if (isset($data['delete any feed_import_twitter content'])) {
    unset($data['delete any feed_import_twitter content']['roles']['web journalist']);
  }
  if (isset($data['delete any landing_page content'])) {
    unset($data['delete any landing_page content']['roles']['web journalist']);
  }
  if (isset($data['delete any liftup content'])) {
    unset($data['delete any liftup content']['roles']['web journalist']);
  }
  if (isset($data['delete any news_item content'])) {
    unset($data['delete any news_item content']['roles']['web journalist']);
  }
  if (isset($data['delete any page content'])) {
    unset($data['delete any page content']['roles']['web journalist']);
  }
  if (isset($data['delete any person content'])) {
    unset($data['delete any person content']['roles']['web journalist']);
  }
  if (isset($data['delete any place content'])) {
    unset($data['delete any place content']['roles']['web journalist']);
  }
  if (isset($data['delete any position_of_trust content'])) {
    unset($data['delete any position_of_trust content']['roles']['web journalist']);
  }
  if (isset($data['delete any section content'])) {
    unset($data['delete any section content']['roles']['web journalist']);
  }
  if (isset($data['delete any service content'])) {
    unset($data['delete any service content']['roles']['web journalist']);
  }
  if (isset($data['delete any service_offer content'])) {
    unset($data['delete any service_offer content']['roles']['web journalist']);
  }
  if (isset($data['delete any social_media_update content'])) {
    unset($data['delete any social_media_update content']['roles']['web journalist']);
  }
  if (isset($data['delete blog content on assigned domains'])) {
    unset($data['delete blog content on assigned domains']['roles']['web journalist']);
  }
  if (isset($data['delete blog_post content on assigned domains'])) {
    unset($data['delete blog_post content on assigned domains']['roles']['web journalist']);
  }
  if (isset($data['delete domain content'])) {
    unset($data['delete domain content']['roles']['web journalist']);
  }
  if (isset($data['delete event content on assigned domains'])) {
    unset($data['delete event content on assigned domains']['roles']['web journalist']);
  }
  if (isset($data['delete feed_import_facebook content on assigned domains'])) {
    unset($data['delete feed_import_facebook content on assigned domains']['roles']['web journalist']);
  }
  if (isset($data['delete feed_import_instagram content on assigned domains'])) {
    unset($data['delete feed_import_instagram content on assigned domains']['roles']['web journalist']);
  }
  if (isset($data['delete feed_import_twitter content on assigned domains'])) {
    unset($data['delete feed_import_twitter content on assigned domains']['roles']['web journalist']);
  }
  if (isset($data['delete landing_page content on assigned domains'])) {
    unset($data['delete landing_page content on assigned domains']['roles']['web journalist']);
  }
  if (isset($data['delete liftup content on assigned domains'])) {
    unset($data['delete liftup content on assigned domains']['roles']['web journalist']);
  }
  if (isset($data['delete news_item content on assigned domains'])) {
    unset($data['delete news_item content on assigned domains']['roles']['web journalist']);
  }
  if (isset($data['delete own blog content'])) {
    unset($data['delete own blog content']['roles']['web journalist']);
  }
  if (isset($data['delete own blog_post content'])) {
    unset($data['delete own blog_post content']['roles']['web journalist']);
  }
  if (isset($data['delete own event content'])) {
    unset($data['delete own event content']['roles']['web journalist']);
  }
  if (isset($data['delete own feed_import_facebook content'])) {
    unset($data['delete own feed_import_facebook content']['roles']['web journalist']);
  }
  if (isset($data['delete own feed_import_instagram content'])) {
    unset($data['delete own feed_import_instagram content']['roles']['web journalist']);
  }
  if (isset($data['delete own feed_import_twitter content'])) {
    unset($data['delete own feed_import_twitter content']['roles']['web journalist']);
  }
  if (isset($data['delete own landing_page content'])) {
    unset($data['delete own landing_page content']['roles']['web journalist']);
  }
  if (isset($data['delete own liftup content'])) {
    unset($data['delete own liftup content']['roles']['web journalist']);
  }
  if (isset($data['delete own news_item content'])) {
    unset($data['delete own news_item content']['roles']['web journalist']);
  }
  if (isset($data['delete own page content'])) {
    unset($data['delete own page content']['roles']['web journalist']);
  }
  if (isset($data['delete own person content'])) {
    unset($data['delete own person content']['roles']['web journalist']);
  }
  if (isset($data['delete own place content'])) {
    unset($data['delete own place content']['roles']['web journalist']);
  }
  if (isset($data['delete own position_of_trust content'])) {
    unset($data['delete own position_of_trust content']['roles']['web journalist']);
  }
  if (isset($data['delete own section content'])) {
    unset($data['delete own section content']['roles']['web journalist']);
  }
  if (isset($data['delete own service content'])) {
    unset($data['delete own service content']['roles']['web journalist']);
  }
  if (isset($data['delete own service_offer content'])) {
    unset($data['delete own service_offer content']['roles']['web journalist']);
  }
  if (isset($data['delete own social_media_update content'])) {
    unset($data['delete own social_media_update content']['roles']['web journalist']);
  }
  if (isset($data['delete page content on assigned domains'])) {
    unset($data['delete page content on assigned domains']['roles']['web journalist']);
  }
  if (isset($data['delete person content on assigned domains'])) {
    unset($data['delete person content on assigned domains']['roles']['web journalist']);
  }
  if (isset($data['delete place content on assigned domains'])) {
    unset($data['delete place content on assigned domains']['roles']['web journalist']);
  }
  if (isset($data['delete position_of_trust content on assigned domains'])) {
    unset($data['delete position_of_trust content on assigned domains']['roles']['web journalist']);
  }
  if (isset($data['delete revisions'])) {
    unset($data['delete revisions']['roles']['web journalist']);
  }
  if (isset($data['delete section content on assigned domains'])) {
    unset($data['delete section content on assigned domains']['roles']['web journalist']);
  }
  if (isset($data['delete service content on assigned domains'])) {
    unset($data['delete service content on assigned domains']['roles']['web journalist']);
  }
  if (isset($data['delete service_offer content on assigned domains'])) {
    unset($data['delete service_offer content on assigned domains']['roles']['web journalist']);
  }
  if (isset($data['delete social_media_update content on assigned domains'])) {
    unset($data['delete social_media_update content on assigned domains']['roles']['web journalist']);
  }
  if (isset($data['view any node place page'])) {
    $data['view any node place page']['roles']['admin'] = 'admin'; /* WAS: '' */
    $data['view any node place page']['roles']['content editor'] = 'content editor'; /* WAS: '' */
    $data['view any node place page']['roles']['web journalist'] = 'web journalist'; /* WAS: '' */
    unset($data['view any node place page']['roles']['anonymous user']);
    unset($data['view any node place page']['roles']['authenticated user']);
  }
}
