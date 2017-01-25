<?php
/**
 * @file
 * tkufi_search_sarnia_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tkufi_search_sarnia_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'driveturku_sarnia_search';
  $view->description = 'Check templates for some custom rendering logic';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_sarnia_driveturku_sarnia_search';
  $view->human_name = 'DriveTurku Sarnia search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search';
  $handler->display->display_options['css_class'] = 'search-results search-results--sarnia';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Empty text';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Oops, nothing was found with the given search terms. Please try again with different search entry.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Field: DriveTurku Sarnia search (Sarnia index): Data: ss_tkufi_translated_url */
  $handler->display->display_options['fields']['solr_document_4']['id'] = 'solr_document_4';
  $handler->display->display_options['fields']['solr_document_4']['table'] = 'search_api_index_sarnia_driveturku_sarnia_search';
  $handler->display->display_options['fields']['solr_document_4']['field'] = 'solr_document';
  $handler->display->display_options['fields']['solr_document_4']['label'] = '';
  $handler->display->display_options['fields']['solr_document_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['solr_document_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['solr_document_4']['solr_property'] = 'ss_tkufi_translated_url';
  $handler->display->display_options['fields']['solr_document_4']['formatter'] = '0';
  /* Field: DriveTurku Sarnia search (Sarnia index): Data: ss_title_field */
  $handler->display->display_options['fields']['solr_document_5']['id'] = 'solr_document_5';
  $handler->display->display_options['fields']['solr_document_5']['table'] = 'search_api_index_sarnia_driveturku_sarnia_search';
  $handler->display->display_options['fields']['solr_document_5']['field'] = 'solr_document';
  $handler->display->display_options['fields']['solr_document_5']['label'] = '';
  $handler->display->display_options['fields']['solr_document_5']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['solr_document_5']['alter']['path'] = '[solr_document_4]';
  $handler->display->display_options['fields']['solr_document_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['solr_document_5']['solr_property'] = 'ss_title_field';
  $handler->display->display_options['fields']['solr_document_5']['formatter'] = 'sarnia_formatter_plain';
  $handler->display->display_options['fields']['solr_document_5']['multivalue']['count'] = '0';
  $handler->display->display_options['fields']['solr_document_5']['multivalue']['list_type'] = 'separator';
  $handler->display->display_options['fields']['solr_document_5']['multivalue']['list_separator'] = '';
  /* Field: DriveTurku Sarnia search (Sarnia index): Data: tm_title */
  $handler->display->display_options['fields']['solr_document']['id'] = 'solr_document';
  $handler->display->display_options['fields']['solr_document']['table'] = 'search_api_index_sarnia_driveturku_sarnia_search';
  $handler->display->display_options['fields']['solr_document']['field'] = 'solr_document';
  $handler->display->display_options['fields']['solr_document']['label'] = '';
  $handler->display->display_options['fields']['solr_document']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['solr_document']['alter']['path'] = '[solr_document_4]';
  $handler->display->display_options['fields']['solr_document']['element_type'] = 'h3';
  $handler->display->display_options['fields']['solr_document']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['solr_document']['solr_property'] = 'tm_title';
  $handler->display->display_options['fields']['solr_document']['formatter'] = 'sarnia_formatter_text';
  $handler->display->display_options['fields']['solr_document']['settings'] = array(
    'input_format' => 'plain_text',
  );
  $handler->display->display_options['fields']['solr_document']['is_multivalue'] = TRUE;
  /* Field: DriveTurku Sarnia search (Sarnia index): Data: im_field_theme */
  $handler->display->display_options['fields']['solr_document_1']['id'] = 'solr_document_1';
  $handler->display->display_options['fields']['solr_document_1']['table'] = 'search_api_index_sarnia_driveturku_sarnia_search';
  $handler->display->display_options['fields']['solr_document_1']['field'] = 'solr_document';
  $handler->display->display_options['fields']['solr_document_1']['label'] = '';
  $handler->display->display_options['fields']['solr_document_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['solr_document_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['solr_document_1']['solr_property'] = 'im_field_theme';
  $handler->display->display_options['fields']['solr_document_1']['formatter'] = 'sarnia_formatter_text';
  $handler->display->display_options['fields']['solr_document_1']['settings'] = array(
    'input_format' => 'plain_text',
  );
  $handler->display->display_options['fields']['solr_document_1']['is_multivalue'] = TRUE;
  $handler->display->display_options['fields']['solr_document_1']['multivalue']['count'] = '0';
  $handler->display->display_options['fields']['solr_document_1']['multivalue']['list_type'] = 'separator';
  $handler->display->display_options['fields']['solr_document_1']['multivalue']['list_separator'] = '-';
  /* Field: DriveTurku Sarnia search (Sarnia index): Data: ss_type */
  $handler->display->display_options['fields']['solr_document_3']['id'] = 'solr_document_3';
  $handler->display->display_options['fields']['solr_document_3']['table'] = 'search_api_index_sarnia_driveturku_sarnia_search';
  $handler->display->display_options['fields']['solr_document_3']['field'] = 'solr_document';
  $handler->display->display_options['fields']['solr_document_3']['label'] = '';
  $handler->display->display_options['fields']['solr_document_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['solr_document_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['solr_document_3']['solr_property'] = 'ss_type';
  $handler->display->display_options['fields']['solr_document_3']['formatter'] = '0';
  /* Field: DriveTurku Sarnia search (Sarnia index): Data: ss_tkufi_rendered_entity */
  $handler->display->display_options['fields']['solr_document_2']['id'] = 'solr_document_2';
  $handler->display->display_options['fields']['solr_document_2']['table'] = 'search_api_index_sarnia_driveturku_sarnia_search';
  $handler->display->display_options['fields']['solr_document_2']['field'] = 'solr_document';
  $handler->display->display_options['fields']['solr_document_2']['label'] = '';
  $handler->display->display_options['fields']['solr_document_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['solr_document_2']['solr_property'] = 'ss_tkufi_rendered_entity';
  $handler->display->display_options['fields']['solr_document_2']['formatter'] = 'sarnia_formatter_text';
  $handler->display->display_options['fields']['solr_document_2']['settings'] = array(
    'input_format' => 'full_html',
  );
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_sarnia_driveturku_sarnia_search';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_sarnia_driveturku_sarnia_search';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  /* Sort criterion: DriveTurku Sarnia search (Sarnia index): Data: ds_created */
  $handler->display->display_options['sorts']['solr_document']['id'] = 'solr_document';
  $handler->display->display_options['sorts']['solr_document']['table'] = 'search_api_index_sarnia_driveturku_sarnia_search';
  $handler->display->display_options['sorts']['solr_document']['field'] = 'solr_document';
  $handler->display->display_options['sorts']['solr_document']['order'] = 'DESC';
  $handler->display->display_options['sorts']['solr_document']['solr_property'] = 'ds_created';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_sarnia_driveturku_sarnia_search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Text search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
  );

  /* Display: Overridden in templates */
  $handler = $view->new_display('page', 'Overridden in templates', 'page');
  $handler->display->display_options['display_description'] = 'Templates have some custom rendering logic';
  $handler->display->display_options['path'] = 'search';
  $translatables['driveturku_sarnia_search'] = array(
    t('Master'),
    t('Search'),
    t('more'),
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
    t('Empty text'),
    t('Oops, nothing was found with the given search terms. Please try again with different search entry.'),
    t('Text search'),
    t('Overridden in templates'),
    t('Templates have some custom rendering logic'),
  );
  $export['driveturku_sarnia_search'] = $view;

  return $export;
}
