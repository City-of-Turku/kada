<?php
/**
 * @file
 * tkufi_export_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tkufi_export_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'driveturku_feeds';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'DriveTurku Feeds';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Title overridden in code';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
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
      'news_item' => 'news_item',
      'blog' => 0,
      'blog_post' => 0,
      'event' => 0,
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
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'There is no content in this group.';
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relationship: Content: Main image (field_main_image:sid) */
  $handler->display->display_options['relationships']['field_main_image_sid']['id'] = 'field_main_image_sid';
  $handler->display->display_options['relationships']['field_main_image_sid']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['relationships']['field_main_image_sid']['field'] = 'field_main_image_sid';
  $handler->display->display_options['relationships']['field_main_image_sid']['label'] = 'image';
  /* Relationship: Content: Content image (field_content_image:sid) */
  $handler->display->display_options['relationships']['field_content_image_sid']['id'] = 'field_content_image_sid';
  $handler->display->display_options['relationships']['field_content_image_sid']['table'] = 'field_data_field_content_image';
  $handler->display->display_options['relationships']['field_content_image_sid']['field'] = 'field_content_image_sid';
  $handler->display->display_options['relationships']['field_content_image_sid']['label'] = 'news_image';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Link to content */
  $handler->display->display_options['fields']['field_link_to_content_1']['id'] = 'field_link_to_content_1';
  $handler->display->display_options['fields']['field_link_to_content_1']['table'] = 'field_data_field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content_1']['field'] = 'field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content_1']['label'] = '';
  $handler->display->display_options['fields']['field_link_to_content_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_to_content_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_to_content_1']['empty'] = '[title]';
  $handler->display->display_options['fields']['field_link_to_content_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_to_content_1']['type'] = 'link_title_plain';
  /* Field: Content: Visible title */
  $handler->display->display_options['fields']['field_visible_title']['id'] = 'field_visible_title';
  $handler->display->display_options['fields']['field_visible_title']['table'] = 'field_data_field_visible_title';
  $handler->display->display_options['fields']['field_visible_title']['field'] = 'field_visible_title';
  $handler->display->display_options['fields']['field_visible_title']['label'] = '';
  $handler->display->display_options['fields']['field_visible_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visible_title']['empty'] = '[field_link_to_content_1]';
  $handler->display->display_options['fields']['field_visible_title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Lead paragraph */
  $handler->display->display_options['fields']['field_lead_paragraph_long_text']['id'] = 'field_lead_paragraph_long_text';
  $handler->display->display_options['fields']['field_lead_paragraph_long_text']['table'] = 'field_data_field_lead_paragraph_long_text';
  $handler->display->display_options['fields']['field_lead_paragraph_long_text']['field'] = 'field_lead_paragraph_long_text';
  $handler->display->display_options['fields']['field_lead_paragraph_long_text']['label'] = '';
  $handler->display->display_options['fields']['field_lead_paragraph_long_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lead_paragraph_long_text']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[field_lead_paragraph_long_text]
[body]';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'tkufi_rss_time';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: COMBINED IN CODE Liftup image */
  $handler->display->display_options['fields']['scald_thumbnail']['id'] = 'scald_thumbnail';
  $handler->display->display_options['fields']['scald_thumbnail']['table'] = 'field_data_scald_thumbnail';
  $handler->display->display_options['fields']['scald_thumbnail']['field'] = 'scald_thumbnail';
  $handler->display->display_options['fields']['scald_thumbnail']['relationship'] = 'field_main_image_sid';
  $handler->display->display_options['fields']['scald_thumbnail']['ui_name'] = 'COMBINED IN CODE Liftup image';
  $handler->display->display_options['fields']['scald_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['scald_thumbnail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['scald_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['scald_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['scald_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['scald_thumbnail']['type'] = 'enclosure';
  $handler->display->display_options['fields']['scald_thumbnail']['settings'] = array(
    'image_style' => 'content_half',
  );
  /* Field: COMBINED IN CODE News image */
  $handler->display->display_options['fields']['scald_thumbnail_1']['id'] = 'scald_thumbnail_1';
  $handler->display->display_options['fields']['scald_thumbnail_1']['table'] = 'field_data_scald_thumbnail';
  $handler->display->display_options['fields']['scald_thumbnail_1']['field'] = 'scald_thumbnail';
  $handler->display->display_options['fields']['scald_thumbnail_1']['relationship'] = 'field_content_image_sid';
  $handler->display->display_options['fields']['scald_thumbnail_1']['ui_name'] = 'COMBINED IN CODE News image';
  $handler->display->display_options['fields']['scald_thumbnail_1']['label'] = '';
  $handler->display->display_options['fields']['scald_thumbnail_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['scald_thumbnail_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['scald_thumbnail_1']['empty'] = '[scald_thumbnail]';
  $handler->display->display_options['fields']['scald_thumbnail_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['scald_thumbnail_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['scald_thumbnail_1']['type'] = 'enclosure';
  $handler->display->display_options['fields']['scald_thumbnail_1']['settings'] = array(
    'image_style' => 'content_half',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Link to content */
  $handler->display->display_options['fields']['field_link_to_content']['id'] = 'field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['table'] = 'field_data_field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['field'] = 'field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['label'] = '';
  $handler->display->display_options['fields']['field_link_to_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_to_content']['empty'] = '[path]';
  $handler->display->display_options['fields']['field_link_to_content']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_link_to_content']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_to_content']['type'] = 'link_absolute';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: OG membership: Group_type */
  $handler->display->display_options['filters']['group_type']['id'] = 'group_type';
  $handler->display->display_options['filters']['group_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['group_type']['field'] = 'group_type';
  $handler->display->display_options['filters']['group_type']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['group_type']['value'] = array(
    'node' => 'node',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'liftup' => 'liftup',
    'news_item' => 'news_item',
  );

  /* Display: Section RSS Full */
  $handler = $view->new_display('feed', 'Section RSS Full', 'section_rss_full');
  $handler->display->display_options['display_description'] = 'Includes full length articles';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => '',
        'language' => '',
        'category' => '',
        'image' => '',
        'copyright' => '',
        'managingEditor' => '',
        'webMaster' => '',
        'generator' => '',
        'docs' => '',
        'cloud' => '',
        'ttl' => '',
        'skipHours' => '',
        'skipDays' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['item'] = array(
    'core' => array(
      'views_rss_core' => array(
        'title' => 'field_visible_title',
        'link' => 'field_link_to_content',
        'description' => 'body',
        'author' => '',
        'category' => '',
        'comments' => '',
        'enclosure' => 'scald_thumbnail',
        'guid' => 'nid',
        'pubDate' => 'created',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
  $handler->display->display_options['path'] = 'section/%/full/rss.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
  );

  /* Display: Section RSS */
  $handler = $view->new_display('feed', 'Section RSS', 'section_rss');
  $handler->display->display_options['display_description'] = 'Includes article teasers';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => '',
        'language' => '',
        'category' => '',
        'image' => '',
        'copyright' => '',
        'managingEditor' => '',
        'webMaster' => '',
        'generator' => '',
        'docs' => '',
        'cloud' => '',
        'ttl' => '',
        'skipHours' => '',
        'skipDays' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['item'] = array(
    'core' => array(
      'views_rss_core' => array(
        'title' => 'field_visible_title',
        'link' => 'field_link_to_content',
        'description' => 'body',
        'author' => '',
        'category' => '',
        'comments' => '',
        'enclosure' => 'scald_thumbnail',
        'guid' => 'nid',
        'pubDate' => 'created',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
  $handler->display->display_options['path'] = 'section/%/rss.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
  );

  /* Display: Term RSS */
  $handler = $view->new_display('feed', 'Term RSS', 'term_rss');
  $handler->display->display_options['display_description'] = 'Includes article teasers';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => '',
        'language' => '',
        'category' => '',
        'image' => '',
        'copyright' => '',
        'managingEditor' => '',
        'webMaster' => '',
        'generator' => '',
        'docs' => '',
        'cloud' => '',
        'ttl' => '',
        'skipHours' => '',
        'skipDays' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['item'] = array(
    'core' => array(
      'views_rss_core' => array(
        'title' => 'field_visible_title',
        'link' => 'field_link_to_content',
        'description' => 'body',
        'author' => '',
        'category' => '',
        'comments' => '',
        'enclosure' => 'scald_thumbnail',
        'guid' => 'nid',
        'pubDate' => 'created',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Main image (field_main_image:sid) */
  $handler->display->display_options['relationships']['field_main_image_sid']['id'] = 'field_main_image_sid';
  $handler->display->display_options['relationships']['field_main_image_sid']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['relationships']['field_main_image_sid']['field'] = 'field_main_image_sid';
  $handler->display->display_options['relationships']['field_main_image_sid']['label'] = 'image';
  /* Relationship: Content: Content image (field_content_image:sid) */
  $handler->display->display_options['relationships']['field_content_image_sid']['id'] = 'field_content_image_sid';
  $handler->display->display_options['relationships']['field_content_image_sid']['table'] = 'field_data_field_content_image';
  $handler->display->display_options['relationships']['field_content_image_sid']['field'] = 'field_content_image_sid';
  $handler->display->display_options['relationships']['field_content_image_sid']['label'] = 'news_image';
  /* Relationship: Flags: current */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'current';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'current';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'district' => 'district',
    'target_audience' => 'target_audience',
    'theme' => 'theme',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
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
  $handler->display->display_options['path'] = 'term/%/rss.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
  );

  /* Display: News RSS */
  $handler = $view->new_display('feed', 'News RSS', 'news_rss');
  $handler->display->display_options['display_description'] = 'Includes article teasers';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => '',
        'language' => '',
        'category' => '',
        'image' => '',
        'copyright' => '',
        'managingEditor' => '',
        'webMaster' => '',
        'generator' => '',
        'docs' => '',
        'cloud' => '',
        'ttl' => '',
        'skipHours' => '',
        'skipDays' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['item'] = array(
    'core' => array(
      'views_rss_core' => array(
        'title' => 'field_visible_title',
        'link' => 'field_link_to_content',
        'description' => 'body',
        'author' => '',
        'category' => '',
        'comments' => '',
        'enclosure' => 'scald_thumbnail',
        'guid' => 'nid',
        'pubDate' => 'created',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Main image (field_main_image:sid) */
  $handler->display->display_options['relationships']['field_main_image_sid']['id'] = 'field_main_image_sid';
  $handler->display->display_options['relationships']['field_main_image_sid']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['relationships']['field_main_image_sid']['field'] = 'field_main_image_sid';
  $handler->display->display_options['relationships']['field_main_image_sid']['label'] = 'image';
  /* Relationship: Content: Content image (field_content_image:sid) */
  $handler->display->display_options['relationships']['field_content_image_sid']['id'] = 'field_content_image_sid';
  $handler->display->display_options['relationships']['field_content_image_sid']['table'] = 'field_data_field_content_image';
  $handler->display->display_options['relationships']['field_content_image_sid']['field'] = 'field_content_image_sid';
  $handler->display->display_options['relationships']['field_content_image_sid']['label'] = 'news_image';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_item' => 'news_item',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['path'] = 'news/rss.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
  );
  $translatables['driveturku_feeds'] = array(
    t('Defaults'),
    t('Title overridden in code'),
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
    t('There is no content in this group.'),
    t('OG membership from node'),
    t('image'),
    t('news_image'),
    t('[title]'),
    t('[field_link_to_content_1]'),
    t('[field_lead_paragraph_long_text]
[body]'),
    t('[scald_thumbnail]'),
    t('[path]'),
    t('All'),
    t('Section RSS Full'),
    t('Includes full length articles'),
    t('Section RSS'),
    t('Includes article teasers'),
    t('Term RSS'),
    t('current'),
    t('News RSS'),
  );
  $export['driveturku_feeds'] = $view;

  return $export;
}
