<?php

/**
 * @file
 * pori_attraction_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pori_attraction_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
  if ($module == "scald" && $api == "context_config") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pori_attraction_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function pori_attraction_feature_eck_bundle_info() {
  $items = array(
    'widget_attraction_list' => array(
      'machine_name' => 'widget_attraction_list',
      'entity_type' => 'widget',
      'name' => 'attraction_list',
      'label' => 'Attraction list',
      'config' => array(
        'managed_properties' => array(
          'title' => 0,
          'uid' => 0,
          'created' => 0,
          'changed' => 0,
          'language' => 0,
        ),
        'multilingual' => 1,
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_image_default_styles().
 */
function pori_attraction_feature_image_default_styles() {
  $styles = array();

  // Exported image style: page_carousel.
  $styles['page_carousel'] = array(
    'label' => 'Page carousel',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1080,
          'height' => 527,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: page_carousel_breakpoints_theme_pori_desktop_1x.
  $styles['page_carousel_breakpoints_theme_pori_desktop_1x'] = array(
    'label' => 'page_carousel_breakpoints_theme_pori_desktop_1x',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1080,
          'height' => 527,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: page_carousel_breakpoints_theme_pori_mobile_1x.
  $styles['page_carousel_breakpoints_theme_pori_mobile_1x'] = array(
    'label' => 'page_carousel_breakpoints_theme_pori_mobile_1x',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 234,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: page_carousel_breakpoints_theme_pori_phablet_1x.
  $styles['page_carousel_breakpoints_theme_pori_phablet_1x'] = array(
    'label' => 'page_carousel_breakpoints_theme_pori_phablet_1x',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 688,
          'height' => 336,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: page_carousel_breakpoints_theme_pori_smalldesktop_1x.
  $styles['page_carousel_breakpoints_theme_pori_smalldesktop_1x'] = array(
    'label' => 'page_carousel_breakpoints_theme_pori_smalldesktop_1x',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 715,
          'height' => 349,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: page_carousel_breakpoints_theme_pori_tablet_1x.
  $styles['page_carousel_breakpoints_theme_pori_tablet_1x'] = array(
    'label' => 'page_carousel_breakpoints_theme_pori_tablet_1x',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 880,
          'height' => 429,
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
function pori_attraction_feature_node_info() {
  $items = array(
    'attraction_card' => array(
      'name' => t('Attraction card'),
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
