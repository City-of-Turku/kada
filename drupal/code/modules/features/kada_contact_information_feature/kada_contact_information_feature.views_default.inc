<?php

/**
 * @file
 * kada_contact_information_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function kada_contact_information_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'kada_persons';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KADA Persons';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'KADA Persons';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_person_image' => 'field_person_image',
    'title' => 'title',
    'field_person_type' => 'field_person_type',
    'field_office_tr' => 'field_office_tr',
    'field_employee_title' => 'field_employee_title',
    'field_political_party' => 'field_political_party',
    'field_profession' => 'field_profession',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_person_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_type' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_office_tr' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_employee_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_political_party' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_profession' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'office' => 'office',
    'scald_authors' => 0,
    'scald_tags' => 0,
    'accessibility' => 0,
    'district' => 0,
    'event_types' => 0,
    'keywords' => 0,
    'political_party' => 0,
    'service_classification' => 0,
    'target_audience' => 0,
    'theme' => 0,
    'trust_unit' => 0,
    'trustee_role' => 0,
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::auto_entitylabel_entity_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Person image */
  $handler->display->display_options['fields']['field_person_image']['id'] = 'field_person_image';
  $handler->display->display_options['fields']['field_person_image']['table'] = 'field_data_field_person_image';
  $handler->display->display_options['fields']['field_person_image']['field'] = 'field_person_image';
  $handler->display->display_options['fields']['field_person_image']['label'] = '';
  $handler->display->display_options['fields']['field_person_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_image']['type'] = 'sdl_library_item';
  $handler->display->display_options['fields']['field_person_image']['settings'] = array(
    'link' => '0',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Title (drupal)';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Person type */
  $handler->display->display_options['fields']['field_person_type']['id'] = 'field_person_type';
  $handler->display->display_options['fields']['field_person_type']['table'] = 'field_data_field_person_type';
  $handler->display->display_options['fields']['field_person_type']['field'] = 'field_person_type';
  $handler->display->display_options['fields']['field_person_type']['label'] = 'Type';
  $handler->display->display_options['fields']['field_person_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_type']['delta_offset'] = '0';
  /* Field: Content: Office */
  $handler->display->display_options['fields']['field_office_tr']['id'] = 'field_office_tr';
  $handler->display->display_options['fields']['field_office_tr']['table'] = 'field_data_field_office_tr';
  $handler->display->display_options['fields']['field_office_tr']['field'] = 'field_office_tr';
  $handler->display->display_options['fields']['field_office_tr']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_office_tr']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_employee_title']['id'] = 'field_employee_title';
  $handler->display->display_options['fields']['field_employee_title']['table'] = 'field_data_field_employee_title';
  $handler->display->display_options['fields']['field_employee_title']['field'] = 'field_employee_title';
  $handler->display->display_options['fields']['field_employee_title']['label'] = 'Work title';
  /* Field: Content: Political party */
  $handler->display->display_options['fields']['field_political_party']['id'] = 'field_political_party';
  $handler->display->display_options['fields']['field_political_party']['table'] = 'field_data_field_political_party';
  $handler->display->display_options['fields']['field_political_party']['field'] = 'field_political_party';
  $handler->display->display_options['fields']['field_political_party']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Profession */
  $handler->display->display_options['fields']['field_profession']['id'] = 'field_profession';
  $handler->display->display_options['fields']['field_profession']['table'] = 'field_data_field_profession';
  $handler->display->display_options['fields']['field_profession']['field'] = 'field_profession';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'delete';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'person' => 'person',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
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
  /* Filter criterion: Content: Person type (field_person_type) */
  $handler->display->display_options['filters']['field_person_type_value']['id'] = 'field_person_type_value';
  $handler->display->display_options['filters']['field_person_type_value']['table'] = 'field_data_field_person_type';
  $handler->display->display_options['filters']['field_person_type_value']['field'] = 'field_person_type_value';
  $handler->display->display_options['filters']['field_person_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_person_type_value']['expose']['operator_id'] = 'field_person_type_value_op';
  $handler->display->display_options['filters']['field_person_type_value']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_person_type_value']['expose']['operator'] = 'field_person_type_value_op';
  $handler->display->display_options['filters']['field_person_type_value']['expose']['identifier'] = 'field_person_type_value';
  $handler->display->display_options['filters']['field_person_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Office (field_office_tr) */
  $handler->display->display_options['filters']['field_office_tr_tid']['id'] = 'field_office_tr_tid';
  $handler->display->display_options['filters']['field_office_tr_tid']['table'] = 'field_data_field_office_tr';
  $handler->display->display_options['filters']['field_office_tr_tid']['field'] = 'field_office_tr_tid';
  $handler->display->display_options['filters']['field_office_tr_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_office_tr_tid']['expose']['operator_id'] = 'field_office_tr_tid_op';
  $handler->display->display_options['filters']['field_office_tr_tid']['expose']['label'] = 'Office';
  $handler->display->display_options['filters']['field_office_tr_tid']['expose']['operator'] = 'field_office_tr_tid_op';
  $handler->display->display_options['filters']['field_office_tr_tid']['expose']['identifier'] = 'field_office_tr_tid';
  $handler->display->display_options['filters']['field_office_tr_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_office_tr_tid']['group_info']['label'] = 'Office (field_office_tr)';
  $handler->display->display_options['filters']['field_office_tr_tid']['group_info']['identifier'] = 'field_office_tr_tid';
  $handler->display->display_options['filters']['field_office_tr_tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Empty',
      'operator' => 'empty',
      'value' => 'A1 Akuutti psykoosiosasto',
    ),
    2 => array(
      'title' => '',
      'operator' => 'or',
      'value' => '',
    ),
    3 => array(
      'title' => '',
      'operator' => 'or',
      'value' => '',
    ),
  );
  $handler->display->display_options['filters']['field_office_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_office_tr_tid']['vocabulary'] = 'office';
  $handler->display->display_options['filters']['field_office_tr_tid']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/persons';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Persons';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['kada_persons'] = array(
    t('Master'),
    t('KADA Persons'),
    t('more'),
    t('Filter'),
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
    t('Displaying @start - @end of @total'),
    t('term'),
    t('Content'),
    t('- Choose an operation -'),
    t('Title (drupal)'),
    t('Type'),
    t('Office'),
    t('Work title'),
    t('Political party'),
    t('Profession'),
    t('edit'),
    t('delete'),
    t('Title'),
    t('Office (field_office_tr)'),
    t('Page'),
  );
  $export['kada_persons'] = $view;

  $view = new view();
  $view->name = 'kada_positions_of_trust';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KADA Positions of trust';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Positions of trust';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Palauta oletusarvoihin';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['style_options']['animated'] = 'easeInCubic';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Trustee */
  $handler->display->display_options['relationships']['relation_trustee_person_node']['id'] = 'relation_trustee_person_node';
  $handler->display->display_options['relationships']['relation_trustee_person_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_trustee_person_node']['field'] = 'relation_trustee_person_node';
  $handler->display->display_options['relationships']['relation_trustee_person_node']['ui_name'] = 'Trustee';
  $handler->display->display_options['relationships']['relation_trustee_person_node']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_trustee_person_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_trustee_person_node']['entity_deduplication_right'] = 0;
  /* Field: Trust unit, Role */
  $handler->display->display_options['fields']['rendered_entity_1']['id'] = 'rendered_entity_1';
  $handler->display->display_options['fields']['rendered_entity_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity_1']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity_1']['ui_name'] = 'Trust unit, Role';
  $handler->display->display_options['fields']['rendered_entity_1']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['rendered_entity_1']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity_1']['view_mode'] = 'only_title';
  $handler->display->display_options['fields']['rendered_entity_1']['bypass_access'] = 0;
  /* Field: Accordion content */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['ui_name'] = 'Accordion content';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'accordion';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit position';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['delete_node']['element_class'] = 'delete-link';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete position';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_trustee_person_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Kaikki';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'position_of_trust' => 'position_of_trust',
  );

  /* Display: Accordion */
  $handler = $view->new_display('block', 'Accordion', 'accordion');
  $handler->display->display_options['display_description'] = 'List of positions in accordion';

  /* Display: Search result */
  $handler = $view->new_display('block', 'Search result', 'search');
  $handler->display->display_options['display_description'] = 'List of positions for search result display mode';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Trust unit, Role */
  $handler->display->display_options['fields']['rendered_entity_1']['id'] = 'rendered_entity_1';
  $handler->display->display_options['fields']['rendered_entity_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity_1']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity_1']['ui_name'] = 'Trust unit, Role';
  $handler->display->display_options['fields']['rendered_entity_1']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['rendered_entity_1']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity_1']['view_mode'] = 'only_title';
  $handler->display->display_options['fields']['rendered_entity_1']['bypass_access'] = 0;
  $translatables['kada_positions_of_trust'] = array(
    t('Master'),
    t('Positions of trust'),
    t('more'),
    t('Apply'),
    t('Palauta oletusarvoihin'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Trustee person'),
    t('Edit position'),
    t('Delete position'),
    t('Kaikki'),
    t('Accordion'),
    t('List of positions in accordion'),
    t('Search result'),
    t('List of positions for search result display mode'),
  );
  $export['kada_positions_of_trust'] = $view;

  $view = new view();
  $view->name = 'kada_trust_units';
  $view->description = 'A view to emulate Drupal core\'s handling of taxonomy/term.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KADA Trust units';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Palauta oletusarvoihin';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Trustee */
  $handler->display->display_options['relationships']['relation_trustee_person_node']['id'] = 'relation_trustee_person_node';
  $handler->display->display_options['relationships']['relation_trustee_person_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_trustee_person_node']['field'] = 'relation_trustee_person_node';
  $handler->display->display_options['relationships']['relation_trustee_person_node']['ui_name'] = 'Trustee';
  $handler->display->display_options['relationships']['relation_trustee_person_node']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_trustee_person_node']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_trustee_person_node']['entity_deduplication_right'] = 0;
  /* Relationship: Deputy member */
  $handler->display->display_options['relationships']['field_deputy_member_target_id']['id'] = 'field_deputy_member_target_id';
  $handler->display->display_options['relationships']['field_deputy_member_target_id']['table'] = 'field_data_field_deputy_member';
  $handler->display->display_options['relationships']['field_deputy_member_target_id']['field'] = 'field_deputy_member_target_id';
  $handler->display->display_options['relationships']['field_deputy_member_target_id']['ui_name'] = 'Deputy member';
  $handler->display->display_options['relationships']['field_deputy_member_target_id']['label'] = 'Deputy member';
  /* Relationship: Role */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['ui_name'] = 'Role';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'rooli';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'trustee_role' => 'trustee_role',
    'scald_authors' => 0,
    'scald_tags' => 0,
    'accessibility' => 0,
    'district' => 0,
    'event_types' => 0,
    'keywords' => 0,
    'office' => 0,
    'political_party' => 0,
    'target_audience' => 0,
    'theme' => 0,
    'trust_unit' => 0,
  );
  /* Field: Content: Person image */
  $handler->display->display_options['fields']['field_person_image']['id'] = 'field_person_image';
  $handler->display->display_options['fields']['field_person_image']['table'] = 'field_data_field_person_image';
  $handler->display->display_options['fields']['field_person_image']['field'] = 'field_person_image';
  $handler->display->display_options['fields']['field_person_image']['relationship'] = 'relation_trustee_person_node';
  $handler->display->display_options['fields']['field_person_image']['label'] = '';
  $handler->display->display_options['fields']['field_person_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_image']['type'] = 'sdl_editor_representation';
  $handler->display->display_options['fields']['field_person_image']['settings'] = array(
    'link' => '1',
  );
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'relation_trustee_person_node';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_first_name']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_first_name']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Content: Surname */
  $handler->display->display_options['fields']['field_surname']['id'] = 'field_surname';
  $handler->display->display_options['fields']['field_surname']['table'] = 'field_data_field_surname';
  $handler->display->display_options['fields']['field_surname']['field'] = 'field_surname';
  $handler->display->display_options['fields']['field_surname']['relationship'] = 'relation_trustee_person_node';
  $handler->display->display_options['fields']['field_surname']['label'] = '';
  $handler->display->display_options['fields']['field_surname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_surname']['alter']['text'] = '[field_first_name] [field_surname]';
  $handler->display->display_options['fields']['field_surname']['element_type'] = '0';
  $handler->display->display_options['fields']['field_surname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_surname']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['field_surname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_surname']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_surname']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Content: Role */
  $handler->display->display_options['fields']['field_trustee_role']['id'] = 'field_trustee_role';
  $handler->display->display_options['fields']['field_trustee_role']['table'] = 'field_data_field_trustee_role';
  $handler->display->display_options['fields']['field_trustee_role']['field'] = 'field_trustee_role';
  $handler->display->display_options['fields']['field_trustee_role']['label'] = '';
  $handler->display->display_options['fields']['field_trustee_role']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_trustee_role']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_trustee_role']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_trustee_role']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_trustee_role']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity_1']['id'] = 'rendered_entity_1';
  $handler->display->display_options['fields']['rendered_entity_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity_1']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity_1']['relationship'] = 'field_deputy_member_target_id';
  $handler->display->display_options['fields']['rendered_entity_1']['label'] = 'Deputy member';
  $handler->display->display_options['fields']['rendered_entity_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['rendered_entity_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['rendered_entity_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['rendered_entity_1']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity_1']['view_mode'] = 'only_title';
  $handler->display->display_options['fields']['rendered_entity_1']['bypass_access'] = 0;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
  /* Sort criterion: Content: Surname (field_surname) */
  $handler->display->display_options['sorts']['field_surname_value']['id'] = 'field_surname_value';
  $handler->display->display_options['sorts']['field_surname_value']['table'] = 'field_data_field_surname';
  $handler->display->display_options['sorts']['field_surname_value']['field'] = 'field_surname_value';
  $handler->display->display_options['sorts']['field_surname_value']['relationship'] = 'relation_trustee_person_node';
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Kaikki';
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'trust_unit' => 'trust_unit',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title'] = 'Kaikki';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['specify_validation'] = TRUE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'position_of_trust' => 'position_of_trust',
  );
  /* Filter criterion: Taxonomy term: Hide in listing (field_hide_in_listing) */
  $handler->display->display_options['filters']['field_hide_in_listing_value']['id'] = 'field_hide_in_listing_value';
  $handler->display->display_options['filters']['field_hide_in_listing_value']['table'] = 'field_data_field_hide_in_listing';
  $handler->display->display_options['filters']['field_hide_in_listing_value']['field'] = 'field_hide_in_listing_value';
  $handler->display->display_options['filters']['field_hide_in_listing_value']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['field_hide_in_listing_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_hide_in_listing_value']['value'] = array(
    1 => '1',
  );

  /* Display: Taxonomy Display */
  $handler = $view->new_display('block', 'Taxonomy Display', 'trust_units');
  $handler->display->display_options['display_description'] = 'For Taxonomy Display module';
  $translatables['kada_trust_units'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Palauta oletusarvoihin'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Trustee person'),
    t('Deputy member'),
    t('rooli'),
    t('[field_first_name] [field_surname]'),
    t('Kaikki'),
    t('%1'),
    t('Taxonomy Display'),
    t('For Taxonomy Display module'),
  );
  $export['kada_trust_units'] = $view;

  return $export;
}
