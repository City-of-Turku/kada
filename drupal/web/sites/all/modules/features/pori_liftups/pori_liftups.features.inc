<?php

/**
 * @file
 * pori_liftups.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pori_liftups_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
  if ($module == "scald" && $api == "context_config") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pori_liftups_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function pori_liftups_flag_default_flags() {
  $flags = array();
  // Exported flag: "Small liftup banner".
  $flags['small_liftup_banner'] = array(
    'entity_type' => 'node',
    'title' => 'Small liftup banner',
    'global' => 1,
    'types' => array(
      0 => 'liftup',
    ),
    'flag_short' => 'To small liftup banner',
    'flag_long' => 'Add this item to small liftup banner on front page',
    'flag_message' => 'Added to small liftup banner',
    'unflag_short' => 'From small liftup banner',
    'unflag_long' => 'Remove this item from small liftup banner',
    'unflag_message' => 'Removed from small liftup banner',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'small_liftup_banner' => 'small_liftup_banner',
      'teaser' => 0,
      'rss' => 0,
      'diff_standard' => 0,
      'live_results_search' => 0,
      'token' => 0,
      'accordion' => 0,
      'carousel' => 0,
      'current' => 0,
      'project' => 0,
      'event_grid_item' => 0,
      'event_list_item' => 0,
      'event_map_item' => 0,
      'event_mosaic_item' => 0,
      'event_search_result' => 0,
      'event_tab_list_item' => 0,
      'event_top_carousel' => 0,
      'main_news' => 0,
      'main_news_wide' => 0,
      'only_title' => 0,
      'map' => 0,
      'attraction_card_mosaic_item' => 0,
      'product' => 0,
      'person_card' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'pori_liftups',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function pori_liftups_image_default_styles() {
  $styles = array();

  // Exported image style: small_liftup_banner.
  $styles['small_liftup_banner'] = array(
    'label' => 'Small liftup banner',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 480,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: small_liftup_banner_theme_kada_dsktp_wide_1x.
  $styles['small_liftup_banner_theme_kada_dsktp_wide_1x'] = array(
    'label' => 'small_liftup_banner_theme_kada_dsktp_wide_1x',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 420,
          'height' => 420,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: small_liftup_banner_theme_kada_mbl_1x.
  $styles['small_liftup_banner_theme_kada_mbl_1x'] = array(
    'label' => 'small_liftup_banner_theme_kada_mbl_1x',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 480,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: small_liftup_banner_theme_kada_mbl_nrw_1x.
  $styles['small_liftup_banner_theme_kada_mbl_nrw_1x'] = array(
    'label' => 'small_liftup_banner_theme_kada_mbl_nrw_1x',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 280,
          'height' => 280,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: small_liftup_banner_theme_kada_mbl_wide_1x.
  $styles['small_liftup_banner_theme_kada_mbl_wide_1x'] = array(
    'label' => 'small_liftup_banner_theme_kada_mbl_wide_1x',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 345,
          'height' => 345,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
