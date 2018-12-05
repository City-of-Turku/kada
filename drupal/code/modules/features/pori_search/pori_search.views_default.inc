<?php
/**
 * @file
 * pori_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pori_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'main_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_pori_search_index';
  $view->human_name = 'Main search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'search-results-page';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'wysiwyg',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'search_api_views_fulltext' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'search-result--row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = 'Didn\'t find what you are looking for? Try <a href="/en/news-archive">searching from the news archive.</a>';
  /* Field: Indexed Node: Domain Path */
  $handler->display->display_options['fields']['domain_path']['id'] = 'domain_path';
  $handler->display->display_options['fields']['domain_path']['table'] = 'search_api_index_pori_search_index';
  $handler->display->display_options['fields']['domain_path']['field'] = 'domain_path';
  $handler->display->display_options['fields']['domain_path']['label'] = '';
  $handler->display->display_options['fields']['domain_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['domain_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['domain_path']['list']['mode'] = 'first';
  $handler->display->display_options['fields']['domain_path']['link_to_entity'] = 0;
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_pori_search_index';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_pori_search_index';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'kada_date_only';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'kada_date_only';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Node: Content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'search_api_index_pori_search_index';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type']['format_name'] = 1;
  /* Field: Indexed Node: Keywords */
  $handler->display->display_options['fields']['field_keywords_et']['id'] = 'field_keywords_et';
  $handler->display->display_options['fields']['field_keywords_et']['table'] = 'search_api_index_pori_search_index';
  $handler->display->display_options['fields']['field_keywords_et']['field'] = 'field_keywords_et';
  $handler->display->display_options['fields']['field_keywords_et']['label'] = '';
  $handler->display->display_options['fields']['field_keywords_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_keywords_et']['list']['mode'] = 'list';
  $handler->display->display_options['fields']['field_keywords_et']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_keywords_et']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_keywords_et']['bypass_access'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_pori_search_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_pori_search_index';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Indexed Node: Lead paragraph */
  $handler->display->display_options['fields']['field_lead_paragraph_et']['id'] = 'field_lead_paragraph_et';
  $handler->display->display_options['fields']['field_lead_paragraph_et']['table'] = 'search_api_index_pori_search_index';
  $handler->display->display_options['fields']['field_lead_paragraph_et']['field'] = 'field_lead_paragraph_et';
  $handler->display->display_options['fields']['field_lead_paragraph_et']['label'] = '';
  $handler->display->display_options['fields']['field_lead_paragraph_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_paragraph_et']['empty'] = '[body]';
  $handler->display->display_options['fields']['field_lead_paragraph_et']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_lead_paragraph_et']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Indexed Node: Visitpori theme */
  $handler->display->display_options['fields']['field_visitpori_theme']['id'] = 'field_visitpori_theme';
  $handler->display->display_options['fields']['field_visitpori_theme']['table'] = 'search_api_index_pori_search_index';
  $handler->display->display_options['fields']['field_visitpori_theme']['field'] = 'field_visitpori_theme';
  $handler->display->display_options['fields']['field_visitpori_theme']['label'] = '';
  $handler->display->display_options['fields']['field_visitpori_theme']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_visitpori_theme']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visitpori_theme']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_visitpori_theme']['display'] = 'view';
  $handler->display->display_options['fields']['field_visitpori_theme']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_visitpori_theme']['bypass_access'] = 0;
  /* Field: Indexed Node: Theme */
  $handler->display->display_options['fields']['field_theme']['id'] = 'field_theme';
  $handler->display->display_options['fields']['field_theme']['table'] = 'search_api_index_pori_search_index';
  $handler->display->display_options['fields']['field_theme']['field'] = 'field_theme';
  $handler->display->display_options['fields']['field_theme']['label'] = '';
  $handler->display->display_options['fields']['field_theme']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_theme']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_theme']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_theme']['display'] = 'view';
  $handler->display->display_options['fields']['field_theme']['view_mode'] = 'token';
  $handler->display->display_options['fields']['field_theme']['bypass_access'] = 0;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_pori_search_index';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_pori_search_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'search';
  $translatables['main_search'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Advanced options'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Didn\'t find what you are looking for? Try <a href="/en/news-archive">searching from the news archive.</a>'),
    t('[body]'),
    t('Search'),
    t('Page'),
  );
  $export['main_search'] = $view;

  return $export;
}
