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
 * Implements hook_context_default_contexts_alter().
 */
function pori_front_page_liftups_context_default_contexts_alter(&$data) {
  if (isset($data['front_page'])) {
    $data['front_page']->conditions['context'] = array(
      'values' => array(
        '~visitpori_domain' => '~visitpori_domain',
      ),
    ); /* WAS: '' */
    $data['front_page']->reactions['block']['blocks']['quicktabs-feed_tabs_frontpage_promoted_con'] = array(
      'module' => 'quicktabs',
      'delta' => 'feed_tabs_frontpage_promoted_con',
      'region' => 'before_content',
      'weight' => -10,
    ); /* WAS: '' */
    $data['front_page']->reactions['block']['blocks']['views-kada_news-block_1'] = array(
      'module' => 'views',
      'delta' => 'kada_news-block_1',
      'region' => 'highlighted',
      'weight' => -10,
    ); /* WAS: '' */
    $data['front_page']->reactions['block']['blocks']['views-kada_project_liftups-block_1'] = array(
      'module' => 'views',
      'delta' => 'kada_project_liftups-block_1',
      'region' => 'before_footer',
      'weight' => -10,
    ); /* WAS: '' */
    $data['front_page']->reactions['block']['blocks']['views-kada_recommended-block_1'] = array(
      'module' => 'views',
      'delta' => 'kada_recommended-block_1',
      'region' => 'header',
      'weight' => -8,
    ); /* WAS: '' */
    $data['front_page']->reactions['block']['blocks']['views-kada_top_carousel-block_1'] = array(
      'module' => 'views',
      'delta' => 'kada_top_carousel-block_1',
      'region' => 'header',
      'weight' => -10,
    ); /* WAS: '' */
    unset($data['front_page']->reactions['block']['blocks']['views-kada_news-front_block']);
    unset($data['front_page']->reactions['block']['blocks']['views-kada_recommended-block']);
  }
}

/**
 * Implements hook_quicktabs_default_quicktabs_alter().
 */
function pori_front_page_liftups_quicktabs_default_quicktabs_alter(&$data) {
  if (isset($data['feed_tabs'])) {
    $data['feed_tabs']->ajax = 1; /* WAS: 0 */
    $data['feed_tabs']->renderer = 'ui_tabs'; /* WAS: 'quicktabs' */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function pori_front_page_liftups_views_default_views_alter(&$data) {
  if (isset($data['kada_news'])) {
    unset($data['kada_news']->display['block_1']->display_options['defaults']['query']);
    unset($data['kada_news']->display['block_1']->display_options['query']['options']['distinct']);
  }
}
