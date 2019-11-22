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
  $view->name = 'entity_delete_log_pori';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'entity_delete_log';
  $view->human_name = 'Entity Delete Log Pori';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Entity Delete Log pori';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access site reports';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'entity_id' => 'entity_id',
    'entity_type' => 'entity_type',
    'entity_bundle' => 'entity_bundle',
    'entity_title' => 'entity_title',
    'name_1' => 'name_1',
    'revisions' => 'revisions',
    'created' => 'created',
    'deleted' => 'deleted',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'entity_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'entity_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'entity_bundle' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'entity_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'revisions' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'deleted' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'A listing of deleted Entities.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no records of entities being deleted. Visit the <a href="/admin/config/entity-delete-log">Entity Delete Log Settings</a> to select which entity types will be logged when deleted.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Entity Delete Log: Acting User Account */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'entity_delete_log';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Delete Log: Author User Account */
  $handler->display->display_options['relationships']['author']['id'] = 'author';
  $handler->display->display_options['relationships']['author']['table'] = 'entity_delete_log';
  $handler->display->display_options['relationships']['author']['field'] = 'author';
  /* Field: Entity Delete Log: Entity ID */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'entity_delete_log';
  $handler->display->display_options['fields']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['separator'] = '';
  /* Field: Entity Delete Log: Entity Title */
  $handler->display->display_options['fields']['entity_title']['id'] = 'entity_title';
  $handler->display->display_options['fields']['entity_title']['table'] = 'entity_delete_log';
  $handler->display->display_options['fields']['entity_title']['field'] = 'entity_title';
  /* Field: Entity Delete Log: Entity Type */
  $handler->display->display_options['fields']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['fields']['entity_type']['table'] = 'entity_delete_log';
  $handler->display->display_options['fields']['entity_type']['field'] = 'entity_type';
  /* Field: Entity Delete Log: Entity Bundle */
  $handler->display->display_options['fields']['entity_bundle']['id'] = 'entity_bundle';
  $handler->display->display_options['fields']['entity_bundle']['table'] = 'entity_delete_log';
  $handler->display->display_options['fields']['entity_bundle']['field'] = 'entity_bundle';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'author';
  $handler->display->display_options['fields']['name_1']['label'] = 'Author';
  /* Field: Entity Delete Log: Revisions */
  $handler->display->display_options['fields']['revisions']['id'] = 'revisions';
  $handler->display->display_options['fields']['revisions']['table'] = 'entity_delete_log';
  $handler->display->display_options['fields']['revisions']['field'] = 'revisions';
  $handler->display->display_options['fields']['revisions']['separator'] = '';
  /* Field: Entity Delete Log: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'entity_delete_log';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  /* Field: Entity Delete Log: Deleted */
  $handler->display->display_options['fields']['deleted']['id'] = 'deleted';
  $handler->display->display_options['fields']['deleted']['table'] = 'entity_delete_log';
  $handler->display->display_options['fields']['deleted']['field'] = 'deleted';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Acting User';
  /* Sort criterion: Entity Delete Log: Deleted */
  $handler->display->display_options['sorts']['deleted']['id'] = 'deleted';
  $handler->display->display_options['sorts']['deleted']['table'] = 'entity_delete_log';
  $handler->display->display_options['sorts']['deleted']['field'] = 'deleted';
  $handler->display->display_options['sorts']['deleted']['order'] = 'DESC';
  /* Filter criterion: Entity Delete Log: Entity Type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'entity_delete_log';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['group'] = 1;
  $handler->display->display_options['filters']['entity_type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['entity_type']['expose']['operator_id'] = 'entity_type_op';
  $handler->display->display_options['filters']['entity_type']['expose']['label'] = 'Entity Type';
  $handler->display->display_options['filters']['entity_type']['expose']['operator'] = 'entity_type_op';
  $handler->display->display_options['filters']['entity_type']['expose']['identifier'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['entity_type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    27 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    31 => 0,
    19 => 0,
    33 => 0,
    35 => 0,
    21 => 0,
    22 => 0,
    26 => 0,
  );
  $handler->display->display_options['filters']['entity_type']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['entity_type']['group_info']['label'] = 'Entity Type';
  $handler->display->display_options['filters']['entity_type']['group_info']['identifier'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Node',
      'operator' => '=',
      'value' => 'node',
    ),
    2 => array(
      'title' => 'File',
      'operator' => '=',
      'value' => 'file',
    ),
    3 => array(
      'title' => 'Widget',
      'operator' => '=',
      'value' => 'widget',
    ),
    4 => array(
      'title' => 'Taxonomy term',
      'operator' => '=',
      'value' => 'taxonomy_term',
    ),
    5 => array(
      'title' => 'Scald atom',
      'operator' => '=',
      'value' => 'scald_atom',
    ),
    6 => array(
      'title' => 'User',
      'operator' => '=',
      'value' => 'user',
    ),
  );
  /* Filter criterion: Entity Delete Log: Entity Bundle */
  $handler->display->display_options['filters']['entity_bundle']['id'] = 'entity_bundle';
  $handler->display->display_options['filters']['entity_bundle']['table'] = 'entity_delete_log';
  $handler->display->display_options['filters']['entity_bundle']['field'] = 'entity_bundle';
  $handler->display->display_options['filters']['entity_bundle']['group'] = 1;
  $handler->display->display_options['filters']['entity_bundle']['exposed'] = TRUE;
  $handler->display->display_options['filters']['entity_bundle']['expose']['operator_id'] = 'entity_bundle_op';
  $handler->display->display_options['filters']['entity_bundle']['expose']['label'] = 'Entity Bundle';
  $handler->display->display_options['filters']['entity_bundle']['expose']['operator'] = 'entity_bundle_op';
  $handler->display->display_options['filters']['entity_bundle']['expose']['identifier'] = 'entity_bundle';
  $handler->display->display_options['filters']['entity_bundle']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['entity_bundle']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    27 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    31 => 0,
    19 => 0,
    33 => 0,
    35 => 0,
    21 => 0,
    22 => 0,
    26 => 0,
  );
  $handler->display->display_options['filters']['entity_bundle']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['entity_bundle']['group_info']['label'] = 'Entity Bundle';
  $handler->display->display_options['filters']['entity_bundle']['group_info']['identifier'] = 'entity_bundle';
  $handler->display->display_options['filters']['entity_bundle']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Attraction card',
      'operator' => '=',
      'value' => 'attraction_card',
    ),
    2 => array(
      'title' => 'Blog',
      'operator' => '=',
      'value' => 'blog',
    ),
    3 => array(
      'title' => 'Blog post',
      'operator' => '=',
      'value' => 'blog_post',
    ),
    4 => array(
      'title' => 'Event',
      'operator' => '=',
      'value' => 'event',
    ),
    5 => array(
      'title' => 'Feed import - Facebook',
      'operator' => '=',
      'value' => 'feed_import_facebook',
    ),
    6 => array(
      'title' => 'Feed import - Instagram',
      'operator' => '=',
      'value' => 'feed_import_instagram',
    ),
    7 => array(
      'title' => 'Feed import - Twitter',
      'operator' => '=',
      'value' => 'feed_import_twitter',
    ),
    8 => array(
      'title' => 'Feed import - Youtube channel',
      'operator' => '=',
      'value' => 'feed_import_youtube_channel',
    ),
    9 => array(
      'title' => 'Landing page',
      'operator' => '=',
      'value' => 'landing_page',
    ),
    10 => array(
      'title' => 'Liftup',
      'operator' => '=',
      'value' => 'liftup',
    ),
    11 => array(
      'title' => 'News item',
      'operator' => '=',
      'value' => 'news_item',
    ),
    12 => array(
      'title' => 'Page',
      'operator' => '=',
      'value' => 'page',
    ),
    13 => array(
      'title' => 'Person',
      'operator' => '=',
      'value' => 'person',
    ),
    14 => array(
      'title' => 'Place',
      'operator' => '=',
      'value' => 'place',
    ),
    15 => array(
      'title' => 'Position of trust',
      'operator' => '=',
      'value' => 'position_of_trust',
    ),
    16 => array(
      'title' => 'Section',
      'operator' => '=',
      'value' => 'section',
    ),
    17 => array(
      'title' => 'Service description',
      'operator' => '=',
      'value' => 'service',
    ),
    18 => array(
      'title' => 'Service offer',
      'operator' => '=',
      'value' => 'service_offer',
    ),
    19 => array(
      'title' => 'Social media update',
      'operator' => '=',
      'value' => 'social_media_update',
    ),
    20 => array(
      'title' => 'Webform',
      'operator' => '=',
      'value' => 'webform',
    ),
    21 => array(
      'title' => '-Widget- Attraction list',
      'operator' => '=',
      'value' => 'attraction_list',
    ),
    22 => array(
      'title' => '-Widget- Event carousel',
      'operator' => '=',
      'value' => 'event_carousel',
    ),
    23 => array(
      'title' => '-Widget- Event mosaic',
      'operator' => '=',
      'value' => 'event_mosaic',
    ),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/reports/entity-delete-log-pori';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Entity Delete Log Pori';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';
  $translatables['entity_delete_log_pori'] = array(
    t('Master'),
    t('Entity Delete Log pori'),
    t('more'),
    t('Filter'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('A listing of deleted Entities.'),
    t('There are no records of entities being deleted. Visit the <a href="/admin/config/entity-delete-log">Entity Delete Log Settings</a> to select which entity types will be logged when deleted.'),
    t('Acting User Account'),
    t('Author User Account'),
    t('Entity ID'),
    t('.'),
    t('Entity Title'),
    t('Entity Type'),
    t('Entity Bundle'),
    t('Author'),
    t('Revisions'),
    t('Created'),
    t('Deleted'),
    t('Acting User'),
    t('Page'),
  );
  $export['entity_delete_log_pori'] = $view;

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
  /* Field: Content: Read more */
  $handler->display->display_options['fields']['field_read_more']['id'] = 'field_read_more';
  $handler->display->display_options['fields']['field_read_more']['table'] = 'field_data_field_read_more';
  $handler->display->display_options['fields']['field_read_more']['field'] = 'field_read_more';
  $handler->display->display_options['fields']['field_read_more']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['fields']['field_read_more']['label'] = '';
  $handler->display->display_options['fields']['field_read_more']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_read_more']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_read_more']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_read_more']['type'] = 'link_plain';
  /* Field: Entity translation: Visiting address: translated */
  $handler->display->display_options['fields']['field_address_visiting_et']['id'] = 'field_address_visiting_et';
  $handler->display->display_options['fields']['field_address_visiting_et']['table'] = 'field_data_field_address_visiting';
  $handler->display->display_options['fields']['field_address_visiting_et']['field'] = 'field_address_visiting_et';
  $handler->display->display_options['fields']['field_address_visiting_et']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['fields']['field_address_visiting_et']['label'] = '';
  $handler->display->display_options['fields']['field_address_visiting_et']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_visiting_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_visiting_et']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address_visiting_et']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
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
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_read_more]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['text'] = '[field_description]

