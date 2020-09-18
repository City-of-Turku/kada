<?php

/**
 * @file
 * pori_news.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pori_news_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pori_news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Pori news';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Uutisarkisto';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Hae';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Palauta oletusarvoihin';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Järjestele';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Nou';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Las';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Valitse luokittelun ja/tai kohderyhmien alta haluamasi ja klikkaa "Käytä".',
          'format' => 'wysiwyg',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Edistyneet valinnat',
      'secondary_collapse_override' => '0',
    ),
    'combine' => array(
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
    'date_filter' => array(
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
        'datepicker_options' => '',
      ),
    ),
    'field_theme_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_target_audience_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
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
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Results per page';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« ensimmäinen';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ edellinen';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seuraava ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'viimeinen »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Kenttä: Sisältö: Otsikko */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Kenttä: Sisältö: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Lead paragraph */
  $handler->display->display_options['fields']['field_lead_paragraph_long_text']['id'] = 'field_lead_paragraph_long_text';
  $handler->display->display_options['fields']['field_lead_paragraph_long_text']['table'] = 'field_data_field_lead_paragraph_long_text';
  $handler->display->display_options['fields']['field_lead_paragraph_long_text']['field'] = 'field_lead_paragraph_long_text';
  $handler->display->display_options['fields']['field_lead_paragraph_long_text']['label'] = '';
  $handler->display->display_options['fields']['field_lead_paragraph_long_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lead_paragraph_long_text']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'current';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Sort criterion: Sisältö: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Sisältö: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Sisältö: Tyyppi */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_item' => 'news_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'allwords';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Etsi';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'text';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'body' => 'body',
    'field_lead_paragraph_long_text' => 'field_lead_paragraph_long_text',
  );
  /* Filter criterion: Päivämäärä: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Päivämäärä';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    8 => 0,
    3 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['granularity'] = 'month';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-3:+0';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node.created' => 'node.created',
  );
  /* Filter criterion: Sisältö: Theme (field_theme) */
  $handler->display->display_options['filters']['field_theme_tid']['id'] = 'field_theme_tid';
  $handler->display->display_options['filters']['field_theme_tid']['table'] = 'field_data_field_theme';
  $handler->display->display_options['filters']['field_theme_tid']['field'] = 'field_theme_tid';
  $handler->display->display_options['filters']['field_theme_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_theme_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_theme_tid']['expose']['operator_id'] = 'field_theme_tid_op';
  $handler->display->display_options['filters']['field_theme_tid']['expose']['label'] = 'Teema';
  $handler->display->display_options['filters']['field_theme_tid']['expose']['operator'] = 'field_theme_tid_op';
  $handler->display->display_options['filters']['field_theme_tid']['expose']['identifier'] = 'field_theme_tid';
  $handler->display->display_options['filters']['field_theme_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    8 => 0,
    3 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_theme_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_theme_tid']['vocabulary'] = 'theme';
  /* Filter criterion: Kenttä: Target audience (field_target_audience) */
  $handler->display->display_options['filters']['field_target_audience_tid']['id'] = 'field_target_audience_tid';
  $handler->display->display_options['filters']['field_target_audience_tid']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['filters']['field_target_audience_tid']['field'] = 'field_target_audience_tid';
  $handler->display->display_options['filters']['field_target_audience_tid']['value'] = array(
    54 => '54',
    55 => '55',
    56 => '56',
    57 => '57',
    58 => '58',
    60 => '60',
    59 => '59',
  );
  $handler->display->display_options['filters']['field_target_audience_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_target_audience_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['operator_id'] = 'field_target_audience_tid_op';
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['label'] = 'Kohderyhmä';
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['operator'] = 'field_target_audience_tid_op';
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['identifier'] = 'field_target_audience_tid';
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    8 => 0,
    3 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_target_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_target_audience_tid']['vocabulary'] = 'target_audience';
  /* Filter criterion: Domain Access: Available on current domain */
  $handler->display->display_options['filters']['current_all']['id'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['table'] = 'domain_access';
  $handler->display->display_options['filters']['current_all']['field'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['value'] = '1';
  /* Filter criterion: Sisältö: Kieli */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: General archive */
  $handler = $view->new_display('page', 'General archive', 'page');
  $handler->display->display_options['path'] = 'news-archive';

  /* Display: Visitpori archive */
  $handler = $view->new_display('page', 'Visitpori archive', 'page_1');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Hae';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Return to defaults';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Organize';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Nou';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Las';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Valitse luokittelun ja/tai kohderyhmien alta haluamasi ja klikkaa "Käytä".',
          'format' => 'wysiwyg',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Edistyneet valinnat',
      'secondary_collapse_override' => '0',
    ),
    'combine' => array(
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
    'date_filter' => array(
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
        'datepicker_options' => '',
      ),
    ),
    'field_visitpori_theme_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_target_audience_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Sisältö: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Sisältö: Tyyppi */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_item' => 'news_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'allwords';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Etsi';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'text';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    8 => 0,
    3 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'body' => 'body',
  );
  /* Filter criterion: Päivämäärä: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Päivämäärä';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    8 => 0,
    3 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['granularity'] = 'month';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-3:+0';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node.created' => 'node.created',
  );
  /* Filter criterion: Sisältö: Visitpori theme (field_visitpori_theme) */
  $handler->display->display_options['filters']['field_visitpori_theme_tid']['id'] = 'field_visitpori_theme_tid';
  $handler->display->display_options['filters']['field_visitpori_theme_tid']['table'] = 'field_data_field_visitpori_theme';
  $handler->display->display_options['filters']['field_visitpori_theme_tid']['field'] = 'field_visitpori_theme_tid';
  $handler->display->display_options['filters']['field_visitpori_theme_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_visitpori_theme_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_visitpori_theme_tid']['expose']['operator_id'] = 'field_visitpori_theme_tid_op';
  $handler->display->display_options['filters']['field_visitpori_theme_tid']['expose']['label'] = 'Visitpori theme (field_visitpori_theme)';
  $handler->display->display_options['filters']['field_visitpori_theme_tid']['expose']['operator'] = 'field_visitpori_theme_tid_op';
  $handler->display->display_options['filters']['field_visitpori_theme_tid']['expose']['identifier'] = 'field_visitpori_theme_tid';
  $handler->display->display_options['filters']['field_visitpori_theme_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    8 => 0,
    3 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_visitpori_theme_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_visitpori_theme_tid']['vocabulary'] = 'visitpori_theme';
  /* Filter criterion: Kenttä: Target audience (field_target_audience) */
  $handler->display->display_options['filters']['field_target_audience_tid']['id'] = 'field_target_audience_tid';
  $handler->display->display_options['filters']['field_target_audience_tid']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['filters']['field_target_audience_tid']['field'] = 'field_target_audience_tid';
  $handler->display->display_options['filters']['field_target_audience_tid']['value'] = array(
    1550 => '1550',
    1551 => '1551',
    1552 => '1552',
    1294 => '1294',
    1295 => '1295',
    1553 => '1553',
    1554 => '1554',
    1299 => '1299',
    1499 => '1499',
  );
  $handler->display->display_options['filters']['field_target_audience_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_target_audience_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['operator_id'] = 'field_target_audience_tid_op';
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['label'] = 'Kohderyhmä';
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['operator'] = 'field_target_audience_tid_op';
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['identifier'] = 'field_target_audience_tid';
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    8 => 0,
    3 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_target_audience_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_target_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_target_audience_tid']['vocabulary'] = 'target_audience';
  /* Filter criterion: Domain Access: Available on current domain */
  $handler->display->display_options['filters']['current_all']['id'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['table'] = 'domain_access';
  $handler->display->display_options['filters']['current_all']['field'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['value'] = '1';
  $handler->display->display_options['filters']['current_all']['group'] = 1;
  $handler->display->display_options['path'] = 'visitpori/news-archive';
  $translatables['pori_news'] = array(
    t('Master'),
    t('Uutisarkisto'),
    t('more'),
    t('Hae'),
    t('Palauta oletusarvoihin'),
    t('Järjestele'),
    t('Nou'),
    t('Las'),
    t('Valitse luokittelun ja/tai kohderyhmien alta haluamasi ja klikkaa "Käytä".'),
    t('Edistyneet valinnat'),
    t('Results per page'),
    t('- All -'),
    t('Offset'),
    t('« ensimmäinen'),
    t('‹ edellinen'),
    t('seuraava ›'),
    t('viimeinen »'),
    t('Etsi'),
    t('Päivämäärä'),
    t('Teema'),
    t('Kohderyhmä'),
    t('General archive'),
    t('Visitpori archive'),
    t('Return to defaults'),
    t('Organize'),
    t('Visitpori theme (field_visitpori_theme)'),
  );
  $export['pori_news'] = $view;

  return $export;
}
