<?php

/**
 * @file
 * pori_waste_search.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function pori_waste_search_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'pori_waste_search';
  $openlayers_maps->title = 'Pori waste search';
  $openlayers_maps->description = '';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '600px',
    'image_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '21.797418,61.485139',
        'zoom' => '14',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_geolocate' => array(
        'bind' => '1',
        'zoom_level' => '12',
        'watch' => '0',
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_attribution' => array(
        'separator' => '',
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'pori_waste_search_map_openlayers_1' => 'pori_waste_search_map_openlayers_1',
        ),
        'popupAtPosition' => 'mouse',
        'panMapIfOutOfView' => 1,
        'keepInMap' => 0,
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => array(
          'pori_waste_search_map_openlayers_1' => 'pori_waste_search_map_openlayers_1',
          'pori_arcgis' => 0,
        ),
        'point_zoom_level' => '5',
        'zoomtolayer_scale' => '1',
      ),
    ),
    'default_layer' => 'pori_arcgis',
    'layers' => array(
      'pori_arcgis' => 'pori_arcgis',
      'pori_waste_search_map_openlayers_1' => 'pori_waste_search_map_openlayers_1',
    ),
    'layer_weight' => array(
      'pori_place_map_place_data' => '0',
      'kada_service_map_page_data' => '0',
      'kada_service_map_place_data' => '0',
      'kada_services_on_map_ol_service_data' => '0',
      'ip_geoloc_visitor_marker_layer' => '0',
      'ip_geoloc_marker_layer1' => '0',
      'pori_waste_search_map_openlayers_1' => '0',
      'ip_geoloc_marker_layer3' => '0',
      'ip_geoloc_marker_layer2' => '0',
      'kada_proximity_list_openlayers_1' => '0',
      'kada_place_map_place_data' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'kada_service_map' => '0',
      'all_places_openlayers_1' => '0',
      'attraction_map_attraction_data_single' => '0',
      'kada_events_map_event_data_single' => '0',
      'kada_events_map_event_data' => '0',
      'kada_events_indexed_map_indexed' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'kada_service_map' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'all_places_openlayers_1' => '0',
      'attraction_map_attraction_data_single' => '0',
      'kada_events_indexed_map_indexed' => '0',
      'kada_events_map_event_data' => '0',
      'kada_events_map_event_data_single' => '0',
      'kada_place_map_place_data' => '0',
      'kada_proximity_list_openlayers_1' => '0',
      'kada_services_on_map_ol_service_data' => '0',
      'kada_service_map_place_data' => '0',
      'kada_service_map_page_data' => '0',
      'pori_place_map_place_data' => '0',
      'ip_geoloc_visitor_marker_layer' => '0',
      'ip_geoloc_marker_layer2' => '0',
      'ip_geoloc_marker_layer3' => '0',
      'pori_waste_search_map_openlayers_1' => '0',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'kada_service_map' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'all_places_openlayers_1' => '0',
      'attraction_map_attraction_data_single' => '0',
      'kada_events_indexed_map_indexed' => '0',
      'kada_events_map_event_data' => '0',
      'kada_events_map_event_data_single' => '0',
      'kada_place_map_place_data' => '0',
      'kada_proximity_list_openlayers_1' => '0',
      'kada_services_on_map_ol_service_data' => '0',
      'kada_service_map_place_data' => '0',
      'kada_service_map_page_data' => '0',
      'pori_place_map_place_data' => '0',
      'ip_geoloc_visitor_marker_layer' => '0',
      'ip_geoloc_marker_layer2' => '0',
      'ip_geoloc_marker_layer3' => '0',
      'pori_waste_search_map_openlayers_1' => '0',
    ),
    'layer_styles_temporary' => array(
      'geofield_formatter' => '0',
      'kada_service_map' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'all_places_openlayers_1' => '0',
      'attraction_map_attraction_data_single' => '0',
      'kada_events_indexed_map_indexed' => '0',
      'kada_events_map_event_data' => '0',
      'kada_events_map_event_data_single' => '0',
      'kada_place_map_place_data' => '0',
      'kada_proximity_list_openlayers_1' => '0',
      'kada_services_on_map_ol_service_data' => '0',
      'kada_service_map_place_data' => '0',
      'kada_service_map_page_data' => '0',
      'pori_place_map_place_data' => '0',
      'ip_geoloc_visitor_marker_layer' => '0',
      'ip_geoloc_marker_layer2' => '0',
      'ip_geoloc_marker_layer3' => '0',
      'pori_waste_search_map_openlayers_1' => '0',
    ),
    'layer_activated' => array(
      'pori_waste_search_map_openlayers_1' => 'pori_waste_search_map_openlayers_1',
      'geofield_formatter' => 0,
      'kada_service_map' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'all_places_openlayers_1' => 0,
      'attraction_map_attraction_data_single' => 0,
      'kada_events_indexed_map_indexed' => 0,
      'kada_events_map_event_data' => 0,
      'kada_events_map_event_data_single' => 0,
      'kada_place_map_place_data' => 0,
      'kada_proximity_list_openlayers_1' => 0,
      'kada_services_on_map_ol_service_data' => 0,
      'kada_service_map_place_data' => 0,
      'kada_service_map_page_data' => 0,
      'pori_place_map_place_data' => 0,
      'ip_geoloc_visitor_marker_layer' => 0,
      'ip_geoloc_marker_layer2' => 0,
      'ip_geoloc_marker_layer3' => 0,
    ),
    'layer_switcher' => array(
      'geofield_formatter' => 0,
      'kada_service_map' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'pori_waste_search_map_openlayers_1' => 0,
      'all_places_openlayers_1' => 0,
      'attraction_map_attraction_data_single' => 0,
      'kada_events_indexed_map_indexed' => 0,
      'kada_events_map_event_data' => 0,
      'kada_events_map_event_data_single' => 0,
      'kada_place_map_place_data' => 0,
      'kada_proximity_list_openlayers_1' => 0,
      'kada_services_on_map_ol_service_data' => 0,
      'kada_service_map_place_data' => 0,
      'kada_service_map_page_data' => 0,
      'pori_place_map_place_data' => 0,
      'ip_geoloc_visitor_marker_layer' => 0,
      'ip_geoloc_marker_layer1' => 0,
      'ip_geoloc_marker_layer2' => 0,
      'ip_geoloc_marker_layer3' => 0,
    ),
    'projection' => 'EPSG:3857',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default_select',
      'temporary' => 'default',
    ),
  );
  $export['pori_waste_search'] = $openlayers_maps;

  return $export;
}
