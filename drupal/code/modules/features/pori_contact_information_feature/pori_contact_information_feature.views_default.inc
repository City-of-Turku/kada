<?php

/**
 * @file
 * pori_contact_information_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pori_contact_information_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pori_phone_book';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_pori_person_index';
  $view->human_name = 'Pori – Phone book';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Phone book';
  $handler->display->display_options['css_class'] = 'person-card-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '102';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'person_card';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Telephone exchange of the City of Pori: <a href="tel:(02) 621 1100">(02) 621 1100</a><br><a href="mailto:kirjaamo@pori.fi">kirjaamo@pori.fi</a>';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['header']['area_1']['empty'] = TRUE;
  $handler->display->display_options['header']['area_1']['content'] = '<div class="views-header-spacer"></div>';
  $handler->display->display_options['header']['area_1']['format'] = 'wysiwyg';
  /* Header: Global: Block area */
  $handler->display->display_options['header']['block']['id'] = 'block';
  $handler->display->display_options['header']['block']['table'] = 'views';
  $handler->display->display_options['header']['block']['field'] = 'block';
  $handler->display->display_options['header']['block']['empty'] = TRUE;
  $handler->display->display_options['header']['block']['block_to_insert'] = 'pori_search:pori_search_reset';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['label'] = 'No results message';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'No search results';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_pori_person_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Sort criterion: Indexed Node: Surname */
  $handler->display->display_options['sorts']['field_surname']['id'] = 'field_surname';
  $handler->display->display_options['sorts']['field_surname']['table'] = 'search_api_index_pori_person_index';
  $handler->display->display_options['sorts']['field_surname']['field'] = 'field_surname';
  /* Sort criterion: Indexed Node: First name */
  $handler->display->display_options['sorts']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['sorts']['field_first_name']['table'] = 'search_api_index_pori_person_index';
  $handler->display->display_options['sorts']['field_first_name']['field'] = 'field_first_name';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_pori_person_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    8 => 0,
    3 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Indexed Node: Prevent from appearing in phonebook */
  $handler->display->display_options['filters']['field_prevent_phonebook']['id'] = 'field_prevent_phonebook';
  $handler->display->display_options['filters']['field_prevent_phonebook']['table'] = 'search_api_index_pori_person_index';
  $handler->display->display_options['filters']['field_prevent_phonebook']['field'] = 'field_prevent_phonebook';
  $handler->display->display_options['filters']['field_prevent_phonebook']['operator'] = '<>';
  $handler->display->display_options['filters']['field_prevent_phonebook']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'phone-book';
  $translatables['pori_phone_book'] = array(
    t('Master'),
    t('Phone book'),
    t('more'),
    t('Search'),
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
    t('Telephone exchange of the City of Pori: <a href="tel:(02) 621 1100">(02) 621 1100</a><br><a href="mailto:kirjaamo@pori.fi">kirjaamo@pori.fi</a>'),
    t('<div class="views-header-spacer"></div>'),
    t('No results message'),
    t('No search results'),
    t('Node ID'),
    t('.'),
    t(','),
    t('Page'),
  );
  $export['pori_phone_book'] = $view;

  return $export;
}
