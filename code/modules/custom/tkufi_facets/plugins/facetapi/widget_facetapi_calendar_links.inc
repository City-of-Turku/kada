<?php

/**
 * @file
 * Widget that renders facets as Popup Calendar.
 */

/**
 * Needs documentation (@TODO).
 */
class FacetapiWidgetCalendarLinks extends FacetapiWidgetLinks {

  /**
   * Overrides FacetapiWidgetLinks::init().
   */
  public function init() {
    parent::init();
    // We just need our own js to be loaded to handle ui.datepicker stuff.
    drupal_add_library('system', 'ui.datepicker');
    drupal_add_js(drupal_get_path('module', 'tkufi_facets') . '/plugins/facetapi/widget_facetapi_calendar_links.js');
  }

  /**
   * Overrides FacetapiWidgetLinks::buildListItems().
   *
   * Very lightly overridden:
   * - Human readable dates to facet links.
   * - Add data-date attribute to facets for easier javascript reading.
   */
  public function buildListItems($build) {
    $settings = $this->settings->settings;

    // Initializes links attributes, adds rel="nofollow" if configured.
    $attributes = ($settings['nofollow']) ? array('rel' => 'nofollow') : array();
    $attributes += array('class' => $this->getItemClasses());

    // Builds rows.
    $items = array();
    foreach ($build as $item) {
      $row = array('class' => array());

      // Allow adding classes via altering.
      if (isset($item['#class'])) {
        $attributes['class'] = array_merge($attributes['class'], $item['#class']);
      }
      // Initializes variables passed to theme hook.
      $variables = array(
      // Displays an actual human-readable date.
        'text' => date('d.m.Y', $item['#indexed_value']),
        'path' => $item['#path'],
        'count' => $item['#count'],
        'options' => array(
          'attributes' => $attributes,
          'html' => $item['#html'],
          'query' => $item['#query'],
        ),
      );

      // Adds the facetapi-zero-results class to items that have no results.
      if (!$item['#count']) {
        $variables['options']['attributes']['class'][] = 'facetapi-zero-results';
      }

      // Add an ID to identify this link.
      $variables['options']['attributes']['id'] = drupal_html_id('facetapi-link');

      // If the item has no children, it is a leaf.
      if (empty($item['#item_children'])) {
        $row['class'][] = 'leaf';
      }
      else {
        // If the item is active or the "show_expanded" setting is selected,
        // show this item as expanded so we see its children.
        if ($item['#active'] || !empty($settings['show_expanded'])) {
          $row['class'][] = 'expanded';
          $row['children'] = $this->buildListItems($item['#item_children']);
        }
        else {
          $row['class'][] = 'collapsed';
        }
      }

      // Gets theme hook, adds last minute classes.
      $class = ($item['#active']) ? 'facetapi-active' : 'facetapi-inactive';
      $variables['options']['attributes']['class'][] = $class;
      // Add a date that is easily readable by JS.
      $variables['options']['attributes']['data-date'] = date('j-n-Y', $item['#indexed_value']);

      // Themes the link, adds row to items.
      $row['data'] = theme($item['#theme'], $variables);
      $items[] = $row;
    }

    return $items;
  }

}
