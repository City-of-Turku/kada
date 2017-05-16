<?php
/**
 * @file
 * kada_sections_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function kada_sections_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'kada_section_footer';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KADA Section Footer';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'section-footer';
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
      'section' => 'section',
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
      'social_media_update' => 0,
      'event' => 0,
      'place' => 0,
      'news_item' => 0,
      'webform' => 0,
    ),
    'node_only' => array(
      'node_changed' => 'node_changed',
    ),
    'og' => array(
      'current' => 'current',
      'user' => 'user',
    ),
  );
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'section-footer__item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: section_footer */
  $handler->display->display_options['fields']['field_section_footer']['id'] = 'field_section_footer';
  $handler->display->display_options['fields']['field_section_footer']['table'] = 'field_data_field_section_footer';
  $handler->display->display_options['fields']['field_section_footer']['field'] = 'field_section_footer';
  $handler->display->display_options['fields']['field_section_footer']['label'] = '';
  $handler->display->display_options['fields']['field_section_footer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_footer']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_section_footer']['delta_offset'] = '0';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Kaikki';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  /* Display: KADAcalendar | Hobbies frontpage */
  $handler = $view->new_display('block', 'KADAcalendar | Hobbies frontpage', 'block_2');
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
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  $translatables['kada_section_footer'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Kaikki'),
    t('Block'),
    t('KADAcalendar | Hobbies frontpage'),
    t('All'),
  );
  $export['kada_section_footer'] = $view;

  $view = new view();
  $view->name = 'kada_section_header';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KADA Section Header';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'section-header';
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
      'section' => 'section',
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'section-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['kada_section_header'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Block'),
  );
  $export['kada_section_header'] = $view;

  return $export;
}
