<?php
/**
 * @file
 * kada_liftups_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function kada_liftups_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'kada_current';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KADA Current';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'liftup-box-list';
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
      'feed_import_facebook' => 'feed_import_facebook',
      'feed_import_instagram' => 'feed_import_instagram',
      'feed_import_twitter' => 'feed_import_twitter',
      'feed_import_youtube_channel' => 'feed_import_youtube_channel',
      'liftup' => 'liftup',
      'news_item' => 'news_item',
      'section' => 'section',
      'social_media_update' => 'social_media_update',
      'blog' => 0,
      'blog_post' => 0,
      'landing_page' => 0,
      'page' => 0,
      'person' => 0,
      'place' => 0,
      'position_of_trust' => 0,
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
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'current';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'current';
  /* Relationship: Flags: current */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'current';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'district' => 'district',
    'keywords' => 'keywords',
    'target_audience' => 'target_audience',
    'theme' => 'theme',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'liftup' => 'liftup',
    'news_item' => 'news_item',
    'social_media_update' => 'social_media_update',
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
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';
  $handler->display->display_options['filters']['flagged']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Current */
  $handler = $view->new_display('block', 'Current', 'block');
  $handler->display->display_options['display_description'] = 'Content flagged to current per theme';

  /* Display: Current | Section */
  $handler = $view->new_display('block', 'Current | Section', 'section');
  $handler->display->display_options['display_description'] = 'Content flagged to current per section';
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
    'event' => 'event',
    'liftup' => 'liftup',
    'news_item' => 'news_item',
    'social_media_update' => 'social_media_update',
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

  /* Display: Tab | All */
  $handler = $view->new_display('block', 'Tab | All', 'tab_new');
  $handler->display->display_options['display_description'] = 'All content attached to a theme flagged in current';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '18';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Tab | News */
  $handler = $view->new_display('block', 'Tab | News', 'tab_news');
  $handler->display->display_options['display_description'] = 'News attached to a theme flagged in current';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Flags: Flagged time */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'flagging';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
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
    'news_item' => 'news_item',
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

  /* Display: Tab | Facebook */
  $handler = $view->new_display('block', 'Tab | Facebook', 'tab_facebook');
  $handler->display->display_options['display_description'] = 'FB updates attached to a theme flagged in current';
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
    'social_media_update' => 'social_media_update',
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
  /* Filter criterion: Content: Type (field_some_type) */
  $handler->display->display_options['filters']['field_some_type_value']['id'] = 'field_some_type_value';
  $handler->display->display_options['filters']['field_some_type_value']['table'] = 'field_data_field_some_type';
  $handler->display->display_options['filters']['field_some_type_value']['field'] = 'field_some_type_value';
  $handler->display->display_options['filters']['field_some_type_value']['value'] = array(
    'facebook' => 'facebook',
  );

  /* Display: Tab | Twitter */
  $handler = $view->new_display('block', 'Tab | Twitter', 'tab_twitter');
  $handler->display->display_options['display_description'] = 'Tweets attached to a theme flagged in current';
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
    'social_media_update' => 'social_media_update',
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
  /* Filter criterion: Content: Type (field_some_type) */
  $handler->display->display_options['filters']['field_some_type_value']['id'] = 'field_some_type_value';
  $handler->display->display_options['filters']['field_some_type_value']['table'] = 'field_data_field_some_type';
  $handler->display->display_options['filters']['field_some_type_value']['field'] = 'field_some_type_value';
  $handler->display->display_options['filters']['field_some_type_value']['value'] = array(
    'twitter' => 'twitter',
  );

  /* Display: Tab | All | Section */
  $handler = $view->new_display('block', 'Tab | All | Section', 'tab_section_new');
  $handler->display->display_options['display_description'] = 'All content attached to a section flagged in current';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '18';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Tab | News | Section */
  $handler = $view->new_display('block', 'Tab | News | Section', 'tab_section_news');
  $handler->display->display_options['display_description'] = 'News attached to a section flagged in current';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Flags: Flagged time */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'flagging';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
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
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
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
    'liftup' => 'liftup',
    'news_item' => 'news_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';
  $handler->display->display_options['filters']['flagged']['group'] = 1;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 2;
  /* Filter criterion: Content: Name (title_field:language) */
  $handler->display->display_options['filters']['language_1']['id'] = 'language_1';
  $handler->display->display_options['filters']['language_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['language_1']['field'] = 'language';
  $handler->display->display_options['filters']['language_1']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language_1']['group'] = 2;

  /* Display: Tab | Facebook | Section */
  $handler = $view->new_display('block', 'Tab | Facebook | Section', 'tab_section_facebook');
  $handler->display->display_options['display_description'] = 'FB updates attached to a section flagged in current';
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
    'social_media_update' => 'social_media_update',
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
  /* Filter criterion: Content: Type (field_some_type) */
  $handler->display->display_options['filters']['field_some_type_value']['id'] = 'field_some_type_value';
  $handler->display->display_options['filters']['field_some_type_value']['table'] = 'field_data_field_some_type';
  $handler->display->display_options['filters']['field_some_type_value']['field'] = 'field_some_type_value';
  $handler->display->display_options['filters']['field_some_type_value']['value'] = array(
    'facebook' => 'facebook',
  );

  /* Display: Tab | Twitter | Section */
  $handler = $view->new_display('block', 'Tab | Twitter | Section', 'tab_section_twitter');
  $handler->display->display_options['display_description'] = 'Tweets attached to a section flagged in current';
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
    'social_media_update' => 'social_media_update',
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
  /* Filter criterion: Content: Type (field_some_type) */
  $handler->display->display_options['filters']['field_some_type_value']['id'] = 'field_some_type_value';
  $handler->display->display_options['filters']['field_some_type_value']['table'] = 'field_data_field_some_type';
  $handler->display->display_options['filters']['field_some_type_value']['field'] = 'field_some_type_value';
  $handler->display->display_options['filters']['field_some_type_value']['value'] = array(
    'twitter' => 'twitter',
  );

  /* Display: Tab | Nearby */
  $handler = $view->new_display('block', 'Tab | Nearby', 'tab_nearby');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'liftup-box-list proximity';
  $handler->display->display_options['display_description'] = 'Content attached to a theme and is located near';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Location (field_location) - proximity */
  $handler->display->display_options['sorts']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['sorts']['field_geofield_distance']['table'] = 'field_data_field_location';
  $handler->display->display_options['sorts']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['sorts']['field_geofield_distance']['source'] = 'exposed_geofield_filter';
  $handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_manual'] = array(
    'lat' => '',
    'lon' => '',
  );
  $handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_location';
  $handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_location';
  /* Sort criterion: Flags: Flagged time */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'flagging';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
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
  /* Filter criterion: Field: Location (field_location) - proximity */
  $handler->display->display_options['filters']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['table'] = 'field_data_field_location';
  $handler->display->display_options['filters']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['operator'] = '>';
  $handler->display->display_options['filters']['field_geofield_distance']['value'] = array(
    'distance' => '0',
    'distance2' => 200,
    'unit' => '6371000',
    'origin' => array(
      'lat' => '60.4518126',
      'lon' => '22.2666303',
    ),
  );
  $handler->display->display_options['filters']['field_geofield_distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['operator_id'] = 'field_geofield_distance_op';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['label'] = 'Coordinates';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['operator'] = 'field_geofield_distance_op';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['identifier'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_location';
  $handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_location';

  /* Display: Tab | Nearby | Section */
  $handler = $view->new_display('block', 'Tab | Nearby | Section', 'tab_section_nearby');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'liftup-box-list proximity';
  $handler->display->display_options['display_description'] = 'Content attached to a section and is located near user';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Location (field_location) - proximity */
  $handler->display->display_options['sorts']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['sorts']['field_geofield_distance']['table'] = 'field_data_field_location';
  $handler->display->display_options['sorts']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['sorts']['field_geofield_distance']['source'] = 'exposed_geofield_filter';
  $handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_manual'] = array(
    'lat' => '',
    'lon' => '',
  );
  $handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_location';
  $handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_location';
  /* Sort criterion: Flags: Flagged time */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'flagging';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
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
  /* Filter criterion: Field: Location (field_location) - proximity */
  $handler->display->display_options['filters']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['table'] = 'field_data_field_location';
  $handler->display->display_options['filters']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['operator'] = '>';
  $handler->display->display_options['filters']['field_geofield_distance']['value'] = array(
    'distance' => '0',
    'distance2' => 200,
    'unit' => '6371000',
    'origin' => array(
      'lat' => '60.4518126',
      'lon' => '22.2666303',
    ),
  );
  $handler->display->display_options['filters']['field_geofield_distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['operator_id'] = 'field_geofield_distance_op';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['label'] = 'Coordinates';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['operator'] = 'field_geofield_distance_op';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['identifier'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_location';
  $handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_location';

  /* Display: Tab | Instagram */
  $handler = $view->new_display('block', 'Tab | Instagram', 'tab_instagram');
  $handler->display->display_options['display_description'] = 'Instagram updates attached to a theme flagged in current';
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
    'social_media_update' => 'social_media_update',
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
  /* Filter criterion: Content: Type (field_some_type) */
  $handler->display->display_options['filters']['field_some_type_value']['id'] = 'field_some_type_value';
  $handler->display->display_options['filters']['field_some_type_value']['table'] = 'field_data_field_some_type';
  $handler->display->display_options['filters']['field_some_type_value']['field'] = 'field_some_type_value';
  $handler->display->display_options['filters']['field_some_type_value']['value'] = array(
    'instagram' => 'instagram',
  );

  /* Display: Tab | Instagram | Section */
  $handler = $view->new_display('block', 'Tab | Instagram | Section', 'tab_section_instagram');
  $handler->display->display_options['display_description'] = 'Instagram updates attached to a section flagged in current';
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
    'social_media_update' => 'social_media_update',
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
  /* Filter criterion: Content: Type (field_some_type) */
  $handler->display->display_options['filters']['field_some_type_value']['id'] = 'field_some_type_value';
  $handler->display->display_options['filters']['field_some_type_value']['table'] = 'field_data_field_some_type';
  $handler->display->display_options['filters']['field_some_type_value']['field'] = 'field_some_type_value';
  $handler->display->display_options['filters']['field_some_type_value']['value'] = array(
    'instagram' => 'instagram',
  );

  /* Display: Tab | LinkedIn */
  $handler = $view->new_display('block', 'Tab | LinkedIn', 'tab_linkedin');
  $handler->display->display_options['display_description'] = 'LinkedIn updates attached to a theme flagged in current';
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
    'social_media_update' => 'social_media_update',
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
  /* Filter criterion: Content: Type (field_some_type) */
  $handler->display->display_options['filters']['field_some_type_value']['id'] = 'field_some_type_value';
  $handler->display->display_options['filters']['field_some_type_value']['table'] = 'field_data_field_some_type';
  $handler->display->display_options['filters']['field_some_type_value']['field'] = 'field_some_type_value';
  $handler->display->display_options['filters']['field_some_type_value']['value'] = array(
    'linkedin' => 'linkedin',
  );

  /* Display: Tab | LinkedIn | Section */
  $handler = $view->new_display('block', 'Tab | LinkedIn | Section', 'tab_section_linkedin');
  $handler->display->display_options['display_description'] = 'LinkedIn updates attached to a section flagged in current';
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
    'social_media_update' => 'social_media_update',
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
  /* Filter criterion: Content: Type (field_some_type) */
  $handler->display->display_options['filters']['field_some_type_value']['id'] = 'field_some_type_value';
  $handler->display->display_options['filters']['field_some_type_value']['table'] = 'field_data_field_some_type';
  $handler->display->display_options['filters']['field_some_type_value']['field'] = 'field_some_type_value';
  $handler->display->display_options['filters']['field_some_type_value']['value'] = array(
    'linkedin' => 'linkedin',
  );

  /* Display: Tab | Blogs */
  $handler = $view->new_display('block', 'Tab | Blogs', 'tab_blogs');
  $handler->display->display_options['display_description'] = 'Blogs attached to a theme flagged in current';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Flags: Flagged time */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'flagging';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'blog_post' => 'blog_post',
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

  /* Display: Tab | Blogs | Section */
  $handler = $view->new_display('block', 'Tab | Blogs | Section', 'tab_section_blogs');
  $handler->display->display_options['display_description'] = 'Blogs attached to a section flagged in current';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Flags: Flagged time */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'flagging';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'blog_post' => 'blog_post',
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

  /* Display: Tab | Youtube */
  $handler = $view->new_display('block', 'Tab | Youtube', 'tab_youtube');
  $handler->display->display_options['display_description'] = 'Youtube videos attached to a theme flagged in current';
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
    'social_media_update' => 'social_media_update',
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
  /* Filter criterion: Content: Type (field_some_type) */
  $handler->display->display_options['filters']['field_some_type_value']['id'] = 'field_some_type_value';
  $handler->display->display_options['filters']['field_some_type_value']['table'] = 'field_data_field_some_type';
  $handler->display->display_options['filters']['field_some_type_value']['field'] = 'field_some_type_value';
  $handler->display->display_options['filters']['field_some_type_value']['value'] = array(
    'youtube' => 'youtube',
  );

  /* Display: Tab | Youtube | Section */
  $handler = $view->new_display('block', 'Tab | Youtube | Section', 'tab_section_youtube');
  $handler->display->display_options['display_description'] = 'Youtube videos attached to a section flagged in current';
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
    'social_media_update' => 'social_media_update',
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
  /* Filter criterion: Content: Type (field_some_type) */
  $handler->display->display_options['filters']['field_some_type_value']['id'] = 'field_some_type_value';
  $handler->display->display_options['filters']['field_some_type_value']['table'] = 'field_data_field_some_type';
  $handler->display->display_options['filters']['field_some_type_value']['field'] = 'field_some_type_value';
  $handler->display->display_options['filters']['field_some_type_value']['value'] = array(
    'youtube' => 'youtube',
  );
  $translatables['kada_current'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('flag'),
    t('OG membership from node'),
    t('All'),
    t('Current'),
    t('Content flagged to current per theme'),
    t('Current | Section'),
    t('Content flagged to current per section'),
    t('Tab | All'),
    t('All content attached to a theme flagged in current'),
    t('Tab | News'),
    t('News attached to a theme flagged in current'),
    t('Tab | Facebook'),
    t('FB updates attached to a theme flagged in current'),
    t('Tab | Twitter'),
    t('Tweets attached to a theme flagged in current'),
    t('Tab | All | Section'),
    t('All content attached to a section flagged in current'),
    t('Tab | News | Section'),
    t('News attached to a section flagged in current'),
    t('Tab | Facebook | Section'),
    t('FB updates attached to a section flagged in current'),
    t('Tab | Twitter | Section'),
    t('Tweets attached to a section flagged in current'),
    t('Tab | Nearby'),
    t('Content attached to a theme and is located near'),
    t('Coordinates'),
    t('Tab | Nearby | Section'),
    t('Content attached to a section and is located near user'),
    t('Tab | Instagram'),
    t('Instagram updates attached to a theme flagged in current'),
    t('Tab | Instagram | Section'),
    t('Instagram updates attached to a section flagged in current'),
    t('Tab | LinkedIn'),
    t('LinkedIn updates attached to a theme flagged in current'),
    t('Tab | LinkedIn | Section'),
    t('LinkedIn updates attached to a section flagged in current'),
    t('Tab | Blogs'),
    t('Blogs attached to a theme flagged in current'),
    t('Tab | Blogs | Section'),
    t('Blogs attached to a section flagged in current'),
    t('Tab | Youtube'),
    t('Youtube videos attached to a theme flagged in current'),
    t('Tab | Youtube | Section'),
    t('Youtube videos attached to a section flagged in current'),
  );
  $export['kada_current'] = $view;

  $view = new view();
  $view->name = 'kada_liftups';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KADA Liftups ER';
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
      'news_item' => 'news_item',
      'blog' => 0,
      'blog_post' => 0,
      'feed_import_facebook' => 0,
      'feed_import_instagram' => 0,
      'feed_import_twitter' => 0,
      'feed_import_youtube_channel' => 0,
      'landing_page' => 0,
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
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Visible title */
  $handler->display->display_options['fields']['field_visible_title']['id'] = 'field_visible_title';
  $handler->display->display_options['fields']['field_visible_title']['table'] = 'field_data_field_visible_title';
  $handler->display->display_options['fields']['field_visible_title']['field'] = 'field_visible_title';
  $handler->display->display_options['fields']['field_visible_title']['label'] = '';
  $handler->display->display_options['fields']['field_visible_title']['element_type'] = '0';
  $handler->display->display_options['fields']['field_visible_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visible_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_visible_title']['element_default_classes'] = FALSE;
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
    'news_item' => 'news_item',
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
    'field_visible_title' => 'field_visible_title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['kada_liftups'] = array(
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
  );
  $export['kada_liftups'] = $view;

  $view = new view();
  $view->name = 'kada_project_liftups';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KADA Project liftups';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'project';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'flagging|timestamp';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'project';
  /* Relationship: Flags: project */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'project';
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

  /* Display: Projects */
  $handler = $view->new_display('block', 'Projects', 'block');
  $handler->display->display_options['display_description'] = 'Content flagged to projects';

  /* Display: Projects | Section */
  $handler = $view->new_display('block', 'Projects | Section', 'section');
  $handler->display->display_options['display_description'] = 'Content flagged to projects per section';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: project */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'project';
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

  /* Display: Projects | Promoted */
  $handler = $view->new_display('block', 'Projects | Promoted', 'block_1');
  $handler->display->display_options['display_description'] = 'Content flagged to projects';
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
  $translatables['kada_project_liftups'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('flag'),
    t('All'),
    t('Projects'),
    t('Content flagged to projects'),
    t('Projects | Section'),
    t('Content flagged to projects per section'),
    t('OG membership from node'),
    t('Projects | Promoted'),
  );
  $export['kada_project_liftups'] = $view;

  $view = new view();
  $view->name = 'kada_related_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KADA Related content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Might interest you';
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
      'news_item' => 'news_item',
      'blog' => 0,
      'blog_post' => 0,
      'feed_import_facebook' => 0,
      'feed_import_instagram' => 0,
      'feed_import_twitter' => 0,
      'feed_import_youtube_channel' => 0,
      'landing_page' => 0,
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
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_related_content_node']['id'] = 'reverse_field_related_content_node';
  $handler->display->display_options['relationships']['reverse_field_related_content_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_related_content_node']['field'] = 'reverse_field_related_content_node';
  $handler->display->display_options['relationships']['reverse_field_related_content_node']['label'] = 'page';
  $handler->display->display_options['relationships']['reverse_field_related_content_node']['required'] = TRUE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_related_content_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_related_content_target_id';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
    'liftup' => 'liftup',
    'news_item' => 'news_item',
  );

  /* Display: Liftups */
  $handler = $view->new_display('block', 'Liftups', 'liftups');
  $handler->display->display_options['display_description'] = 'Liftups referenced via related content field';

  /* Display: Liftups ET */
  $handler = $view->new_display('block', 'Liftups ET', 'liftups_et');
  $handler->display->display_options['display_description'] = 'Liftups referenced via related content translated field';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_related_content_et_node']['id'] = 'reverse_field_related_content_et_node';
  $handler->display->display_options['relationships']['reverse_field_related_content_et_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_related_content_et_node']['field'] = 'reverse_field_related_content_et_node';
  $handler->display->display_options['relationships']['reverse_field_related_content_et_node']['label'] = 'page';
  $handler->display->display_options['relationships']['reverse_field_related_content_et_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_related_content_et_node';
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
  $handler->display->display_options['filters']['status']['relationship'] = 'field_related_content_target_id';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
    'liftup' => 'liftup',
    'news_item' => 'news_item',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $translatables['kada_related_content'] = array(
    t('Master'),
    t('Might interest you'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('page'),
    t('All'),
    t('Liftups'),
    t('Liftups referenced via related content field'),
    t('Liftups ET'),
    t('Liftups referenced via related content translated field'),
  );
  $export['kada_related_content'] = $view;

  $view = new view();
  $view->name = 'kada_top_carousel';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KADA Top Carousel';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'top_carousel';
  $handler->display->display_options['style_options']['captionfield'] = 'field_link_to_content';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Flags: carousel */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'carousel';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'theme' => 'theme',
    'scald_authors' => 0,
    'scald_tags' => 0,
    'district' => 0,
    'keywords' => 0,
    'target_audience' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Theme (field_theme) */
  $handler->display->display_options['arguments']['field_theme_tid']['id'] = 'field_theme_tid';
  $handler->display->display_options['arguments']['field_theme_tid']['table'] = 'field_data_field_theme';
  $handler->display->display_options['arguments']['field_theme_tid']['field'] = 'field_theme_tid';
  $handler->display->display_options['arguments']['field_theme_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_theme_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_theme_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_theme_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_theme_tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_theme_tid']['default_argument_options']['vocabularies'] = array(
    'theme' => 'theme',
  );
  $handler->display->display_options['arguments']['field_theme_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_theme_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_theme_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'liftup' => 'liftup',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';
  $handler->display->display_options['filters']['flagged']['group'] = 1;
  /* Filter criterion: Domain Access: Available on current domain */
  $handler->display->display_options['filters']['current_all']['id'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['table'] = 'domain_access';
  $handler->display->display_options['filters']['current_all']['field'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['value'] = '1';

  /* Display: FlexSlider */
  $handler = $view->new_display('block', 'FlexSlider', 'slider');
  $handler->display->display_options['display_description'] = 'Slideshow of liftups per theme';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Main image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_main_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_main_image']['type'] = 'carousel';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['fields']['field_main_image']['group_column'] = 'sid';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['group_column'] = 'entity_id';
  /* Field: Taxonomy term: Color name */
  $handler->display->display_options['fields']['field_color_name']['id'] = 'field_color_name';
  $handler->display->display_options['fields']['field_color_name']['table'] = 'field_data_field_color_name';
  $handler->display->display_options['fields']['field_color_name']['field'] = 'field_color_name';
  $handler->display->display_options['fields']['field_color_name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_color_name']['label'] = '';
  $handler->display->display_options['fields']['field_color_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_color_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_color_name']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_color_name']['group_column'] = 'entity_id';
  /* Field: Field: Target audience */
  $handler->display->display_options['fields']['field_target_audience']['id'] = 'field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['field'] = 'field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['label'] = '';
  $handler->display->display_options['fields']['field_target_audience']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_audience']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_target_audience']['alter']['text'] = '<span class="flex-caption__target-group__item">[field_target_audience]</span>';
  $handler->display->display_options['fields']['field_target_audience']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_target_audience']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Field: Content: Theme */
  $handler->display->display_options['fields']['field_theme']['id'] = 'field_theme';
  $handler->display->display_options['fields']['field_theme']['table'] = 'field_data_field_theme';
  $handler->display->display_options['fields']['field_theme']['field'] = 'field_theme';
  $handler->display->display_options['fields']['field_theme']['label'] = '';
  $handler->display->display_options['fields']['field_theme']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_theme']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_theme']['alter']['text'] = '<span class="flex-caption__target-group__item">[field_theme]</span>';
  $handler->display->display_options['fields']['field_theme']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_theme']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Field: Content: Link to content */
  $handler->display->display_options['fields']['field_link_to_content']['id'] = 'field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['table'] = 'field_data_field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['field'] = 'field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['label'] = '';
  $handler->display->display_options['fields']['field_link_to_content']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_to_content']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_link_to_content']['alter']['text'] = '<div class="flex-caption__target-group">[field_theme][field_target_audience]</div>
        <div class="flex-caption__body">[body]</div>';
  $handler->display->display_options['fields']['field_link_to_content']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_link_to_content']['alter']['path'] = '[field_link_to_content]';
  $handler->display->display_options['fields']['field_link_to_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_to_content']['empty'] = '<div class="flex-caption__target-group">[field_theme][field_target_audience]</div>
        <div class="flex-caption__body">[body]</div>';
  $handler->display->display_options['fields']['field_link_to_content']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_link_to_content']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_to_content']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_link_to_content']['group_column'] = 'entity_id';

  /* Display: FlexSlider | Section */
  $handler = $view->new_display('block', 'FlexSlider | Section', 'section');
  $handler->display->display_options['display_description'] = 'Slideshow of liftups per section';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['empty']['view']['label'] = 'Top Image';
  $handler->display->display_options['empty']['view']['empty'] = TRUE;
  $handler->display->display_options['empty']['view']['view_to_insert'] = 'kada_pages:top_image';
  $handler->display->display_options['empty']['view']['inherit_arguments'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: carousel */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'carousel';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Main image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_main_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_main_image']['type'] = 'carousel';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['fields']['field_main_image']['group_column'] = 'entity_id';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['group_column'] = 'entity_id';
  /* Field: Field: Target audience */
  $handler->display->display_options['fields']['field_target_audience']['id'] = 'field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['field'] = 'field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['label'] = '';
  $handler->display->display_options['fields']['field_target_audience']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_audience']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_target_audience']['alter']['text'] = '<span class="flex-caption__target-group__item">[field_target_audience]</span>';
  $handler->display->display_options['fields']['field_target_audience']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_target_audience']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Field: Content: Theme */
  $handler->display->display_options['fields']['field_theme']['id'] = 'field_theme';
  $handler->display->display_options['fields']['field_theme']['table'] = 'field_data_field_theme';
  $handler->display->display_options['fields']['field_theme']['field'] = 'field_theme';
  $handler->display->display_options['fields']['field_theme']['label'] = '';
  $handler->display->display_options['fields']['field_theme']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_theme']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_theme']['alter']['text'] = '<span class="flex-caption__target-group__item">[field_theme]</span>';
  $handler->display->display_options['fields']['field_theme']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_theme']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Field: Content: Link to content */
  $handler->display->display_options['fields']['field_link_to_content']['id'] = 'field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['table'] = 'field_data_field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['field'] = 'field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['label'] = '';
  $handler->display->display_options['fields']['field_link_to_content']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_to_content']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_link_to_content']['alter']['text'] = '<div class="flex-caption__target-group">[field_theme][field_target_audience]</div>
        <div class="flex-caption__body">[body]</div>';
  $handler->display->display_options['fields']['field_link_to_content']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_link_to_content']['alter']['path'] = '[field_link_to_content]';
  $handler->display->display_options['fields']['field_link_to_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_to_content']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link_to_content']['empty'] = '<div class="flex-caption__target-group">[field_theme][field_target_audience]</div>
        <div class="flex-caption__body">[body]</div>';
  $handler->display->display_options['fields']['field_link_to_content']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_link_to_content']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_to_content']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_link_to_content']['group_column'] = 'entity_id';
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

  /* Display: FlexSlider | KADAcalendar */
  $handler = $view->new_display('block', 'FlexSlider | KADAcalendar', 'kadacalendar');
  $handler->display->display_options['display_description'] = 'Slideshow of liftups in KADAcalendar';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'top_carousel';
  $handler->display->display_options['style_options']['captionfield'] = 'rendered_entity';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['label'] = 'Event carousel liftups';
  $handler->display->display_options['relationships']['entityqueue_relationship']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event image */
  $handler->display->display_options['fields']['field_content_image_et_1']['id'] = 'field_content_image_et_1';
  $handler->display->display_options['fields']['field_content_image_et_1']['table'] = 'field_data_field_content_image_et';
  $handler->display->display_options['fields']['field_content_image_et_1']['field'] = 'field_content_image_et';
  $handler->display->display_options['fields']['field_content_image_et_1']['label'] = '';
  $handler->display->display_options['fields']['field_content_image_et_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_et_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_image_et_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_et_1']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_content_image_et_1']['type'] = 'event_top_carousel';
  $handler->display->display_options['fields']['field_content_image_et_1']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['fields']['field_content_image_et_1']['group_column'] = 'entity_id';
  /* Field: External event image */
  $handler->display->display_options['fields']['field_content_image_ext']['id'] = 'field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext']['table'] = 'field_data_field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext']['field'] = 'field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext']['ui_name'] = 'External event image';
  $handler->display->display_options['fields']['field_content_image_ext']['label'] = '';
  $handler->display->display_options['fields']['field_content_image_ext']['element_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_ext']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_image_ext']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_ext']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_content_image_ext']['settings'] = array(
    'image_style' => 'event_top_carousel',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_content_image_ext']['group_column'] = 'entity_id';
  /* Field: Content: Main image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_main_image']['type'] = 'event_top_carousel';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['fields']['field_main_image']['group_column'] = 'entity_id';
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rendered_entity']['element_type'] = 'div';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['rendered_entity']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'event_top_carousel';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Field: Event types */
  $handler->display->display_options['fields']['field_event_types']['id'] = 'field_event_types';
  $handler->display->display_options['fields']['field_event_types']['table'] = 'field_data_field_event_types';
  $handler->display->display_options['fields']['field_event_types']['field'] = 'field_event_types';
  $handler->display->display_options['fields']['field_event_types']['label'] = '';
  $handler->display->display_options['fields']['field_event_types']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_types']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_types']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_event_types']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_event_types']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['sorts']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['sorts']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'liftup' => 'liftup',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
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
  /* Filter criterion: Content: Event date - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value2']['group'] = 2;
  $handler->display->display_options['filters']['field_event_date_value2']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';

  /* Display: FlexSlider | KADAcalendar SV */
  $handler = $view->new_display('block', 'FlexSlider | KADAcalendar SV', 'kadacalendar_sv');
  $handler->display->display_options['display_description'] = 'Slideshow of liftups in KADAcalendar';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'top_carousel';
  $handler->display->display_options['style_options']['captionfield'] = 'rendered_entity';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['label'] = 'Event carousel liftups';
  $handler->display->display_options['relationships']['entityqueue_relationship']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event image */
  $handler->display->display_options['fields']['field_content_image_et']['id'] = 'field_content_image_et';
  $handler->display->display_options['fields']['field_content_image_et']['table'] = 'field_data_field_content_image_et';
  $handler->display->display_options['fields']['field_content_image_et']['field'] = 'field_content_image_et';
  $handler->display->display_options['fields']['field_content_image_et']['label'] = '';
  $handler->display->display_options['fields']['field_content_image_et']['element_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_image_et']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_et']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_content_image_et']['type'] = 'event_top_carousel';
  $handler->display->display_options['fields']['field_content_image_et']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['fields']['field_content_image_et']['group_column'] = 'entity_id';
  /* Field: External event image */
  $handler->display->display_options['fields']['field_content_image_ext']['id'] = 'field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext']['table'] = 'field_data_field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext']['field'] = 'field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext']['ui_name'] = 'External event image';
  $handler->display->display_options['fields']['field_content_image_ext']['label'] = '';
  $handler->display->display_options['fields']['field_content_image_ext']['element_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_ext']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_image_ext']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_ext']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_content_image_ext']['settings'] = array(
    'image_style' => 'event_top_carousel',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_content_image_ext']['group_column'] = 'entity_id';
  /* Field: Content: Main image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_main_image']['type'] = 'event_top_carousel';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['fields']['field_main_image']['group_column'] = 'entity_id';
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rendered_entity']['element_type'] = 'div';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['rendered_entity']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'event_top_carousel';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Field: Event types */
  $handler->display->display_options['fields']['field_event_types']['id'] = 'field_event_types';
  $handler->display->display_options['fields']['field_event_types']['table'] = 'field_data_field_event_types';
  $handler->display->display_options['fields']['field_event_types']['field'] = 'field_event_types';
  $handler->display->display_options['fields']['field_event_types']['label'] = '';
  $handler->display->display_options['fields']['field_event_types']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_types']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_types']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_event_types']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_event_types']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['sorts']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['sorts']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'liftup' => 'liftup',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
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
  /* Filter criterion: Content: Event date - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value2']['group'] = 2;
  $handler->display->display_options['filters']['field_event_date_value2']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';

  /* Display: FlexSlider | KADAcalendar EN */
  $handler = $view->new_display('block', 'FlexSlider | KADAcalendar EN', 'kadacalendar_en');
  $handler->display->display_options['display_description'] = 'Slideshow of liftups in KADAcalendar';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'top_carousel';
  $handler->display->display_options['style_options']['captionfield'] = 'rendered_entity';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['label'] = 'Event carousel liftups';
  $handler->display->display_options['relationships']['entityqueue_relationship']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event image */
  $handler->display->display_options['fields']['field_content_image_et']['id'] = 'field_content_image_et';
  $handler->display->display_options['fields']['field_content_image_et']['table'] = 'field_data_field_content_image_et';
  $handler->display->display_options['fields']['field_content_image_et']['field'] = 'field_content_image_et';
  $handler->display->display_options['fields']['field_content_image_et']['label'] = '';
  $handler->display->display_options['fields']['field_content_image_et']['element_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_image_et']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_et']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_content_image_et']['type'] = 'event_top_carousel';
  $handler->display->display_options['fields']['field_content_image_et']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['fields']['field_content_image_et']['group_column'] = 'entity_id';
  /* Field: External event image */
  $handler->display->display_options['fields']['field_content_image_ext']['id'] = 'field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext']['table'] = 'field_data_field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext']['field'] = 'field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext']['ui_name'] = 'External event image';
  $handler->display->display_options['fields']['field_content_image_ext']['label'] = '';
  $handler->display->display_options['fields']['field_content_image_ext']['element_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_ext']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_image_ext']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_ext']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_content_image_ext']['settings'] = array(
    'image_style' => 'event_top_carousel',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_content_image_ext']['group_column'] = 'entity_id';
  /* Field: Content: Main image */
  $handler->display->display_options['fields']['field_main_image_1']['id'] = 'field_main_image_1';
  $handler->display->display_options['fields']['field_main_image_1']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image_1']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_main_image_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_main_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_main_image_1']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_main_image_1']['type'] = 'event_top_carousel';
  $handler->display->display_options['fields']['field_main_image_1']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['fields']['field_main_image_1']['group_column'] = 'entity_id';
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rendered_entity']['element_type'] = 'div';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['rendered_entity']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'event_top_carousel';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Field: Event types */
  $handler->display->display_options['fields']['field_event_types']['id'] = 'field_event_types';
  $handler->display->display_options['fields']['field_event_types']['table'] = 'field_data_field_event_types';
  $handler->display->display_options['fields']['field_event_types']['field'] = 'field_event_types';
  $handler->display->display_options['fields']['field_event_types']['label'] = '';
  $handler->display->display_options['fields']['field_event_types']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_types']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_types']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_event_types']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_event_types']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['sorts']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['sorts']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'liftup' => 'liftup',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
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
  /* Filter criterion: Content: Event date - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value2']['group'] = 2;
  $handler->display->display_options['filters']['field_event_date_value2']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';

  /* Display: FlexSlider | KADAcalendar RU */
  $handler = $view->new_display('block', 'FlexSlider | KADAcalendar RU', 'kadacalendar_ru');
  $handler->display->display_options['display_description'] = 'Slideshow of liftups in KADAcalendar';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'top_carousel';
  $handler->display->display_options['style_options']['captionfield'] = 'rendered_entity';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['label'] = 'Event carousel liftups';
  $handler->display->display_options['relationships']['entityqueue_relationship']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event image */
  $handler->display->display_options['fields']['field_content_image_et']['id'] = 'field_content_image_et';
  $handler->display->display_options['fields']['field_content_image_et']['table'] = 'field_data_field_content_image_et';
  $handler->display->display_options['fields']['field_content_image_et']['field'] = 'field_content_image_et';
  $handler->display->display_options['fields']['field_content_image_et']['label'] = '';
  $handler->display->display_options['fields']['field_content_image_et']['element_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_image_et']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_et']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_content_image_et']['type'] = 'event_top_carousel';
  $handler->display->display_options['fields']['field_content_image_et']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['fields']['field_content_image_et']['group_column'] = 'entity_id';
  /* Field: External event image */
  $handler->display->display_options['fields']['field_content_image_ext']['id'] = 'field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext']['table'] = 'field_data_field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext']['field'] = 'field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext']['ui_name'] = 'External event image';
  $handler->display->display_options['fields']['field_content_image_ext']['label'] = '';
  $handler->display->display_options['fields']['field_content_image_ext']['element_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_ext']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_image_ext']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_ext']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_content_image_ext']['settings'] = array(
    'image_style' => 'event_top_carousel',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_content_image_ext']['group_column'] = 'entity_id';
  /* Field: Content: Main image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_main_image']['type'] = 'event_top_carousel';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['fields']['field_main_image']['group_column'] = 'entity_id';
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rendered_entity']['element_type'] = 'div';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['rendered_entity']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'event_top_carousel';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Field: Event types */
  $handler->display->display_options['fields']['field_event_types']['id'] = 'field_event_types';
  $handler->display->display_options['fields']['field_event_types']['table'] = 'field_data_field_event_types';
  $handler->display->display_options['fields']['field_event_types']['field'] = 'field_event_types';
  $handler->display->display_options['fields']['field_event_types']['label'] = '';
  $handler->display->display_options['fields']['field_event_types']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_types']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_types']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_event_types']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_event_types']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['sorts']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['sorts']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'liftup' => 'liftup',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
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
  /* Filter criterion: Content: Event date - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value2']['group'] = 2;
  $handler->display->display_options['filters']['field_event_date_value2']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';

  /* Display: FlexSlider | Section | KADAcalendar - Hobbies front */
  $handler = $view->new_display('block', 'FlexSlider | Section | KADAcalendar - Hobbies front', 'section_kadacalendar_hobbies_front');
  $handler->display->display_options['display_description'] = 'Slideshow of liftups for KADAcalendar Hobbies frontpage.';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Hobbies frontpage atom';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: carousel */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'carousel';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Main image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_main_image']['type'] = 'carousel';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['fields']['field_main_image']['group_column'] = 'entity_id';
  /* Field: Content: Link to content */
  $handler->display->display_options['fields']['field_link_to_content']['id'] = 'field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['table'] = 'field_data_field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['field'] = 'field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['label'] = '';
  $handler->display->display_options['fields']['field_link_to_content']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_to_content']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_link_to_content']['alter']['text'] = '<h3 class="flex-caption__title">[field_link_to_content]</h3>';
  $handler->display->display_options['fields']['field_link_to_content']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_link_to_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_to_content']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_link_to_content']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link_to_content']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_link_to_content']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_to_content']['group_column'] = 'entity_id';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[field_link_to_content]