[field_address_visiting_et]';
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
  /* Filter criterion: Field: Location (field_location:geohash) */
  $handler->display->display_options['filters']['field_location_geohash']['id'] = 'field_location_geohash';
  $handler->display->display_options['filters']['field_location_geohash']['table'] = 'field_data_field_location';
  $handler->display->display_options['filters']['field_location_geohash']['field'] = 'field_location_geohash';
  $handler->display->display_options['filters']['field_location_geohash']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['filters']['field_location_geohash']['operator'] = 'not empty';

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
  $handler->display->display_options['style_options']['map'] = 'pori_page_service_map';
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
    t('[field_description]

[field_address_visiting_et]'),
    t('All'),
    t('OpenLayers Data Overlay'),
    t('Map | Place'),
    t('Map per place'),
  );
  $export['pori_place_map'] = $view;

  $view = new view();
  $view->name = 'pori_presentation_liftup';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Pori presentation liftup';
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
      'liftup' => 'liftup',
      'section' => 'section',
      'blog' => 0,
      'blog_post' => 0,
      'event' => 0,
      'feed_import_facebook' => 0,
      'feed_import_instagram' => 0,
      'feed_import_twitter' => 0,
      'feed_import_youtube_channel' => 0,
      'landing_page' => 0,
      'news_item' => 0,
      'page' => 0,
      'person' => 0,
      'place' => 0,
      'position_of_trust' => 0,
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'presentation';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'flagging|timestamp';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'presentation';
  /* Relationship: Flags: presentation */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'presentation';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Flags: Flagged time */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'flagging';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'district' => 'district',
    'keywords' => 'keywords',
    'target_audience' => 'target_audience',
    'theme' => 'theme',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'liftup' => 'liftup',
  );
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Domain Access: Available on current domain */
  $handler->display->display_options['filters']['current_all']['id'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['table'] = 'domain_access';
  $handler->display->display_options['filters']['current_all']['field'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['value'] = '1';

  /* Display: Presentations */
  $handler = $view->new_display('block', 'Presentations', 'block');
  $handler->display->display_options['display_description'] = 'Content flagged to presentations';

  /* Display: Presentations | Section */
  $handler = $view->new_display('block', 'Presentations | Section', 'section');
  $handler->display->display_options['display_description'] = 'Content flagged to presentations per section';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: presentation */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'presentation';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Groups audience (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'liftup' => 'liftup',
  );
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Domain Access: Available on current domain */
  $handler->display->display_options['filters']['current_all']['id'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['table'] = 'domain_access';
  $handler->display->display_options['filters']['current_all']['field'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['value'] = '1';

  /* Display: Presentations | Promoted */
  $handler = $view->new_display('block', 'Presentations | Promoted', 'block_1');
  $handler->display->display_options['display_description'] = 'Content flagged to presentations';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'liftup' => 'liftup',
  );
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filter criterion: Domain Access: Available on current domain */
  $handler->display->display_options['filters']['current_all']['id'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['table'] = 'domain_access';
  $handler->display->display_options['filters']['current_all']['field'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['value'] = '1';
  $translatables['pori_presentation_liftup'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('flag'),
    t('All'),
    t('Presentations'),
    t('Content flagged to presentations'),
    t('Presentations | Section'),
    t('Content flagged to presentations per section'),
    t('OG membership from node'),
    t('Presentations | Promoted'),
  );
  $export['pori_presentation_liftup'] = $view;

  return $export;
}
