<?php
/**
 * @file
 * tkufi_news_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tkufi_news_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tkufi_news_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function tkufi_news_feature_flag_default_flags() {
  $flags = array();
  // Exported flag: "Emergency message".
  $flags['emergency_message'] = array(
    'entity_type' => 'node',
    'title' => 'Emergency message',
    'global' => 1,
    'types' => array(
      0 => 'news_item',
    ),
    'flag_short' => 'To emergency message',
    'flag_long' => 'Show this in emergency message field',
    'flag_message' => 'In emergency message',
    'unflag_short' => 'From emergency message',
    'unflag_long' => 'Remove this from emergency message',
    'unflag_message' => 'removed from emergency message',
    'unflag_denied_text' => 'In emergency message',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'diff_standard' => 0,
      'token' => 0,
      'carousel' => 0,
      'current' => 0,
      'project' => 0,
      'main_news' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'tkufi_news_feature',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Main news".
  $flags['main_news'] = array(
    'entity_type' => 'node',
    'title' => 'Main news',
    'global' => 1,
    'types' => array(
      0 => 'news_item',
    ),
    'flag_short' => 'To main news',
    'flag_long' => 'Show this in main news on front and section front pages',
    'flag_message' => 'In main news',
    'unflag_short' => 'From main news',
    'unflag_long' => 'Remove this from main news on front and section front pages',
    'unflag_message' => 'Removed from main news',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 0,
      'rss' => 0,
      'diff_standard' => 0,
      'token' => 0,
      'carousel' => 0,
      'current' => 0,
      'project' => 0,
      'main_news' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'tkufi_news_feature',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function tkufi_news_feature_node_info() {
  $items = array(
    'news_item' => array(
      'name' => t('News item'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
