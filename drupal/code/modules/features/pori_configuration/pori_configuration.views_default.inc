<?php
/**
 * @file
 * pori_configuration.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pori_configuration_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pori_main_image_for_page';
  $view->description = 'Provides main image for page content type if "Show main image" option is selected';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Pori - Main image for page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Main image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_main_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_main_image']['type'] = 'carousel';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'link' => '0',
  );
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
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );
  /* Filter criterion: Content: Show main image on the page (field_show_main_image) */
  $handler->display->display_options['filters']['field_show_main_image_value']['id'] = 'field_show_main_image_value';
  $handler->display->display_options['filters']['field_show_main_image_value']['table'] = 'field_data_field_show_main_image';
  $handler->display->display_options['filters']['field_show_main_image_value']['field'] = 'field_show_main_image_value';
  $handler->display->display_options['filters']['field_show_main_image_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['pori_main_image_for_page'] = array(
    t('Master'),
    t('<none>'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Block'),
  );
  $export['pori_main_image_for_page'] = $view;

  $view = new view();
  $view->name = 'pori_place_map';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Pori Place Map';
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
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_service_offering_target_id']['id'] = 'field_service_offering_target_id';
  $handler->display->display_options['relationships']['field_service_offering_target_id']['table'] = 'field_data_field_service_offering';
  $handler->display->display_options['relationships']['field_service_offering_target_id']['field'] = 'field_service_offering_target_id';
  $handler->display->display_options['relationships']['field_service_offering_target_id']['label'] = 'Service offering referenced from field_service_offering';
  $handler->display->display_options['relationships']['field_service_offering_target_id']['required'] = TRUE;
  /* Relationship: Content: Relation: provides (node → node) */
  $handler->display->display_options['relationships']['relation_place_service_node']['id'] = 'relation_place_service_node';
  $handler->display->display_options['relationships']['relation_place_service_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_place_service_node']['field'] = 'relation_place_service_node';
  $handler->display->display_options['relationships']['relation_place_service_node']['relationship'] = 'field_service_offering_target_id';
  $handler->display->display_options['relationships']['relation_place_service_node']['label'] = 'Provided services';
  $handler->display->display_options['relationships']['relation_place_service_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_place_service_node']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_place_service_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_place_service_node']['entity_deduplication_right'] = 0;
  /* Field: Field: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['fields']['field_location']['label'] = 'Sijainti';
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'place' => 'place',
  );

  /* Display: OpenLayers Data Overlay */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay', 'place_data');
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
    'description_field' => 'field_description',
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

  /* Display: Map | Place */
  $handler = $view->new_display('block', 'Map | Place', 'map');
  $handler->display->display_options['display_description'] = 'Map per place';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'kada_place_map';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['pori_place_map'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Service offering referenced from field_service_offering'),
    t('Provided services'),
    t('Sijainti'),
    t('All'),
    t('OpenLayers Data Overlay'),
    t('Map | Place'),
    t('Map per place'),
  );
  $export['pori_place_map'] = $view;

  return $export;
}
