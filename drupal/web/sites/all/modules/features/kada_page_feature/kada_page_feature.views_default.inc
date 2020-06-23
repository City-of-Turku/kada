<?php

/**
 * @file
 * kada_page_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function kada_page_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'kada_pages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KADA Pages';
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
      'blog' => 'blog',
      'blog_post' => 'blog_post',
      'landing_page' => 'landing_page',
      'page' => 'page',
      'place' => 'place',
      'section' => 'section',
      'event' => 0,
      'feed_import_facebook' => 0,
      'feed_import_instagram' => 0,
      'feed_import_twitter' => 0,
      'feed_import_youtube_channel' => 0,
      'liftup' => 0,
      'news_item' => 0,
      'person' => 0,
      'position_of_trust' => 0,
      'service' => 0,
      'service_offer' => 0,
      'social_media_update' => 0,
      'webform' => 0,
    ),
    'node_only' => array(
      'node_changed' => 0,
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
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = '';
  $handler->display->display_options['fields']['language']['element_type'] = 'em';
  $handler->display->display_options['fields']['language']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['language']['element_default_classes'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
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
    'landing_page' => 'landing_page',
    'page' => 'page',
    'section' => 'section',
  );

  /* Display: Titles ER */
  $handler = $view->new_display('entityreference', 'Titles ER', 'page_er');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Title search for entity reference';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Top Image */
  $handler = $view->new_display('block', 'Top Image', 'top_image');
  $handler->display->display_options['display_description'] = 'No results rewriting used for showing image from referenced content';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Top Page */
  $handler->display->display_options['relationships']['reverse_field_subpage_node']['id'] = 'reverse_field_subpage_node';
  $handler->display->display_options['relationships']['reverse_field_subpage_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_subpage_node']['field'] = 'reverse_field_subpage_node';
  $handler->display->display_options['relationships']['reverse_field_subpage_node']['ui_name'] = 'Top Page';
  $handler->display->display_options['relationships']['reverse_field_subpage_node']['label'] = 'top_page';
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relationship: Section */
  $handler->display->display_options['relationships']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['relationships']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['relationships']['og_group_ref_target_id']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_group_ref_target_id']['ui_name'] = 'Section';
  $handler->display->display_options['relationships']['og_group_ref_target_id']['label'] = 'section';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Main image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['relationship'] = 'og_group_ref_target_id';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_main_image']['type'] = 'carousel';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'link' => '0',
  );
  /* Field: Content: Main image */
  $handler->display->display_options['fields']['field_main_image_1']['id'] = 'field_main_image_1';
  $handler->display->display_options['fields']['field_main_image_1']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image_1']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image_1']['relationship'] = 'reverse_field_subpage_node';
  $handler->display->display_options['fields']['field_main_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_main_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image_1']['empty'] = '[field_main_image]';
  $handler->display->display_options['fields']['field_main_image_1']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_main_image_1']['type'] = 'carousel';
  $handler->display->display_options['fields']['field_main_image_1']['settings'] = array(
    'link' => '0',
  );
  /* Field: Content: Main image */
  $handler->display->display_options['fields']['field_main_image_2']['id'] = 'field_main_image_2';
  $handler->display->display_options['fields']['field_main_image_2']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image_2']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image_2']['label'] = '';
  $handler->display->display_options['fields']['field_main_image_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image_2']['empty'] = '[field_main_image_1]';
  $handler->display->display_options['fields']['field_main_image_2']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_main_image_2']['type'] = 'carousel';
  $handler->display->display_options['fields']['field_main_image_2']['settings'] = array(
    'link' => '0',
  );
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
  /* Filter criterion: Content: Published status */
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
    'blog' => 'blog',
    'landing_page' => 'landing_page',
    'page' => 'page',
    'place' => 'place',
    'section' => 'section',
  );
  $translatables['kada_pages'] = array(
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
    t('Titles ER'),
    t('Title search for entity reference'),
    t('Top Image'),
    t('No results rewriting used for showing image from referenced content'),
    t('top_page'),
    t('OG membership from node'),
    t('section'),
    t('[field_main_image]'),
    t('[field_main_image_1]'),
    t('All'),
  );
  $export['kada_pages'] = $view;

  return $export;
}
