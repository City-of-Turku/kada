<?php
/**
 * @file
 * pori_waste_search.taxonomy_display.inc
 */

/**
 * Implements hook_taxonomy_display_default_displays().
 */
function pori_waste_search_taxonomy_display_default_displays() {
  $export = array();

  $taxonomy_display = new stdClass();
  $taxonomy_display->api_version = 1;
  $taxonomy_display->machine_name = 'waste_type';
  $taxonomy_display->term_display_plugin = 'TaxonomyDisplayTermDisplayHandlerCore';
  $taxonomy_display->term_display_options = '';
  $taxonomy_display->associated_display_plugin = 'TaxonomyDisplayAssociatedDisplayHandlerHidden';
  $taxonomy_display->associated_display_options = '';
  $taxonomy_display->add_feed = FALSE;
  $taxonomy_display->breadcrumb_display_plugin = 'TaxonomyDisplayBreadcrumbDisplayHandlerHidden';
  $taxonomy_display->breadcrumb_display_options = '';
  $export['waste_type'] = $taxonomy_display;

  return $export;
}
