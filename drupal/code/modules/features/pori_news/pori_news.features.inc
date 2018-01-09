<?php
/**
 * @file
 * pori_news.features.inc
 */

/**
 * Implements hook_views_api().
 */
function pori_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_context_default_contexts_alter().
 */
function pori_news_context_default_contexts_alter(&$data) {
  if (isset($data['footer_menu'])) {
    $data['footer_menu']->conditions['context']['values']['news_list'] = 'news_list'; /* WAS: '' */
  }
  if (isset($data['main_menu'])) {
    $data['main_menu']->conditions['context']['values']['news_list'] = 'news_list'; /* WAS: '' */
  }
  if (isset($data['news_list'])) {
    $data['news_list']->conditions['path']['values']['news-archive'] = 'news-archive'; /* WAS: '' */
    $data['news_list']->description = 'News archive'; /* WAS: 'News archive/list' */
    unset($data['news_list']->conditions['path']['values']['news']);
    unset($data['news_list']->reactions['block']);
  }
  if (isset($data['top_menu'])) {
    $data['top_menu']->conditions['context']['values']['news_list'] = 'news_list'; /* WAS: '' */
  }
}

/**
 * Implements hook_ds_field_settings_info_alter().
 */
function pori_news_ds_field_settings_info_alter(&$data) {
  if (isset($data['node|news_item|current'])) {
    $data['node|news_item|current']->settings['links']['weight'] = 4; /* WAS: 5 */
    $data['node|news_item|current']->settings['post_date']['weight'] = 1; /* WAS: 0 */
    $data['node|news_item|current']->settings['title']['weight'] = 2; /* WAS: 3 */
  }
}

/**
 * Implements hook_ds_layout_settings_info_alter().
 */
function pori_news_ds_layout_settings_info_alter(&$data) {
  if (isset($data['node|news_item|current'])) {
    $data['node|news_item|current']->settings['regions']['header'][0] = 'field_content_image'; /* WAS: 'post_date' */
    $data['node|news_item|current']->settings['regions']['header'][1] = 'post_date'; /* WAS: 'field_content_image' */
    $data['node|news_item|current']->settings['regions']['main'][2] = 'title'; /* WAS: '' */
    $data['node|news_item|current']->settings['regions']['main'][3] = 'field_lead_paragraph_long_text'; /* WAS: 'title' */
    $data['node|news_item|current']->settings['regions']['main'][4] = 'links'; /* WAS: 'field_lead_paragraph_long_text' */
    unset($data['node|news_item|current']->settings['fields']['field_vignette']);
    unset($data['node|news_item|current']->settings['regions']['header'][2]);
    unset($data['node|news_item|current']->settings['regions']['main'][5]);
  }
}
