<?php
/**
 * @file
 * pori_blog.features.inc
 */

/**
 * Implements hook_ds_field_settings_info_alter().
 */
function pori_blog_ds_field_settings_info_alter(&$data) {
  if (isset($data['node|blog_post|current'])) {
    $data['node|blog_post|current']->settings['post_date']['weight'] = 1; /* WAS: 0 */
  }
}

/**
 * Implements hook_ds_layout_settings_info_alter().
 */
function pori_blog_ds_layout_settings_info_alter(&$data) {
  if (isset($data['node|blog_post|current'])) {
    $data['node|blog_post|current']->settings['regions']['header'][0] = 'field_main_image'; /* WAS: 'post_date' */
    $data['node|blog_post|current']->settings['regions']['header'][1] = 'post_date'; /* WAS: 'field_main_image' */
  }
}
