<?php

/**
 * @file
 * pori_widget_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pori_widget_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pori_widget';
  $context->description = '';
  $context->tag = 'pori';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'pori_widget_feature-widget_after_content' => array(
          'module' => 'pori_widget_feature',
          'delta' => 'widget_after_content',
          'region' => 'after_content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('pori');
  $export['pori_widget'] = $context;

  return $export;
}
