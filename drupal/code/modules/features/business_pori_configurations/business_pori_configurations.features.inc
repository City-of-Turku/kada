<?php

/**
 * @file
 * business_pori_configurations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function business_pori_configurations_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_context_default_contexts_alter().
 */
function business_pori_configurations_context_default_contexts_alter(&$data) {
  if (isset($data['businesspori_error_page'])) {
    $data['businesspori_error_page']->reactions['block']['blocks']['menu_block-42'] = array(
      'module' => 'menu_block',
      'delta' => 42,
      'region' => 'navigation_top',
      'weight' => -5,
    ); /* WAS: '' */
    $data['businesspori_error_page']->reactions['block']['blocks']['menu_block-43'] = array(
      'module' => 'menu_block',
      'delta' => 43,
      'region' => 'footer',
      'weight' => -9,
    ); /* WAS: '' */
  }
  if (isset($data['businesspori_top_menu'])) {
    unset($data['businesspori_top_menu']->reactions['block']['blocks']['menu_block-43']);
  }
}

/**
 * Implements hook_field_default_field_bases_alter().
 */
function business_pori_configurations_field_default_field_bases_alter(&$data) {
  if (isset($data['field_businesspori_theme'])) {
    $data['field_businesspori_theme']['field_permissions'] = array(
      'type' => 0,
    ); /* WAS: '' */
    $data['field_businesspori_theme']['settings']['allowed_values'][0]['depth'] = ''; /* WAS: '' */
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function business_pori_configurations_field_default_field_instances_alter(&$data) {
  if (isset($data['node-news_item-field_businesspori_theme'])) {
    $data['node-news_item-field_businesspori_theme']['label'] = 'Business Pori theme'; /* WAS: 'Businesspori theme' */
  }
  if (isset($data['node-page-field_businesspori_theme'])) {
    $data['node-page-field_businesspori_theme']['display']['default']['module'] = 'i18n_taxonomy'; /* WAS: '' */
    $data['node-page-field_businesspori_theme']['display']['default']['type'] = 'i18n_taxonomy_term_reference_link'; /* WAS: 'hidden' */
    $data['node-page-field_businesspori_theme']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-page-field_businesspori_theme']['display']['project']['weight'] = 0; /* WAS: 38 */
    $data['node-page-field_businesspori_theme']['label'] = 'Business Pori theme'; /* WAS: 'Businesspori theme' */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function business_pori_configurations_strongarm_alter(&$data) {
  if (isset($data['menu_block_ids'])) {
    $data['menu_block_ids']->value[42] = 44; /* WAS: '' */
  }
  if (isset($data['menu_block_menu_order'])) {
    $data['menu_block_menu_order']->value['menu-business-pori-footer-menu-f'] = ''; /* WAS: '' */
    $data['menu_block_menu_order']->value['menu-business-pori-p-valikko'] = ''; /* WAS: '' */
    $data['menu_block_menu_order']->value['menu-business-pori-top-menu-fi'] = ''; /* WAS: '' */
  }
}
