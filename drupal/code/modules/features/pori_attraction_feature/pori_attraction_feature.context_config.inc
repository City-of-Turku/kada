<?php

/**
 * @file
 * pori_attraction_feature.context_config.inc
 */

/**
 * Implements hook_default_scald_context_config().
 */
function pori_attraction_feature_default_scald_context_config() {
  $export = array();

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'page_carousel';
  $context_config->transcoder = array(
    'file' => array(
      '*' => 'passthrough',
    ),
    'image' => array(
      '*' => 'group-responsive_page_carousel',
    ),
    'video' => array(
      '*' => 'passthrough',
    ),
  );
  $context_config->player = array(
    'image' => array(
      '*' => 'image_figure',
      'settings' => array(
        'classes' => '',
        'caption' => '',
      ),
    ),
    'video' => array(
      '*' => 'default',
      'settings' => array(),
    ),
    'file' => array(
      '*' => 'default',
      'settings' => array(),
    ),
  );
  $context_config->data = array(
    'width' => '',
    'height' => '',
  );
  $export['page_carousel'] = $context_config;

  return $export;
}
