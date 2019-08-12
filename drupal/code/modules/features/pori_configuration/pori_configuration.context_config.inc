<?php

/**
 * @file
 * pori_configuration.context_config.inc
 */

/**
 * Implements hook_default_scald_context_config().
 */
function pori_configuration_default_scald_context_config() {
  $export = array();

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'content_250_wide';
  $context_config->transcoder = array(
    'file' => array(
      '*' => 'passthrough',
    ),
    'image' => array(
      '*' => 'style-content_250_wide',
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
      '*' => 'default',
      'settings' => array(),
    ),
    'video' => array(
      '*' => 'default',
    ),
  );
  $context_config->data = array(
    'width' => '',
    'height' => '',
  );
  $export['content_250_wide'] = $context_config;

  return $export;
}
