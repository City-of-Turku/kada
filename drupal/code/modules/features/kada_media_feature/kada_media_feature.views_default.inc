<?php

/**
 * @file
 * kada_media_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function kada_media_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'kada_scald_atoms';
  $view->description = 'Atoms listing view provided by Scald to access atoms.';
  $view->tag = '';
  $view->base_table = 'scald_atoms';
  $view->human_name = 'kada_scald_atoms';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Atoms Library';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'fetch any atom';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_title_text' => 'field_title_text',
    'title' => 'title',
    'name' => 'name',
    'type' => 'type',
    'representation' => 'representation',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_title_text' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'representation' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'text';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'No atom found.';
  $handler->display->display_options['empty']['text']['format'] = 'plain_text';
  /* Relationship: Atom: Publisher */
  $handler->display->display_options['relationships']['publisher']['id'] = 'publisher';
  $handler->display->display_options['relationships']['publisher']['table'] = 'scald_atoms';
  $handler->display->display_options['relationships']['publisher']['field'] = 'publisher';
  $handler->display->display_options['relationships']['publisher']['label'] = 'Publisher';
  /* Field: Atoms: Title text */
  $handler->display->display_options['fields']['field_title_text']['id'] = 'field_title_text';
  $handler->display->display_options['fields']['field_title_text']['table'] = 'field_data_field_title_text';
  $handler->display->display_options['fields']['field_title_text']['field'] = 'field_title_text';
  /* Field: Atom: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'File name / source';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'publisher';
  $handler->display->display_options['fields']['name']['label'] = 'Publisher';
  /* Field: Atom: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Atoms: Thumbnail */
  $handler->display->display_options['fields']['scald_thumbnail']['id'] = 'scald_thumbnail';
  $handler->display->display_options['fields']['scald_thumbnail']['table'] = 'field_data_scald_thumbnail';
  $handler->display->display_options['fields']['scald_thumbnail']['field'] = 'scald_thumbnail';
  $handler->display->display_options['fields']['scald_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['scald_thumbnail']['settings'] = array(
    'image_style' => 'large',
    'image_link' => 'file',
  );
  /* Field: Atom: Actions */
  $handler->display->display_options['fields']['actions']['id'] = 'actions';
  $handler->display->display_options['fields']['actions']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['actions']['field'] = 'actions';
  $handler->display->display_options['fields']['actions']['end_user_links'] = 1;
  /* Sort criterion: Atom: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'scald_atoms';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Atoms: Title text (field_title_text) */
  $handler->display->display_options['filters']['field_title_text_value']['id'] = 'field_title_text_value';
  $handler->display->display_options['filters']['field_title_text_value']['table'] = 'field_data_field_title_text';
  $handler->display->display_options['filters']['field_title_text_value']['field'] = 'field_title_text_value';
  $handler->display->display_options['filters']['field_title_text_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_title_text_value']['group'] = 1;
  $handler->display->display_options['filters']['field_title_text_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_title_text_value']['expose']['operator_id'] = 'field_title_text_value_op';
  $handler->display->display_options['filters']['field_title_text_value']['expose']['label'] = 'Title text';
  $handler->display->display_options['filters']['field_title_text_value']['expose']['operator'] = 'field_title_text_value_op';
  $handler->display->display_options['filters']['field_title_text_value']['expose']['identifier'] = 'field_title_text_value';
  $handler->display->display_options['filters']['field_title_text_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: Atom: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'scald_atoms';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'File name / source';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'Search by filename (image, file, local video) or source id (video youtube/vimeo)';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'publisher';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Publisher';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: Atoms: Authors (scald_authors) */
  $handler->display->display_options['filters']['scald_authors_tid']['id'] = 'scald_authors_tid';
  $handler->display->display_options['filters']['scald_authors_tid']['table'] = 'field_data_scald_authors';
  $handler->display->display_options['filters']['scald_authors_tid']['field'] = 'scald_authors_tid';
  $handler->display->display_options['filters']['scald_authors_tid']['value'] = '';
  $handler->display->display_options['filters']['scald_authors_tid']['group'] = 1;
  $handler->display->display_options['filters']['scald_authors_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['scald_authors_tid']['expose']['operator_id'] = 'scald_authors_tid_op';
  $handler->display->display_options['filters']['scald_authors_tid']['expose']['label'] = 'Authors';
  $handler->display->display_options['filters']['scald_authors_tid']['expose']['operator'] = 'scald_authors_tid_op';
  $handler->display->display_options['filters']['scald_authors_tid']['expose']['identifier'] = 'scald_authors_tid';
  $handler->display->display_options['filters']['scald_authors_tid']['vocabulary'] = 'scald_authors';
  /* Filter criterion: Atom: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'scald_atoms';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Atoms: Tags (scald_tags) */
  $handler->display->display_options['filters']['scald_tags_tid']['id'] = 'scald_tags_tid';
  $handler->display->display_options['filters']['scald_tags_tid']['table'] = 'field_data_scald_tags';
  $handler->display->display_options['filters']['scald_tags_tid']['field'] = 'scald_tags_tid';
  $handler->display->display_options['filters']['scald_tags_tid']['value'] = '';
  $handler->display->display_options['filters']['scald_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['scald_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['scald_tags_tid']['expose']['operator_id'] = 'scald_tags_tid_op';
  $handler->display->display_options['filters']['scald_tags_tid']['expose']['label'] = 'Tags';
  $handler->display->display_options['filters']['scald_tags_tid']['expose']['operator'] = 'scald_tags_tid_op';
  $handler->display->display_options['filters']['scald_tags_tid']['expose']['identifier'] = 'scald_tags_tid';
  $handler->display->display_options['filters']['scald_tags_tid']['vocabulary'] = 'scald_tags';
  /* Filter criterion: Atom: Actions */
  $handler->display->display_options['filters']['actions']['id'] = 'actions';
  $handler->display->display_options['filters']['actions']['table'] = 'scald_atoms';
  $handler->display->display_options['filters']['actions']['field'] = 'actions';
  $handler->display->display_options['filters']['actions']['value'] = array(
    'fetch' => 'fetch',
    'view' => 'view',
  );
  $handler->display->display_options['filters']['actions']['group'] = 1;
  $handler->display->display_options['filters']['actions']['expose']['operator'] = FALSE;
  /* Filter criterion: Domain Editor: Domain ID */
  $handler->display->display_options['filters']['domain_id']['id'] = 'domain_id';
  $handler->display->display_options['filters']['domain_id']['table'] = 'domain_editor';
  $handler->display->display_options['filters']['domain_id']['field'] = 'domain_id';
  $handler->display->display_options['filters']['domain_id']['relationship'] = 'publisher';
  $handler->display->display_options['filters']['domain_id']['value'] = array(
    '***CURRENT_DOMAIN***' => '***CURRENT_DOMAIN***',
  );
  $handler->display->display_options['filters']['domain_id']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<ul class="action-links"><li><a href="/atom/add">Add atom</a></li></ul>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['path'] = 'admin/content/atoms';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Atoms';
  $handler->display->display_options['menu']['weight'] = '-60';

  /* Display: My Atoms Block */
  $handler = $view->new_display('block', 'My Atoms Block', 'my_atoms_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Media';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_title_text' => 'field_title_text',
    'title' => 'field_title_text',
    'type' => 'type',
    'representation' => 'representation',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_title_text' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br />',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'representation' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Atoms: Title text */
  $handler->display->display_options['fields']['field_title_text']['id'] = 'field_title_text';
  $handler->display->display_options['fields']['field_title_text']['table'] = 'field_data_field_title_text';
  $handler->display->display_options['fields']['field_title_text']['field'] = 'field_title_text';
  /* Field: Atom: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'File name / source';
  /* Field: Atom: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Atom: Representation */
  $handler->display->display_options['fields']['representation']['id'] = 'representation';
  $handler->display->display_options['fields']['representation']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['representation']['field'] = 'representation';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'publisher';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $translatables['kada_scald_atoms'] = array(
    t('Master'),
    t('Atoms Library'),
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
    t('No atom found.'),
    t('Publisher'),
    t('Title text'),
    t('File name / source'),
    t('Type'),
    t('Thumbnail'),
    t('Actions'),
    t('Search by filename (image, file, local video) or source id (video youtube/vimeo)'),
    t('Authors'),
    t('Tags'),
    t('Page'),
    t('<ul class="action-links"><li><a href="/atom/add">Add atom</a></li></ul>'),
    t('My Atoms Block'),
    t('My Media'),
    t('Representation'),
    t('All'),
  );
  $export['kada_scald_atoms'] = $view;

  $view = new view();
  $view->name = 'kada_scald_library';
  $view->description = 'Library view provided by Scald to access atoms.';
  $view->tag = '';
  $view->base_table = 'scald_atoms';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Atoms Library';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer scald atoms';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'text';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'No atom found.';
  $handler->display->display_options['empty']['text']['format'] = 'plain_text';
  /* Relationship: Atom: Publisher */
  $handler->display->display_options['relationships']['publisher']['id'] = 'publisher';
  $handler->display->display_options['relationships']['publisher']['table'] = 'scald_atoms';
  $handler->display->display_options['relationships']['publisher']['field'] = 'publisher';
  $handler->display->display_options['relationships']['publisher']['label'] = 'Publisher';
  /* Field: Atom: Representation */
  $handler->display->display_options['fields']['representation']['id'] = 'representation';
  $handler->display->display_options['fields']['representation']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['representation']['field'] = 'representation';
  $handler->display->display_options['fields']['representation']['label'] = '';
  /* Sort criterion: Atom: Scald ID */
  $handler->display->display_options['sorts']['sid']['id'] = 'sid';
  $handler->display->display_options['sorts']['sid']['table'] = 'scald_atoms';
  $handler->display->display_options['sorts']['sid']['field'] = 'sid';
  $handler->display->display_options['sorts']['sid']['order'] = 'DESC';
  $handler->display->display_options['sorts']['sid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['sid']['expose']['label'] = 'Scald ID';
  /* Sort criterion: Atom: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'scald_atoms';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Filter criterion: Atoms: Title text (field_title_text) */
  $handler->display->display_options['filters']['field_title_text_value']['id'] = 'field_title_text_value';
  $handler->display->display_options['filters']['field_title_text_value']['table'] = 'field_data_field_title_text';
  $handler->display->display_options['filters']['field_title_text_value']['field'] = 'field_title_text_value';
  $handler->display->display_options['filters']['field_title_text_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_title_text_value']['group'] = 1;
  $handler->display->display_options['filters']['field_title_text_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_title_text_value']['expose']['operator_id'] = 'field_title_text_value_op';
  $handler->display->display_options['filters']['field_title_text_value']['expose']['label'] = 'Title text';
  $handler->display->display_options['filters']['field_title_text_value']['expose']['operator'] = 'field_title_text_value_op';
  $handler->display->display_options['filters']['field_title_text_value']['expose']['identifier'] = 'field_title_text_value';
  $handler->display->display_options['filters']['field_title_text_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: Atom: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'scald_atoms';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'File name / source';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'Search by filename (image, file, local video) or source id (video youtube/vimeo)';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'publisher';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Publisher';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  /* Filter criterion: Atoms: Authors (scald_authors) */
  $handler->display->display_options['filters']['scald_authors_tid']['id'] = 'scald_authors_tid';
  $handler->display->display_options['filters']['scald_authors_tid']['table'] = 'field_data_scald_authors';
  $handler->display->display_options['filters']['scald_authors_tid']['field'] = 'scald_authors_tid';
  $handler->display->display_options['filters']['scald_authors_tid']['value'] = '';
  $handler->display->display_options['filters']['scald_authors_tid']['group'] = 1;
  $handler->display->display_options['filters']['scald_authors_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['scald_authors_tid']['expose']['operator_id'] = 'scald_authors_tid_op';
  $handler->display->display_options['filters']['scald_authors_tid']['expose']['label'] = 'Authors';
  $handler->display->display_options['filters']['scald_authors_tid']['expose']['operator'] = 'scald_authors_tid_op';
  $handler->display->display_options['filters']['scald_authors_tid']['expose']['identifier'] = 'scald_authors_tid';
  $handler->display->display_options['filters']['scald_authors_tid']['vocabulary'] = 'scald_authors';
  /* Filter criterion: Atom: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'scald_atoms';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Atoms: Tags (scald_tags) */
  $handler->display->display_options['filters']['scald_tags_tid']['id'] = 'scald_tags_tid';
  $handler->display->display_options['filters']['scald_tags_tid']['table'] = 'field_data_scald_tags';
  $handler->display->display_options['filters']['scald_tags_tid']['field'] = 'scald_tags_tid';
  $handler->display->display_options['filters']['scald_tags_tid']['value'] = '';
  $handler->display->display_options['filters']['scald_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['scald_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['scald_tags_tid']['expose']['operator_id'] = 'scald_tags_tid_op';
  $handler->display->display_options['filters']['scald_tags_tid']['expose']['label'] = 'Tags';
  $handler->display->display_options['filters']['scald_tags_tid']['expose']['operator'] = 'scald_tags_tid_op';
  $handler->display->display_options['filters']['scald_tags_tid']['expose']['identifier'] = 'scald_tags_tid';
  $handler->display->display_options['filters']['scald_tags_tid']['vocabulary'] = 'scald_tags';
  /* Filter criterion: Atom: Actions */
  $handler->display->display_options['filters']['actions']['id'] = 'actions';
  $handler->display->display_options['filters']['actions']['table'] = 'scald_atoms';
  $handler->display->display_options['filters']['actions']['field'] = 'actions';
  $handler->display->display_options['filters']['actions']['value'] = array(
    'fetch' => 'fetch',
    'view' => 'view',
  );
  $handler->display->display_options['filters']['actions']['group'] = 1;
  $handler->display->display_options['filters']['actions']['expose']['operator'] = FALSE;
  /* Filter criterion: Domain Editor: Domain ID */
  $handler->display->display_options['filters']['domain_id']['id'] = 'domain_id';
  $handler->display->display_options['filters']['domain_id']['table'] = 'domain_editor';
  $handler->display->display_options['filters']['domain_id']['field'] = 'domain_id';
  $handler->display->display_options['filters']['domain_id']['relationship'] = 'publisher';
  $handler->display->display_options['filters']['domain_id']['value'] = array(
    '***CURRENT_DOMAIN***' => '***CURRENT_DOMAIN***',
  );
  $handler->display->display_options['filters']['domain_id']['group'] = 1;

  /* Display: Scald Library */
  $handler = $view->new_display('dnd_library', 'Scald Library', 'dnd_library_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access scald dnd library';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'scald_library';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'scald/library_dnd';
  $translatables['kada_scald_library'] = array(
    t('Master'),
    t('Atoms Library'),
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
    t('No atom found.'),
    t('Publisher'),
    t('Scald ID'),
    t('Title'),
    t('Title text'),
    t('File name / source'),
    t('Search by filename (image, file, local video) or source id (video youtube/vimeo)'),
    t('Authors'),
    t('Type'),
    t('Tags'),
    t('Scald Library'),
  );
  $export['kada_scald_library'] = $view;

  return $export;
}
