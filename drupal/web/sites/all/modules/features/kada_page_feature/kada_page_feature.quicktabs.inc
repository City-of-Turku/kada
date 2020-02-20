<?php

/**
 * @file
 * kada_page_feature.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function kada_page_feature_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'places_for_pages_tabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Places';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'kada_services',
      'display' => 'places_page',
      'args' => '',
      'title' => 'List',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'kada_service_map',
      'display' => 'map_page',
      'args' => '',
      'title' => 'Map',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('List');
  t('Map');
  t('Places');

  $export['places_for_pages_tabs'] = $quicktabs;

  return $export;
}
