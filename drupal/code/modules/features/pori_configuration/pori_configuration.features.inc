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
          'width' => 152,
          'height' => 203,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_scald_default_context_types().
 */
function pori_configuration_scald_default_context_types() {
  $contexts = array();
  $contexts['content_250_wide-file'] = array(
    'player' => array(
      'file' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'file' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'file' => array(
        'width' => '',
        'height' => '',
      ),
    ),
  );
  $contexts['content_250_wide-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'style-content_250_wide',
      ),
    ),
    'data' => array(
      'image' => array(
        'width' => '',
        'height' => '',
      ),
    ),
  );
  $contexts['content_250_wide-video'] = array(
    'player' => array(
      'video' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'video' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'video' => array(
        'width' => '',
        'height' => '',
      ),
    ),
  );
  return $contexts;
}
