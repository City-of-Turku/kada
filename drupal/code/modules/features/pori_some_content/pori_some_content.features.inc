<?php
/**
 * @file
 * pori_some_content.features.inc
 */

/**
 * Implements hook_ds_field_settings_info_alter().
 */
function pori_some_content_ds_field_settings_info_alter(&$data) {
  if (isset($data['node|social_media_update|current'])) {
    $data['node|social_media_update|current']->settings['post_date']['weight'] = 2; /* WAS: 17 */
    unset($data['node|social_media_update|current']->settings['body']);
    unset($data['node|social_media_update|current']->settings['field_image']);
    unset($data['node|social_media_update|current']->settings['field_link']);
    unset($data['node|social_media_update|current']->settings['field_share_caption']);
    unset($data['node|social_media_update|current']->settings['field_share_description']);
    unset($data['node|social_media_update|current']->settings['field_some_id']);
  }
}

/**
 * Implements hook_ds_layout_settings_info_alter().
 */
function pori_some_content_ds_layout_settings_info_alter(&$data) {
  if (isset($data['node|social_media_update|current'])) {
    $data['node|social_media_update|current']->settings['layout_disable_css'] = FALSE; /* WAS: '' */
    $data['node|social_media_update|current']->settings['regions']['ds_content'][1] = 'field_image'; /* WAS: 'body' */
    $data['node|social_media_update|current']->settings['regions']['ds_content'][2] = 'post_date'; /* WAS: 'field_image' */
    $data['node|social_media_update|current']->settings['regions']['ds_content'][3] = 'body'; /* WAS: 'field_link' */
    $data['node|social_media_update|current']->settings['regions']['ds_content'][4] = 'field_link'; /* WAS: 'field_image_url' */
    $data['node|social_media_update|current']->settings['regions']['ds_content'][5] = 'field_image_url'; /* WAS: 'field_share_caption' */
    $data['node|social_media_update|current']->settings['regions']['ds_content'][6] = 'field_share_caption'; /* WAS: 'field_share_description' */
    $data['node|social_media_update|current']->settings['regions']['ds_content'][7] = 'field_share_description'; /* WAS: 'field_some_id' */
    $data['node|social_media_update|current']->settings['regions']['ds_content'][8] = 'field_some_id'; /* WAS: 'post_date' */
  }
}

/**
 * Implements hook_field_group_info_alter().
 */
function pori_some_content_field_group_info_alter(&$data) {
  if (isset($data['group_top|node|social_media_update|current'])) {
    unset($data['group_top|node|social_media_update|current']);
  }
}
