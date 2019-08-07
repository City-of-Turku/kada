<?php

/**
 * @file
 * pori_configuration_overrides_feature.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function pori_configuration_overrides_feature_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: ds_field_settings
  $overrides["ds_field_settings.node|place|teaser.settings|node_link"]["DELETED"] = TRUE;

  // Exported overrides for: ds_layout_settings
  $overrides["ds_layout_settings.node|place|teaser.settings|fields|field_read_more"] = 'main_content';
  $overrides["ds_layout_settings.node|place|teaser.settings|fields|node_link"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.node|place|teaser.settings|regions|main_content|6"] = 'field_read_more';

  // Exported overrides for: field_base
  $overrides["field_base.field_accessibility.settings|hide_initial_item"] = FALSE;

  // Exported overrides for: field_group
  $overrides["field_group.group_content|node|place|form.data|children|11"] = 'field_read_more';
  $overrides["field_group.group_content|node|place|form.data|children|17"] = 'field_sorting_point';
  $overrides["field_group.group_content|node|place|form.data|children|18"] = 'field_responsibility';

  // Exported overrides for: field_instance
  $overrides["field_instance.node-news_item-field_keywords.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'deny';
  $overrides["field_instance.node-news_item-field_related_content.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'deny';
  $overrides["field_instance.node-place-field_accessibility.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_accessibility.display|teaser|weight"] = 28;
  $overrides["field_instance.node-place-field_accessibility.display|waste_map"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 29,
  );
  $overrides["field_instance.node-place-field_accessibility.display|waste_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 29,
  );
  $overrides["field_instance.node-place-field_address_postal.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_address_postal.display|teaser|weight"] = 24;
  $overrides["field_instance.node-place-field_address_postal.display|waste_map"] = array(
    'label' => 'inline',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 26,
  );
  $overrides["field_instance.node-place-field_address_postal.display|waste_search"] = array(
    'label' => 'inline',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 26,
  );
  $overrides["field_instance.node-place-field_address_street.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_address_street.display|teaser|weight"] = 27;
  $overrides["field_instance.node-place-field_address_street.display|waste_map"] = array(
    'label' => 'inline',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 27,
  );
  $overrides["field_instance.node-place-field_address_street.display|waste_search"] = array(
    'label' => 'inline',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 27,
  );
  $overrides["field_instance.node-place-field_address_visiting.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_address_visiting.display|waste_map"] = array(
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
  );
  $overrides["field_instance.node-place-field_address_visiting.display|waste_search"] = array(
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
  );
  $overrides["field_instance.node-place-field_availability.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_availability.display|waste_map"] = array(
    'label' => 'above',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 4,
  );
  $overrides["field_instance.node-place-field_availability.display|waste_search"] = array(
    'label' => 'above',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 4,
  );
  $overrides["field_instance.node-place-field_billing_address.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_billing_address.display|teaser|weight"] = 36;
  $overrides["field_instance.node-place-field_billing_address.display|waste_map"] = array(
    'label' => 'inline',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 28,
  );
  $overrides["field_instance.node-place-field_billing_address.display|waste_search"] = array(
    'label' => 'inline',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 28,
  );
  $overrides["field_instance.node-place-field_description.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_description.display|waste_map"] = array(
    'label' => 'hidden',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 19,
  );
  $overrides["field_instance.node-place-field_description.display|waste_search"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 5,
  );
  $overrides["field_instance.node-place-field_district.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_district.display|teaser|weight"] = 26;
  $overrides["field_instance.node-place-field_district.display|waste_map"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 35,
  );
  $overrides["field_instance.node-place-field_district.display|waste_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 35,
  );
  $overrides["field_instance.node-place-field_email.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_email.display|waste_map"] = array(
    'label' => 'hidden',
    'module' => 'email',
    'settings' => array(),
    'type' => 'email_default',
    'weight' => 3,
  );
  $overrides["field_instance.node-place-field_email.display|waste_search"] = array(
    'label' => 'hidden',
    'module' => 'email',
    'settings' => array(),
    'type' => 'email_default',
    'weight' => 3,
  );
  $overrides["field_instance.node-place-field_fax_number.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_fax_number.display|teaser|weight"] = 37;
  $overrides["field_instance.node-place-field_fax_number.display|waste_map"] = array(
    'label' => 'inline',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 24,
  );
  $overrides["field_instance.node-place-field_fax_number.display|waste_search"] = array(
    'label' => 'inline',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 25,
  );
  $overrides["field_instance.node-place-field_location.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_location.display|teaser|weight"] = 35;
  $overrides["field_instance.node-place-field_location.display|waste_map"] = array(
    'label' => 'hidden',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 30,
  );
  $overrides["field_instance.node-place-field_location.display|waste_search"] = array(
    'label' => 'hidden',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 30,
  );
  $overrides["field_instance.node-place-field_main_image.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_main_image.display|teaser|weight"] = 30;
  $overrides["field_instance.node-place-field_main_image.display|waste_map"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 33,
  );
  $overrides["field_instance.node-place-field_main_image.display|waste_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 33,
  );
  $overrides["field_instance.node-place-field_municipality_term.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_municipality_term.display|teaser|weight"] = 25;
  $overrides["field_instance.node-place-field_municipality_term.display|waste_map"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 34,
  );
  $overrides["field_instance.node-place-field_municipality_term.display|waste_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 34,
  );
  $overrides["field_instance.node-place-field_municipality_term.widget|settings|content_taxonomy_opt_groups"] = FALSE;
  $overrides["field_instance.node-place-field_person_responsible.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_person_responsible.display|teaser|weight"] = 32;
  $overrides["field_instance.node-place-field_person_responsible.display|waste_map"] = array(
    'label' => 'inline',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 22,
  );
  $overrides["field_instance.node-place-field_person_responsible.display|waste_search"] = array(
    'label' => 'inline',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 23,
  );
  $overrides["field_instance.node-place-field_phone.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_phone.display|waste_map"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 2,
  );
  $overrides["field_instance.node-place-field_phone.display|waste_search"] = array(
    'label' => 'hidden',
    'module' => 'title',
    'settings' => array(
      'title_class' => 'waste-unit-detail',
      'title_link' => '',
      'title_style' => 'div',
    ),
    'type' => 'title_linked',
    'weight' => 2,
  );
  $overrides["field_instance.node-place-field_phone_switch.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_phone_switch.display|teaser|weight"] = 29;
  $overrides["field_instance.node-place-field_phone_switch.display|waste_map"] = array(
    'label' => 'inline',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 23,
  );
  $overrides["field_instance.node-place-field_phone_switch.display|waste_search"] = array(
    'label' => 'inline',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 24,
  );
  $overrides["field_instance.node-place-field_service_offer.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_service_offer.display|teaser|weight"] = 34;
  $overrides["field_instance.node-place-field_service_offer.display|waste_map"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 32,
  );
  $overrides["field_instance.node-place-field_service_offer.display|waste_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 32,
  );
  $overrides["field_instance.node-place-field_website_et.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_website_et.display|teaser|weight"] = 31;
  $overrides["field_instance.node-place-field_website_et.display|waste_map"] = array(
    'label' => 'inline',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 25,
  );
  $overrides["field_instance.node-place-field_website_et.display|waste_search"] = array(
    'label' => 'hidden',
    'module' => 'link',
    'settings' => array(),
    'type' => 'link_default',
    'weight' => 6,
  );
  $overrides["field_instance.node-place-title_field.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-title_field.display|teaser|weight"] = 33;
  $overrides["field_instance.node-place-title_field.display|waste_map"] = array(
    'label' => 'hidden',
    'module' => 'title',
    'settings' => array(
      'title_class' => '',
      'title_link' => '',
      'title_style' => 'h3',
    ),
    'type' => 'title_linked',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-title_field.display|waste_search"] = array(
    'label' => 'hidden',
    'module' => 'title',
    'settings' => array(
      'title_class' => '',
      'title_link' => '',
      'title_style' => 'h3',
    ),
    'type' => 'title_linked',
    'weight' => 0,
  );
  $overrides["field_instance.widget-event_carousel-field_keywords_et.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'deny';
  $overrides["field_instance.widget-event_mosaic-field_keywords_et.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'deny';

  // Exported overrides for: openlayers_maps
  $overrides["openlayers_maps.kada_location_input.data|behaviors|openlayers_behavior_zoomtolayer|zoomtolayer|pori_arcgis"] = 0;
  $overrides["openlayers_maps.kada_location_input.data|center|initial|centerpoint"] = '21.6649,61.535';
  $overrides["openlayers_maps.kada_location_input.data|center|initial|zoom"] = 11;
  $overrides["openlayers_maps.kada_location_input.data|layers|osm_mapnik"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.kada_location_input.data|layers|pori_arcgis"] = 'pori_arcgis';
  $overrides["openlayers_maps.kada_place_map.data|behaviors|openlayers_behavior_zoomtolayer|zoomtolayer|pori_arcgis"] = 0;
  $overrides["openlayers_maps.kada_place_map.data|center|initial|centerpoint"] = '21.74,61.49';
  $overrides["openlayers_maps.kada_place_map.data|layers|osm_mapnik"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.kada_place_map.data|layers|pori_arcgis"] = 'pori_arcgis';
  $overrides["openlayers_maps.kada_place_map_service.data|center|initial|centerpoint"] = '21.74,61.49';
  $overrides["openlayers_maps.kada_place_map_service.data|layers|osm_mapnik"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.kada_place_map_service.data|layers|pori_arcgis"] = 'pori_arcgis';
  $overrides["openlayers_maps.kada_service_map.data|center|initial|centerpoint"] = '21.74,61.49';
  $overrides["openlayers_maps.kada_service_map.data|layers|osm_mapnik"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.kada_service_map.data|layers|pori_arcgis"] = 'pori_arcgis';

  // Exported overrides for: variable
  $overrides["variable.field_bundle_settings_node__place.value|extra_fields|display|domain|teaser|weight"] = 23;
  $overrides["variable.field_bundle_settings_node__place.value|extra_fields|display|domain|waste_map"] = array(
    'weight' => 31,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__place.value|extra_fields|display|domain|waste_search"] = array(
    'weight' => 31,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__place.value|view_modes|waste_map"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__place.value|view_modes|waste_search"] = array(
    'custom_settings' => TRUE,
  );

 return $overrides;
}
