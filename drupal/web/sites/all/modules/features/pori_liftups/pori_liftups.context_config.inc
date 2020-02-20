<?php

/**
 * @file
 * pori_liftups.context_config.inc
 */

/**
 * Implements hook_default_scald_context_config().
 */
function pori_liftups_default_scald_context_config() {
  $export = array();

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'small_liftup_banner';
  $context_config->transcoder = array(
    'file' => array(
      '*' => 'passthrough',
    ),
    'image' => array(
      '*' => 'group-responsive_small_liftup_banner',
    ),
    'video' => array(
      '*' => 'passthrough',
    ),
  );
  $context_config->player = array(
    'file' => array(
      '*' => 'default',
    ),
    'image' => array(
      '*' => 'image_figure',
      'settings' => array(
        'classes' => '',
        'caption' => '',
      ),
    ),
    'video' => array(
      '*' => 'default',
    ),
  );
  $context_config->data = array(
    'width' => '',
    'height' => '',
  );
  $export['small_liftup_banner'] = $context_config;

  return $export;
}
