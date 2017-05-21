<?php
/**
 * @file
 * kada_news_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function kada_news_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'kada_news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KADA News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'KADA News';
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
      'news_item' => 'news_item',
      'blog' => 0,
      'blog_post' => 0,
      'event' => 0,
      'feed_import_facebook' => 0,
      'feed_import_instagram' => 0,
      'feed_import_twitter' => 0,
      'feed_import_youtube_channel' => 0,
      'landing_page' => 0,
      'liftup' => 0,
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
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Keywords (field_keywords) */
  $handler->display->display_options['relationships']['field_keywords_tid']['id'] = 'field_keywords_tid';
  $handler->display->display_options['relationships']['field_keywords_tid']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['relationships']['field_keywords_tid']['field'] = 'field_keywords_tid';
  /* Relationship: Content: Theme (field_theme) */
  $handler->display->display_options['relationships']['field_theme_tid']['id'] = 'field_theme_tid';
  $handler->display->display_options['relationships']['field_theme_tid']['table'] = 'field_data_field_theme';
  $handler->display->display_options['relationships']['field_theme_tid']['field'] = 'field_theme_tid';
  /* Relationship: Content: District (field_district) */
  $handler->display->display_options['relationships']['field_district_tid']['id'] = 'field_district_tid';
  $handler->display->display_options['relationships']['field_district_tid']['table'] = 'field_data_field_district';
  $handler->display->display_options['relationships']['field_district_tid']['field'] = 'field_district_tid';
  /* Relationship: Field: Target audience (field_target_audience) */
  $handler->display->display_options['relationships']['field_target_audience_tid']['id'] = 'field_target_audience_tid';
  $handler->display->display_options['relationships']['field_target_audience_tid']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['relationships']['field_target_audience_tid']['field'] = 'field_target_audience_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Main image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['type'] = 'carousel';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '250',
  );
  /* Field: Content: Keywords */
  $handler->display->display_options['fields']['field_keywords']['id'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['fields']['field_keywords']['field'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['label'] = '';
  $handler->display->display_options['fields']['field_keywords']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_keywords']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_keywords']['delta_offset'] = '0';
  /* Field: Content: District */
  $handler->display->display_options['fields']['field_district']['id'] = 'field_district';
  $handler->display->display_options['fields']['field_district']['table'] = 'field_data_field_district';
  $handler->display->display_options['fields']['field_district']['field'] = 'field_district';
  $handler->display->display_options['fields']['field_district']['label'] = '';
  $handler->display->display_options['fields']['field_district']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_district']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_district']['delta_offset'] = '0';
  /* Field: Content: Theme */
  $handler->display->display_options['fields']['field_theme']['id'] = 'field_theme';
  $handler->display->display_options['fields']['field_theme']['table'] = 'field_data_field_theme';
  $handler->display->display_options['fields']['field_theme']['field'] = 'field_theme';
  $handler->display->display_options['fields']['field_theme']['label'] = '';
  $handler->display->display_options['fields']['field_theme']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_theme']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_theme']['delta_offset'] = '0';
  /* Field: Field: Target audience */
  $handler->display->display_options['fields']['field_target_audience']['id'] = 'field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['field'] = 'field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['label'] = '';
  $handler->display->display_options['fields']['field_target_audience']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_audience']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_target_audience']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: keywords */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_keywords_tid';
  $handler->display->display_options['arguments']['name']['ui_name'] = 'keywords';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['vocabularies'] = array(
    'keywords' => 'keywords',
  );
  $handler->display->display_options['arguments']['name']['validate_options']['type'] = 'name';
  $handler->display->display_options['arguments']['name']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Contextual filter: district */
  $handler->display->display_options['arguments']['name_1']['id'] = 'name_1';
  $handler->display->display_options['arguments']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name_1']['field'] = 'name';
  $handler->display->display_options['arguments']['name_1']['relationship'] = 'field_district_tid';
  $handler->display->display_options['arguments']['name_1']['ui_name'] = 'district';
  $handler->display->display_options['arguments']['name_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name_1']['validate_options']['vocabularies'] = array(
    'district' => 'district',
  );
  $handler->display->display_options['arguments']['name_1']['validate_options']['type'] = 'name';
  $handler->display->display_options['arguments']['name_1']['limit'] = '0';
  /* Contextual filter: target_audience */
  $handler->display->display_options['arguments']['name_2']['id'] = 'name_2';
  $handler->display->display_options['arguments']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name_2']['field'] = 'name';
  $handler->display->display_options['arguments']['name_2']['relationship'] = 'field_target_audience_tid';
  $handler->display->display_options['arguments']['name_2']['ui_name'] = 'target_audience';
  $handler->display->display_options['arguments']['name_2']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['name_2']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name_2']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name_2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name_2']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name_2']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name_2']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name_2']['validate_options']['vocabularies'] = array(
    'target_audience' => 'target_audience',
  );
  $handler->display->display_options['arguments']['name_2']['validate_options']['type'] = 'name';
  $handler->display->display_options['arguments']['name_2']['limit'] = '0';
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
    'news_item' => 'news_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-0:-9';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node.created' => 'node.created',
  );
  /* Filter criterion: Content: District (field_district) */
  $handler->display->display_options['filters']['field_district_tid']['id'] = 'field_district_tid';
  $handler->display->display_options['filters']['field_district_tid']['table'] = 'field_data_field_district';
  $handler->display->display_options['filters']['field_district_tid']['field'] = 'field_district_tid';
  $handler->display->display_options['filters']['field_district_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_district_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_district_tid']['expose']['operator_id'] = 'field_district_tid_op';
  $handler->display->display_options['filters']['field_district_tid']['expose']['label'] = 'District';
  $handler->display->display_options['filters']['field_district_tid']['expose']['operator'] = 'field_district_tid_op';
  $handler->display->display_options['filters']['field_district_tid']['expose']['identifier'] = 'district';
  $handler->display->display_options['filters']['field_district_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_district_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_district_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_district_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_district_tid']['vocabulary'] = 'district';
  $handler->display->display_options['filters']['field_district_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Theme (field_theme) */
  $handler->display->display_options['filters']['field_theme_tid']['id'] = 'field_theme_tid';
  $handler->display->display_options['filters']['field_theme_tid']['table'] = 'field_data_field_theme';
  $handler->display->display_options['filters']['field_theme_tid']['field'] = 'field_theme_tid';
  $handler->display->display_options['filters']['field_theme_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_theme_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_theme_tid']['expose']['operator_id'] = 'field_theme_tid_op';
  $handler->display->display_options['filters']['field_theme_tid']['expose']['label'] = 'Theme';
  $handler->display->display_options['filters']['field_theme_tid']['expose']['operator'] = 'field_theme_tid_op';
  $handler->display->display_options['filters']['field_theme_tid']['expose']['identifier'] = 'theme';
  $handler->display->display_options['filters']['field_theme_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_theme_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_theme_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_theme_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_theme_tid']['vocabulary'] = 'theme';
  /* Filter criterion: Field: Target audience (field_target_audience) */
  $handler->display->display_options['filters']['field_target_audience_tid']['id'] = 'field_target_audience_tid';
  $handler->display->display_options['filters']['field_target_audience_tid']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['filters']['field_target_audience_tid']['field'] = 'field_target_audience_tid';
  $handler->display->display_options['filters']['field_target_audience_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_target_audience_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['operator_id'] = 'field_target_audience_tid_op';
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['label'] = 'Target audience';
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['operator'] = 'field_target_audience_tid_op';
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['identifier'] = 'audience';
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_target_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_target_audience_tid']['vocabulary'] = 'target_audience';
  /* Filter criterion: Content: Keywords (field_keywords) */
  $handler->display->display_options['filters']['field_keywords_tid']['id'] = 'field_keywords_tid';
  $handler->display->display_options['filters']['field_keywords_tid']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['filters']['field_keywords_tid']['field'] = 'field_keywords_tid';
  $handler->display->display_options['filters']['field_keywords_tid']['value'] = '';
  $handler->display->display_options['filters']['field_keywords_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_keywords_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['operator_id'] = 'field_keywords_tid_op';
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['operator'] = 'field_keywords_tid_op';
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['identifier'] = 'keywords';
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_keywords_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_keywords_tid']['vocabulary'] = 'keywords';

  /* Display: Archive page */
  $handler = $view->new_display('page', 'Archive page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['path'] = 'news';

  /* Display: Top image */
  $handler = $view->new_display('block', 'Top image', 'top_image');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Topic-Service Package */
  $handler->display->display_options['relationships']['reverse_field_topic_node']['id'] = 'reverse_field_topic_node';
  $handler->display->display_options['relationships']['reverse_field_topic_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_topic_node']['field'] = 'reverse_field_topic_node';
  $handler->display->display_options['relationships']['reverse_field_topic_node']['ui_name'] = 'Topic-Service Package';
  $handler->display->display_options['relationships']['reverse_field_topic_node']['label'] = 'service_package';
  /* Relationship: Topic */
  $handler->display->display_options['relationships']['reverse_field_subpage_node']['id'] = 'reverse_field_subpage_node';
  $handler->display->display_options['relationships']['reverse_field_subpage_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_subpage_node']['field'] = 'reverse_field_subpage_node';
  $handler->display->display_options['relationships']['reverse_field_subpage_node']['ui_name'] = 'Topic';
  $handler->display->display_options['relationships']['reverse_field_subpage_node']['label'] = 'topic';
  /* Relationship: Content-Service Package */
  $handler->display->display_options['relationships']['reverse_field_topic_node_1']['id'] = 'reverse_field_topic_node_1';
  $handler->display->display_options['relationships']['reverse_field_topic_node_1']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_topic_node_1']['field'] = 'reverse_field_topic_node';
  $handler->display->display_options['relationships']['reverse_field_topic_node_1']['relationship'] = 'reverse_field_subpage_node';
  $handler->display->display_options['relationships']['reverse_field_topic_node_1']['ui_name'] = 'Content-Service Package';
  $handler->display->display_options['relationships']['reverse_field_topic_node_1']['label'] = 'topic_service';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Main image */
  $handler->display->display_options['fields']['field_main_image_1']['id'] = 'field_main_image_1';
  $handler->display->display_options['fields']['field_main_image_1']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image_1']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image_1']['relationship'] = 'reverse_field_topic_node_1';
  $handler->display->display_options['fields']['field_main_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_main_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image_1']['type'] = 'carousel';
  /* Field: Content: Main image */
  $handler->display->display_options['fields']['field_main_image_2']['id'] = 'field_main_image_2';
  $handler->display->display_options['fields']['field_main_image_2']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image_2']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image_2']['relationship'] = 'reverse_field_subpage_node';
  $handler->display->display_options['fields']['field_main_image_2']['label'] = '';
  $handler->display->display_options['fields']['field_main_image_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_image_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image_2']['type'] = 'carousel';
  /* Field: Content: Main image */
  $handler->display->display_options['fields']['field_main_image_3']['id'] = 'field_main_image_3';
  $handler->display->display_options['fields']['field_main_image_3']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image_3']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image_3']['relationship'] = 'reverse_field_topic_node';
  $handler->display->display_options['fields']['field_main_image_3']['label'] = '';
  $handler->display->display_options['fields']['field_main_image_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_image_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image_3']['type'] = 'carousel';
  /* Field: Content: Main image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['type'] = 'carousel';
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
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_item' => 'news_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Emergency message */
  $handler = $view->new_display('block', 'Emergency message', 'emergency_message');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'emergency-message-box';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'emergency-message';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'emergency-message-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_lead_paragraph_long_text' => 'field_lead_paragraph_long_text',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: emergency_message */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'emergency_message';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'emergency-message__title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Lead paragraph */
  $handler->display->display_options['fields']['field_lead_paragraph_long_text']['id'] = 'field_lead_paragraph_long_text';
  $handler->display->display_options['fields']['field_lead_paragraph_long_text']['table'] = 'field_data_field_lead_paragraph_long_text';
  $handler->display->display_options['fields']['field_lead_paragraph_long_text']['field'] = 'field_lead_paragraph_long_text';
  $handler->display->display_options['fields']['field_lead_paragraph_long_text']['label'] = '';
  $handler->display->display_options['fields']['field_lead_paragraph_long_text']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_lead_paragraph_long_text']['element_class'] = 'emergency-message__text';
  $handler->display->display_options['fields']['field_lead_paragraph_long_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_paragraph_long_text']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_lead_paragraph_long_text']['element_default_classes'] = FALSE;
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
    'news_item' => 'news_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';
  $handler->display->display_options['block_description'] = 'KADA News Emergency message';

  /* Display: Front main block */
  $handler = $view->new_display('block', 'Front main block', 'front_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'main-liftups';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'main_news';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|sticky';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'main_news';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Theme (field_theme) */
  $handler->display->display_options['relationships']['field_theme_tid']['id'] = 'field_theme_tid';
  $handler->display->display_options['relationships']['field_theme_tid']['table'] = 'field_data_field_theme';
  $handler->display->display_options['relationships']['field_theme_tid']['field'] = 'field_theme_tid';
  /* Relationship: Flags: main_news */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'main_news';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'main_news';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Order time (field_order_time) */
  $handler->display->display_options['sorts']['field_order_time_value']['id'] = 'field_order_time_value';
  $handler->display->display_options['sorts']['field_order_time_value']['table'] = 'field_data_field_order_time';
  $handler->display->display_options['sorts']['field_order_time_value']['field'] = 'field_order_time_value';
  $handler->display->display_options['sorts']['field_order_time_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Theme (field_theme) */
  $handler->display->display_options['arguments']['field_theme_tid']['id'] = 'field_theme_tid';
  $handler->display->display_options['arguments']['field_theme_tid']['table'] = 'field_data_field_theme';
  $handler->display->display_options['arguments']['field_theme_tid']['field'] = 'field_theme_tid';
  $handler->display->display_options['arguments']['field_theme_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_theme_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_theme_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_theme_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_theme_tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['field_theme_tid']['default_argument_options']['vocabularies'] = array(
    'theme' => 'theme',
  );
  $handler->display->display_options['arguments']['field_theme_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_theme_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_theme_tid']['summary_options']['items_per_page'] = '25';
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
    'news_item' => 'news_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';

  /* Display: Section Main News */
  $handler = $view->new_display('block', 'Section Main News', 'section_main');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'main-liftups';
  $handler->display->display_options['display_description'] = 'News flagged to main news per section';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'main_news';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|sticky';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'main_news';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Theme (field_theme) */
  $handler->display->display_options['relationships']['field_theme_tid']['id'] = 'field_theme_tid';
  $handler->display->display_options['relationships']['field_theme_tid']['table'] = 'field_data_field_theme';
  $handler->display->display_options['relationships']['field_theme_tid']['field'] = 'field_theme_tid';
  /* Relationship: Flags: main_news */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'main_news';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'main_news';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Order time (field_order_time) */
  $handler->display->display_options['sorts']['field_order_time_value']['id'] = 'field_order_time_value';
  $handler->display->display_options['sorts']['field_order_time_value']['table'] = 'field_data_field_order_time';
  $handler->display->display_options['sorts']['field_order_time_value']['field'] = 'field_order_time_value';
  $handler->display->display_options['sorts']['field_order_time_value']['order'] = 'DESC';
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
    'news_item' => 'news_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
  $translatables['kada_news'] = array(
    t('Master'),
    t('KADA News'),
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
    t('term from field_keywords'),
    t('term from field_theme'),
    t('term from field_district'),
    t('term from field_target_audience'),
    t('All'),
    t('Language'),
    t('Date'),
    t('District'),
    t('Theme'),
    t('Target audience'),
    t('Keywords'),
    t('Archive page'),
    t('Top image'),
    t('service_package'),
    t('topic'),
    t('topic_service'),
    t('Emergency message'),
    t('flag'),
    t('KADA News Emergency message'),
    t('Front main block'),
    t('main_news'),
    t('Section Main News'),
    t('News flagged to main news per section'),
    t('OG membership from node'),
  );
  $export['kada_news'] = $view;

  return $export;
}
