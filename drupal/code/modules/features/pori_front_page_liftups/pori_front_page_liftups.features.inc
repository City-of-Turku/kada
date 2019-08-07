<?php

/**
 * @file
 * pori_front_page_liftups.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pori_front_page_liftups_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pori_front_page_liftups_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_views_default_views_alter().
 */
function pori_front_page_liftups_views_default_views_alter(&$data) {
  if (isset($data['kada_news'])) {
    $data['kada_news']->display['section_main']->display_options['style_options']['row_class'] = 'main-liftup-row'; /* WAS: '' */
  }
}