<div class="flex-caption__body">[body]</div>';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['empty'] = '[field_link_to_content]';
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['group_column'] = 'entity_id';
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

  /* Display: FlexSlider | KADAcalendar Hobby */
  $handler = $view->new_display('block', 'FlexSlider | KADAcalendar Hobby', 'kadacalendar_hobby');
  $handler->display->display_options['display_description'] = 'Slideshow of liftups in KADAcalendar';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'top_carousel';
  $handler->display->display_options['style_options']['captionfield'] = 'rendered_entity';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['label'] = 'Event carousel liftups';
  $handler->display->display_options['relationships']['entityqueue_relationship']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event image */
  $handler->display->display_options['fields']['field_content_image_et']['id'] = 'field_content_image_et';
  $handler->display->display_options['fields']['field_content_image_et']['table'] = 'field_data_field_content_image_et';
  $handler->display->display_options['fields']['field_content_image_et']['field'] = 'field_content_image_et';
  $handler->display->display_options['fields']['field_content_image_et']['label'] = '';
  $handler->display->display_options['fields']['field_content_image_et']['element_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_image_et']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_et']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_content_image_et']['type'] = 'event_top_carousel';
  $handler->display->display_options['fields']['field_content_image_et']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['fields']['field_content_image_et']['group_column'] = 'entity_id';
  /* Field: External event image */
  $handler->display->display_options['fields']['field_content_image_ext']['id'] = 'field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext']['table'] = 'field_data_field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext']['field'] = 'field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext']['ui_name'] = 'External event image';
  $handler->display->display_options['fields']['field_content_image_ext']['label'] = '';
  $handler->display->display_options['fields']['field_content_image_ext']['element_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_ext']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_image_ext']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_ext']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_content_image_ext']['settings'] = array(
    'image_style' => 'event_top_carousel',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_content_image_ext']['group_column'] = 'entity_id';
  /* Field: Content: Main image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_main_image']['type'] = 'event_top_carousel';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['fields']['field_main_image']['group_column'] = 'entity_id';
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rendered_entity']['element_type'] = 'div';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['rendered_entity']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'event_top_carousel';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Field: Event types */
  $handler->display->display_options['fields']['field_event_types']['id'] = 'field_event_types';
  $handler->display->display_options['fields']['field_event_types']['table'] = 'field_data_field_event_types';
  $handler->display->display_options['fields']['field_event_types']['field'] = 'field_event_types';
  $handler->display->display_options['fields']['field_event_types']['label'] = '';
  $handler->display->display_options['fields']['field_event_types']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_types']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_types']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_event_types']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_event_types']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['sorts']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['sorts']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'liftup' => 'liftup',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
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
  /* Filter criterion: Content: Event date - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value2']['group'] = 2;
  $handler->display->display_options['filters']['field_event_date_value2']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';

  /* Display: FlexSlider | KADAcalendar Hobby EN */
  $handler = $view->new_display('block', 'FlexSlider | KADAcalendar Hobby EN', 'kadacalendar_hobby_en');
  $handler->display->display_options['display_description'] = 'Slideshow of liftups in KADAcalendar';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'top_carousel';
  $handler->display->display_options['style_options']['captionfield'] = 'rendered_entity';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['label'] = 'Event carousel liftups';
  $handler->display->display_options['relationships']['entityqueue_relationship']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event image */
  $handler->display->display_options['fields']['field_content_image_et']['id'] = 'field_content_image_et';
  $handler->display->display_options['fields']['field_content_image_et']['table'] = 'field_data_field_content_image_et';
  $handler->display->display_options['fields']['field_content_image_et']['field'] = 'field_content_image_et';
  $handler->display->display_options['fields']['field_content_image_et']['label'] = '';
  $handler->display->display_options['fields']['field_content_image_et']['element_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_image_et']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_et']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_content_image_et']['type'] = 'event_top_carousel';
  $handler->display->display_options['fields']['field_content_image_et']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['fields']['field_content_image_et']['group_column'] = 'entity_id';
  /* Field: External event image */
  $handler->display->display_options['fields']['field_content_image_ext']['id'] = 'field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext']['table'] = 'field_data_field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext']['field'] = 'field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext']['ui_name'] = 'External event image';
  $handler->display->display_options['fields']['field_content_image_ext']['label'] = '';
  $handler->display->display_options['fields']['field_content_image_ext']['element_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_ext']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_image_ext']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_ext']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_content_image_ext']['settings'] = array(
    'image_style' => 'event_top_carousel',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_content_image_ext']['group_column'] = 'entity_id';
  /* Field: Content: Main image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_main_image']['type'] = 'event_top_carousel';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['fields']['field_main_image']['group_column'] = 'entity_id';
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rendered_entity']['element_type'] = 'div';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['rendered_entity']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'event_top_carousel';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Field: Event types */
  $handler->display->display_options['fields']['field_event_types']['id'] = 'field_event_types';
  $handler->display->display_options['fields']['field_event_types']['table'] = 'field_data_field_event_types';
  $handler->display->display_options['fields']['field_event_types']['field'] = 'field_event_types';
  $handler->display->display_options['fields']['field_event_types']['label'] = '';
  $handler->display->display_options['fields']['field_event_types']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_types']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_types']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_event_types']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_event_types']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['sorts']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['sorts']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'liftup' => 'liftup',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
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
  /* Filter criterion: Content: Event date - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value2']['group'] = 2;
  $handler->display->display_options['filters']['field_event_date_value2']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';

  /* Display: FlexSlider | KADAcalendar Hobby SV */
  $handler = $view->new_display('block', 'FlexSlider | KADAcalendar Hobby SV', 'kadacalendar_hobby_sv');
  $handler->display->display_options['display_description'] = 'Slideshow of liftups in KADAcalendar';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'top_carousel';
  $handler->display->display_options['style_options']['captionfield'] = 'rendered_entity';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['label'] = 'Event carousel liftups';
  $handler->display->display_options['relationships']['entityqueue_relationship']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event image */
  $handler->display->display_options['fields']['field_content_image_et']['id'] = 'field_content_image_et';
  $handler->display->display_options['fields']['field_content_image_et']['table'] = 'field_data_field_content_image_et';
  $handler->display->display_options['fields']['field_content_image_et']['field'] = 'field_content_image_et';
  $handler->display->display_options['fields']['field_content_image_et']['label'] = '';
  $handler->display->display_options['fields']['field_content_image_et']['element_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_image_et']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_et']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_content_image_et']['type'] = 'event_top_carousel';
  $handler->display->display_options['fields']['field_content_image_et']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['fields']['field_content_image_et']['group_column'] = 'entity_id';
  /* Field: External event image */
  $handler->display->display_options['fields']['field_content_image_ext']['id'] = 'field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext']['table'] = 'field_data_field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext']['field'] = 'field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext']['ui_name'] = 'External event image';
  $handler->display->display_options['fields']['field_content_image_ext']['label'] = '';
  $handler->display->display_options['fields']['field_content_image_ext']['element_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_ext']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_image_ext']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_ext']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_content_image_ext']['settings'] = array(
    'image_style' => 'event_top_carousel',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_content_image_ext']['group_column'] = 'entity_id';
  /* Field: Content: Main image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_main_image']['type'] = 'event_top_carousel';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['fields']['field_main_image']['group_column'] = 'entity_id';
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rendered_entity']['element_type'] = 'div';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['rendered_entity']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'event_top_carousel';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Field: Event types */
  $handler->display->display_options['fields']['field_event_types']['id'] = 'field_event_types';
  $handler->display->display_options['fields']['field_event_types']['table'] = 'field_data_field_event_types';
  $handler->display->display_options['fields']['field_event_types']['field'] = 'field_event_types';
  $handler->display->display_options['fields']['field_event_types']['label'] = '';
  $handler->display->display_options['fields']['field_event_types']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_types']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_types']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_event_types']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_event_types']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['sorts']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['sorts']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'liftup' => 'liftup',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
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
  /* Filter criterion: Content: Event date - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value2']['group'] = 2;
  $handler->display->display_options['filters']['field_event_date_value2']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';

  /* Display: FlexSlider | KADAcalendar Hobby RU */
  $handler = $view->new_display('block', 'FlexSlider | KADAcalendar Hobby RU', 'kadacalendar_hobby_ru');
  $handler->display->display_options['display_description'] = 'Slideshow of liftups in KADAcalendar';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'top_carousel';
  $handler->display->display_options['style_options']['captionfield'] = 'rendered_entity';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['label'] = 'Event carousel liftups';
  $handler->display->display_options['relationships']['entityqueue_relationship']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event image */
  $handler->display->display_options['fields']['field_content_image_et']['id'] = 'field_content_image_et';
  $handler->display->display_options['fields']['field_content_image_et']['table'] = 'field_data_field_content_image_et';
  $handler->display->display_options['fields']['field_content_image_et']['field'] = 'field_content_image_et';
  $handler->display->display_options['fields']['field_content_image_et']['label'] = '';
  $handler->display->display_options['fields']['field_content_image_et']['element_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_image_et']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_et']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_content_image_et']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_content_image_et']['type'] = 'event_top_carousel';
  $handler->display->display_options['fields']['field_content_image_et']['settings'] = array(
    'link' => '0',
  );
  /* Field: External event image */
  $handler->display->display_options['fields']['field_content_image_ext']['id'] = 'field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext']['table'] = 'field_data_field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext']['field'] = 'field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext']['ui_name'] = 'External event image';
  $handler->display->display_options['fields']['field_content_image_ext']['label'] = '';
  $handler->display->display_options['fields']['field_content_image_ext']['element_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_ext']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_image_ext']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_content_image_ext']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_content_image_ext']['settings'] = array(
    'image_style' => 'event_top_carousel',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_content_image_ext']['group_column'] = 'entity_id';
  /* Field: Content: Main image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_main_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_main_image']['type'] = 'event_top_carousel';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'link' => '0',
  );
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rendered_entity']['element_type'] = 'div';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['rendered_entity']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'event_top_carousel';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Field: Event types */
  $handler->display->display_options['fields']['field_event_types']['id'] = 'field_event_types';
  $handler->display->display_options['fields']['field_event_types']['table'] = 'field_data_field_event_types';
  $handler->display->display_options['fields']['field_event_types']['field'] = 'field_event_types';
  $handler->display->display_options['fields']['field_event_types']['label'] = '';
  $handler->display->display_options['fields']['field_event_types']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_types']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_types']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_event_types']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_event_types']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['sorts']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['sorts']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'liftup' => 'liftup',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
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
  /* Filter criterion: Content: Event date - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value2']['group'] = 2;
  $handler->display->display_options['filters']['field_event_date_value2']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';

  /* Display: FlexSlider | promoted content */
  $handler = $view->new_display('block', 'FlexSlider | promoted content', 'block_1');
  $handler->display->display_options['display_description'] = 'Slideshow of liftups per theme';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Main image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['alter']['path'] = '[field_link_to_content]';
  $handler->display->display_options['fields']['field_main_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_main_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_main_image']['type'] = 'carousel';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['fields']['field_main_image']['group_column'] = 'sid';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['path'] = '[field_link_to_content]';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = 460;
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['group_column'] = 'entity_id';
  /* Field: Taxonomy term: Color name */
  $handler->display->display_options['fields']['field_color_name']['id'] = 'field_color_name';
  $handler->display->display_options['fields']['field_color_name']['table'] = 'field_data_field_color_name';
  $handler->display->display_options['fields']['field_color_name']['field'] = 'field_color_name';
  $handler->display->display_options['fields']['field_color_name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_color_name']['label'] = '';
  $handler->display->display_options['fields']['field_color_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_color_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_color_name']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_color_name']['group_column'] = 'entity_id';
  /* Field: Field: Target audience */
  $handler->display->display_options['fields']['field_target_audience']['id'] = 'field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['field'] = 'field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['label'] = '';
  $handler->display->display_options['fields']['field_target_audience']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_audience']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_target_audience']['alter']['text'] = '<span class="flex-caption__target-group__item">[field_target_audience]</span>';
  $handler->display->display_options['fields']['field_target_audience']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_target_audience']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Field: Content: Theme */
  $handler->display->display_options['fields']['field_theme']['id'] = 'field_theme';
  $handler->display->display_options['fields']['field_theme']['table'] = 'field_data_field_theme';
  $handler->display->display_options['fields']['field_theme']['field'] = 'field_theme';
  $handler->display->display_options['fields']['field_theme']['label'] = '';
  $handler->display->display_options['fields']['field_theme']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_theme']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_theme']['alter']['text'] = '<span class="flex-caption__target-group__item">[field_theme]</span>';
  $handler->display->display_options['fields']['field_theme']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_theme']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Field: Content: Link to content */
  $handler->display->display_options['fields']['field_link_to_content']['id'] = 'field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['table'] = 'field_data_field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['field'] = 'field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['label'] = '';
  $handler->display->display_options['fields']['field_link_to_content']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_to_content']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_link_to_content']['alter']['text'] = '<div class="flex-caption__target-group">[field_theme][field_target_audience]</div>
        <div class="flex-caption__body">[body]</div>';
  $handler->display->display_options['fields']['field_link_to_content']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_link_to_content']['alter']['path'] = '[field_link_to_content]';
  $handler->display->display_options['fields']['field_link_to_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_to_content']['empty'] = '<div class="flex-caption__target-group">[field_theme][field_target_audience]</div>
        <div class="flex-caption__body">[body]</div>';
  $handler->display->display_options['fields']['field_link_to_content']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_link_to_content']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_to_content']['type'] = 'link_absolute';
  $handler->display->display_options['fields']['field_link_to_content']['group_column'] = 'entity_id';
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
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'liftup' => 'liftup',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '1';
  $handler->display->display_options['filters']['flagged']['group'] = 1;
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

  /* Display: FlexSlider | Target audience */
  $handler = $view->new_display('block', 'FlexSlider | Target audience', 'block_2');
  $handler->display->display_options['display_description'] = 'Slideshow of liftups per target audience';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: carousel */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'carousel';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'target_audience' => 'target_audience',
    'scald_authors' => 0,
    'scald_tags' => 0,
    'accessibility' => 0,
    'district' => 0,
    'event_types' => 0,
    'keywords' => 0,
    'municipality' => 0,
    'office' => 0,
    'political_party' => 0,
    'service_classification' => 0,
    'theme' => 0,
    'trust_unit' => 0,
    'trustee_role' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Main image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_main_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_main_image']['type'] = 'carousel';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['fields']['field_main_image']['group_column'] = 'sid';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['group_column'] = 'entity_id';
  /* Field: Taxonomy term: Color name */
  $handler->display->display_options['fields']['field_color_name']['id'] = 'field_color_name';
  $handler->display->display_options['fields']['field_color_name']['table'] = 'field_data_field_color_name';
  $handler->display->display_options['fields']['field_color_name']['field'] = 'field_color_name';
  $handler->display->display_options['fields']['field_color_name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_color_name']['label'] = '';
  $handler->display->display_options['fields']['field_color_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_color_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_color_name']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_color_name']['group_column'] = 'entity_id';
  /* Field: Field: Target audience */
  $handler->display->display_options['fields']['field_target_audience']['id'] = 'field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['field'] = 'field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['label'] = '';
  $handler->display->display_options['fields']['field_target_audience']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_audience']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_target_audience']['alter']['text'] = '<span class="flex-caption__target-group__item">[field_target_audience]</span>';
  $handler->display->display_options['fields']['field_target_audience']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_target_audience']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Field: Content: Theme */
  $handler->display->display_options['fields']['field_theme']['id'] = 'field_theme';
  $handler->display->display_options['fields']['field_theme']['table'] = 'field_data_field_theme';
  $handler->display->display_options['fields']['field_theme']['field'] = 'field_theme';
  $handler->display->display_options['fields']['field_theme']['label'] = '';
  $handler->display->display_options['fields']['field_theme']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_theme']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_theme']['alter']['text'] = '<span class="flex-caption__target-group__item">[field_theme]</span>';
  $handler->display->display_options['fields']['field_theme']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_theme']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Field: Content: Link to content */
  $handler->display->display_options['fields']['field_link_to_content']['id'] = 'field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['table'] = 'field_data_field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['field'] = 'field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['label'] = '';
  $handler->display->display_options['fields']['field_link_to_content']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_to_content']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_link_to_content']['alter']['text'] = '<div class="flex-caption__target-group">[field_theme][field_target_audience]</div>
        <div class="flex-caption__body">[body]</div>';
  $handler->display->display_options['fields']['field_link_to_content']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_link_to_content']['alter']['path'] = '[field_link_to_content]';
  $handler->display->display_options['fields']['field_link_to_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_to_content']['empty'] = '<div class="flex-caption__target-group">[field_theme][field_target_audience]</div>
        <div class="flex-caption__body">[body]</div>';
  $handler->display->display_options['fields']['field_link_to_content']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_link_to_content']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_to_content']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_link_to_content']['group_column'] = 'entity_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Target audience (field_target_audience) */
  $handler->display->display_options['arguments']['field_target_audience_tid']['id'] = 'field_target_audience_tid';
  $handler->display->display_options['arguments']['field_target_audience_tid']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['arguments']['field_target_audience_tid']['field'] = 'field_target_audience_tid';
  $handler->display->display_options['arguments']['field_target_audience_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_target_audience_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_target_audience_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_target_audience_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_target_audience_tid']['default_argument_options']['vocabularies'] = array(
    'target_audience' => 'target_audience',
  );
  $handler->display->display_options['arguments']['field_target_audience_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_target_audience_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_target_audience_tid']['summary_options']['items_per_page'] = '25';
  $translatables['kada_top_carousel'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('flag'),
    t('term'),
    t('Title'),
    t('All'),
    t('FlexSlider'),
    t('Slideshow of liftups per theme'),
    t('<span class="flex-caption__target-group__item">[field_target_audience]</span>'),
    t('<span class="flex-caption__target-group__item">[field_theme]</span>'),
    t('<div class="flex-caption__target-group">[field_theme][field_target_audience]</div>
        <div class="flex-caption__body">[body]</div>'),
    t('FlexSlider | Section'),
    t('Slideshow of liftups per section'),
    t('Top Image'),
    t('OG membership from node'),
    t('FlexSlider | KADAcalendar'),
    t('Slideshow of liftups in KADAcalendar'),
    t('Event carousel liftups'),
    t('FlexSlider | KADAcalendar SV'),
    t('FlexSlider | KADAcalendar EN'),
    t('FlexSlider | KADAcalendar RU'),
    t('FlexSlider | Section | KADAcalendar - Hobbies front'),
    t('Slideshow of liftups for KADAcalendar Hobbies frontpage.'),
    t('Hobbies frontpage atom'),
    t('<h3 class="flex-caption__title">[field_link_to_content]</h3>'),
    t('[field_link_to_content]
<div class="flex-caption__body">[body]</div>'),
    t('[field_link_to_content]'),
    t('FlexSlider | KADAcalendar Hobby'),
    t('FlexSlider | KADAcalendar Hobby EN'),
    t('FlexSlider | KADAcalendar Hobby SV'),
    t('FlexSlider | KADAcalendar Hobby RU'),
    t('FlexSlider | promoted content'),
    t('FlexSlider | Target audience'),
    t('Slideshow of liftups per target audience'),
  );
  $export['kada_top_carousel'] = $view;

  return $export;
}
