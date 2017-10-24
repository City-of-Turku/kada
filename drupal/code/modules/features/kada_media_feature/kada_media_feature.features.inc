<?php
/**
 * @file
 * kada_media_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kada_media_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
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
function kada_media_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function kada_media_feature_image_default_styles() {
  $styles = array();

  // Exported image style: content_full.
  $styles['content_full'] = array(
    'label' => 'Content full',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1288,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: content_full_16_9.
  $styles['content_full_16_9'] = array(
    'label' => 'Content full 16:9',
    'effects' => array(
      37 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1288,
          'height' => 725,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: content_full_16_9_breakpoints_theme_kada_desktop_1x.
  $styles['content_full_16_9_breakpoints_theme_kada_desktop_1x'] = array(
    'label' => 'content_full_16_9_breakpoints_theme_kada_desktop_1x',
    'effects' => array(
      38 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1288,
          'height' => 725,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: content_full_16_9_breakpoints_theme_kada_mobile_1x.
  $styles['content_full_16_9_breakpoints_theme_kada_mobile_1x'] = array(
    'label' => 'content_full_16_9_breakpoints_theme_kada_mobile_1x',
    'effects' => array(
      39 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 288,
          'height' => 162,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: content_full_16_9_breakpoints_theme_kada_phablet_1x.
  $styles['content_full_16_9_breakpoints_theme_kada_phablet_1x'] = array(
    'label' => 'content_full_16_9_breakpoints_theme_kada_phablet_1x',
    'effects' => array(
      40 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 518,
          'height' => 291,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: content_full_16_9_breakpoints_theme_kada_smalldesktop_1x.
  $styles['content_full_16_9_breakpoints_theme_kada_smalldesktop_1x'] = array(
    'label' => 'content_full_16_9_breakpoints_theme_kada_smalldesktop_1x',
    'effects' => array(
      41 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1106,
          'height' => 622,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: content_full_16_9_breakpoints_theme_kada_tablet_1x.
  $styles['content_full_16_9_breakpoints_theme_kada_tablet_1x'] = array(
    'label' => 'content_full_16_9_breakpoints_theme_kada_tablet_1x',
    'effects' => array(
      42 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 736,
          'height' => 414,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: content_full_breakpoints_theme_kada_desktop_1x.
  $styles['content_full_breakpoints_theme_kada_desktop_1x'] = array(
    'label' => 'content_full_breakpoints_theme_kada_desktop_1x',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1288,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: content_full_breakpoints_theme_kada_mobile_1x.
  $styles['content_full_breakpoints_theme_kada_mobile_1x'] = array(
    'label' => 'content_full_breakpoints_theme_kada_mobile_1x',
    'effects' => array(
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 288,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: content_full_breakpoints_theme_kada_phablet_1x.
  $styles['content_full_breakpoints_theme_kada_phablet_1x'] = array(
    'label' => 'content_full_breakpoints_theme_kada_phablet_1x',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 518,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: content_full_breakpoints_theme_kada_smalldesktop_1x.
  $styles['content_full_breakpoints_theme_kada_smalldesktop_1x'] = array(
    'label' => 'content_full_breakpoints_theme_kada_smalldesktop_1x',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1106,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: content_full_breakpoints_theme_kada_tablet_1x.
  $styles['content_full_breakpoints_theme_kada_tablet_1x'] = array(
    'label' => 'content_full_breakpoints_theme_kada_tablet_1x',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 736,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: content_half.
  $styles['content_half'] = array(
    'label' => 'Content half',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 644,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: content_half_16_9.
  $styles['content_half_16_9'] = array(
    'label' => 'Content half 16:9',
    'effects' => array(
      31 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 644,
          'height' => 362,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: content_half_16_9_breakpoints_theme_kada_desktop_1x.
  $styles['content_half_16_9_breakpoints_theme_kada_desktop_1x'] = array(
    'label' => 'content_half_16_9_breakpoints_theme_kada_desktop_1x',
    'effects' => array(
      32 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 644,
          'height' => 362,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: content_half_16_9_breakpoints_theme_kada_mobile_1x.
  $styles['content_half_16_9_breakpoints_theme_kada_mobile_1x'] = array(
    'label' => 'content_half_16_9_breakpoints_theme_kada_mobile_1x',
    'effects' => array(
      33 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 288,
          'height' => 162,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: content_half_16_9_breakpoints_theme_kada_phablet_1x.
  $styles['content_half_16_9_breakpoints_theme_kada_phablet_1x'] = array(
    'label' => 'content_half_16_9_breakpoints_theme_kada_phablet_1x',
    'effects' => array(
      34 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 518,
          'height' => 291,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: content_half_16_9_breakpoints_theme_kada_smalldesktop_1x.
  $styles['content_half_16_9_breakpoints_theme_kada_smalldesktop_1x'] = array(
    'label' => 'content_half_16_9_breakpoints_theme_kada_smalldesktop_1x',
    'effects' => array(
      35 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 533,
          'height' => 300,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: content_half_16_9_breakpoints_theme_kada_tablet_1x.
  $styles['content_half_16_9_breakpoints_theme_kada_tablet_1x'] = array(
    'label' => 'content_half_16_9_breakpoints_theme_kada_tablet_1x',
    'effects' => array(
      36 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 368,
          'height' => 207,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: content_half_breakpoints_theme_kada_desktop_1x.
  $styles['content_half_breakpoints_theme_kada_desktop_1x'] = array(
    'label' => 'content_half_breakpoints_theme_kada_desktop_1x',
    'effects' => array(
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 644,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: content_half_breakpoints_theme_kada_mobile_1x.
  $styles['content_half_breakpoints_theme_kada_mobile_1x'] = array(
    'label' => 'content_half_breakpoints_theme_kada_mobile_1x',
    'effects' => array(
      12 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 288,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: content_half_breakpoints_theme_kada_phablet_1x.
  $styles['content_half_breakpoints_theme_kada_phablet_1x'] = array(
    'label' => 'content_half_breakpoints_theme_kada_phablet_1x',
    'effects' => array(
      11 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 518,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: content_half_breakpoints_theme_kada_smalldesktop_1x.
  $styles['content_half_breakpoints_theme_kada_smalldesktop_1x'] = array(
    'label' => 'content_half_breakpoints_theme_kada_smalldesktop_1x',
    'effects' => array(
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 533,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: content_half_breakpoints_theme_kada_tablet_1x.
  $styles['content_half_breakpoints_theme_kada_tablet_1x'] = array(
    'label' => 'content_half_breakpoints_theme_kada_tablet_1x',
    'effects' => array(
      10 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 368,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: current.
  $styles['current'] = array(
    'label' => 'Current',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 315,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: event_list_image.
  $styles['event_list_image'] = array(
    'label' => 'Event list image',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 231,
          'height' => 231,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: event_list_image_breakpoints_theme_kada_desktop_1x.
  $styles['event_list_image_breakpoints_theme_kada_desktop_1x'] = array(
    'label' => 'event_list_image_breakpoints_theme_kada_desktop_1x',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 231,
          'height' => 231,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: event_list_image_breakpoints_theme_kada_mobile_1x.
  $styles['event_list_image_breakpoints_theme_kada_mobile_1x'] = array(
    'label' => 'event_list_image_breakpoints_theme_kada_mobile_1x',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 231,
          'height' => 231,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: event_list_image_breakpoints_theme_kada_phablet_1x.
  $styles['event_list_image_breakpoints_theme_kada_phablet_1x'] = array(
    'label' => 'event_list_image_breakpoints_theme_kada_phablet_1x',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 231,
          'height' => 231,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: event_list_image_breakpoints_theme_kada_smalldesktop_1x.
  $styles['event_list_image_breakpoints_theme_kada_smalldesktop_1x'] = array(
    'label' => 'event_list_image_breakpoints_theme_kada_smalldesktop_1x',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 231,
          'height' => 231,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: event_list_image_breakpoints_theme_kada_tablet_1x.
  $styles['event_list_image_breakpoints_theme_kada_tablet_1x'] = array(
    'label' => 'event_list_image_breakpoints_theme_kada_tablet_1x',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 231,
          'height' => 231,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: event_node.
  $styles['event_node'] = array(
    'label' => 'Event node',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1320,
          'height' => 504,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: event_node_breakpoints_theme_kada_desktop_1x.
  $styles['event_node_breakpoints_theme_kada_desktop_1x'] = array(
    'label' => 'event_node_breakpoints_theme_kada_desktop_1x',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1320,
          'height' => 504,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: event_node_breakpoints_theme_kada_mobile_1x.
  $styles['event_node_breakpoints_theme_kada_mobile_1x'] = array(
    'label' => 'event_node_breakpoints_theme_kada_mobile_1x',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 360,
          'height' => 360,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: event_node_breakpoints_theme_kada_phablet_1x.
  $styles['event_node_breakpoints_theme_kada_phablet_1x'] = array(
    'label' => 'event_node_breakpoints_theme_kada_phablet_1x',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 520,
          'height' => 360,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: event_node_breakpoints_theme_kada_smalldesktop_1x.
  $styles['event_node_breakpoints_theme_kada_smalldesktop_1x'] = array(
    'label' => 'event_node_breakpoints_theme_kada_smalldesktop_1x',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1138,
          'height' => 504,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: event_node_breakpoints_theme_kada_tablet_1x.
  $styles['event_node_breakpoints_theme_kada_tablet_1x'] = array(
    'label' => 'event_node_breakpoints_theme_kada_tablet_1x',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 768,
          'height' => 504,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: event_tab_item.
  $styles['event_tab_item'] = array(
    'label' => 'Event tab item',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 90,
          'height' => 90,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: event_top_carousel.
  $styles['event_top_carousel'] = array(
    'label' => 'Event top carousel',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 862,
          'height' => 446,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: full_modal.
  $styles['full_modal'] = array(
    'label' => 'Full modal',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 800,
          'height' => 600,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: full_modal_breakpoints_theme_kada_desktop_1x.
  $styles['full_modal_breakpoints_theme_kada_desktop_1x'] = array(
    'label' => 'full_modal_breakpoints_theme_kada_desktop_1x',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1138,
          'height' => 854,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: full_modal_breakpoints_theme_kada_mobile_1x.
  $styles['full_modal_breakpoints_theme_kada_mobile_1x'] = array(
    'label' => 'full_modal_breakpoints_theme_kada_mobile_1x',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => 225,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: full_modal_breakpoints_theme_kada_phablet_1x.
  $styles['full_modal_breakpoints_theme_kada_phablet_1x'] = array(
    'label' => 'full_modal_breakpoints_theme_kada_phablet_1x',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 321,
          'height' => 241,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: full_modal_breakpoints_theme_kada_smalldesktop_1x.
  $styles['full_modal_breakpoints_theme_kada_smalldesktop_1x'] = array(
    'label' => 'full_modal_breakpoints_theme_kada_smalldesktop_1x',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 769,
          'height' => 577,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: full_modal_breakpoints_theme_kada_tablet_1x.
  $styles['full_modal_breakpoints_theme_kada_tablet_1x'] = array(
    'label' => 'full_modal_breakpoints_theme_kada_tablet_1x',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 551,
          'height' => 413,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: grid_item.
  $styles['grid_item'] = array(
    'label' => 'Grid item',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 330,
          'height' => 330,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: grid_item_breakpoints_theme_kada_desktop_1x.
  $styles['grid_item_breakpoints_theme_kada_desktop_1x'] = array(
    'label' => 'grid_item_breakpoints_theme_kada_desktop_1x',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 330,
          'height' => 330,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: grid_item_breakpoints_theme_kada_mobile_1x.
  $styles['grid_item_breakpoints_theme_kada_mobile_1x'] = array(
    'label' => 'grid_item_breakpoints_theme_kada_mobile_1x',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 330,
          'height' => 330,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: grid_item_breakpoints_theme_kada_phablet_1x.
  $styles['grid_item_breakpoints_theme_kada_phablet_1x'] = array(
    'label' => 'grid_item_breakpoints_theme_kada_phablet_1x',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 330,
          'height' => 330,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: grid_item_breakpoints_theme_kada_smalldesktop_1x.
  $styles['grid_item_breakpoints_theme_kada_smalldesktop_1x'] = array(
    'label' => 'grid_item_breakpoints_theme_kada_smalldesktop_1x',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 330,
          'height' => 330,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: grid_item_breakpoints_theme_kada_tablet_1x.
  $styles['grid_item_breakpoints_theme_kada_tablet_1x'] = array(
    'label' => 'grid_item_breakpoints_theme_kada_tablet_1x',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 330,
          'height' => 330,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: main_content.
  $styles['main_content'] = array(
    'label' => 'Main content',
    'effects' => array(
      16 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 649,
          'height' => 401,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: main_content_breakpoints_theme_kada_desktop_1x.
  $styles['main_content_breakpoints_theme_kada_desktop_1x'] = array(
    'label' => 'main_content_breakpoints_theme_kada_desktop_1x',
    'effects' => array(
      17 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 649,
          'height' => 401,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: main_content_breakpoints_theme_kada_mobile_1x.
  $styles['main_content_breakpoints_theme_kada_mobile_1x'] = array(
    'label' => 'main_content_breakpoints_theme_kada_mobile_1x',
    'effects' => array(
      21 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 288,
          'height' => 178,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: main_content_breakpoints_theme_kada_phablet_1x.
  $styles['main_content_breakpoints_theme_kada_phablet_1x'] = array(
    'label' => 'main_content_breakpoints_theme_kada_phablet_1x',
    'effects' => array(
      20 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 518,
          'height' => 320,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: main_content_breakpoints_theme_kada_smalldesktop_1x.
  $styles['main_content_breakpoints_theme_kada_smalldesktop_1x'] = array(
    'label' => 'main_content_breakpoints_theme_kada_smalldesktop_1x',
    'effects' => array(
      18 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 559,
          'height' => 345,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: main_content_breakpoints_theme_kada_tablet_1x.
  $styles['main_content_breakpoints_theme_kada_tablet_1x'] = array(
    'label' => 'main_content_breakpoints_theme_kada_tablet_1x',
    'effects' => array(
      19 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 736,
          'height' => 455,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: main_liftup_narrow.
  $styles['main_liftup_narrow'] = array(
    'label' => 'Main liftup, narrow',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 334,
          'height' => 415,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: main_liftup_narrow_breakpoints_theme_kada_desktop_1x.
  $styles['main_liftup_narrow_breakpoints_theme_kada_desktop_1x'] = array(
    'label' => 'main_liftup_narrow_breakpoints_theme_kada_desktop_1x',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 327,
          'height' => 406,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: main_liftup_narrow_breakpoints_theme_kada_mobile_1x.
  $styles['main_liftup_narrow_breakpoints_theme_kada_mobile_1x'] = array(
    'label' => 'main_liftup_narrow_breakpoints_theme_kada_mobile_1x',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: main_liftup_narrow_breakpoints_theme_kada_phablet_1x.
  $styles['main_liftup_narrow_breakpoints_theme_kada_phablet_1x'] = array(
    'label' => 'main_liftup_narrow_breakpoints_theme_kada_phablet_1x',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 545,
          'height' => 337,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: main_liftup_narrow_breakpoints_theme_kada_smalldesktop_1x.
  $styles['main_liftup_narrow_breakpoints_theme_kada_smalldesktop_1x'] = array(
    'label' => 'main_liftup_narrow_breakpoints_theme_kada_smalldesktop_1x',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 558,
          'height' => 344,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: main_liftup_narrow_breakpoints_theme_kada_tablet_1x.
  $styles['main_liftup_narrow_breakpoints_theme_kada_tablet_1x'] = array(
    'label' => 'main_liftup_narrow_breakpoints_theme_kada_tablet_1x',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 768,
          'height' => 475,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: main_liftup_wide.
  $styles['main_liftup_wide'] = array(
    'label' => 'Main liftup, wide',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 650,
          'height' => 320,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: main_liftup_wide_breakpoints_theme_kada_desktop_1x.
  $styles['main_liftup_wide_breakpoints_theme_kada_desktop_1x'] = array(
    'label' => 'main_liftup_wide_breakpoints_theme_kada_desktop_1x',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 564,
          'height' => 322,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: main_liftup_wide_breakpoints_theme_kada_mobile_1x.
  $styles['main_liftup_wide_breakpoints_theme_kada_mobile_1x'] = array(
    'label' => 'main_liftup_wide_breakpoints_theme_kada_mobile_1x',
    'effects' => array(
      15 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: main_liftup_wide_breakpoints_theme_kada_phablet_1x.
  $styles['main_liftup_wide_breakpoints_theme_kada_phablet_1x'] = array(
    'label' => 'main_liftup_wide_breakpoints_theme_kada_phablet_1x',
    'effects' => array(
      14 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 545,
          'height' => 337,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: main_liftup_wide_breakpoints_theme_kada_smalldesktop_1x.
  $styles['main_liftup_wide_breakpoints_theme_kada_smalldesktop_1x'] = array(
    'label' => 'main_liftup_wide_breakpoints_theme_kada_smalldesktop_1x',
    'effects' => array(
      12 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 563,
          'height' => 410,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: main_liftup_wide_breakpoints_theme_kada_tablet_1x.
  $styles['main_liftup_wide_breakpoints_theme_kada_tablet_1x'] = array(
    'label' => 'main_liftup_wide_breakpoints_theme_kada_tablet_1x',
    'effects' => array(
      13 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 768,
          'height' => 474,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: opengraph.
  $styles['opengraph'] = array(
    'label' => 'OpenGraph',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: person.
  $styles['person'] = array(
    'label' => 'Person',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 225,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: person_breakpoints_theme_kada_mobile_1x.
  $styles['person_breakpoints_theme_kada_mobile_1x'] = array(
    'label' => 'person_breakpoints_theme_kada_mobile_1x',
    'effects' => array(
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 500,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: person_breakpoints_theme_kada_phablet_1x.
  $styles['person_breakpoints_theme_kada_phablet_1x'] = array(
    'label' => 'person_breakpoints_theme_kada_phablet_1x',
    'effects' => array(
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 400,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: person_breakpoints_theme_kada_smalldesktop_1x.
  $styles['person_breakpoints_theme_kada_smalldesktop_1x'] = array(
    'label' => 'person_breakpoints_theme_kada_smalldesktop_1x',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 225,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: project.
  $styles['project'] = array(
    'label' => 'Project',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 768,
          'height' => 487,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: project_breakpoints_theme_kada_mobile_1x.
  $styles['project_breakpoints_theme_kada_mobile_1x'] = array(
    'label' => 'project_breakpoints_theme_kada_mobile_1x',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 203,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: project_breakpoints_theme_kada_phablet_1x.
  $styles['project_breakpoints_theme_kada_phablet_1x'] = array(
    'label' => 'project_breakpoints_theme_kada_phablet_1x',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 550,
          'height' => 349,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: project_breakpoints_theme_kada_smalldesktop_1x.
  $styles['project_breakpoints_theme_kada_smalldesktop_1x'] = array(
    'label' => 'project_breakpoints_theme_kada_smalldesktop_1x',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 653,
          'height' => 414,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: project_breakpoints_theme_kada_tablet_1x.
  $styles['project_breakpoints_theme_kada_tablet_1x'] = array(
    'label' => 'project_breakpoints_theme_kada_tablet_1x',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 768,
          'height' => 487,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: search_result.
  $styles['search_result'] = array(
    'label' => 'Search result',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 250,
          'height' => 188,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: site_logo.
  $styles['site_logo'] = array(
    'label' => 'Site logo',
    'effects' => array(
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 60,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: top_carousel.
  $styles['top_carousel'] = array(
    'label' => 'Top Carousel',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1800,
          'height' => 757,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: top_carousel_breakpoints_theme_kada_dsktp_nrw_1x.
  $styles['top_carousel_breakpoints_theme_kada_dsktp_nrw_1x'] = array(
    'label' => 'top_carousel_breakpoints_theme_kada_dsktp_nrw_1x',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 454,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: top_carousel_breakpoints_theme_kada_dsktp_wide_1x.
  $styles['top_carousel_breakpoints_theme_kada_dsktp_wide_1x'] = array(
    'label' => 'top_carousel_breakpoints_theme_kada_dsktp_wide_1x',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 567,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: top_carousel_breakpoints_theme_kada_mbl_nrw_1x.
  $styles['top_carousel_breakpoints_theme_kada_mbl_nrw_1x'] = array(
    'label' => 'top_carousel_breakpoints_theme_kada_mbl_nrw_1x',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 227,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: top_carousel_breakpoints_theme_kada_mbl_wide_1x.
  $styles['top_carousel_breakpoints_theme_kada_mbl_wide_1x'] = array(
    'label' => 'top_carousel_breakpoints_theme_kada_mbl_wide_1x',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 302,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: top_carousel_breakpoints_theme_kada_mobile_1x.
  $styles['top_carousel_breakpoints_theme_kada_mobile_1x'] = array(
    'label' => 'top_carousel_breakpoints_theme_kada_mobile_1x',
    'effects' => array(
      12 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 151,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: top_carousel_breakpoints_theme_kada_phablet_1x.
  $styles['top_carousel_breakpoints_theme_kada_phablet_1x'] = array(
    'label' => 'top_carousel_breakpoints_theme_kada_phablet_1x',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 550,
          'height' => 260,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: top_carousel_breakpoints_theme_kada_smalldesktop_1x.
  $styles['top_carousel_breakpoints_theme_kada_smalldesktop_1x'] = array(
    'label' => 'top_carousel_breakpoints_theme_kada_smalldesktop_1x',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 757,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: top_carousel_breakpoints_theme_kada_tablet_1x.
  $styles['top_carousel_breakpoints_theme_kada_tablet_1x'] = array(
    'label' => 'top_carousel_breakpoints_theme_kada_tablet_1x',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 768,
          'height' => 363,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: top_carousel_breakpoints_theme_kada_tbl_1x.
  $styles['top_carousel_breakpoints_theme_kada_tbl_1x'] = array(
    'label' => 'top_carousel_breakpoints_theme_kada_tbl_1x',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 768,
          'height' => 363,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: topics.
  $styles['topics'] = array(
    'label' => 'Topics',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 425,
          'height' => 319,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: topics_breakpoints_theme_kada_mobile_1x.
  $styles['topics_breakpoints_theme_kada_mobile_1x'] = array(
    'label' => 'topics_breakpoints_theme_kada_mobile_1x',
    'effects' => array(
      16 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 277,
          'height' => 208,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: topics_breakpoints_theme_kada_phablet_1x.
  $styles['topics_breakpoints_theme_kada_phablet_1x'] = array(
    'label' => 'topics_breakpoints_theme_kada_phablet_1x',
    'effects' => array(
      15 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 497,
          'height' => 373,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: topics_breakpoints_theme_kada_smalldesktop_1x.
  $styles['topics_breakpoints_theme_kada_smalldesktop_1x'] = array(
    'label' => 'topics_breakpoints_theme_kada_smalldesktop_1x',
    'effects' => array(
      13 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 479,
          'height' => 359,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: topics_breakpoints_theme_kada_tablet_1x.
  $styles['topics_breakpoints_theme_kada_tablet_1x'] = array(
    'label' => 'topics_breakpoints_theme_kada_tablet_1x',
    'effects' => array(
      14 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 360,
          'height' => 270,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
