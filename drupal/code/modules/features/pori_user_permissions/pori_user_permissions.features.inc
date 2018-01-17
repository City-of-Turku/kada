<?php
/**
 * @file
 * pori_user_permissions.features.inc
 */

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
  if (isset($data['create attraction_card content'])) {
    $data['create attraction_card content']['roles']['web journalist'] = 'web journalist'; /* WAS: '' */
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
  if (isset($data['delete any place content'])) {
    unset($data['delete any place content']['roles']['web journalist']);
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
  if (isset($data['delete own place content'])) {
    unset($data['delete own place content']['roles']['web journalist']);
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
  if (isset($data['delete revisions'])) {
    unset($data['delete revisions']['roles']['web journalist']);
  }
  if (isset($data['edit any attraction_card content'])) {
    $data['edit any attraction_card content']['roles']['web journalist'] = 'web journalist'; /* WAS: '' */
  }
  if (isset($data['edit own attraction_card content'])) {
    $data['edit own attraction_card content']['roles']['web journalist'] = 'web journalist'; /* WAS: '' */
  }
}
