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
    $data['node|social_media_update|current']->settings['post_date']['weight'] = 1; /* WAS: 17 */
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
    $data['node|social_media_update|current']->layout = 'liftup_current_layout'; /* WAS: 'ds_1col' */
    $data['node|social_media_update|current']->settings['fields']['body'] = 'main'; /* WAS: 'ds_content' */
    $data['node|social_media_update|current']->settings['fields']['field_image'] = 'header'; /* WAS: 'ds_content' */
    $data['node|social_media_update|current']->settings['fields']['field_image_url'] = 'main'; /* WAS: 'ds_content' */
    $data['node|social_media_update|current']->settings['fields']['field_link'] = 'main'; /* WAS: 'ds_content' */
    $data['node|social_media_update|current']->settings['fields']['field_share_caption'] = 'main'; /* WAS: 'ds_content' */
    $data['node|social_media_update|current']->settings['fields']['field_share_description'] = 'main'; /* WAS: 'ds_content' */
    $data['node|social_media_update|current']->settings['fields']['field_some_id'] = 'header'; /* WAS: 'ds_content' */
    $data['node|social_media_update|current']->settings['fields']['group_top'] = 'header'; /* WAS: 'ds_content' */
    $data['node|social_media_update|current']->settings['fields']['post_date'] = 'header'; /* WAS: 'ds_content' */
    $data['node|social_media_update|current']->settings['layout_disable_css'] = FALSE; /* WAS: '' */
    $data['node|social_media_update|current']->settings['regions']['header'] = array(
      0 => 'field_some_id',
      1 => 'group_top',
      2 => 'field_image',
      3 => 'post_date',
    ); /* WAS: '' */
    $data['node|social_media_update|current']->settings['regions']['main'] = array(
      4 => 'body',
      5 => 'field_link',
      6 => 'field_image_url',
      7 => 'field_share_caption',
      8 => 'field_share_description',
    ); /* WAS: '' */
    $data['node|social_media_update|current']->settings['wrappers']['header'] = 'div'; /* WAS: '' */
    $data['node|social_media_update|current']->settings['wrappers']['main'] = 'div'; /* WAS: '' */
    unset($data['node|social_media_update|current']->settings['regions']['ds_content']);
    unset($data['node|social_media_update|current']->settings['wrappers']['ds_content']);
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function pori_some_content_field_default_field_instances_alter(&$data) {
  if (isset($data['node-social_media_update-body'])) {
    $data['node-social_media_update-body']['display']['current']['weight'] = 2; /* WAS: 1 */
    $data['node-social_media_update-body']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-social_media_update-field_district'])) {
    $data['node-social_media_update-field_district']['display']['current']['weight'] = 25; /* WAS: 0 */
    $data['node-social_media_update-field_district']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-social_media_update-field_image'])) {
    $data['node-social_media_update-field_image']['display']['current']['settings']['image_link'] = 'content'; /* WAS: '' */
    $data['node-social_media_update-field_image']['display']['current']['weight'] = 1; /* WAS: 2 */
    $data['node-social_media_update-field_image']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-social_media_update-field_image_url'])) {
    $data['node-social_media_update-field_image_url']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-social_media_update-field_keywords'])) {
    $data['node-social_media_update-field_keywords']['display']['current']['weight'] = 22; /* WAS: 0 */
    $data['node-social_media_update-field_keywords']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-social_media_update-field_keywords']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'allow'; /* WAS: '' */
  }
  if (isset($data['node-social_media_update-field_link'])) {
    $data['node-social_media_update-field_link']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-social_media_update-field_location'])) {
    $data['node-social_media_update-field_location']['display']['current']['weight'] = 23; /* WAS: 0 */
    $data['node-social_media_update-field_location']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-social_media_update-field_location_name'])) {
    $data['node-social_media_update-field_location_name']['display']['current']['weight'] = 27; /* WAS: 0 */
    $data['node-social_media_update-field_location_name']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-social_media_update-field_object_id'])) {
    $data['node-social_media_update-field_object_id']['display']['current']['weight'] = 31; /* WAS: 15 */
    $data['node-social_media_update-field_object_id']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-social_media_update-field_share_title'])) {
    $data['node-social_media_update-field_share_title']['display']['current']['weight'] = 29; /* WAS: 5 */
    $data['node-social_media_update-field_share_title']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-social_media_update-field_share_type'])) {
    $data['node-social_media_update-field_share_type']['display']['current']['weight'] = 30; /* WAS: 14 */
    $data['node-social_media_update-field_share_type']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-social_media_update-field_some_id'])) {
    $data['node-social_media_update-field_some_id']['display']['current']['weight'] = 0; /* WAS: 16 */
    $data['node-social_media_update-field_some_id']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-social_media_update-field_some_type'])) {
    $data['node-social_media_update-field_some_type']['display']['current']['weight'] = 28; /* WAS: 1 */
    $data['node-social_media_update-field_some_type']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-social_media_update-field_target_audience'])) {
    $data['node-social_media_update-field_target_audience']['display']['current']['weight'] = 24; /* WAS: 0 */
    $data['node-social_media_update-field_target_audience']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-social_media_update-field_theme'])) {
    $data['node-social_media_update-field_theme']['display']['current']['weight'] = 32; /* WAS: 17 */
    $data['node-social_media_update-field_theme']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-social_media_update-og_group_ref'])) {
    $data['node-social_media_update-og_group_ref']['display']['current']['weight'] = 26; /* WAS: 0 */
    $data['node-social_media_update-og_group_ref']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
}
