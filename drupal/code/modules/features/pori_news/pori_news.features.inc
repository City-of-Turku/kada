<?php
/**
 * @file
 * pori_news.features.inc
 */

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
