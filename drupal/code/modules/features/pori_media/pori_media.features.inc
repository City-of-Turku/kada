<?php
/**
 * @file
 * pori_media.features.inc
 */

/**
 * Implements hook_image_styles_alter().
 */
function pori_media_image_styles_alter(&$data) {
  if (isset($data['current'])) {

  if (!isset($data['current']['storage']) || $data['current']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['current']['effects'] = array_values($data['current']['effects']);
    $data['current']['effects'][0]['data']['height'] = 245;
  }

  if (!isset($data['current']['storage']) || $data['current']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['current']['effects'] = array_values($data['current']['effects']);
    $data['current']['effects'][0]['data']['width'] = 435;
  }

  if (!isset($data['current']['storage']) || $data['current']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['current']['effects'] = array_values($data['current']['effects']);
    $data['current']['effects'][0]['name'] = 'image_scale_and_crop';
  }

  if (!isset($data['current']['storage']) || $data['current']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['current']['effects'] = array_values($data['current']['effects']);
    $data['current']['effects'][0]['weight'] = 1;
  }

  if (!isset($data['current']['storage']) || $data['current']['storage'] == IMAGE_STORAGE_DEFAULT) {
    unset($data['current']['effects'][0]['data']['upscale']);
  }
  }
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
