<?php
/**
 * @file
 * kada_service_offer_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function kada_service_offer_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'kada_services';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KADA Services&Places';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'KADA Services';
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
      'service' => 'service',
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
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['style_options']['autoheight'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Relation: offered service (node → node) */
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['id'] = 'relation_service_offer_service_node';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['field'] = 'relation_service_offer_service_node';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['label'] = 'Service offer';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['entity_deduplication_right'] = 0;
  /* Relationship: Content: Relation: provides (node → node) */
  $handler->display->display_options['relationships']['relation_place_service_node']['id'] = 'relation_place_service_node';
  $handler->display->display_options['relationships']['relation_place_service_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_place_service_node']['field'] = 'relation_place_service_node';
  $handler->display->display_options['relationships']['relation_place_service_node']['relationship'] = 'relation_service_offer_service_node';
  $handler->display->display_options['relationships']['relation_place_service_node']['label'] = 'Place';
  $handler->display->display_options['relationships']['relation_place_service_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_place_service_node']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_place_service_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_place_service_node']['entity_deduplication_right'] = 0;
  /* Field: Content: Precondition */
  $handler->display->display_options['fields']['field_precondition']['id'] = 'field_precondition';
  $handler->display->display_options['fields']['field_precondition']['table'] = 'field_data_field_precondition';
  $handler->display->display_options['fields']['field_precondition']['field'] = 'field_precondition';
  $handler->display->display_options['fields']['field_precondition']['relationship'] = 'relation_service_offer_service_node';
  $handler->display->display_options['fields']['field_precondition']['label'] = '';
  $handler->display->display_options['fields']['field_precondition']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_precondition']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_precondition']['delta_offset'] = '0';
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['text'] = '[title_field]<span class="precondition">[field_precondition]</span>';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => 'h3',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['relationship'] = 'relation_service_offer_service_node';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'accordion';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity_1']['id'] = 'rendered_entity_1';
  $handler->display->display_options['fields']['rendered_entity_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity_1']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity_1']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['fields']['rendered_entity_1']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity_1']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity_1']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity_1']['view_mode'] = 'accordion';
  $handler->display->display_options['fields']['rendered_entity_1']['bypass_access'] = 0;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = 'View place information';
  $handler->display->display_options['fields']['path']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['path']['element_wrapper_class'] = 'link-to-content';
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Sort criterion: Content: Name (title_field) */
  $handler->display->display_options['sorts']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['sorts']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['relationship'] = 'relation_place_service_node';
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

  /* Display: Places | Service */
  $handler = $view->new_display('block', 'Places | Service', 'place');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Places';
  $handler->display->display_options['display_description'] = 'Display places per service description';

  /* Display: Services | Place */
  $handler = $view->new_display('block', 'Services | Place', 'services');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Services';
  $handler->display->display_options['display_description'] = 'Display service descriptions per place';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Place - Service offer */
  $handler->display->display_options['relationships']['relation_place_service_node']['id'] = 'relation_place_service_node';
  $handler->display->display_options['relationships']['relation_place_service_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_place_service_node']['field'] = 'relation_place_service_node';
  $handler->display->display_options['relationships']['relation_place_service_node']['ui_name'] = 'Place - Service offer';
  $handler->display->display_options['relationships']['relation_place_service_node']['label'] = 'Service offer';
  $handler->display->display_options['relationships']['relation_place_service_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_place_service_node']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_place_service_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_place_service_node']['entity_deduplication_right'] = 0;
  /* Relationship: Service offer - Service description */
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['id'] = 'relation_service_offer_service_node';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['field'] = 'relation_service_offer_service_node';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['ui_name'] = 'Service offer - Service description';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['label'] = 'Service desc.';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['entity_deduplication_right'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Precondition */
  $handler->display->display_options['fields']['field_precondition']['id'] = 'field_precondition';
  $handler->display->display_options['fields']['field_precondition']['table'] = 'field_data_field_precondition';
  $handler->display->display_options['fields']['field_precondition']['field'] = 'field_precondition';
  $handler->display->display_options['fields']['field_precondition']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['fields']['field_precondition']['label'] = '';
  $handler->display->display_options['fields']['field_precondition']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_precondition']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_precondition']['delta_offset'] = '0';
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'relation_service_offer_service_node';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['text'] = '[title_field]<span class="precondition">[field_precondition]</span>';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => 'h3',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'accordion';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'relation_service_offer_service_node';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = 'View service description';
  $handler->display->display_options['fields']['path']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['path']['element_wrapper_class'] = 'link-to-content';
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Name (title_field) */
  $handler->display->display_options['sorts']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['sorts']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['relationship'] = 'relation_service_offer_service_node';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'relation_service_offer_service_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Name (title_field:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'relation_service_offer_service_node';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Manage: Offers | Place */
  $handler = $view->new_display('page', 'Manage: Offers | Place', 'offers_place');
  $handler->display->display_options['display_description'] = 'Service offer management list per place';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title_field',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title_field' => 'title_field',
    'field_precondition' => 'field_precondition',
    'edit_node' => 'edit_node',
    'field_description' => 'field_description',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title_field' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_precondition' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Relation: offered service (node → node) */
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['id'] = 'relation_service_offer_service_node';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['field'] = 'relation_service_offer_service_node';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['label'] = 'Service offer';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['entity_deduplication_right'] = 0;
  /* Relationship: Content: Relation: provides (node → node) */
  $handler->display->display_options['relationships']['relation_place_service_node']['id'] = 'relation_place_service_node';
  $handler->display->display_options['relationships']['relation_place_service_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_place_service_node']['field'] = 'relation_place_service_node';
  $handler->display->display_options['relationships']['relation_place_service_node']['relationship'] = 'relation_service_offer_service_node';
  $handler->display->display_options['relationships']['relation_place_service_node']['label'] = 'Place';
  $handler->display->display_options['relationships']['relation_place_service_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_place_service_node']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_place_service_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_place_service_node']['entity_deduplication_right'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['text'] = '[title_field]<span class="precondition">[field_precondition]</span>';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field_1']['id'] = 'title_field_1';
  $handler->display->display_options['fields']['title_field_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_1']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field_1']['relationship'] = 'relation_service_offer_service_node';
  $handler->display->display_options['fields']['title_field_1']['label'] = 'Service';
  $handler->display->display_options['fields']['title_field_1']['link_to_entity'] = 0;
  /* Field: Content: Precondition */
  $handler->display->display_options['fields']['field_precondition']['id'] = 'field_precondition';
  $handler->display->display_options['fields']['field_precondition']['table'] = 'field_data_field_precondition';
  $handler->display->display_options['fields']['field_precondition']['field'] = 'field_precondition';
  $handler->display->display_options['fields']['field_precondition']['relationship'] = 'relation_service_offer_service_node';
  $handler->display->display_options['fields']['field_precondition']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_precondition']['delta_offset'] = '0';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['relationship'] = 'relation_service_offer_service_node';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'relation_service_offer_service_node';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'relation_service_offer_service_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Name (title_field:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'relation_service_offer_service_node';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Content: Name (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Place';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Name (title_field) */
  $handler->display->display_options['filters']['title_field_value_1']['id'] = 'title_field_value_1';
  $handler->display->display_options['filters']['title_field_value_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value_1']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value_1']['relationship'] = 'relation_service_offer_service_node';
  $handler->display->display_options['filters']['title_field_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value_1']['expose']['operator_id'] = 'title_field_value_1_op';
  $handler->display->display_options['filters']['title_field_value_1']['expose']['label'] = 'Service';
  $handler->display->display_options['filters']['title_field_value_1']['expose']['operator'] = 'title_field_value_1_op';
  $handler->display->display_options['filters']['title_field_value_1']['expose']['identifier'] = 'title_field_value_1';
  $handler->display->display_options['filters']['title_field_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['path'] = 'admin/service-offers/place';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'By place';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'By place';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Manage: Offers | Service */
  $handler = $view->new_display('page', 'Manage: Offers | Service', 'offers_service');
  $handler->display->display_options['display_description'] = 'Service offer management list per service';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title_field_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title_field_1' => 'title_field_1',
    'title_field' => 'title_field',
    'field_precondition' => 'field_precondition',
    'field_description' => 'field_description',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title_field_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_field' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_precondition' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Relation: offered service (node → node) */
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['id'] = 'relation_service_offer_service_node';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['field'] = 'relation_service_offer_service_node';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['label'] = 'Service offer';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['entity_deduplication_right'] = 0;
  /* Relationship: Content: Relation: provides (node → node) */
  $handler->display->display_options['relationships']['relation_place_service_node']['id'] = 'relation_place_service_node';
  $handler->display->display_options['relationships']['relation_place_service_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_place_service_node']['field'] = 'relation_place_service_node';
  $handler->display->display_options['relationships']['relation_place_service_node']['relationship'] = 'relation_service_offer_service_node';
  $handler->display->display_options['relationships']['relation_place_service_node']['label'] = 'Place';
  $handler->display->display_options['relationships']['relation_place_service_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_place_service_node']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_place_service_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_place_service_node']['entity_deduplication_right'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field_1']['id'] = 'title_field_1';
  $handler->display->display_options['fields']['title_field_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_1']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field_1']['label'] = '';
  $handler->display->display_options['fields']['title_field_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field_1']['link_to_entity'] = 0;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['fields']['title_field']['label'] = 'Place';
  $handler->display->display_options['fields']['title_field']['alter']['text'] = '[title_field]<span class="precondition">[field_precondition]</span>';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Precondition */
  $handler->display->display_options['fields']['field_precondition']['id'] = 'field_precondition';
  $handler->display->display_options['fields']['field_precondition']['table'] = 'field_data_field_precondition';
  $handler->display->display_options['fields']['field_precondition']['field'] = 'field_precondition';
  $handler->display->display_options['fields']['field_precondition']['relationship'] = 'relation_service_offer_service_node';
  $handler->display->display_options['fields']['field_precondition']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_precondition']['delta_offset'] = '0';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['relationship'] = 'relation_service_offer_service_node';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'relation_service_offer_service_node';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'relation_service_offer_service_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Name (title_field:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'relation_service_offer_service_node';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Name (title_field) */
  $handler->display->display_options['filters']['title_field_value_1']['id'] = 'title_field_value_1';
  $handler->display->display_options['filters']['title_field_value_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value_1']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value_1']['relationship'] = 'relation_service_offer_service_node';
  $handler->display->display_options['filters']['title_field_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value_1']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value_1']['expose']['operator_id'] = 'title_field_value_1_op';
  $handler->display->display_options['filters']['title_field_value_1']['expose']['label'] = 'Service';
  $handler->display->display_options['filters']['title_field_value_1']['expose']['operator'] = 'title_field_value_1_op';
  $handler->display->display_options['filters']['title_field_value_1']['expose']['identifier'] = 'title_field_value_1';
  $handler->display->display_options['filters']['title_field_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Name (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Place';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['path'] = 'admin/service-offers/service';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'By service';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'By service';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Places | Page */
  $handler = $view->new_display('block', 'Places | Page', 'places_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'compact-accordion-wrapper';
  $handler->display->display_options['display_description'] = 'Display Places per Page through referencing Service';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Service - Page */
  $handler->display->display_options['relationships']['reverse_field_described_by_er_et_node']['id'] = 'reverse_field_described_by_er_et_node';
  $handler->display->display_options['relationships']['reverse_field_described_by_er_et_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_described_by_er_et_node']['field'] = 'reverse_field_described_by_er_et_node';
  $handler->display->display_options['relationships']['reverse_field_described_by_er_et_node']['ui_name'] = 'Service - Page';
  $handler->display->display_options['relationships']['reverse_field_described_by_er_et_node']['label'] = 'Service';
  $handler->display->display_options['relationships']['reverse_field_described_by_er_et_node']['required'] = TRUE;
  /* Relationship: Service offer - Service */
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['id'] = 'relation_service_offer_service_node';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['field'] = 'relation_service_offer_service_node';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['relationship'] = 'reverse_field_described_by_er_et_node';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['ui_name'] = 'Service offer - Service';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['label'] = 'Service offer';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_service_offer_service_node']['entity_deduplication_right'] = 0;
  /* Relationship: Service offer - Place */
  $handler->display->display_options['relationships']['relation_place_service_node']['id'] = 'relation_place_service_node';
  $handler->display->display_options['relationships']['relation_place_service_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_place_service_node']['field'] = 'relation_place_service_node';
  $handler->display->display_options['relationships']['relation_place_service_node']['relationship'] = 'relation_service_offer_service_node';
  $handler->display->display_options['relationships']['relation_place_service_node']['ui_name'] = 'Service offer - Place';
  $handler->display->display_options['relationships']['relation_place_service_node']['label'] = 'Place';
  $handler->display->display_options['relationships']['relation_place_service_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_place_service_node']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_place_service_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_place_service_node']['entity_deduplication_right'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['text'] = '[title_field]';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => 'h3',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity_1']['id'] = 'rendered_entity_1';
  $handler->display->display_options['fields']['rendered_entity_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity_1']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity_1']['relationship'] = 'relation_service_offer_service_node';
  $handler->display->display_options['fields']['rendered_entity_1']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity_1']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity_1']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity_1']['view_mode'] = 'accordion';
  $handler->display->display_options['fields']['rendered_entity_1']['bypass_access'] = 0;
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'accordion';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = 'Show more';
  $handler->display->display_options['fields']['path']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['path']['element_wrapper_class'] = 'link-to-content';
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  $translatables['kada_services'] = array(
    t('Master'),
    t('KADA Services'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Service offer'),
    t('Place'),
    t('[title_field]<span class="precondition">[field_precondition]</span>'),
    t('View place information'),
    t('All'),
    t('Places | Service'),
    t('Places'),
    t('Display places per service description'),
    t('Services | Place'),
    t('Services'),
    t('Display service descriptions per place'),
    t('Service desc.'),
    t('View service description'),
    t('Manage: Offers | Place'),
    t('Service offer management list per place'),
    t('Search'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Service'),
    t('Precondition'),
    t('Description'),
    t('Edit link'),
    t('Manage: Offers | Service'),
    t('Service offer management list per service'),
    t('Places | Page'),
    t('Display Places per Page through referencing Service'),
    t('[title_field]'),
    t('Show more'),
  );
  $export['kada_services'] = $view;

  return $export;
}
