<?php

/**
 * @file
 * pori_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pori_configuration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "elysia_cron" && $api == "default_elysia_cron_rules") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "openlayers_layers") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
  if ($module == "scald" && $api == "context_config") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "video_embed_field" && $api == "default_video_embed_styles") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pori_configuration_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function pori_configuration_flag_default_flags() {
  $flags = array();
  // Exported flag: "Presentation".
  $flags['presentation'] = array(
    'entity_type' => 'node',
    'title' => 'Presentation',
    'global' => 1,
    'types' => array(
      0 => 'liftup',
    ),
    'flag_short' => 'To presentations',
    'flag_long' => 'Show this in presentations',
    'flag_message' => 'In presentations',
    'unflag_short' => 'From presentations',
    'unflag_long' => 'Remove this from presentations',
    'unflag_message' => 'Removed from presentations',
    'unflag_denied_text' => 'In presentations',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'presentation' => 'presentation',
      'full' => 0,
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
      'contact_card' => 0,
      'person_card' => 0,
      'person_card_with_skills' => 0,
      'small_liftup_banner' => 0,
      'waste_map' => 0,
      'waste_search' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'pori_configuration',
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
function pori_configuration_image_default_styles() {
  $styles = array();

  // Exported image style: content_250_wide.
  $styles['content_250_wide'] = array(
    'label' => 'Content 250 wide',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 250,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: person_breakpoints_theme_kada_desktopwide_1x.
  $styles['person_breakpoints_theme_kada_desktopwide_1x'] = array(
    'label' => 'person_breakpoints_theme_kada_desktopwide_1x',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 350,
          'height' => 350,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
