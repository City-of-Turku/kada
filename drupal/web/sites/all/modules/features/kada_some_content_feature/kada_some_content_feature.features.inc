<?php

/**
 * @file
 * kada_some_content_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kada_some_content_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "elysia_cron" && $api == "default_elysia_cron_rules") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function kada_some_content_feature_node_info() {
  $items = array(
    'feed_import_facebook' => array(
      'name' => t('Feed import - Facebook'),
      'base' => 'node_content',
      'description' => t('Imports Facebook feed.'),
      'has_title' => '1',
      'title_label' => t('Otsikko'),
      'help' => '',
    ),
    'feed_import_instagram' => array(
      'name' => t('Feed import - Instagram'),
      'base' => 'node_content',
      'description' => t('Feed importer for Instagram'),
      'has_title' => '1',
      'title_label' => t('Otsikko'),
      'help' => '',
    ),
    'feed_import_twitter' => array(
      'name' => t('Feed import - Twitter'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Otsikko'),
      'help' => '',
    ),
    'feed_import_youtube_channel' => array(
      'name' => t('Feed import - Youtube channel'),
      'base' => 'node_content',
      'description' => t('Imports Youtube channel videos.'),
      'has_title' => '1',
      'title_label' => t('Otsikko'),
      'help' => '',
    ),
    'social_media_update' => array(
      'name' => t('Social media update'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Otsikko'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
