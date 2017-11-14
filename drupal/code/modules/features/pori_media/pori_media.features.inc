<?php
/**
 * @file
 * pori_media.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function pori_media_field_default_field_instances_alter(&$data) {
  if (isset($data['scald_atom-file-scald_authors'])) {
    $data['scald_atom-file-scald_authors']['required'] = 1; /* WAS: FALSE */
    $data['scald_atom-file-scald_authors']['widget']['active'] = 0; /* WAS: '' */
  }
  if (isset($data['scald_atom-file-scald_tags'])) {
    $data['scald_atom-file-scald_tags']['required'] = 1; /* WAS: FALSE */
    $data['scald_atom-file-scald_tags']['widget']['active'] = 0; /* WAS: '' */
  }
  if (isset($data['scald_atom-image-scald_authors'])) {
    $data['scald_atom-image-scald_authors']['required'] = 1; /* WAS: FALSE */
    $data['scald_atom-image-scald_authors']['widget']['active'] = 0; /* WAS: '' */
  }
  if (isset($data['scald_atom-image-scald_tags'])) {
    $data['scald_atom-image-scald_tags']['required'] = 1; /* WAS: FALSE */
    $data['scald_atom-image-scald_tags']['widget']['active'] = 0; /* WAS: '' */
  }
  if (isset($data['scald_atom-video-scald_authors'])) {
    $data['scald_atom-video-scald_authors']['required'] = 1; /* WAS: FALSE */
    $data['scald_atom-video-scald_authors']['widget']['active'] = 0; /* WAS: '' */
  }
  if (isset($data['scald_atom-video-scald_tags'])) {
    $data['scald_atom-video-scald_tags']['required'] = 1; /* WAS: FALSE */
    $data['scald_atom-video-scald_tags']['widget']['active'] = 0; /* WAS: '' */
  }
}

/**
 * Implements hook_flexslider_default_presets_alter().
 */
function pori_media_flexslider_default_presets_alter(&$data) {
  if (isset($data['default'])) {
    unset($data['default']->export_type);
    unset($data['default']->type);
  }
  if (isset($data['top_carousel'])) {
    $data['top_carousel']->options['slideshow'] = 0; /* WAS: 1 */
  }
}

/**
 * Implements hook_image_styles_alter().
 */
function pori_media_image_styles_alter(&$data) {
  if (isset($data['topics'])) {

  if (!isset($data['topics']['storage']) || $data['topics']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['topics']['effects'] = array_values($data['topics']['effects']);
    $data['topics']['effects'][0]['data']['height'] = 257;
  }

  if (!isset($data['topics']['storage']) || $data['topics']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['topics']['effects'] = array_values($data['topics']['effects']);
    $data['topics']['effects'][0]['data']['width'] = 457;
  }
  }
  if (isset($data['topics_breakpoints_theme_kada_mobile_1x'])) {

  if (!isset($data['topics_breakpoints_theme_kada_mobile_1x']['storage']) || $data['topics_breakpoints_theme_kada_mobile_1x']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['topics_breakpoints_theme_kada_mobile_1x']['effects'] = array_values($data['topics_breakpoints_theme_kada_mobile_1x']['effects']);
    $data['topics_breakpoints_theme_kada_mobile_1x']['effects'][0]['data']['height'] = 158;
  }

  if (!isset($data['topics_breakpoints_theme_kada_mobile_1x']['storage']) || $data['topics_breakpoints_theme_kada_mobile_1x']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['topics_breakpoints_theme_kada_mobile_1x']['effects'] = array_values($data['topics_breakpoints_theme_kada_mobile_1x']['effects']);
    $data['topics_breakpoints_theme_kada_mobile_1x']['effects'][0]['data']['width'] = 280;
  }
  }
  if (isset($data['topics_breakpoints_theme_kada_phablet_1x'])) {

  if (!isset($data['topics_breakpoints_theme_kada_phablet_1x']['storage']) || $data['topics_breakpoints_theme_kada_phablet_1x']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['topics_breakpoints_theme_kada_phablet_1x']['effects'] = array_values($data['topics_breakpoints_theme_kada_phablet_1x']['effects']);
    $data['topics_breakpoints_theme_kada_phablet_1x']['effects'][0]['data']['height'] = 280;
  }
  }
  if (isset($data['topics_breakpoints_theme_kada_smalldesktop_1x'])) {

  if (!isset($data['topics_breakpoints_theme_kada_smalldesktop_1x']['storage']) || $data['topics_breakpoints_theme_kada_smalldesktop_1x']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['topics_breakpoints_theme_kada_smalldesktop_1x']['effects'] = array_values($data['topics_breakpoints_theme_kada_smalldesktop_1x']['effects']);
    $data['topics_breakpoints_theme_kada_smalldesktop_1x']['effects'][0]['data']['height'] = 365;
  }

  if (!isset($data['topics_breakpoints_theme_kada_smalldesktop_1x']['storage']) || $data['topics_breakpoints_theme_kada_smalldesktop_1x']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['topics_breakpoints_theme_kada_smalldesktop_1x']['effects'] = array_values($data['topics_breakpoints_theme_kada_smalldesktop_1x']['effects']);
    $data['topics_breakpoints_theme_kada_smalldesktop_1x']['effects'][0]['data']['width'] = 649;
  }
  }
  if (isset($data['topics_breakpoints_theme_kada_tablet_1x'])) {

  if (!isset($data['topics_breakpoints_theme_kada_tablet_1x']['storage']) || $data['topics_breakpoints_theme_kada_tablet_1x']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['topics_breakpoints_theme_kada_tablet_1x']['effects'] = array_values($data['topics_breakpoints_theme_kada_tablet_1x']['effects']);
    $data['topics_breakpoints_theme_kada_tablet_1x']['effects'][0]['data']['height'] = 386;
  }

  if (!isset($data['topics_breakpoints_theme_kada_tablet_1x']['storage']) || $data['topics_breakpoints_theme_kada_tablet_1x']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['topics_breakpoints_theme_kada_tablet_1x']['effects'] = array_values($data['topics_breakpoints_theme_kada_tablet_1x']['effects']);
    $data['topics_breakpoints_theme_kada_tablet_1x']['effects'][0]['data']['width'] = 687;
  }
  }
}

/**
 * Implements hook_openlayers_maps_alter().
 */
function pori_media_openlayers_maps_alter(&$data) {
  if (isset($data['default'])) {
    $data['default']->disabled = FALSE; /* WAS: '' */
  }
}

/**
 * Implements hook_openlayers_styles_alter().
 */
function pori_media_openlayers_styles_alter(&$data) {
  if (isset($data['default'])) {
    $data['default']->disabled = FALSE; /* WAS: '' */
  }
}
