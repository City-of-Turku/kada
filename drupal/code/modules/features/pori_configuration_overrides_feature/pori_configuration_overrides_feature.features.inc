<?php

/**
 * @file
 * pori_configuration_overrides_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pori_configuration_overrides_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_ds_field_settings_info_alter().
 */
function pori_configuration_overrides_feature_ds_field_settings_info_alter(&$data) {
  if (isset($data['node|place|teaser'])) {
    unset($data['node|place|teaser']->settings['node_link']);
  }
}

/**
 * Implements hook_ds_layout_settings_info_alter().
 */
function pori_configuration_overrides_feature_ds_layout_settings_info_alter(&$data) {
  if (isset($data['node|place|teaser'])) {
    $data['node|place|teaser']->settings['fields']['field_read_more'] = 'main_content'; /* WAS: '' */
    $data['node|place|teaser']->settings['regions']['main_content'][6] = 'field_read_more'; /* WAS: 'node_link' */
    unset($data['node|place|teaser']->settings['fields']['node_link']);
  }
}

/**
 * Implements hook_field_default_field_bases_alter().
 */
function pori_configuration_overrides_feature_field_default_field_bases_alter(&$data) {
  if (isset($data['field_accessibility'])) {
    $data['field_accessibility']['settings']['hide_initial_item'] = FALSE; /* WAS: '' */
  }
}

/**
 * Implements hook_field_group_info_alter().
 */
