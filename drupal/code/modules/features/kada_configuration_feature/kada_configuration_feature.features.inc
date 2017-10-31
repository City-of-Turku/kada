<?php
/**
 * @file
 * kada_configuration_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kada_configuration_feature_ctools_plugin_api($module = NULL, $api = NULL) {
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
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function kada_configuration_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function kada_configuration_feature_flag_default_flags() {
  $flags = array();
  // Exported flag: "Carousel".
  $flags['carousel'] = array(
    'entity_type' => 'node',
    'title' => 'Carousel',
    'global' => 1,
    'types' => array(
      0 => 'liftup',
    ),
    'flag_short' => 'To Carousel',
    'flag_long' => 'Show this in Carousel',
    'flag_message' => 'In Carousel',
    'unflag_short' => 'From Carousel',
    'unflag_long' => 'Remove this from Carousel',
    'unflag_message' => 'Removed from Carousel',
    'unflag_denied_text' => 'In Carousel',
    'link_type' => 'toggle',
    'weight' => -8,
    'show_in_links' => array(
      'full' => 'full',
      'carousel' => 'carousel',
      'teaser' => 0,
      'rss' => 0,
      'diff_standard' => 0,
      'token' => 0,
      'current' => 0,
      'project' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'kada_configuration_feature',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Current".
  $flags['current'] = array(
    'entity_type' => 'node',
    'title' => 'Current',
    'global' => 1,
    'types' => array(
      0 => 'blog_post',
      1 => 'event',
      2 => 'liftup',
      3 => 'social_media_update',
      4 => 'news_item',
    ),
    'flag_short' => 'To current',
    'flag_long' => 'Show this in current list',
    'flag_message' => 'In current',
    'unflag_short' => 'From current',
    'unflag_long' => 'Remove this from current',
    'unflag_message' => 'Removed from current',
    'unflag_denied_text' => 'In current',
    'link_type' => 'toggle',
    'weight' => -7,
    'show_in_links' => array(
      'full' => 'full',
      'current' => 'current',
      'teaser' => 0,
      'rss' => 0,
      'token' => 0,
      'accordion' => 0,
      'carousel' => 0,
      'project' => 0,
      'event_grid_item' => 0,
      'event_list_item' => 0,
      'event_map_item' => 0,
      'event_tab_list_item' => 0,
      'event_top_carousel' => 0,
      'main_news' => 0,
      'main_news_wide' => 0,
      'only_title' => 0,
      'map' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'kada_configuration_feature',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Project".
  $flags['project'] = array(
    'entity_type' => 'node',
    'title' => 'Project',
    'global' => 1,
    'types' => array(
      0 => 'liftup',
    ),
    'flag_short' => 'To projects',
    'flag_long' => 'Show this in projects',
    'flag_message' => 'In projects',
    'unflag_short' => 'From projects',
    'unflag_long' => 'Remove this from projects',
    'unflag_message' => 'Removed from projects',
    'unflag_denied_text' => 'In projects',
    'link_type' => 'toggle',
    'weight' => -6,
    'show_in_links' => array(
      'full' => 'full',
      'project' => 'project',
      'teaser' => 0,
      'rss' => 0,
      'diff_standard' => 0,
      'token' => 0,
      'carousel' => 0,
      'current' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'kada_configuration_feature',
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
function kada_configuration_feature_image_default_styles() {
  $styles = array();

  // Exported image style: accessibility_icon.
  $styles['accessibility_icon'] = array(
    'label' => 'accessibility_icon',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 40,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function kada_configuration_feature_node_info() {
  $items = array(
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
