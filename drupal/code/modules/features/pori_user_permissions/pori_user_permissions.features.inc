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
  if (isset($data['delete any news_item content'])) {
    unset($data['delete any news_item content']['roles']['web journalist']);
  }
  if (isset($data['delete any place content'])) {
    unset($data['delete any place content']['roles']['web journalist']);
  }
  if (isset($data['delete domain content'])) {
    unset($data['delete domain content']['roles']['web journalist']);
  }
  if (isset($data['delete news_item content on assigned domains'])) {
    unset($data['delete news_item content on assigned domains']['roles']['web journalist']);
  }
  if (isset($data['delete own news_item content'])) {
    unset($data['delete own news_item content']['roles']['web journalist']);
  }
  if (isset($data['delete own place content'])) {
    unset($data['delete own place content']['roles']['web journalist']);
  }
  if (isset($data['delete place content on assigned domains'])) {
    unset($data['delete place content on assigned domains']['roles']['web journalist']);
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