function pori_configuration_overrides_feature_field_group_info_alter(&$data) {
  if (isset($data['group_content|node|place|form'])) {
    $data['group_content|node|place|form']->data['children'][11] = 'field_read_more'; /* WAS: 'language' */
    $data['group_content|node|place|form']->data['children'][17] = 'field_sorting_point'; /* WAS: '' */
    $data['group_content|node|place|form']->data['children'][18] = 'field_responsibility'; /* WAS: '' */
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function pori_configuration_overrides_feature_field_default_field_instances_alter(&$data) {
  if (isset($data['node-news_item-field_keywords'])) {
    $data['node-news_item-field_keywords']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'deny'; /* WAS: '' */
  }
  if (isset($data['node-news_item-field_related_content'])) {
    $data['node-news_item-field_related_content']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'deny'; /* WAS: '' */
  }
  if (isset($data['node-page-field_widgets_after_content'])) {
    $data['node-page-field_widgets_after_content']['display']['default']['weight'] = 44; /* WAS: 41 */
    $data['node-page-field_widgets_after_content']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'allow'; /* WAS: '' */
    $data['node-page-field_widgets_after_content']['widget']['weight'] = 23; /* WAS: 12 */
  }
  if (isset($data['node-place-field_accessibility'])) {
    $data['node-place-field_accessibility']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_accessibility']['display']['teaser']['weight'] = 28; /* WAS: 25 */
    $data['node-place-field_accessibility']['display']['waste_map'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 29,
    ); /* WAS: '' */
    $data['node-place-field_accessibility']['display']['waste_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 29,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_address_postal'])) {
    $data['node-place-field_address_postal']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_address_postal']['display']['teaser']['weight'] = 24; /* WAS: 21 */
    $data['node-place-field_address_postal']['display']['waste_map'] = array(
      'label' => 'inline',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 26,
    ); /* WAS: '' */
    $data['node-place-field_address_postal']['display']['waste_search'] = array(
      'label' => 'inline',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 26,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_address_street'])) {
    $data['node-place-field_address_street']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_address_street']['display']['teaser']['weight'] = 27; /* WAS: 24 */
    $data['node-place-field_address_street']['display']['waste_map'] = array(
      'label' => 'inline',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 27,
    ); /* WAS: '' */
    $data['node-place-field_address_street']['display']['waste_search'] = array(
      'label' => 'inline',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 27,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_address_visiting'])) {
    $data['node-place-field_address_visiting']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_address_visiting']['display']['waste_map'] = array(
      'label' => 'hidden',
      'module' => 'addressfield',
      'settings' => array(
        'format_handlers' => array(
          0 => 'address',
        ),
        'use_widget_handlers' => 1,
      ),
      'type' => 'addressfield_default',
      'weight' => 1,
    ); /* WAS: '' */
    $data['node-place-field_address_visiting']['display']['waste_search'] = array(
      'label' => 'hidden',
      'module' => 'addressfield',
      'settings' => array(
        'format_handlers' => array(
          0 => 'address',
        ),
        'use_widget_handlers' => 1,
      ),
      'type' => 'addressfield_default',
      'weight' => 1,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_availability'])) {
    $data['node-place-field_availability']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_availability']['display']['waste_map'] = array(
      'label' => 'above',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 4,
    ); /* WAS: '' */
    $data['node-place-field_availability']['display']['waste_search'] = array(
      'label' => 'above',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 4,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_billing_address'])) {
    $data['node-place-field_billing_address']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_billing_address']['display']['teaser']['weight'] = 36; /* WAS: 33 */
    $data['node-place-field_billing_address']['display']['waste_map'] = array(
      'label' => 'inline',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 28,
    ); /* WAS: '' */
    $data['node-place-field_billing_address']['display']['waste_search'] = array(
      'label' => 'inline',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 28,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_description'])) {
    $data['node-place-field_description']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_description']['display']['waste_map'] = array(
      'label' => 'hidden',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 19,
    ); /* WAS: '' */
    $data['node-place-field_description']['display']['waste_search'] = array(
      'label' => 'hidden',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 5,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_district'])) {
    $data['node-place-field_district']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_district']['display']['teaser']['weight'] = 26; /* WAS: 23 */
    $data['node-place-field_district']['display']['waste_map'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 35,
    ); /* WAS: '' */
    $data['node-place-field_district']['display']['waste_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 35,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_email'])) {
    $data['node-place-field_email']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_email']['display']['waste_map'] = array(
      'label' => 'hidden',
      'module' => 'email',
      'settings' => array(),
      'type' => 'email_default',
      'weight' => 3,
    ); /* WAS: '' */
    $data['node-place-field_email']['display']['waste_search'] = array(
      'label' => 'hidden',
      'module' => 'email',
      'settings' => array(),
      'type' => 'email_default',
      'weight' => 3,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_fax_number'])) {
    $data['node-place-field_fax_number']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_fax_number']['display']['teaser']['weight'] = 37; /* WAS: 34 */
    $data['node-place-field_fax_number']['display']['waste_map'] = array(
      'label' => 'inline',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 24,
    ); /* WAS: '' */
    $data['node-place-field_fax_number']['display']['waste_search'] = array(
      'label' => 'inline',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 25,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_location'])) {
    $data['node-place-field_location']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_location']['display']['teaser']['weight'] = 35; /* WAS: 32 */
    $data['node-place-field_location']['display']['waste_map'] = array(
      'label' => 'hidden',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 30,
    ); /* WAS: '' */
    $data['node-place-field_location']['display']['waste_search'] = array(
      'label' => 'hidden',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 30,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_main_image'])) {
    $data['node-place-field_main_image']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_main_image']['display']['teaser']['weight'] = 30; /* WAS: 27 */
    $data['node-place-field_main_image']['display']['waste_map'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 33,
    ); /* WAS: '' */
    $data['node-place-field_main_image']['display']['waste_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 33,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_municipality_term'])) {
    $data['node-place-field_municipality_term']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_municipality_term']['display']['teaser']['weight'] = 25; /* WAS: 22 */
    $data['node-place-field_municipality_term']['display']['waste_map'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 34,
    ); /* WAS: '' */
    $data['node-place-field_municipality_term']['display']['waste_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 34,
    ); /* WAS: '' */
    $data['node-place-field_municipality_term']['widget']['settings']['content_taxonomy_opt_groups'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-place-field_person_responsible'])) {
    $data['node-place-field_person_responsible']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_person_responsible']['display']['teaser']['weight'] = 32; /* WAS: 29 */
    $data['node-place-field_person_responsible']['display']['waste_map'] = array(
      'label' => 'inline',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 22,
    ); /* WAS: '' */
    $data['node-place-field_person_responsible']['display']['waste_search'] = array(
      'label' => 'inline',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 23,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_phone'])) {
    $data['node-place-field_phone']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_phone']['display']['waste_map'] = array(
      'label' => 'hidden',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 2,
    ); /* WAS: '' */
    $data['node-place-field_phone']['display']['waste_search'] = array(
      'label' => 'hidden',
      'module' => 'title',
      'settings' => array(
        'title_class' => 'waste-unit-detail',
        'title_link' => '',
        'title_style' => 'div',
      ),
      'type' => 'title_linked',
      'weight' => 2,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_phone_switch'])) {
    $data['node-place-field_phone_switch']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_phone_switch']['display']['teaser']['weight'] = 29; /* WAS: 26 */
    $data['node-place-field_phone_switch']['display']['waste_map'] = array(
      'label' => 'inline',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 23,
    ); /* WAS: '' */
    $data['node-place-field_phone_switch']['display']['waste_search'] = array(
      'label' => 'inline',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 24,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_service_offer'])) {
    $data['node-place-field_service_offer']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_service_offer']['display']['teaser']['weight'] = 34; /* WAS: 31 */
    $data['node-place-field_service_offer']['display']['waste_map'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 32,
    ); /* WAS: '' */
    $data['node-place-field_service_offer']['display']['waste_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 32,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_website_et'])) {
    $data['node-place-field_website_et']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_website_et']['display']['teaser']['weight'] = 31; /* WAS: 28 */
    $data['node-place-field_website_et']['display']['waste_map'] = array(
      'label' => 'inline',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 25,
    ); /* WAS: '' */
    $data['node-place-field_website_et']['display']['waste_search'] = array(
      'label' => 'hidden',
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_default',
      'weight' => 6,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-title_field'])) {
    $data['node-place-title_field']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-title_field']['display']['teaser']['weight'] = 33; /* WAS: 30 */
    $data['node-place-title_field']['display']['waste_map'] = array(
      'label' => 'hidden',
      'module' => 'title',
      'settings' => array(
        'title_class' => '',
        'title_link' => '',
        'title_style' => 'h3',
      ),
      'type' => 'title_linked',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-title_field']['display']['waste_search'] = array(
      'label' => 'hidden',
      'module' => 'title',
      'settings' => array(
        'title_class' => '',
        'title_link' => '',
        'title_style' => 'h3',
      ),
      'type' => 'title_linked',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['widget-event_carousel-field_keywords_et'])) {
    $data['widget-event_carousel-field_keywords_et']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'deny'; /* WAS: '' */
  }
  if (isset($data['widget-event_mosaic-field_keywords_et'])) {
    $data['widget-event_mosaic-field_keywords_et']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'deny'; /* WAS: '' */
  }
}

/**
 * Implements hook_openlayers_maps_alter().
 */
function pori_configuration_overrides_feature_openlayers_maps_alter(&$data) {
  if (isset($data['kada_location_input'])) {
    $data['kada_location_input']->data['behaviors']['openlayers_behavior_zoomtolayer']['zoomtolayer']['pori_arcgis'] = 0; /* WAS: '' */
    $data['kada_location_input']->data['center']['initial']['centerpoint'] = '21.6649,61.535'; /* WAS: '22.270831921235335, 60.451800341324734' */
    $data['kada_location_input']->data['center']['initial']['zoom'] = 11; /* WAS: 10 */
    $data['kada_location_input']->data['layers']['pori_arcgis'] = 'pori_arcgis'; /* WAS: '' */
    unset($data['kada_location_input']->data['layers']['osm_mapnik']);
  }
  if (isset($data['kada_place_map'])) {
    $data['kada_place_map']->data['behaviors']['openlayers_behavior_zoomtolayer']['zoomtolayer']['pori_arcgis'] = 0; /* WAS: '' */
    $data['kada_place_map']->data['center']['initial']['centerpoint'] = '21.74,61.49'; /* WAS: '22.26413716347558, 60.45391664873799' */
    $data['kada_place_map']->data['layers']['pori_arcgis'] = 'pori_arcgis'; /* WAS: '' */
    unset($data['kada_place_map']->data['layers']['osm_mapnik']);
  }
  if (isset($data['kada_place_map_service'])) {
    $data['kada_place_map_service']->data['center']['initial']['centerpoint'] = '21.74,61.49'; /* WAS: '22.26413716347558, 60.45391664873799' */
    $data['kada_place_map_service']->data['layers']['pori_arcgis'] = 'pori_arcgis'; /* WAS: '' */
    unset($data['kada_place_map_service']->data['layers']['osm_mapnik']);
  }
  if (isset($data['kada_service_map'])) {
    $data['kada_service_map']->data['center']['initial']['centerpoint'] = '21.74,61.49'; /* WAS: '22.26413716347558, 60.45391664873799' */
    $data['kada_service_map']->data['layers']['pori_arcgis'] = 'pori_arcgis'; /* WAS: '' */
    unset($data['kada_service_map']->data['layers']['osm_mapnik']);
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function pori_configuration_overrides_feature_strongarm_alter(&$data) {
  if (isset($data['field_bundle_settings_node__place'])) {
    $data['field_bundle_settings_node__place']->value['extra_fields']['display']['domain']['teaser']['weight'] = 23; /* WAS: 19 */
    $data['field_bundle_settings_node__place']->value['extra_fields']['display']['domain']['waste_map'] = array(
      'weight' => 31,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__place']->value['extra_fields']['display']['domain']['waste_search'] = array(
      'weight' => 31,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__place']->value['view_modes']['waste_map'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__place']->value['view_modes']['waste_search'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
  }
}
