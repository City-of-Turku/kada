<?php
/**
 * @file
 * pori_pages.features.inc
 */

/**
 * Implements hook_context_default_contexts_alter().
 */
function pori_pages_context_default_contexts_alter(&$data) {
  if (isset($data['footer_navigation'])) {
    $data['footer_navigation']->disabled = TRUE; /* WAS: FALSE */
  }
  if (isset($data['page_menus'])) {
    $data['page_menus']->disabled = TRUE; /* WAS: FALSE */
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function pori_pages_field_default_field_instances_alter(&$data) {
  if (isset($data['node-page-field_info_box'])) {
    unset($data['node-page-field_info_box']);
  }
  if (isset($data['node-page-field_main_image'])) {
    unset($data['node-page-field_main_image']);
  }
}
