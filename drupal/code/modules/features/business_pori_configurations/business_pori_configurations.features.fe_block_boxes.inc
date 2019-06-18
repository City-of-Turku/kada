<?php

/**
 * @file
 * business_pori_configurations.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function business_pori_configurations_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Businesspori footer information';
  $fe_block_boxes->format = 'wysiwyg';
  $fe_block_boxes->machine_name = 'busipori_footer_information_fi';
  $fe_block_boxes->body = '<p>&copy; Business Pori Oy</p>';

  $export['busipori_footer_information_fi'] = $fe_block_boxes;

  return $export;
}
