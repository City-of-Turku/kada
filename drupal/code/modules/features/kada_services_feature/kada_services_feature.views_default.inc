<?php
/**
 * @file
 * kada_services_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function kada_services_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'kada_service_descriptions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KADA Service descriptions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'views_content_cache';
  $handler->display->display_options['cache']['results_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_max_lifespan'] = '300';
  $handler->display->display_options['cache']['output_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_max_lifespan'] = '300';
  $handler->display->display_options['cache']['keys'] = array(
    'comment' => array(
      'changed' => 0,
    ),
    'node' => array(
      'service' => 'service',
      'blog' => 0,
      'blog_post' => 0,
      'event' => 0,
      'feed_import_facebook' => 0,
      'feed_import_instagram' => 0,
      'feed_import_twitter' => 0,
      'feed_import_youtube_channel' => 0,
      'landing_page' => 0,
      'liftup' => 0,
      'news_item' => 0,
      'page' => 0,
      'person' => 0,
      'place' => 0,
      'position_of_trust' => 0,
      'section' => 0,
      'service_offer' => 0,
      'social_media_update' => 0,
      'webform' => 0,
    ),
    'node_only' => array(
      'node_changed' => 'node_changed',
    ),
    'og' => array(
      'current' => 0,
      'user' => 0,
    ),
  );
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Service */
  $handler->display->display_options['relationships']['reverse_field_described_by_er_et_node']['id'] = 'reverse_field_described_by_er_et_node';
  $handler->display->display_options['relationships']['reverse_field_described_by_er_et_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_described_by_er_et_node']['field'] = 'reverse_field_described_by_er_et_node';
  $handler->display->display_options['relationships']['reverse_field_described_by_er_et_node']['ui_name'] = 'Service';
  $handler->display->display_options['relationships']['reverse_field_described_by_er_et_node']['label'] = 'Service';
  $handler->display->display_options['relationships']['reverse_field_described_by_er_et_node']['required'] = TRUE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'reverse_field_described_by_er_et_node';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = 'show in service directory';
  $handler->display->display_options['fields']['path']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['path']['element_type'] = 'div';
  $handler->display->display_options['fields']['path']['element_class'] = 'service-directory-link';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_described_by_er_et_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_described_by_er_et_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service' => 'service',
  );
  /* Filter criterion: Content: Name (title_field:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'reverse_field_described_by_er_et_node';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Link -> Service desc. */
  $handler = $view->new_display('block', 'Link -> Service desc.', 'service_link');
  $handler->display->display_options['display_description'] = 'Link to service description';

  /* Display: Description | Page */
  $handler = $view->new_display('block', 'Description | Page', 'description');
  $handler->display->display_options['display_description'] = 'Displays Service description per referenced Page';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['relationship'] = 'reverse_field_described_by_er_et_node';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_description']['element_class'] = 'description';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_description']['element_default_classes'] = FALSE;
  $translatables['kada_service_descriptions'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Service'),
    t('show in service directory'),
    t('All'),
    t('Link -> Service desc.'),
    t('Link to service description'),
    t('Description | Page'),
    t('Displays Service description per referenced Page'),
  );
  $export['kada_service_descriptions'] = $view;

  $view = new view();
  $view->name = 'kada_service_map';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KADA Service Map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'map';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'views_content_cache';
  $handler->display->display_options['cache']['results_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_max_lifespan'] = '300';
  $handler->display->display_options['cache']['output_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_max_lifespan'] = '300';
  $handler->display->display_options['cache']['keys'] = array(
    'comment' => array(
      'changed' => 0,
    ),
    'node' => array(
      'place' => 'place',
      'service_offer' => 'service_offer',
      'blog' => 0,
      'blog_post' => 0,
      'event' => 0,
      'feed_import_facebook' => 0,
      'feed_import_instagram' => 0,
      'feed_import_twitter' => 0,
      'feed_import_youtube_channel' => 0,
      'landing_page' => 0,
      'liftup' => 0,
      'news_item' => 0,
      'page' => 0,
      'person' => 0,
      'position_of_trust' => 0,
      'section' => 0,
      'service' => 0,
      'social_media_update' => 0,
      'webform' => 0,
    ),
    'node_only' => array(
      'node_changed' => 'node_changed',
    ),
    'og' => array(
      'current' => 0,
      'user' => 0,
    ),
  );
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'field_location',
    'other_lon' => 'field_location',
    'wkt' => 'field_location',
    'other_top' => 'field_location',
    'other_right' => 'field_location',
    'other_bottom' => 'field_location',
    'other_left' => 'field_location',
    'name_field' => 'title',
    'description_field' => 'field_description',
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Service offer - Service description */
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['id'] = 'relation_service_offer_service_node';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['field'] = 'relation_service_offer_service_node';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['ui_name'] = 'Service offer - Service description';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['label'] = 'Service offer';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['entity_deduplication_right'] = 0;
  /* Relationship: Place - Service offer */
  $handler->display->display_options['relationships']['relation_place_service_node']['id'] = 'relation_place_service_node';
  $handler->display->display_options['relationships']['relation_place_service_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_place_service_node']['field'] = 'relation_place_service_node';
  $handler->display->display_options['relationships']['relation_place_service_node']['relationship'] = 'relation_service_offer_service_node';
  $handler->display->display_options['relationships']['relation_place_service_node']['ui_name'] = 'Place - Service offer';
  $handler->display->display_options['relationships']['relation_place_service_node']['label'] = 'Place';
  $handler->display->display_options['relationships']['relation_place_service_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_place_service_node']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_place_service_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_place_service_node']['entity_deduplication_right'] = 0;
  /* Field: Field: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity_1']['id'] = 'rendered_entity_1';
  $handler->display->display_options['fields']['rendered_entity_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity_1']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity_1']['relationship'] = 'relation_service_offer_service_node';
  $handler->display->display_options['fields']['rendered_entity_1']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rendered_entity_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity_1']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity_1']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity_1']['view_mode'] = 'map';
  $handler->display->display_options['fields']['rendered_entity_1']['bypass_access'] = 0;
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['rendered_entity']['alter']['text'] = '[rendered_entity_1]
[rendered_entity]';
  $handler->display->display_options['fields']['rendered_entity']['element_type'] = '0';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['rendered_entity']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'map';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Name (title_field:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Per Service */
  $handler = $view->new_display('openlayers', 'Per Service', 'place_data');
  $handler->display->display_options['display_description'] = 'Point data per Service';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'field_location',
    'other_lon' => 'field_location',
    'wkt' => 'field_location',
    'other_top' => 'field_location',
    'other_right' => 'field_location',
    'other_bottom' => 'field_location',
    'other_left' => 'field_location',
    'name_field' => 'title',
    'description_field' => 'rendered_entity',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_location' => 'field_location',
    'title' => 'title',
    'field_description' => 'field_description',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Map | Service */
  $handler = $view->new_display('block', 'Map | Service', 'map');
  $handler->display->display_options['display_description'] = 'Map per service';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'kada_service_map';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'place' => 'place',
  );

  /* Display: Per Page */
  $handler = $view->new_display('openlayers', 'Per Page', 'page_data');
  $handler->display->display_options['display_description'] = 'Point data per Page through Service';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'field_location',
    'other_lon' => 'field_location',
    'wkt' => 'field_location',
    'other_top' => 'field_location',
    'other_right' => 'field_location',
    'other_bottom' => 'field_location',
    'other_left' => 'field_location',
    'name_field' => 'title',
    'description_field' => 'rendered_entity',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_location' => 'field_location',
    'title' => 'title',
    'field_description' => 'field_description',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Service - Page */
  $handler->display->display_options['relationships']['reverse_field_described_by_er_et_node']['id'] = 'reverse_field_described_by_er_et_node';
  $handler->display->display_options['relationships']['reverse_field_described_by_er_et_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_described_by_er_et_node']['field'] = 'reverse_field_described_by_er_et_node';
  $handler->display->display_options['relationships']['reverse_field_described_by_er_et_node']['ui_name'] = 'Service - Page';
  $handler->display->display_options['relationships']['reverse_field_described_by_er_et_node']['label'] = 'Service';
  $handler->display->display_options['relationships']['reverse_field_described_by_er_et_node']['required'] = TRUE;
  /* Relationship: Service offer - Service description */
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['id'] = 'relation_service_offer_service_node';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['field'] = 'relation_service_offer_service_node';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['relationship'] = 'reverse_field_described_by_er_et_node';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['ui_name'] = 'Service offer - Service description';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['label'] = 'Service offer';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['entity_deduplication_right'] = 0;
  /* Relationship: Place - Service offer */
  $handler->display->display_options['relationships']['relation_place_service_node']['id'] = 'relation_place_service_node';
  $handler->display->display_options['relationships']['relation_place_service_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_place_service_node']['field'] = 'relation_place_service_node';
  $handler->display->display_options['relationships']['relation_place_service_node']['relationship'] = 'relation_service_offer_service_node';
  $handler->display->display_options['relationships']['relation_place_service_node']['ui_name'] = 'Place - Service offer';
  $handler->display->display_options['relationships']['relation_place_service_node']['label'] = 'Place';
  $handler->display->display_options['relationships']['relation_place_service_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_place_service_node']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_place_service_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_place_service_node']['entity_deduplication_right'] = 0;

  /* Display: Map | Page */
  $handler = $view->new_display('block', 'Map | Page', 'map_page');
  $handler->display->display_options['display_description'] = 'Map per Page of Places through Service';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'kada_service_map';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Service - Page */
  $handler->display->display_options['relationships']['reverse_field_described_by_er_et_node']['id'] = 'reverse_field_described_by_er_et_node';
  $handler->display->display_options['relationships']['reverse_field_described_by_er_et_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_described_by_er_et_node']['field'] = 'reverse_field_described_by_er_et_node';
  $handler->display->display_options['relationships']['reverse_field_described_by_er_et_node']['ui_name'] = 'Service - Page';
  $handler->display->display_options['relationships']['reverse_field_described_by_er_et_node']['label'] = 'Service';
  $handler->display->display_options['relationships']['reverse_field_described_by_er_et_node']['required'] = TRUE;
  /* Relationship: Service offer - Service description */
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['id'] = 'relation_service_offer_service_node';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['field'] = 'relation_service_offer_service_node';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['relationship'] = 'reverse_field_described_by_er_et_node';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['ui_name'] = 'Service offer - Service description';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['label'] = 'Service offer';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['entity_deduplication_right'] = 0;
  /* Relationship: Place - Service offer */
  $handler->display->display_options['relationships']['relation_place_service_node']['id'] = 'relation_place_service_node';
  $handler->display->display_options['relationships']['relation_place_service_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_place_service_node']['field'] = 'relation_place_service_node';
  $handler->display->display_options['relationships']['relation_place_service_node']['relationship'] = 'relation_service_offer_service_node';
  $handler->display->display_options['relationships']['relation_place_service_node']['ui_name'] = 'Place - Service offer';
  $handler->display->display_options['relationships']['relation_place_service_node']['label'] = 'Place';
  $handler->display->display_options['relationships']['relation_place_service_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_place_service_node']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_place_service_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_place_service_node']['entity_deduplication_right'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'place' => 'place',
  );
  $translatables['kada_service_map'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Service offer'),
    t('Place'),
    t('Location'),
    t('[rendered_entity_1]
[rendered_entity]'),
    t('All'),
    t('Per Service'),
    t('Point data per Service'),
    t('Map | Service'),
    t('Map per service'),
    t('Per Page'),
    t('Point data per Page through Service'),
    t('Service'),
    t('Map | Page'),
    t('Map per Page of Places through Service'),
  );
  $export['kada_service_map'] = $view;

  return $export;
}
