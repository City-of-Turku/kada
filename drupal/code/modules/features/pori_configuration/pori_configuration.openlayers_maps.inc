<?php
/**
 * @file
 * pori_configuration.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function pori_configuration_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'pori_page_service_map';
  $openlayers_maps->title = 'Pori Page Service Map';
  $openlayers_maps->description = 'Map for displaying places per service';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '500px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 1,
    'center' => array(
      'initial' => array(
        'centerpoint' => '21.6649,61.535',
        'zoom' => '14',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_geofield' => array(),
      'openlayers_behavior_geolocate_button' => array(
        'bind' => '1',
        'zoom_level' => '14',
        'show_location' => '1',
        'show_location_accuracy_styles' => 'fillColor|#00aeef
fillOpacity|0.25
strokeWidth|0
',
        'show_location_position_styles' => 'graphicName|circle
strokeColor|#fff
strokeWidth|2
fillColor|#00aeef
fillOpacity|1
pointRadius|10',
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 1,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'pori_place_map_place_data' => 'pori_place_map_place_data',
        ),
        'popupAtPosition' => 'computed',
        'panMapIfOutOfView' => 1,
        'keepInMap' => 1,
      ),
      'openlayers_behavior_permalink' => array(
        'anchor' => 0,
      ),
      'openlayers_behavior_zoompanel' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => array(
          'pori_place_map_place_data' => 'pori_place_map_place_data',
          'pori_arcgis' => 0,
        ),
        'point_zoom_level' => '12',
        'zoomtolayer_scale' => '1',
      ),
    ),
    'default_layer' => 'pori_arcgis',
    'layers' => array(
      'pori_arcgis' => 'pori_arcgis',
      'pori_place_map_place_data' => 'pori_place_map_place_data',
    ),
    'layer_weight' => array(
      'kada_service_map_page_data' => '0',
      'kada_service_map_place_data' => '0',
      'kada_services_on_map_ol_service_data' => '0',
      'ip_geoloc_visitor_marker_layer' => '0',
      'ip_geoloc_marker_layer1' => '0',
      'pori_place_map_place_data' => '0',
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
      'ip_geoloc_visitor_marker_layer' => '0',
      'ip_geoloc_marker_layer1' => '0',
      'ip_geoloc_marker_layer2' => '0',
      'ip_geoloc_marker_layer3' => '0',
      'pori_place_map_place_data' => '0',
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
      'ip_geoloc_visitor_marker_layer' => '0',
      'ip_geoloc_marker_layer1' => '0',
      'ip_geoloc_marker_layer2' => '0',
      'ip_geoloc_marker_layer3' => '0',
      'pori_place_map_place_data' => '0',
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
      'ip_geoloc_visitor_marker_layer' => '0',
      'ip_geoloc_marker_layer1' => '0',
      'ip_geoloc_marker_layer2' => '0',
      'ip_geoloc_marker_layer3' => '0',
      'pori_place_map_place_data' => '0',
    ),
    'layer_activated' => array(
      'pori_place_map_place_data' => 'pori_place_map_place_data',
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
      'ip_geoloc_visitor_marker_layer' => 0,
      'ip_geoloc_marker_layer1' => 0,
      'ip_geoloc_marker_layer2' => 0,
      'ip_geoloc_marker_layer3' => 0,
    ),
    'layer_switcher' => array(
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
      'ip_geoloc_marker_layer1' => 0,
      'ip_geoloc_marker_layer2' => 0,
      'ip_geoloc_marker_layer3' => 0,
    ),
    'projection' => 'EPSG:3857',
    'displayProjection' => 'EPSG:3857',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['pori_page_service_map'] = $openlayers_maps;

  return $export;
}
