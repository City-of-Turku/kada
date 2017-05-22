<?php
/**
 * @file
 * kada_events_base_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function kada_events_base_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'kada_event_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KADA Event list';
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
      'event' => 'event',
      'blog' => 0,
      'blog_post' => 0,
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
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'event_list_item';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'event_list_item';
  /* Field: Content: Content image */
  $handler->display->display_options['fields']['field_content_image']['id'] = 'field_content_image';
  $handler->display->display_options['fields']['field_content_image']['table'] = 'field_data_field_content_image';
  $handler->display->display_options['fields']['field_content_image']['field'] = 'field_content_image';
  $handler->display->display_options['fields']['field_content_image']['label'] = '';
  $handler->display->display_options['fields']['field_content_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_content_image']['element_class'] = 'event-image';
  $handler->display->display_options['fields']['field_content_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_image']['type'] = 'current';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'event-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_class'] = 'event-date';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Address extension */
  $handler->display->display_options['fields']['field_event_address_extension']['id'] = 'field_event_address_extension';
  $handler->display->display_options['fields']['field_event_address_extension']['table'] = 'field_data_field_event_address_extension';
  $handler->display->display_options['fields']['field_event_address_extension']['field'] = 'field_event_address_extension';
  $handler->display->display_options['fields']['field_event_address_extension']['label'] = '';
  $handler->display->display_options['fields']['field_event_address_extension']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_address_extension']['element_class'] = 'event-address';
  $handler->display->display_options['fields']['field_event_address_extension']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_address_extension']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Content: Lead paragraph */
  $handler->display->display_options['fields']['field_lead_paragraph_long_text']['id'] = 'field_lead_paragraph_long_text';
  $handler->display->display_options['fields']['field_lead_paragraph_long_text']['table'] = 'field_data_field_lead_paragraph_long_text';
  $handler->display->display_options['fields']['field_lead_paragraph_long_text']['field'] = 'field_lead_paragraph_long_text';
  $handler->display->display_options['fields']['field_lead_paragraph_long_text']['label'] = '';
  $handler->display->display_options['fields']['field_lead_paragraph_long_text']['element_class'] = 'event-lead-paragraph';
  $handler->display->display_options['fields']['field_lead_paragraph_long_text']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
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
    'event' => 'event',
  );

  /* Display: Event list */
  $handler = $view->new_display('block', 'Event list', 'event_list');
  $handler->display->display_options['display_description'] = 'Displays events in a list';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Event date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Event date -  start date (field_event_date) */
  $handler->display->display_options['arguments']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['arguments']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['arguments']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['arguments']['field_event_date_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_date_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_event_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_date_value']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Event date - end date (field_event_date:value2) */
  $handler->display->display_options['arguments']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['arguments']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['arguments']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['arguments']['field_event_date_value2']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_date_value2']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_event_date_value2']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_date_value2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_date_value2']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Field: Event types (field_event_types) */
  $handler->display->display_options['arguments']['field_event_types_tid']['id'] = 'field_event_types_tid';
  $handler->display->display_options['arguments']['field_event_types_tid']['table'] = 'field_data_field_event_types';
  $handler->display->display_options['arguments']['field_event_types_tid']['field'] = 'field_event_types_tid';
  $handler->display->display_options['arguments']['field_event_types_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_types_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_event_types_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_types_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_types_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: District (field_district) */
  $handler->display->display_options['arguments']['field_district_tid']['id'] = 'field_district_tid';
  $handler->display->display_options['arguments']['field_district_tid']['table'] = 'field_data_field_district';
  $handler->display->display_options['arguments']['field_district_tid']['field'] = 'field_district_tid';
  $handler->display->display_options['arguments']['field_district_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_district_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_district_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_district_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_district_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Field: Target audience (field_target_audience) */
  $handler->display->display_options['arguments']['field_target_audience_tid']['id'] = 'field_target_audience_tid';
  $handler->display->display_options['arguments']['field_target_audience_tid']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['arguments']['field_target_audience_tid']['field'] = 'field_target_audience_tid';
  $handler->display->display_options['arguments']['field_target_audience_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_target_audience_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_target_audience_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_target_audience_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_target_audience_tid']['summary_options']['items_per_page'] = '25';
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Event date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator_id'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['label'] = 'Event date -  start date';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['identifier'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_event_date_value']['group_info']['label'] = 'Event date -  start date (field_event_date)';
  $handler->display->display_options['filters']['field_event_date_value']['group_info']['identifier'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_event_date_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: Event date - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '<=';
  $handler->display->display_options['filters']['field_event_date_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_date_value2']['expose']['operator_id'] = 'field_event_date_value2_op';
  $handler->display->display_options['filters']['field_event_date_value2']['expose']['label'] = 'Event date - end date';
  $handler->display->display_options['filters']['field_event_date_value2']['expose']['operator'] = 'field_event_date_value2_op';
  $handler->display->display_options['filters']['field_event_date_value2']['expose']['identifier'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
  );
  /* Filter criterion: Field: Target audience (field_target_audience) */
  $handler->display->display_options['filters']['field_target_audience_tid']['id'] = 'field_target_audience_tid';
  $handler->display->display_options['filters']['field_target_audience_tid']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['filters']['field_target_audience_tid']['field'] = 'field_target_audience_tid';
  $handler->display->display_options['filters']['field_target_audience_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_target_audience_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['operator_id'] = 'field_target_audience_tid_op';
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['label'] = 'Target audience';
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['operator'] = 'field_target_audience_tid_op';
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['identifier'] = 'field_target_audience';
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_target_audience_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_target_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_target_audience_tid']['vocabulary'] = 'target_audience';
  $handler->display->display_options['filters']['field_target_audience_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: District (field_district) */
  $handler->display->display_options['filters']['field_district_tid']['id'] = 'field_district_tid';
  $handler->display->display_options['filters']['field_district_tid']['table'] = 'field_data_field_district';
  $handler->display->display_options['filters']['field_district_tid']['field'] = 'field_district_tid';
  $handler->display->display_options['filters']['field_district_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_district_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_district_tid']['expose']['operator_id'] = 'field_district_tid_op';
  $handler->display->display_options['filters']['field_district_tid']['expose']['label'] = 'District';
  $handler->display->display_options['filters']['field_district_tid']['expose']['operator'] = 'field_district_tid_op';
  $handler->display->display_options['filters']['field_district_tid']['expose']['identifier'] = 'field_district';
  $handler->display->display_options['filters']['field_district_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_district_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_district_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_district_tid']['vocabulary'] = 'district';
  $handler->display->display_options['filters']['field_district_tid']['hierarchy'] = 1;
  /* Filter criterion: Field: Event types (field_event_types) */
  $handler->display->display_options['filters']['field_event_types_tid']['id'] = 'field_event_types_tid';
  $handler->display->display_options['filters']['field_event_types_tid']['table'] = 'field_data_field_event_types';
  $handler->display->display_options['filters']['field_event_types_tid']['field'] = 'field_event_types_tid';
  $handler->display->display_options['filters']['field_event_types_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_types_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_types_tid']['expose']['operator_id'] = 'field_event_types_tid_op';
  $handler->display->display_options['filters']['field_event_types_tid']['expose']['label'] = 'Event types';
  $handler->display->display_options['filters']['field_event_types_tid']['expose']['operator'] = 'field_event_types_tid_op';
  $handler->display->display_options['filters']['field_event_types_tid']['expose']['identifier'] = 'field_event_types';
  $handler->display->display_options['filters']['field_event_types_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_event_types_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_types_tid']['vocabulary'] = 'event_types';
  $handler->display->display_options['filters']['field_event_types_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['block_description'] = 'View: KADA Event list | Block';

  /* Display: Event tab | Free event */
  $handler = $view->new_display('block', 'Event tab | Free event', 'event_tab_free');
  $handler->display->display_options['display_description'] = 'Free events shown in list under Free tab';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'event_tab_list_item';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'event_tab_list_item';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'terms';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'event_types' => 'event_types',
    'scald_authors' => 0,
    'scald_tags' => 0,
    'accessibility' => 0,
    'district' => 0,
    'keywords' => 0,
    'office' => 0,
    'political_party' => 0,
    'target_audience' => 0,
    'theme' => 0,
    'trust_unit' => 0,
    'trustee_role' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Event date - end date (field_event_date:value2) */
  $handler->display->display_options['sorts']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['sorts']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value2']['field'] = 'field_event_date_value2';
  /* Sort criterion: Content: Event date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Parent term */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['parent']['default_action'] = 'default';
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Event date - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>';
  $handler->display->display_options['filters']['field_event_date_value2']['group'] = 1;
  /* Filter criterion: Content: Event free admission (field_event_free_admission) */
  $handler->display->display_options['filters']['field_event_free_admission_value']['id'] = 'field_event_free_admission_value';
  $handler->display->display_options['filters']['field_event_free_admission_value']['table'] = 'field_data_field_event_free_admission';
  $handler->display->display_options['filters']['field_event_free_admission_value']['field'] = 'field_event_free_admission_value';
  $handler->display->display_options['filters']['field_event_free_admission_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_event_free_admission_value']['group'] = 1;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;

  /* Display: Event tab | Happening soon */
  $handler = $view->new_display('block', 'Event tab | Happening soon', 'event_tab_happening_soon');
  $handler->display->display_options['display_description'] = 'Events that are happening soon';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'event_tab_list_item';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'event_tab_list_item';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'terms';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'event_types' => 'event_types',
    'scald_authors' => 0,
    'scald_tags' => 0,
    'accessibility' => 0,
    'district' => 0,
    'keywords' => 0,
    'office' => 0,
    'political_party' => 0,
    'target_audience' => 0,
    'theme' => 0,
    'trust_unit' => 0,
    'trustee_role' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Last day to sign up (field_last_day_to_sign_up) */
  $handler->display->display_options['sorts']['field_last_day_to_sign_up_value']['id'] = 'field_last_day_to_sign_up_value';
  $handler->display->display_options['sorts']['field_last_day_to_sign_up_value']['table'] = 'field_data_field_last_day_to_sign_up';
  $handler->display->display_options['sorts']['field_last_day_to_sign_up_value']['field'] = 'field_last_day_to_sign_up_value';
  /* Sort criterion: Content: Event date - end date (field_event_date:value2) */
  $handler->display->display_options['sorts']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['sorts']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value2']['field'] = 'field_event_date_value2';
  /* Sort criterion: Content: Event date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Parent term */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['parent']['default_action'] = 'default';
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
    3 => 'AND',
    4 => 'AND',
  );
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Event started but ending soon (start date) */
  $handler->display->display_options['filters']['field_event_date_value_1']['id'] = 'field_event_date_value_1';
  $handler->display->display_options['filters']['field_event_date_value_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value_1']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value_1']['ui_name'] = 'Event started but ending soon (start date)';
  $handler->display->display_options['filters']['field_event_date_value_1']['operator'] = '<';
  $handler->display->display_options['filters']['field_event_date_value_1']['group'] = 1;
  /* Filter criterion: Event started but ending soon (end date) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['ui_name'] = 'Event started but ending soon (end date)';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>';
  $handler->display->display_options['filters']['field_event_date_value2']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language_2']['id'] = 'language_2';
  $handler->display->display_options['filters']['language_2']['table'] = 'node';
  $handler->display->display_options['filters']['language_2']['field'] = 'language';
  $handler->display->display_options['filters']['language_2']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language_2']['group'] = 2;
  /* Filter criterion: Event starts or is starting */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['ui_name'] = 'Event starts or is starting';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 2;
  /* Filter criterion: Event starts or is starting soon */
  $handler->display->display_options['filters']['field_event_date_value_2']['id'] = 'field_event_date_value_2';
  $handler->display->display_options['filters']['field_event_date_value_2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value_2']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value_2']['ui_name'] = 'Event starts or is starting soon';
  $handler->display->display_options['filters']['field_event_date_value_2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value_2']['group'] = 2;
  /* Filter criterion: Content: Last day to sign up (field_last_day_to_sign_up) */
  $handler->display->display_options['filters']['field_last_day_to_sign_up_value_1']['id'] = 'field_last_day_to_sign_up_value_1';
  $handler->display->display_options['filters']['field_last_day_to_sign_up_value_1']['table'] = 'field_data_field_last_day_to_sign_up';
  $handler->display->display_options['filters']['field_last_day_to_sign_up_value_1']['field'] = 'field_last_day_to_sign_up_value';
  $handler->display->display_options['filters']['field_last_day_to_sign_up_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_last_day_to_sign_up_value_1']['group'] = 2;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_2']['id'] = 'status_2';
  $handler->display->display_options['filters']['status_2']['table'] = 'node';
  $handler->display->display_options['filters']['status_2']['field'] = 'status';
  $handler->display->display_options['filters']['status_2']['value'] = '1';
  $handler->display->display_options['filters']['status_2']['group'] = 3;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_2']['id'] = 'type_2';
  $handler->display->display_options['filters']['type_2']['table'] = 'node';
  $handler->display->display_options['filters']['type_2']['field'] = 'type';
  $handler->display->display_options['filters']['type_2']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type_2']['group'] = 3;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language_1']['id'] = 'language_1';
  $handler->display->display_options['filters']['language_1']['table'] = 'node';
  $handler->display->display_options['filters']['language_1']['field'] = 'language';
  $handler->display->display_options['filters']['language_1']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language_1']['group'] = 3;
  /* Filter criterion: One day event */
  $handler->display->display_options['filters']['field_event_date_value_3']['id'] = 'field_event_date_value_3';
  $handler->display->display_options['filters']['field_event_date_value_3']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value_3']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value_3']['ui_name'] = 'One day event';
  $handler->display->display_options['filters']['field_event_date_value_3']['group'] = 3;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language_3']['id'] = 'language_3';
  $handler->display->display_options['filters']['language_3']['table'] = 'node';
  $handler->display->display_options['filters']['language_3']['field'] = 'language';
  $handler->display->display_options['filters']['language_3']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language_3']['group'] = 4;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_3']['id'] = 'status_3';
  $handler->display->display_options['filters']['status_3']['table'] = 'node';
  $handler->display->display_options['filters']['status_3']['field'] = 'status';
  $handler->display->display_options['filters']['status_3']['value'] = '1';
  $handler->display->display_options['filters']['status_3']['group'] = 4;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_3']['id'] = 'type_3';
  $handler->display->display_options['filters']['type_3']['table'] = 'node';
  $handler->display->display_options['filters']['type_3']['field'] = 'type';
  $handler->display->display_options['filters']['type_3']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type_3']['group'] = 4;
  /* Filter criterion: Last sign up date */
  $handler->display->display_options['filters']['field_last_day_to_sign_up_value']['id'] = 'field_last_day_to_sign_up_value';
  $handler->display->display_options['filters']['field_last_day_to_sign_up_value']['table'] = 'field_data_field_last_day_to_sign_up';
  $handler->display->display_options['filters']['field_last_day_to_sign_up_value']['field'] = 'field_last_day_to_sign_up_value';
  $handler->display->display_options['filters']['field_last_day_to_sign_up_value']['ui_name'] = 'Last sign up date';
  $handler->display->display_options['filters']['field_last_day_to_sign_up_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_last_day_to_sign_up_value']['group'] = 4;
  /* Filter criterion: Event not ended yet */
  $handler->display->display_options['filters']['field_event_date_value2_1']['id'] = 'field_event_date_value2_1';
  $handler->display->display_options['filters']['field_event_date_value2_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2_1']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2_1']['ui_name'] = 'Event not ended yet';
  $handler->display->display_options['filters']['field_event_date_value2_1']['operator'] = '>';
  $handler->display->display_options['filters']['field_event_date_value2_1']['group'] = 4;

  /* Display: Event tab | Most popular */
  $handler = $view->new_display('block', 'Event tab | Most popular', 'event_tab_most_popular');
  $handler->display->display_options['display_description'] = 'Most popular events tab';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'event_tab_list_item';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'event_tab_list_item';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'terms';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'event_types' => 'event_types',
    'scald_authors' => 0,
    'scald_tags' => 0,
    'accessibility' => 0,
    'district' => 0,
    'keywords' => 0,
    'office' => 0,
    'political_party' => 0,
    'target_audience' => 0,
    'theme' => 0,
    'trust_unit' => 0,
    'trustee_role' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Popularity (field_radioactivity:radioactivity_energy) */
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['id'] = 'field_radioactivity_radioactivity_energy';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['table'] = 'field_data_field_radioactivity';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['field'] = 'field_radioactivity_radioactivity_energy';
  $handler->display->display_options['sorts']['field_radioactivity_radioactivity_energy']['order'] = 'DESC';
  /* Sort criterion: Content: Event date - end date (field_event_date:value2) */
  $handler->display->display_options['sorts']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['sorts']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value2']['field'] = 'field_event_date_value2';
  /* Sort criterion: Content: Event date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Parent term */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['parent']['default_action'] = 'default';
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Event image (field_content_image_et:sid) */
  $handler->display->display_options['filters']['field_content_image_et_sid']['id'] = 'field_content_image_et_sid';
  $handler->display->display_options['filters']['field_content_image_et_sid']['table'] = 'field_data_field_content_image_et';
  $handler->display->display_options['filters']['field_content_image_et_sid']['field'] = 'field_content_image_et_sid';
  $handler->display->display_options['filters']['field_content_image_et_sid']['operator'] = 'not empty';
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Content: Event date - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>=';

  /* Display: Event place list page */
  $handler = $view->new_display('page', 'Event place list page', 'event_place_list_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Events happening in ';
  $handler->display->display_options['display_description'] = 'Show events that happen in certain place';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Relation: provides (node → node) */
  $handler->display->display_options['relationships']['relation_place_service_node']['id'] = 'relation_place_service_node';
  $handler->display->display_options['relationships']['relation_place_service_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_place_service_node']['field'] = 'relation_place_service_node';
  $handler->display->display_options['relationships']['relation_place_service_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Event date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_place_service_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Event date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['path'] = 'place/%/events';

  /* Display: Event tab | Happening soon */
  $handler = $view->new_display('block', 'Event tab | Happening soon', 'event_tab_happening_recurring');
  $handler->display->display_options['display_description'] = 'Events that are happening soon';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'event_tab_list_item';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'event_tab_list_item';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'terms';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'event_types' => 'event_types',
    'scald_authors' => 0,
    'scald_tags' => 0,
    'accessibility' => 0,
    'district' => 0,
    'keywords' => 0,
    'office' => 0,
    'political_party' => 0,
    'target_audience' => 0,
    'theme' => 0,
    'trust_unit' => 0,
    'trustee_role' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Event date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Parent term */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['parent']['default_action'] = 'default';
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Event type (field_date_type) */
  $handler->display->display_options['filters']['field_date_type_value']['id'] = 'field_date_type_value';
  $handler->display->display_options['filters']['field_date_type_value']['table'] = 'field_data_field_date_type';
  $handler->display->display_options['filters']['field_date_type_value']['field'] = 'field_date_type_value';
  $handler->display->display_options['filters']['field_date_type_value']['value'] = array(
    'super' => 'super',
  );
  $handler->display->display_options['filters']['field_date_type_value']['group'] = 1;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Event date - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>';
  $handler->display->display_options['filters']['field_event_date_value2']['group'] = 1;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language_1']['id'] = 'language_1';
  $handler->display->display_options['filters']['language_1']['table'] = 'node';
  $handler->display->display_options['filters']['language_1']['field'] = 'language';
  $handler->display->display_options['filters']['language_1']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language_1']['group'] = 2;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Content: Event type (field_date_type) */
  $handler->display->display_options['filters']['field_date_type_value_1']['id'] = 'field_date_type_value_1';
  $handler->display->display_options['filters']['field_date_type_value_1']['table'] = 'field_data_field_date_type';
  $handler->display->display_options['filters']['field_date_type_value_1']['field'] = 'field_date_type_value';
  $handler->display->display_options['filters']['field_date_type_value_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_date_type_value_1']['value'] = array(
    'super' => 'super',
  );
  $handler->display->display_options['filters']['field_date_type_value_1']['group'] = 2;
  /* Filter criterion: Content: Last day to sign up (field_last_day_to_sign_up) */
  $handler->display->display_options['filters']['field_last_day_to_sign_up_value_1']['id'] = 'field_last_day_to_sign_up_value_1';
  $handler->display->display_options['filters']['field_last_day_to_sign_up_value_1']['table'] = 'field_data_field_last_day_to_sign_up';
  $handler->display->display_options['filters']['field_last_day_to_sign_up_value_1']['field'] = 'field_last_day_to_sign_up_value';
  $handler->display->display_options['filters']['field_last_day_to_sign_up_value_1']['operator'] = 'between';
  $handler->display->display_options['filters']['field_last_day_to_sign_up_value_1']['group'] = 2;
  $translatables['kada_event_list'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Post date'),
    t('Event list'),
    t('Displays events in a list'),
    t('All'),
    t('Event date -  start date'),
    t('Event date -  start date (field_event_date)'),
    t('Event date - end date'),
    t('Target audience'),
    t('District'),
    t('Event types'),
    t('View: KADA Event list | Block'),
    t('Event tab | Free event'),
    t('Free events shown in list under Free tab'),
    t('terms'),
    t('Event tab | Happening soon'),
    t('Events that are happening soon'),
    t('Event tab | Most popular'),
    t('Most popular events tab'),
    t('Event place list page'),
    t('Events happening in '),
    t('Show events that happen in certain place'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('provides'),
  );
  $export['kada_event_list'] = $view;

  $view = new view();
  $view->name = 'kada_eventcalendar_er';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KADA eventcalendar ER';
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
      'event' => 'event',
      'liftup' => 'liftup',
      'social_media_update' => 'social_media_update',
      'blog' => 0,
      'blog_post' => 0,
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
      'section' => 0,
      'service' => 0,
      'service_offer' => 0,
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Administrator title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Administrator title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Event title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['ui_name'] = 'Event title';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['empty'] = '[title]';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'kada_date_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_label_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'event' => 'event',
    'liftup' => 'liftup',
    'social_media_update' => 'social_media_update',
  );

  /* Display: Titles ER */
  $handler = $view->new_display('entityreference', 'Titles ER', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Title search for entity reference';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'title_field' => 'title_field',
    'field_event_date' => 'field_event_date',
    'nid' => 'nid',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'title_field' => 'title_field',
    'field_event_date' => 'field_event_date',
    'nid' => 'nid',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['kada_eventcalendar_er'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
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
    t('[title]'),
    t('Titles ER'),
    t('Title search for entity reference'),
  );
  $export['kada_eventcalendar_er'] = $view;

  $view = new view();
  $view->name = 'kada_events_indexed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_kada_content';
  $view->human_name = 'KADA Events Indexed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Multilingual Node: Multilingual ID */
  $handler->display->display_options['fields']['search_api_et_id']['id'] = 'search_api_et_id';
  $handler->display->display_options['fields']['search_api_et_id']['table'] = 'search_api_index_kada_content';
  $handler->display->display_options['fields']['search_api_et_id']['field'] = 'search_api_et_id';
  /* Sort criterion: Event date: End date (indexed) */
  $handler->display->display_options['sorts']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['sorts']['field_event_date_value2']['table'] = 'search_api_index_kada_content';
  $handler->display->display_options['sorts']['field_event_date_value2']['field'] = 'field_event_date_value2';
  /* Sort criterion: Event date: Start date (indexed) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'search_api_index_kada_content';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  /* Contextual filter: Event category: All parent terms (indexed) */
  $handler->display->display_options['arguments']['field_event_types_parents_all']['id'] = 'field_event_types_parents_all';
  $handler->display->display_options['arguments']['field_event_types_parents_all']['table'] = 'search_api_index_kada_content';
  $handler->display->display_options['arguments']['field_event_types_parents_all']['field'] = 'field_event_types_parents_all';
  $handler->display->display_options['arguments']['field_event_types_parents_all']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_types_parents_all']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_event_types_parents_all']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_types_parents_all']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_event_types_parents_all']['not'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Indexed Multilingual Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_kada_content';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Multilingual Node: Item language */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_kada_content';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );
  $handler->display->display_options['filters']['search_api_language']['group'] = 1;
  /* Filter criterion: Indexed Multilingual Node: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_kada_content';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Event date: Start date (indexed) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'search_api_index_kada_content';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['value'] = 'now';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 2;
  /* Filter criterion: Event date: End date (indexed) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'search_api_index_kada_content';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value2']['value'] = 'now';
  $handler->display->display_options['filters']['field_event_date_value2']['group'] = 2;

  /* Display: List | Event indexed */
  $handler = $view->new_display('block', 'List | Event indexed', 'indexed_event_list');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'event_list_item';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  $handler->display->display_options['block_description'] = 'List | Event indexed';

  /* Display: OpenLayers Data Overlay */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay', 'map_indexed');
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
    'name_field' => '',
    'description_field' => 'rendered_entity',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Multilingual Node: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'search_api_index_kada_content';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Indexed Multilingual Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_kada_content';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'event_map_item';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;

  /* Display: Map | Event indexed */
  $handler = $view->new_display('block', 'Map | Event indexed', 'indexed_event_map');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'kada_event_map_indexed';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Events page */
  $handler = $view->new_display('page', 'Events page', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Multilingual Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_kada_content';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Event category: All parent terms (indexed) */
  $handler->display->display_options['arguments']['field_event_types_parents_all']['id'] = 'field_event_types_parents_all';
  $handler->display->display_options['arguments']['field_event_types_parents_all']['table'] = 'search_api_index_kada_content';
  $handler->display->display_options['arguments']['field_event_types_parents_all']['field'] = 'field_event_types_parents_all';
  $handler->display->display_options['arguments']['field_event_types_parents_all']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_event_types_parents_all']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_event_types_parents_all']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_types_parents_all']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_event_types_parents_all']['not'] = 0;
  $handler->display->display_options['path'] = 'calendar';
  $translatables['kada_events_indexed'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Multilingual ID'),
    t('All'),
    t('List | Event indexed'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('OpenLayers Data Overlay'),
    t('Node ID'),
    t('.'),
    t(','),
    t('Map | Event indexed'),
    t('Events page'),
  );
  $export['kada_events_indexed'] = $view;

  $view = new view();
  $view->name = 'kada_events_map';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KADA Events Map';
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
      'event' => 'event',
      'blog' => 0,
      'blog_post' => 0,
      'feed_import_facebook' => 0,
      'feed_import_instagram' => 0,
      'feed_import_twitter' => 0,
      'feed_import_youtube_channel' => 0,
      'person' => 0,
      'landing_page' => 0,
      'position_of_trust' => 0,
      'liftup' => 0,
      'service' => 0,
      'service_offer' => 0,
      'page' => 0,
      'section' => 0,
      'social_media_update' => 0,
      'place' => 0,
      'news_item' => 0,
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
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
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
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'event_map_item';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'event_map_item';
  /* Field: Field: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'event_map_item';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Contextual filter: Content: Event date -  start date (field_event_date) */
  $handler->display->display_options['arguments']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['arguments']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['arguments']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['arguments']['field_event_date_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_date_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_event_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_date_value']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Event date - end date (field_event_date:value2) */
  $handler->display->display_options['arguments']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['arguments']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['arguments']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['arguments']['field_event_date_value2']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_date_value2']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_event_date_value2']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_date_value2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_date_value2']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: District (field_district) */
  $handler->display->display_options['arguments']['field_district_tid']['id'] = 'field_district_tid';
  $handler->display->display_options['arguments']['field_district_tid']['table'] = 'field_data_field_district';
  $handler->display->display_options['arguments']['field_district_tid']['field'] = 'field_district_tid';
  $handler->display->display_options['arguments']['field_district_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_district_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_district_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_district_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_district_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Field: Event types (field_event_types) */
  $handler->display->display_options['arguments']['field_event_types_tid']['id'] = 'field_event_types_tid';
  $handler->display->display_options['arguments']['field_event_types_tid']['table'] = 'field_data_field_event_types';
  $handler->display->display_options['arguments']['field_event_types_tid']['field'] = 'field_event_types_tid';
  $handler->display->display_options['arguments']['field_event_types_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_types_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_event_types_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_types_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_types_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Field: Target audience (field_target_audience) */
  $handler->display->display_options['arguments']['field_target_audience_tid']['id'] = 'field_target_audience_tid';
  $handler->display->display_options['arguments']['field_target_audience_tid']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['arguments']['field_target_audience_tid']['field'] = 'field_target_audience_tid';
  $handler->display->display_options['arguments']['field_target_audience_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_target_audience_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_target_audience_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_target_audience_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_target_audience_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Event date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator_id'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['label'] = 'Event date -  start date';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['identifier'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Event date - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '<=';
  $handler->display->display_options['filters']['field_event_date_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_date_value2']['expose']['operator_id'] = 'field_event_date_value2_op';
  $handler->display->display_options['filters']['field_event_date_value2']['expose']['label'] = 'Event date - end date';
  $handler->display->display_options['filters']['field_event_date_value2']['expose']['operator'] = 'field_event_date_value2_op';
  $handler->display->display_options['filters']['field_event_date_value2']['expose']['identifier'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
  );
  /* Filter criterion: Field: Target audience (field_target_audience) */
  $handler->display->display_options['filters']['field_target_audience_tid']['id'] = 'field_target_audience_tid';
  $handler->display->display_options['filters']['field_target_audience_tid']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['filters']['field_target_audience_tid']['field'] = 'field_target_audience_tid';
  $handler->display->display_options['filters']['field_target_audience_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_target_audience_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['operator_id'] = 'field_target_audience_tid_op';
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['label'] = 'Target audience';
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['operator'] = 'field_target_audience_tid_op';
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['identifier'] = 'field_target_audience';
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_target_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_target_audience_tid']['vocabulary'] = 'target_audience';
  $handler->display->display_options['filters']['field_target_audience_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: District (field_district) */
  $handler->display->display_options['filters']['field_district_tid']['id'] = 'field_district_tid';
  $handler->display->display_options['filters']['field_district_tid']['table'] = 'field_data_field_district';
  $handler->display->display_options['filters']['field_district_tid']['field'] = 'field_district_tid';
  $handler->display->display_options['filters']['field_district_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_district_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_district_tid']['expose']['operator_id'] = 'field_district_tid_op';
  $handler->display->display_options['filters']['field_district_tid']['expose']['label'] = 'District';
  $handler->display->display_options['filters']['field_district_tid']['expose']['operator'] = 'field_district_tid_op';
  $handler->display->display_options['filters']['field_district_tid']['expose']['identifier'] = 'field_district';
  $handler->display->display_options['filters']['field_district_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_district_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_district_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_district_tid']['vocabulary'] = 'district';
  $handler->display->display_options['filters']['field_district_tid']['hierarchy'] = 1;
  /* Filter criterion: Field: Event types (field_event_types) */
  $handler->display->display_options['filters']['field_event_types_tid']['id'] = 'field_event_types_tid';
  $handler->display->display_options['filters']['field_event_types_tid']['table'] = 'field_data_field_event_types';
  $handler->display->display_options['filters']['field_event_types_tid']['field'] = 'field_event_types_tid';
  $handler->display->display_options['filters']['field_event_types_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_types_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_types_tid']['expose']['operator_id'] = 'field_event_types_tid_op';
  $handler->display->display_options['filters']['field_event_types_tid']['expose']['label'] = 'Event types';
  $handler->display->display_options['filters']['field_event_types_tid']['expose']['operator'] = 'field_event_types_tid_op';
  $handler->display->display_options['filters']['field_event_types_tid']['expose']['identifier'] = 'field_event_types';
  $handler->display->display_options['filters']['field_event_types_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_event_types_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_types_tid']['vocabulary'] = 'event_types';
  $handler->display->display_options['filters']['field_event_types_tid']['hierarchy'] = 1;

  /* Display: OpenLayers Data Overlay */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay', 'event_data');
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
    'name_field' => '',
    'description_field' => 'rendered_entity',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_location' => 'field_location',
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Map | Event */
  $handler = $view->new_display('block', 'Map | Event', 'map');
  $handler->display->display_options['display_description'] = 'Show events on map';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'kada_event_map';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: OpenLayers Data Overlay Single */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay Single', 'event_data_single');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
    'name_field' => '',
    'description_field' => '#row',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Super event */
  $handler->display->display_options['relationships']['relation_super_event_node']['id'] = 'relation_super_event_node';
  $handler->display->display_options['relationships']['relation_super_event_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_super_event_node']['field'] = 'relation_super_event_node';
  $handler->display->display_options['relationships']['relation_super_event_node']['ui_name'] = 'Super event';
  $handler->display->display_options['relationships']['relation_super_event_node']['label'] = 'Super event';
  $handler->display->display_options['relationships']['relation_super_event_node']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_super_event_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_super_event_node']['entity_deduplication_right'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Location */
  $handler->display->display_options['fields']['field_location_1']['id'] = 'field_location_1';
  $handler->display->display_options['fields']['field_location_1']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location_1']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location_1']['relationship'] = 'relation_super_event_node';
  $handler->display->display_options['fields']['field_location_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_1']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_location_1']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Field: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['empty'] = '[field_location_1]';
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Map | Event single */
  $handler = $view->new_display('block', 'Map | Event single', 'map_single');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'kada_event_map_single_event';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $translatables['kada_events_map'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Location'),
    t('All'),
    t('Event date -  start date'),
    t('Event date - end date'),
    t('Target audience'),
    t('District'),
    t('Event types'),
    t('OpenLayers Data Overlay'),
    t('Map | Event'),
    t('Show events on map'),
    t('OpenLayers Data Overlay Single'),
    t('Super event'),
    t('[field_location_1]'),
    t('Map | Event single'),
  );
  $export['kada_events_map'] = $view;

  $view = new view();
  $view->name = 'kada_recurring_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KADA Recurring events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Following';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Super event */
  $handler->display->display_options['relationships']['relation_super_event_node']['id'] = 'relation_super_event_node';
  $handler->display->display_options['relationships']['relation_super_event_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_super_event_node']['field'] = 'relation_super_event_node';
  $handler->display->display_options['relationships']['relation_super_event_node']['ui_name'] = 'Super event';
  $handler->display->display_options['relationships']['relation_super_event_node']['label'] = 'Super event';
  $handler->display->display_options['relationships']['relation_super_event_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_super_event_node']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_super_event_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_super_event_node']['entity_deduplication_right'] = 0;
  /* Relationship: Sub event */
  $handler->display->display_options['relationships']['relation_super_event_node_1']['id'] = 'relation_super_event_node_1';
  $handler->display->display_options['relationships']['relation_super_event_node_1']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_super_event_node_1']['field'] = 'relation_super_event_node';
  $handler->display->display_options['relationships']['relation_super_event_node_1']['relationship'] = 'relation_super_event_node';
  $handler->display->display_options['relationships']['relation_super_event_node_1']['ui_name'] = 'Sub event';
  $handler->display->display_options['relationships']['relation_super_event_node_1']['label'] = 'Sub event';
  $handler->display->display_options['relationships']['relation_super_event_node_1']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_super_event_node_1']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_super_event_node_1']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_super_event_node_1']['entity_deduplication_right'] = 0;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'relation_super_event_node_1';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => 'h3',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['relationship'] = 'relation_super_event_node_1';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Event date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['relationship'] = 'relation_super_event_node_1';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['arguments']['nid_1']['table'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid_1']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid_1']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_super_event_node_1';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'relation_super_event_node_1';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'relation_super_event_node_1';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare']['id'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['operator'] = '>=';
  $handler->display->display_options['filters']['fields_compare']['right_field'] = 'field_event_date_1';
  $handler->display->display_options['filters']['fields_compare']['left_field'] = 'field_event_date';

  /* Display: Following */
  $handler = $view->new_display('block', 'Following', 'following');
  $handler->display->display_options['display_description'] = 'Following recurring events';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'event event--following';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Buy event tickets link */
  $handler->display->display_options['fields']['field_event_tickets_url_et']['id'] = 'field_event_tickets_url_et';
  $handler->display->display_options['fields']['field_event_tickets_url_et']['table'] = 'field_data_field_event_tickets_url_et';
  $handler->display->display_options['fields']['field_event_tickets_url_et']['field'] = 'field_event_tickets_url_et';
  $handler->display->display_options['fields']['field_event_tickets_url_et']['relationship'] = 'relation_super_event_node_1';
  $handler->display->display_options['fields']['field_event_tickets_url_et']['label'] = '';
  $handler->display->display_options['fields']['field_event_tickets_url_et']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_tickets_url_et']['element_class'] = 'event__ticket';
  $handler->display->display_options['fields']['field_event_tickets_url_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_tickets_url_et']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_tickets_url_et']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_tickets_url_et']['click_sort_column'] = 'url';
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'relation_super_event_node_1';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title_field']['element_class'] = 'event__title';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['relationship'] = 'relation_super_event_node_1';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_date']['element_class'] = 'event__date';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );

  /* Display: Previous */
  $handler = $view->new_display('block', 'Previous', 'previous');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Previous';
  $handler->display->display_options['display_description'] = 'Previous recurring events';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'event event--previous';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Buy event tickets link */
  $handler->display->display_options['fields']['field_event_tickets_url_et']['id'] = 'field_event_tickets_url_et';
  $handler->display->display_options['fields']['field_event_tickets_url_et']['table'] = 'field_data_field_event_tickets_url_et';
  $handler->display->display_options['fields']['field_event_tickets_url_et']['field'] = 'field_event_tickets_url_et';
  $handler->display->display_options['fields']['field_event_tickets_url_et']['relationship'] = 'relation_super_event_node_1';
  $handler->display->display_options['fields']['field_event_tickets_url_et']['label'] = '';
  $handler->display->display_options['fields']['field_event_tickets_url_et']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_tickets_url_et']['element_class'] = 'event__ticket';
  $handler->display->display_options['fields']['field_event_tickets_url_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_tickets_url_et']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_tickets_url_et']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_tickets_url_et']['click_sort_column'] = 'url';
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'relation_super_event_node_1';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title_field']['element_class'] = 'event__title';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['relationship'] = 'relation_super_event_node_1';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_date']['element_class'] = 'event__date';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Event date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['relationship'] = 'relation_super_event_node_1';
  $handler->display->display_options['sorts']['field_event_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'relation_super_event_node_1';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'relation_super_event_node_1';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare']['id'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['operator'] = '<=';
  $handler->display->display_options['filters']['fields_compare']['right_field'] = 'field_event_date_1';
  $handler->display->display_options['filters']['fields_compare']['left_field'] = 'field_event_date';

  /* Display: Delete confirm */
  $handler = $view->new_display('block', 'Delete confirm', 'del_confirm');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'In addition the following repeating events will be deleted also:';
  $handler->display->display_options['display_description'] = 'Will be displayed when user is deleting a super event';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_event_date' => 'field_event_date',
    'title_field' => 'title_field',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Sub event */
  $handler->display->display_options['relationships']['relation_super_event_node_1']['id'] = 'relation_super_event_node_1';
  $handler->display->display_options['relationships']['relation_super_event_node_1']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_super_event_node_1']['field'] = 'relation_super_event_node';
  $handler->display->display_options['relationships']['relation_super_event_node_1']['ui_name'] = 'Sub event';
  $handler->display->display_options['relationships']['relation_super_event_node_1']['label'] = 'Sub event';
  $handler->display->display_options['relationships']['relation_super_event_node_1']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_super_event_node_1']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_super_event_node_1']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_super_event_node_1']['entity_deduplication_right'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'relation_super_event_node_1';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['relationship'] = 'relation_super_event_node_1';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Event date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['relationship'] = 'relation_super_event_node_1';
  $handler->display->display_options['sorts']['field_event_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['arguments']['nid_1']['table'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid_1']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'relation_super_event_node_1';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'relation_super_event_node_1';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $translatables['kada_recurring_events'] = array(
    t('Master'),
    t('Following'),
    t('more'),
    t('Apply'),
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
    t('Super event'),
    t('Sub event'),
    t('All'),
    t('Following recurring events'),
    t('Previous'),
    t('Previous recurring events'),
    t('Delete confirm'),
    t('In addition the following repeating events will be deleted also:'),
    t('Will be displayed when user is deleting a super event'),
    t('Displaying @start - @end of @total'),
  );
  $export['kada_recurring_events'] = $view;

  return $export;
}
