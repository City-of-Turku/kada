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
  $overrides["user_permission.delete any news_item content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any place content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete domain content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete news_item content on assigned domains.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own news_item content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own place content.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete place content on assigned domains.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.delete social_media_update content on assigned domains.roles|web journalist"]["DELETED"] = TRUE;
  $overrides["user_permission.view any node place page.roles|admin"] = 'admin';
  $overrides["user_permission.view any node place page.roles|anonymous user"]["DELETED"] = TRUE;
  $overrides["user_permission.view any node place page.roles|authenticated user"]["DELETED"] = TRUE;
  $overrides["user_permission.view any node place page.roles|content editor"] = 'content editor';
  $overrides["user_permission.view any node place page.roles|web journalist"] = 'web journalist';

 return $overrides;
}
