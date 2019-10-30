<?php

/**
 * @file
 * pori_facts_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pori_facts_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'facts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Facts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'frame-[field_fact_frame] color-[field_fact_color]';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_fact_to_specific_page_target_id']['id'] = 'field_fact_to_specific_page_target_id';
  $handler->display->display_options['relationships']['field_fact_to_specific_page_target_id']['table'] = 'field_data_field_fact_to_specific_page';
  $handler->display->display_options['relationships']['field_fact_to_specific_page_target_id']['field'] = 'field_fact_to_specific_page_target_id';
  $handler->display->display_options['relationships']['field_fact_to_specific_page_target_id']['label'] = 'Sisältö entity referenced from field_fact_to_specific_page';
  $handler->display->display_options['relationships']['field_fact_to_specific_page_target_id']['required'] = TRUE;
  /* Field: Content: Number */
  $handler->display->display_options['fields']['field_fact_number']['id'] = 'field_fact_number';
  $handler->display->display_options['fields']['field_fact_number']['table'] = 'field_data_field_fact_number';
  $handler->display->display_options['fields']['field_fact_number']['field'] = 'field_fact_number';
  $handler->display->display_options['fields']['field_fact_number']['label'] = '';
  $handler->display->display_options['fields']['field_fact_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fact_number']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_fact_description']['id'] = 'field_fact_description';
  $handler->display->display_options['fields']['field_fact_description']['table'] = 'field_data_field_fact_description';
  $handler->display->display_options['fields']['field_fact_description']['field'] = 'field_fact_description';
  $handler->display->display_options['fields']['field_fact_description']['label'] = '';
  $handler->display->display_options['fields']['field_fact_description']['element_label_colon'] = FALSE;
  /* Field: Content: Frame */
  $handler->display->display_options['fields']['field_fact_frame']['id'] = 'field_fact_frame';
  $handler->display->display_options['fields']['field_fact_frame']['table'] = 'field_data_field_fact_frame';
  $handler->display->display_options['fields']['field_fact_frame']['field'] = 'field_fact_frame';
  $handler->display->display_options['fields']['field_fact_frame']['label'] = '';
  $handler->display->display_options['fields']['field_fact_frame']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fact_frame']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fact_frame']['type'] = 'list_key';
  /* Field: Content: Color */
  $handler->display->display_options['fields']['field_fact_color']['id'] = 'field_fact_color';
  $handler->display->display_options['fields']['field_fact_color']['table'] = 'field_data_field_fact_color';
  $handler->display->display_options['fields']['field_fact_color']['field'] = 'field_fact_color';
  $handler->display->display_options['fields']['field_fact_color']['label'] = '';
  $handler->display->display_options['fields']['field_fact_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fact_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fact_color']['type'] = 'list_key';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Attach to specific page (field_fact_to_specific_page) */
  $handler->display->display_options['arguments']['field_fact_to_specific_page_target_id']['id'] = 'field_fact_to_specific_page_target_id';
  $handler->display->display_options['arguments']['field_fact_to_specific_page_target_id']['table'] = 'field_data_field_fact_to_specific_page';
  $handler->display->display_options['arguments']['field_fact_to_specific_page_target_id']['field'] = 'field_fact_to_specific_page_target_id';
  $handler->display->display_options['arguments']['field_fact_to_specific_page_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_fact_to_specific_page_target_id']['exception']['title'] = 'Kaikki';
  $handler->display->display_options['arguments']['field_fact_to_specific_page_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_fact_to_specific_page_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_fact_to_specific_page_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_fact_to_specific_page_target_id']['summary_options']['items_per_page'] = '25';
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
    'fact' => 'fact',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Facts - Page */
  $handler = $view->new_display('block', 'Facts - Page', 'page_facts');

  /* Display: Facts - Domain */
  $handler = $view->new_display('block', 'Facts - Domain', 'domain_facts');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
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
    'fact' => 'fact',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Domains: Domain ID */
  $handler->display->display_options['filters']['domain_id']['id'] = 'domain_id';
  $handler->display->display_options['filters']['domain_id']['table'] = 'domain';
  $handler->display->display_options['filters']['domain_id']['field'] = 'domain_id';
  $handler->display->display_options['filters']['domain_id']['value'] = array(
    '***CURRENT_DOMAIN***' => '***CURRENT_DOMAIN***',
  );

  /* Display: Facts - Section */
  $handler = $view->new_display('block', 'Facts - Section', 'section_facts');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Groups audience (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['exception']['title'] = 'Kaikki';
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
    'fact' => 'fact',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $translatables['facts'] = array(
    t('Master'),
    t('<none>'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Sisältö entity referenced from field_fact_to_specific_page'),
    t('Edit'),
    t('Kaikki'),
    t('Facts - Page'),
    t('Facts - Domain'),
    t('Facts - Section'),
  );
  $export['facts'] = $view;

  return $export;
}
