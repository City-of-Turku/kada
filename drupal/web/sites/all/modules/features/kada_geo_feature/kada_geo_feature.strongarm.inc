<?php
/**
 * @file
 * kada_geo_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function kada_geo_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ip_geoloc_address_element';
  $strongarm->value = '0';
  $export['ip_geoloc_address_element'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ip_geoloc_address_redirect';
  $strongarm->value = '';
  $export['ip_geoloc_address_redirect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ip_geoloc_debug';
  $strongarm->value = '';
  $export['ip_geoloc_debug'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ip_geoloc_exclude_pages';
  $strongarm->value = 'admin/*
sites/default/*';
  $export['ip_geoloc_exclude_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ip_geoloc_font_icon_lib1';
  $strongarm->value = '';
  $export['ip_geoloc_font_icon_lib1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ip_geoloc_font_icon_lib2';
  $strongarm->value = '';
  $export['ip_geoloc_font_icon_lib2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ip_geoloc_geo_vocabulary_id';
  $strongarm->value = '0';
  $export['ip_geoloc_geo_vocabulary_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ip_geoloc_google_to_reverse_geocode';
  $strongarm->value = 1;
  $export['ip_geoloc_google_to_reverse_geocode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ip_geoloc_include_pages';
  $strongarm->value = 'lahella
lahella/kartta';
  $export['ip_geoloc_include_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ip_geoloc_location_check_interval';
  $strongarm->value = '60';
  $export['ip_geoloc_location_check_interval'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ip_geoloc_marker_anchor_pos';
  $strongarm->value = 'bottom';
  $export['ip_geoloc_marker_anchor_pos'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ip_geoloc_marker_dimensions';
  $strongarm->value = '21 x 34';
  $export['ip_geoloc_marker_dimensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ip_geoloc_marker_directory';
  $strongarm->value = 'sites/all/modules/contrib/ip_geoloc/amarkers';
  $export['ip_geoloc_marker_directory'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ip_geoloc_num_location_marker_layers';
  $strongarm->value = '3';
  $export['ip_geoloc_num_location_marker_layers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ip_geoloc_page_refresh';
  $strongarm->value = 1;
  $export['ip_geoloc_page_refresh'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ip_geoloc_region_autocomplete';
  $strongarm->value = '0';
  $export['ip_geoloc_region_autocomplete'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ip_geoloc_region_parent';
  $strongarm->value = '0';
  $export['ip_geoloc_region_parent'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ip_geoloc_roles_to_reverse_geocode';
  $strongarm->value = array(
    1 => '1',
    2 => '2',
    4 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
  );
  $export['ip_geoloc_roles_to_reverse_geocode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ip_geoloc_smart_ip_as_backup';
  $strongarm->value = 0;
  $export['ip_geoloc_smart_ip_as_backup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ip_geoloc_visitor_address_default';
  $strongarm->value = '';
  $export['ip_geoloc_visitor_address_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ip_geoloc_visitor_address_editable';
  $strongarm->value = 1;
  $export['ip_geoloc_visitor_address_editable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ip_geoloc_visitor_address_label';
  $strongarm->value = '';
  $export['ip_geoloc_visitor_address_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ip_geoloc_visitor_find';
  $strongarm->value = 1;
  $export['ip_geoloc_visitor_find'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ip_geoloc_visitor_find_label';
  $strongarm->value = '';
  $export['ip_geoloc_visitor_find_label'] = $strongarm;

  return $export;
}
