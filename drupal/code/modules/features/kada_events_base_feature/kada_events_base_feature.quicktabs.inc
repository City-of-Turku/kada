<?php

/**
 * @file
 * kada_events_base_feature.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function kada_events_base_feature_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'calendar_content_tabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Happening';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'kada_event_list',
      'display' => 'event_grid',
      'args' => '',
      'title' => 'Mosaic view',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'kada_events_indexed_list_and_map',
      'display' => 'indexed_event_list',
      'args' => '',
      'title' => 'List view',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'kada_events_indexed_list_and_map',
      'display' => 'indexed_event_map',
      'args' => '',
      'title' => 'Map view',
      'weight' => '-98',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Happening');
  t('List view');
  t('Map view');
  t('Mosaic view');

  $export['calendar_content_tabs'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'calendar_top_tabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Calendar top tabs';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'kada_event_list',
      'display' => 'event_tab_most_popular',
      'args' => '',
      'title' => 'Most popular',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'kada_event_list',
      'display' => 'event_tab_happening_recurring',
      'args' => '',
      'title' => 'Happening soon',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'kada_event_list',
      'display' => 'event_tab_free',
      'args' => '',
      'title' => 'Free admission',
      'weight' => '-98',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Calendar top tabs');
  t('Free admission');
  t('Happening soon');
  t('Most popular');

  $export['calendar_top_tabs'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'series_events';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Series events';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'kada_recurring_events',
      'display' => 'following',
      'args' => '',
      'title' => 'Following',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'kada_recurring_events',
      'display' => 'previous',
      'args' => '',
      'title' => 'Previous',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Following');
  t('Previous');
  t('Series events');

  $export['series_events'] = $quicktabs;

  return $export;
}
