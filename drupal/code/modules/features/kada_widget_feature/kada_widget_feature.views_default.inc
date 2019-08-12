<?php

/**
 * @file
 * kada_widget_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function kada_widget_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'kada_admin_widgets';
  $view->description = 'Provides admin view for widgets.';
  $view->tag = 'default';
  $view->base_table = 'eck_widget';
  $view->human_name = 'KADA Admin Widgets';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'KADA Admin Widgets';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'eck list widget event_carousel entities';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'id' => 'id',
    'view_link' => 'view_link',
    'type' => 'type',
    'name' => 'name',
    'changed' => 'changed',
    'created' => 'created',
    'language' => 'language',
    'edit_link' => 'edit_link',
    'delete_link' => 'delete_link',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
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
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'language' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Widget: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'eck_widget';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Field: Widget: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'eck_widget';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Widget: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_widget';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: Widget: Link */
  $handler->display->display_options['fields']['view_link']['id'] = 'view_link';
  $handler->display->display_options['fields']['view_link']['table'] = 'eck_widget';
  $handler->display->display_options['fields']['view_link']['field'] = 'view_link';
  $handler->display->display_options['fields']['view_link']['label'] = 'Title';
  $handler->display->display_options['fields']['view_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_link']['alter']['text'] = '[title]';
  /* Field: Widget: widget type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'eck_widget';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Type';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  /* Field: Widget: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_widget';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Widget: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_widget';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Widget: Entity language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'eck_widget';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = 'Language';
  /* Field: Widget: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'eck_widget';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  /* Field: Widget: Delete link */
  $handler->display->display_options['fields']['delete_link']['id'] = 'delete_link';
  $handler->display->display_options['fields']['delete_link']['table'] = 'eck_widget';
  $handler->display->display_options['fields']['delete_link']['field'] = 'delete_link';
  /* Sort criterion: Widget: Changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'eck_widget';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Widget: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'eck_widget';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
  );
  /* Filter criterion: Widget: widget type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_widget';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Author';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/widgets';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Widgets';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['kada_admin_widgets'] = array(
    t('Master'),
    t('KADA Admin Widgets'),
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
    t('User'),
    t('Title'),
    t('Id'),
    t('.'),
    t(','),
    t('[title]'),
    t('Type'),
    t('Author'),
    t('Changed'),
    t('Created'),
    t('Language'),
    t('Edit link'),
    t('Delete link'),
    t('Page'),
  );
  $export['kada_admin_widgets'] = $view;

  $view = new view();
  $view->name = 'kada_widget_event_carousel';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KADA Widget - Event carousel';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'top_carousel';
  $handler->display->display_options['style_options']['id'] = 'event-carousel';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Link to event search page with args, set in code */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['ui_name'] = 'Link to event search page with args, set in code';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relationship: Content: Entity translation: translations */
  $handler->display->display_options['relationships']['entity_translations']['id'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['table'] = 'node';
  $handler->display->display_options['relationships']['entity_translations']['field'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['required'] = TRUE;
  /* Field: Content: Event image */
  $handler->display->display_options['fields']['field_content_image_ext']['id'] = 'field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext']['table'] = 'field_data_field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext']['field'] = 'field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext']['label'] = '';
  $handler->display->display_options['fields']['field_content_image_ext']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_content_image_ext']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_image_ext']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_content_image_ext']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_content_image_ext']['type'] = 'picture';
  $handler->display->display_options['fields']['field_content_image_ext']['settings'] = array(
    'picture_mapping' => 'responsive_top_carousel',
    'fallback_image_style' => 'top_carousel',
    'image_link' => '',
    'colorbox_settings' => array(
      'colorbox_group' => 'responsive_content_full',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
  );
  /* Field: Content: Event image */
  $handler->display->display_options['fields']['field_content_image_et']['id'] = 'field_content_image_et';
  $handler->display->display_options['fields']['field_content_image_et']['table'] = 'field_data_field_content_image_et';
  $handler->display->display_options['fields']['field_content_image_et']['field'] = 'field_content_image_et';
  $handler->display->display_options['fields']['field_content_image_et']['label'] = '';
  $handler->display->display_options['fields']['field_content_image_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_image_et']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_content_image_et']['empty'] = '[field_content_image_ext]';
  $handler->display->display_options['fields']['field_content_image_et']['type'] = 'event_top_carousel';
  $handler->display->display_options['fields']['field_content_image_et']['settings'] = array(
    'link' => '0',
  );
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_date']['element_class'] = 'flex-caption__date';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'kada_date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title_field']['element_class'] = 'flex-caption__title';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'text_plain';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Lead paragraph */
  $handler->display->display_options['fields']['field_lead_paragraph_et']['id'] = 'field_lead_paragraph_et';
  $handler->display->display_options['fields']['field_lead_paragraph_et']['table'] = 'field_data_field_lead_paragraph_et';
  $handler->display->display_options['fields']['field_lead_paragraph_et']['field'] = 'field_lead_paragraph_et';
  $handler->display->display_options['fields']['field_lead_paragraph_et']['label'] = '';
  $handler->display->display_options['fields']['field_lead_paragraph_et']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_lead_paragraph_et']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_lead_paragraph_et']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_lead_paragraph_et']['element_class'] = 'flex-caption__leading';
  $handler->display->display_options['fields']['field_lead_paragraph_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_paragraph_et']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lead_paragraph_et']['hide_empty'] = TRUE;
  /* Field: Content: Buy event tickets link */
  $handler->display->display_options['fields']['field_event_tickets_url_et']['id'] = 'field_event_tickets_url_et';
  $handler->display->display_options['fields']['field_event_tickets_url_et']['table'] = 'field_data_field_event_tickets_url_et';
  $handler->display->display_options['fields']['field_event_tickets_url_et']['field'] = 'field_event_tickets_url_et';
  $handler->display->display_options['fields']['field_event_tickets_url_et']['label'] = '';
  $handler->display->display_options['fields']['field_event_tickets_url_et']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_tickets_url_et']['element_class'] = 'flex-caption__tickets';
  $handler->display->display_options['fields']['field_event_tickets_url_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_tickets_url_et']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_tickets_url_et']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_tickets_url_et']['click_sort_column'] = 'url';
  /* Field: Field: Event types */
  $handler->display->display_options['fields']['field_event_types']['id'] = 'field_event_types';
  $handler->display->display_options['fields']['field_event_types']['table'] = 'field_data_field_event_types';
  $handler->display->display_options['fields']['field_event_types']['field'] = 'field_event_types';
  $handler->display->display_options['fields']['field_event_types']['label'] = '';
  $handler->display->display_options['fields']['field_event_types']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_types']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_types']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_event_types']['delta_offset'] = '0';
  /* Sort criterion: Content: Event date - end date (field_event_date:value2) */
  $handler->display->display_options['sorts']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['sorts']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value2']['field'] = 'field_event_date_value2';
  /* Sort criterion: Content: Event date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  /* Contextual filter: Field: Keywords (field_keywords_et) */
  $handler->display->display_options['arguments']['field_keywords_et_tid_1']['id'] = 'field_keywords_et_tid_1';
  $handler->display->display_options['arguments']['field_keywords_et_tid_1']['table'] = 'field_data_field_keywords_et';
  $handler->display->display_options['arguments']['field_keywords_et_tid_1']['field'] = 'field_keywords_et_tid';
  $handler->display->display_options['arguments']['field_keywords_et_tid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_keywords_et_tid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_keywords_et_tid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_keywords_et_tid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_keywords_et_tid_1']['break_phrase'] = TRUE;
  /* Contextual filter: Field: Target audience (field_target_audience) */
  $handler->display->display_options['arguments']['field_target_audience_tid']['id'] = 'field_target_audience_tid';
  $handler->display->display_options['arguments']['field_target_audience_tid']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['arguments']['field_target_audience_tid']['field'] = 'field_target_audience_tid';
  $handler->display->display_options['arguments']['field_target_audience_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_target_audience_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_target_audience_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_target_audience_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_target_audience_tid']['break_phrase'] = TRUE;
  /* Contextual filter: Field: Event types (field_event_types) */
  $handler->display->display_options['arguments']['field_event_types_tid']['id'] = 'field_event_types_tid';
  $handler->display->display_options['arguments']['field_event_types_tid']['table'] = 'field_data_field_event_types';
  $handler->display->display_options['arguments']['field_event_types_tid']['field'] = 'field_event_types_tid';
  $handler->display->display_options['arguments']['field_event_types_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_event_types_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_types_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_types_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_event_types_tid']['break_phrase'] = TRUE;
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['break_phrase'] = TRUE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
    3 => 'OR',
  );
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
  $handler->display->display_options['filters']['field_date_type_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_date_type_value']['value'] = array(
    'super' => 'super',
    'sub' => 'sub',
  );
  $handler->display->display_options['filters']['field_date_type_value']['group'] = 1;
  /* Filter criterion: Entity translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'entity_translation';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'entity_translations';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Event date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 2;
  $handler->display->display_options['filters']['field_event_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_event_date_value']['year_range'] = '-0:+3';
  /* Filter criterion: Content: Event date - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value2']['group'] = 2;
  $handler->display->display_options['filters']['field_event_date_value2']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_event_date_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Event image (field_content_image_ext:fid) */
  $handler->display->display_options['filters']['field_content_image_ext_fid']['id'] = 'field_content_image_ext_fid';
  $handler->display->display_options['filters']['field_content_image_ext_fid']['table'] = 'field_data_field_content_image_ext';
  $handler->display->display_options['filters']['field_content_image_ext_fid']['field'] = 'field_content_image_ext_fid';
  $handler->display->display_options['filters']['field_content_image_ext_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_content_image_ext_fid']['group'] = 3;
  /* Filter criterion: Content: Event image (field_content_image_et:sid) */
  $handler->display->display_options['filters']['field_content_image_et_sid']['id'] = 'field_content_image_et_sid';
  $handler->display->display_options['filters']['field_content_image_et_sid']['table'] = 'field_data_field_content_image_et';
  $handler->display->display_options['filters']['field_content_image_et_sid']['field'] = 'field_content_image_et_sid';
  $handler->display->display_options['filters']['field_content_image_et_sid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_content_image_et_sid']['group'] = 3;

  /* Display: Carousel */
  $handler = $view->new_display('block', 'Carousel', 'carousel');

  /* Display: Carousel - Series data */
  $handler = $view->new_display('block', 'Carousel - Series data', 'carousel_series');
  $handler->display->display_options['display_description'] = 'Includes magic from hook_views_query_alter + hook_query_TAG_alter in widget feature module.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Relation: super event (node → node) */
  $handler->display->display_options['relationships']['relation_super_event_node']['id'] = 'relation_super_event_node';
  $handler->display->display_options['relationships']['relation_super_event_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_super_event_node']['field'] = 'relation_super_event_node';
  $handler->display->display_options['relationships']['relation_super_event_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_super_event_node']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_super_event_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_super_event_node']['entity_deduplication_right'] = 0;
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['relationship'] = 'relation_super_event_node';
  /* Relationship: Content: Entity translation: translations */
  $handler->display->display_options['relationships']['entity_translations']['id'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['table'] = 'node';
  $handler->display->display_options['relationships']['entity_translations']['field'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event image */
  $handler->display->display_options['fields']['field_content_image_ext_1']['id'] = 'field_content_image_ext_1';
  $handler->display->display_options['fields']['field_content_image_ext_1']['table'] = 'field_data_field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext_1']['field'] = 'field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext_1']['relationship'] = 'relation_super_event_node';
  $handler->display->display_options['fields']['field_content_image_ext_1']['label'] = '';
  $handler->display->display_options['fields']['field_content_image_ext_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_content_image_ext_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_image_ext_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_content_image_ext_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_content_image_ext_1']['type'] = 'picture';
  $handler->display->display_options['fields']['field_content_image_ext_1']['settings'] = array(
    'picture_mapping' => 'responsive_top_carousel',
    'fallback_image_style' => 'top_carousel',
    'image_link' => '',
    'colorbox_settings' => array(
      'colorbox_group' => 'responsive_content_full',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
  );
  /* Field: Content: Event image */
  $handler->display->display_options['fields']['field_content_image_et_1']['id'] = 'field_content_image_et_1';
  $handler->display->display_options['fields']['field_content_image_et_1']['table'] = 'field_data_field_content_image_et';
  $handler->display->display_options['fields']['field_content_image_et_1']['field'] = 'field_content_image_et';
  $handler->display->display_options['fields']['field_content_image_et_1']['relationship'] = 'relation_super_event_node';
  $handler->display->display_options['fields']['field_content_image_et_1']['label'] = '';
  $handler->display->display_options['fields']['field_content_image_et_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_content_image_et_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_image_et_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_content_image_et_1']['empty'] = '[field_content_image_ext_1]';
  $handler->display->display_options['fields']['field_content_image_et_1']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_content_image_et_1']['type'] = 'event_top_carousel';
  $handler->display->display_options['fields']['field_content_image_et_1']['settings'] = array(
    'link' => '0',
  );
  /* Field: Content: Event image */
  $handler->display->display_options['fields']['field_content_image_ext']['id'] = 'field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext']['table'] = 'field_data_field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext']['field'] = 'field_content_image_ext';
  $handler->display->display_options['fields']['field_content_image_ext']['label'] = '';
  $handler->display->display_options['fields']['field_content_image_ext']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_content_image_ext']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_image_ext']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_content_image_ext']['empty'] = '[field_content_image_et_1]';
  $handler->display->display_options['fields']['field_content_image_ext']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_content_image_ext']['type'] = 'picture';
  $handler->display->display_options['fields']['field_content_image_ext']['settings'] = array(
    'picture_mapping' => 'responsive_top_carousel',
    'fallback_image_style' => 'top_carousel',
    'image_link' => '',
    'colorbox_settings' => array(
      'colorbox_group' => 'responsive_content_full',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
  );
  /* Field: Content: Event image */
  $handler->display->display_options['fields']['field_content_image_et']['id'] = 'field_content_image_et';
  $handler->display->display_options['fields']['field_content_image_et']['table'] = 'field_data_field_content_image_et';
  $handler->display->display_options['fields']['field_content_image_et']['field'] = 'field_content_image_et';
  $handler->display->display_options['fields']['field_content_image_et']['label'] = '';
  $handler->display->display_options['fields']['field_content_image_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_image_et']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_content_image_et']['empty'] = '[field_content_image_ext]';
  $handler->display->display_options['fields']['field_content_image_et']['type'] = 'event_top_carousel';
  $handler->display->display_options['fields']['field_content_image_et']['settings'] = array(
    'link' => '0',
  );
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_date']['element_class'] = 'flex-caption__date';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'kada_date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title_field']['element_class'] = 'flex-caption__title';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'text_plain';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Lead paragraph */
  $handler->display->display_options['fields']['field_lead_paragraph_et']['id'] = 'field_lead_paragraph_et';
  $handler->display->display_options['fields']['field_lead_paragraph_et']['table'] = 'field_data_field_lead_paragraph_et';
  $handler->display->display_options['fields']['field_lead_paragraph_et']['field'] = 'field_lead_paragraph_et';
  $handler->display->display_options['fields']['field_lead_paragraph_et']['label'] = '';
  $handler->display->display_options['fields']['field_lead_paragraph_et']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_lead_paragraph_et']['element_class'] = 'flex-caption__leading';
  $handler->display->display_options['fields']['field_lead_paragraph_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_paragraph_et']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_lead_paragraph_et']['hide_empty'] = TRUE;
  /* Field: Content: Buy event tickets link */
  $handler->display->display_options['fields']['field_event_tickets_url_et']['id'] = 'field_event_tickets_url_et';
  $handler->display->display_options['fields']['field_event_tickets_url_et']['table'] = 'field_data_field_event_tickets_url_et';
  $handler->display->display_options['fields']['field_event_tickets_url_et']['field'] = 'field_event_tickets_url_et';
  $handler->display->display_options['fields']['field_event_tickets_url_et']['label'] = '';
  $handler->display->display_options['fields']['field_event_tickets_url_et']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_tickets_url_et']['element_class'] = 'flex-caption__tickets';
  $handler->display->display_options['fields']['field_event_tickets_url_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_tickets_url_et']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_tickets_url_et']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_tickets_url_et']['click_sort_column'] = 'url';
  /* Field: Field: Event types */
  $handler->display->display_options['fields']['field_event_types']['id'] = 'field_event_types';
  $handler->display->display_options['fields']['field_event_types']['table'] = 'field_data_field_event_types';
  $handler->display->display_options['fields']['field_event_types']['field'] = 'field_event_types';
  $handler->display->display_options['fields']['field_event_types']['label'] = '';
  $handler->display->display_options['fields']['field_event_types']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_types']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_types']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_event_types']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Keywords (field_keywords_et) */
  $handler->display->display_options['arguments']['field_keywords_et_tid_1']['id'] = 'field_keywords_et_tid_1';
  $handler->display->display_options['arguments']['field_keywords_et_tid_1']['table'] = 'field_data_field_keywords_et';
  $handler->display->display_options['arguments']['field_keywords_et_tid_1']['field'] = 'field_keywords_et_tid';
  $handler->display->display_options['arguments']['field_keywords_et_tid_1']['relationship'] = 'relation_super_event_node';
  $handler->display->display_options['arguments']['field_keywords_et_tid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_keywords_et_tid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_keywords_et_tid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_keywords_et_tid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_keywords_et_tid_1']['break_phrase'] = TRUE;
  /* Contextual filter: Field: Target audience (field_target_audience) */
  $handler->display->display_options['arguments']['field_target_audience_tid']['id'] = 'field_target_audience_tid';
  $handler->display->display_options['arguments']['field_target_audience_tid']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['arguments']['field_target_audience_tid']['field'] = 'field_target_audience_tid';
  $handler->display->display_options['arguments']['field_target_audience_tid']['relationship'] = 'relation_super_event_node';
  $handler->display->display_options['arguments']['field_target_audience_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_target_audience_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_target_audience_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_target_audience_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_target_audience_tid']['break_phrase'] = TRUE;
  /* Contextual filter: Field: Event types (field_event_types) */
  $handler->display->display_options['arguments']['field_event_types_tid']['id'] = 'field_event_types_tid';
  $handler->display->display_options['arguments']['field_event_types_tid']['table'] = 'field_data_field_event_types';
  $handler->display->display_options['arguments']['field_event_types_tid']['field'] = 'field_event_types_tid';
  $handler->display->display_options['arguments']['field_event_types_tid']['relationship'] = 'relation_super_event_node';
  $handler->display->display_options['arguments']['field_event_types_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_event_types_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_types_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_types_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_event_types_tid']['break_phrase'] = TRUE;
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
    3 => 'OR',
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
    'sub' => 'sub',
  );
  $handler->display->display_options['filters']['field_date_type_value']['group'] = 1;
  /* Filter criterion: Entity translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'entity_translation';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'entity_translations';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Event date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 2;
  $handler->display->display_options['filters']['field_event_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_event_date_value']['year_range'] = '-0:+3';
  /* Filter criterion: Content: Event date - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value2']['group'] = 2;
  $handler->display->display_options['filters']['field_event_date_value2']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_event_date_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Event image (field_content_image_ext:fid) */
  $handler->display->display_options['filters']['field_content_image_ext_fid']['id'] = 'field_content_image_ext_fid';
  $handler->display->display_options['filters']['field_content_image_ext_fid']['table'] = 'field_data_field_content_image_ext';
  $handler->display->display_options['filters']['field_content_image_ext_fid']['field'] = 'field_content_image_ext_fid';
  $handler->display->display_options['filters']['field_content_image_ext_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_content_image_ext_fid']['group'] = 3;
  /* Filter criterion: Content: Event image (field_content_image_et:sid) */
  $handler->display->display_options['filters']['field_content_image_et_sid']['id'] = 'field_content_image_et_sid';
  $handler->display->display_options['filters']['field_content_image_et_sid']['table'] = 'field_data_field_content_image_et';
  $handler->display->display_options['filters']['field_content_image_et_sid']['field'] = 'field_content_image_et_sid';
  $handler->display->display_options['filters']['field_content_image_et_sid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_content_image_et_sid']['group'] = 3;
  /* Filter criterion: Content: Event image (field_content_image_ext:fid) */
  $handler->display->display_options['filters']['field_content_image_ext_fid_1']['id'] = 'field_content_image_ext_fid_1';
  $handler->display->display_options['filters']['field_content_image_ext_fid_1']['table'] = 'field_data_field_content_image_ext';
  $handler->display->display_options['filters']['field_content_image_ext_fid_1']['field'] = 'field_content_image_ext_fid';
  $handler->display->display_options['filters']['field_content_image_ext_fid_1']['relationship'] = 'relation_super_event_node';
  $handler->display->display_options['filters']['field_content_image_ext_fid_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_content_image_ext_fid_1']['group'] = 3;
  /* Filter criterion: Content: Event image (field_content_image_et:sid) */
  $handler->display->display_options['filters']['field_content_image_et_sid_1']['id'] = 'field_content_image_et_sid_1';
  $handler->display->display_options['filters']['field_content_image_et_sid_1']['table'] = 'field_data_field_content_image_et';
  $handler->display->display_options['filters']['field_content_image_et_sid_1']['field'] = 'field_content_image_et_sid';
  $handler->display->display_options['filters']['field_content_image_et_sid_1']['relationship'] = 'relation_super_event_node';
  $handler->display->display_options['filters']['field_content_image_et_sid_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_content_image_et_sid_1']['group'] = 3;
  $translatables['kada_widget_event_carousel'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('OG membership from node'),
    t('Translations'),
    t('[field_content_image_ext]'),
    t('All'),
    t('Carousel'),
    t('Carousel - Series data'),
    t('Includes magic from hook_views_query_alter + hook_query_TAG_alter in widget feature module.'),
    t('super event'),
    t('[field_content_image_ext_1]'),
    t('[field_content_image_et_1]'),
  );
  $export['kada_widget_event_carousel'] = $view;

  $view = new view();
  $view->name = 'kada_widget_event_mosaic';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KADA Widget - Event mosaic';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'mosaic';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'event_mosaic_item';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'event_mosaic_item';
  /* Footer: Link to event search page with args, set in code */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['ui_name'] = 'Link to event search page with args, set in code';
  $handler->display->display_options['footer']['area']['format'] = 'wysiwyg';
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relationship: Content: Entity translation: translations */
  $handler->display->display_options['relationships']['entity_translations']['id'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['table'] = 'node';
  $handler->display->display_options['relationships']['entity_translations']['field'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Event date - end date (field_event_date:value2) */
  $handler->display->display_options['sorts']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['sorts']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value2']['field'] = 'field_event_date_value2';
  /* Sort criterion: Content: Event date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  /* Contextual filter: Field: Keywords (field_keywords_et) */
  $handler->display->display_options['arguments']['field_keywords_et_tid']['id'] = 'field_keywords_et_tid';
  $handler->display->display_options['arguments']['field_keywords_et_tid']['table'] = 'field_data_field_keywords_et';
  $handler->display->display_options['arguments']['field_keywords_et_tid']['field'] = 'field_keywords_et_tid';
  $handler->display->display_options['arguments']['field_keywords_et_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_keywords_et_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_keywords_et_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_keywords_et_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_keywords_et_tid']['break_phrase'] = TRUE;
  /* Contextual filter: Field: Target audience (field_target_audience) */
  $handler->display->display_options['arguments']['field_target_audience_tid']['id'] = 'field_target_audience_tid';
  $handler->display->display_options['arguments']['field_target_audience_tid']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['arguments']['field_target_audience_tid']['field'] = 'field_target_audience_tid';
  $handler->display->display_options['arguments']['field_target_audience_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_target_audience_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_target_audience_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_target_audience_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_target_audience_tid']['break_phrase'] = TRUE;
  /* Contextual filter: Field: Event types (field_event_types) */
  $handler->display->display_options['arguments']['field_event_types_tid']['id'] = 'field_event_types_tid';
  $handler->display->display_options['arguments']['field_event_types_tid']['table'] = 'field_data_field_event_types';
  $handler->display->display_options['arguments']['field_event_types_tid']['field'] = 'field_event_types_tid';
  $handler->display->display_options['arguments']['field_event_types_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_event_types_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_types_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_types_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_event_types_tid']['break_phrase'] = TRUE;
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['break_phrase'] = TRUE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
    3 => 'OR',
  );
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
  $handler->display->display_options['filters']['field_date_type_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_date_type_value']['value'] = array(
    'super' => 'super',
    'sub' => 'sub',
  );
  $handler->display->display_options['filters']['field_date_type_value']['group'] = 1;
  /* Filter criterion: Content: Event date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 2;
  $handler->display->display_options['filters']['field_event_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Event date - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2_1']['id'] = 'field_event_date_value2_1';
  $handler->display->display_options['filters']['field_event_date_value2_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2_1']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2_1']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value2_1']['group'] = 2;
  $handler->display->display_options['filters']['field_event_date_value2_1']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_event_date_value2_1']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_event_date_value2_1']['default_date'] = 'now';
  /* Filter criterion: Content: Event image (field_content_image_et:sid) */
  $handler->display->display_options['filters']['field_content_image_et_sid']['id'] = 'field_content_image_et_sid';
  $handler->display->display_options['filters']['field_content_image_et_sid']['table'] = 'field_data_field_content_image_et';
  $handler->display->display_options['filters']['field_content_image_et_sid']['field'] = 'field_content_image_et_sid';
  $handler->display->display_options['filters']['field_content_image_et_sid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_content_image_et_sid']['group'] = 3;
  /* Filter criterion: Content: Event image (field_content_image_ext:fid) */
  $handler->display->display_options['filters']['field_content_image_ext_fid']['id'] = 'field_content_image_ext_fid';
  $handler->display->display_options['filters']['field_content_image_ext_fid']['table'] = 'field_data_field_content_image_ext';
  $handler->display->display_options['filters']['field_content_image_ext_fid']['field'] = 'field_content_image_ext_fid';
  $handler->display->display_options['filters']['field_content_image_ext_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_content_image_ext_fid']['group'] = 3;
  /* Filter criterion: Content: Title (title_field:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Mosaic */
  $handler = $view->new_display('block', 'Mosaic', 'mosaic');

  /* Display: Mosaic - Series data */
  $handler = $view->new_display('block', 'Mosaic - Series data', 'mosaic_series');
  $handler->display->display_options['display_description'] = 'Includes magic from hook_views_query_alter + hook_query_TAG_alter in widget feature module.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Relation: super event (node → node) */
  $handler->display->display_options['relationships']['relation_super_event_node']['id'] = 'relation_super_event_node';
  $handler->display->display_options['relationships']['relation_super_event_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_super_event_node']['field'] = 'relation_super_event_node';
  $handler->display->display_options['relationships']['relation_super_event_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_super_event_node']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_super_event_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_super_event_node']['entity_deduplication_right'] = 0;
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['relationship'] = 'relation_super_event_node';
  /* Relationship: Content: Entity translation: translations */
  $handler->display->display_options['relationships']['entity_translations']['id'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['table'] = 'node';
  $handler->display->display_options['relationships']['entity_translations']['field'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Keywords (field_keywords_et) */
  $handler->display->display_options['arguments']['field_keywords_et_tid']['id'] = 'field_keywords_et_tid';
  $handler->display->display_options['arguments']['field_keywords_et_tid']['table'] = 'field_data_field_keywords_et';
  $handler->display->display_options['arguments']['field_keywords_et_tid']['field'] = 'field_keywords_et_tid';
  $handler->display->display_options['arguments']['field_keywords_et_tid']['relationship'] = 'relation_super_event_node';
  $handler->display->display_options['arguments']['field_keywords_et_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_keywords_et_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_keywords_et_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_keywords_et_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_keywords_et_tid']['break_phrase'] = TRUE;
  /* Contextual filter: Field: Target audience (field_target_audience) */
  $handler->display->display_options['arguments']['field_target_audience_tid']['id'] = 'field_target_audience_tid';
  $handler->display->display_options['arguments']['field_target_audience_tid']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['arguments']['field_target_audience_tid']['field'] = 'field_target_audience_tid';
  $handler->display->display_options['arguments']['field_target_audience_tid']['relationship'] = 'relation_super_event_node';
  $handler->display->display_options['arguments']['field_target_audience_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_target_audience_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_target_audience_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_target_audience_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_target_audience_tid']['break_phrase'] = TRUE;
  /* Contextual filter: Field: Event types (field_event_types) */
  $handler->display->display_options['arguments']['field_event_types_tid']['id'] = 'field_event_types_tid';
  $handler->display->display_options['arguments']['field_event_types_tid']['table'] = 'field_data_field_event_types';
  $handler->display->display_options['arguments']['field_event_types_tid']['field'] = 'field_event_types_tid';
  $handler->display->display_options['arguments']['field_event_types_tid']['relationship'] = 'relation_super_event_node';
  $handler->display->display_options['arguments']['field_event_types_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_event_types_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_types_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_types_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_event_types_tid']['break_phrase'] = TRUE;
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
    3 => 'OR',
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
    'sub' => 'sub',
  );
  $handler->display->display_options['filters']['field_date_type_value']['group'] = 1;
  /* Filter criterion: Content: Title (title_field:language) */
  $handler->display->display_options['filters']['language_1']['id'] = 'language_1';
  $handler->display->display_options['filters']['language_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['language_1']['field'] = 'language';
  $handler->display->display_options['filters']['language_1']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language_1']['group'] = 1;
  /* Filter criterion: Content: Event date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 2;
  $handler->display->display_options['filters']['field_event_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Event date - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2_1']['id'] = 'field_event_date_value2_1';
  $handler->display->display_options['filters']['field_event_date_value2_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2_1']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2_1']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value2_1']['group'] = 2;
  $handler->display->display_options['filters']['field_event_date_value2_1']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_event_date_value2_1']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_event_date_value2_1']['default_date'] = 'now';
  /* Filter criterion: Content: Event image (field_content_image_et:sid) */
  $handler->display->display_options['filters']['field_content_image_et_sid']['id'] = 'field_content_image_et_sid';
  $handler->display->display_options['filters']['field_content_image_et_sid']['table'] = 'field_data_field_content_image_et';
  $handler->display->display_options['filters']['field_content_image_et_sid']['field'] = 'field_content_image_et_sid';
  $handler->display->display_options['filters']['field_content_image_et_sid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_content_image_et_sid']['group'] = 3;
  /* Filter criterion: Content: Event image (field_content_image_ext:fid) */
  $handler->display->display_options['filters']['field_content_image_ext_fid']['id'] = 'field_content_image_ext_fid';
  $handler->display->display_options['filters']['field_content_image_ext_fid']['table'] = 'field_data_field_content_image_ext';
  $handler->display->display_options['filters']['field_content_image_ext_fid']['field'] = 'field_content_image_ext_fid';
  $handler->display->display_options['filters']['field_content_image_ext_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_content_image_ext_fid']['group'] = 3;
  /* Filter criterion: Content: Event image (field_content_image_et:sid) */
  $handler->display->display_options['filters']['field_content_image_et_sid_1']['id'] = 'field_content_image_et_sid_1';
  $handler->display->display_options['filters']['field_content_image_et_sid_1']['table'] = 'field_data_field_content_image_et';
  $handler->display->display_options['filters']['field_content_image_et_sid_1']['field'] = 'field_content_image_et_sid';
  $handler->display->display_options['filters']['field_content_image_et_sid_1']['relationship'] = 'relation_super_event_node';
  $handler->display->display_options['filters']['field_content_image_et_sid_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_content_image_et_sid_1']['group'] = 3;
  /* Filter criterion: Content: Event image (field_content_image_ext:fid) */
  $handler->display->display_options['filters']['field_content_image_ext_fid_1']['id'] = 'field_content_image_ext_fid_1';
  $handler->display->display_options['filters']['field_content_image_ext_fid_1']['table'] = 'field_data_field_content_image_ext';
  $handler->display->display_options['filters']['field_content_image_ext_fid_1']['field'] = 'field_content_image_ext_fid';
  $handler->display->display_options['filters']['field_content_image_ext_fid_1']['relationship'] = 'relation_super_event_node';
  $handler->display->display_options['filters']['field_content_image_ext_fid_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_content_image_ext_fid_1']['group'] = 3;
  $translatables['kada_widget_event_mosaic'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('OG membership from node'),
    t('Translations'),
    t('All'),
    t('Mosaic'),
    t('Mosaic - Series data'),
    t('Includes magic from hook_views_query_alter + hook_query_TAG_alter in widget feature module.'),
    t('super event'),
  );
  $export['kada_widget_event_mosaic'] = $view;

  $view = new view();
  $view->name = 'kada_widget_misc_event_calendar';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KADA Widget Misc - Event calendar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relationship: Content: Entity translation: translations */
  $handler->display->display_options['relationships']['entity_translations']['id'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['table'] = 'node';
  $handler->display->display_options['relationships']['entity_translations']['field'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['required'] = TRUE;
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'kada_date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Title (hidden, used for debugging) */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['ui_name'] = 'Title (hidden, used for debugging)';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Edit link (hidden, used for debugging) */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['ui_name'] = 'Edit link (hidden, used for debugging)';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  /* Contextual filter: Field: Keywords (field_keywords_et) */
  $handler->display->display_options['arguments']['field_keywords_et_tid_1']['id'] = 'field_keywords_et_tid_1';
  $handler->display->display_options['arguments']['field_keywords_et_tid_1']['table'] = 'field_data_field_keywords_et';
  $handler->display->display_options['arguments']['field_keywords_et_tid_1']['field'] = 'field_keywords_et_tid';
  $handler->display->display_options['arguments']['field_keywords_et_tid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_keywords_et_tid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_keywords_et_tid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_keywords_et_tid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_keywords_et_tid_1']['break_phrase'] = TRUE;
  /* Contextual filter: Field: Target audience (field_target_audience) */
  $handler->display->display_options['arguments']['field_target_audience_tid']['id'] = 'field_target_audience_tid';
  $handler->display->display_options['arguments']['field_target_audience_tid']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['arguments']['field_target_audience_tid']['field'] = 'field_target_audience_tid';
  $handler->display->display_options['arguments']['field_target_audience_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_target_audience_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_target_audience_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_target_audience_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_target_audience_tid']['break_phrase'] = TRUE;
  /* Contextual filter: Field: Event types (field_event_types) */
  $handler->display->display_options['arguments']['field_event_types_tid']['id'] = 'field_event_types_tid';
  $handler->display->display_options['arguments']['field_event_types_tid']['table'] = 'field_data_field_event_types';
  $handler->display->display_options['arguments']['field_event_types_tid']['field'] = 'field_event_types_tid';
  $handler->display->display_options['arguments']['field_event_types_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_event_types_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_types_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_types_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_event_types_tid']['break_phrase'] = TRUE;
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['break_phrase'] = TRUE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
  /* Filter criterion: Content: Title (title_field:language) */
  $handler->display->display_options['filters']['language_1']['id'] = 'language_1';
  $handler->display->display_options['filters']['language_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['language_1']['field'] = 'language';
  $handler->display->display_options['filters']['language_1']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language_1']['group'] = 1;
  /* Filter criterion: Content: Event type (field_date_type) */
  $handler->display->display_options['filters']['field_date_type_value']['id'] = 'field_date_type_value';
  $handler->display->display_options['filters']['field_date_type_value']['table'] = 'field_data_field_date_type';
  $handler->display->display_options['filters']['field_date_type_value']['field'] = 'field_date_type_value';
  $handler->display->display_options['filters']['field_date_type_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_date_type_value']['value'] = array(
    'super' => 'super',
  );
  $handler->display->display_options['filters']['field_date_type_value']['group'] = 1;
  /* Filter criterion: Content: Event date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 2;
  $handler->display->display_options['filters']['field_event_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'today';
  $handler->display->display_options['filters']['field_event_date_value']['year_range'] = '-0:+3';
  /* Filter criterion: Content: Event date - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value2']['group'] = 2;
  $handler->display->display_options['filters']['field_event_date_value2']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_event_date_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';

  /* Display: Calendar */
  $handler = $view->new_display('block', 'Calendar', 'calendar');
  $translatables['kada_widget_misc_event_calendar'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('OG membership from node'),
    t('Translations'),
    t('Title'),
    t('Edit link'),
    t('All'),
    t('Calendar'),
  );
  $export['kada_widget_misc_event_calendar'] = $view;

  return $export;
}
