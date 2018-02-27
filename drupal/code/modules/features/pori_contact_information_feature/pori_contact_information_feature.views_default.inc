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
  $view->base_table = 'node';
  $view->human_name = 'Pori - Phone book';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Phone book';
  $handler->display->display_options['css_class'] = 'person-card-list';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Organize';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Choose from taxonomies and/or from target groups the one you want and click "Use".',
          'format' => 'wysiwyg',
        ),
      ),
      'allow_secondary' => 1,
      'secondary_label' => 'Advanced search',
      'secondary_collapse_override' => '1',
    ),
    'field_office_tr_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 1,
        'is_secondary' => 1,
        'any_label' => 'Any',
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
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '102';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Content: Surname */
  $handler->display->display_options['fields']['field_surname']['id'] = 'field_surname';
  $handler->display->display_options['fields']['field_surname']['table'] = 'field_data_field_surname';
  $handler->display->display_options['fields']['field_surname']['field'] = 'field_surname';
  $handler->display->display_options['fields']['field_surname']['label'] = '';
  $handler->display->display_options['fields']['field_surname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_surname']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_employee_title']['id'] = 'field_employee_title';
  $handler->display->display_options['fields']['field_employee_title']['table'] = 'field_data_field_employee_title';
  $handler->display->display_options['fields']['field_employee_title']['field'] = 'field_employee_title';
  $handler->display->display_options['fields']['field_employee_title']['label'] = '';
  $handler->display->display_options['fields']['field_employee_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_employee_title']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email_single']['id'] = 'field_email_single';
  $handler->display->display_options['fields']['field_email_single']['table'] = 'field_data_field_email_single';
  $handler->display->display_options['fields']['field_email_single']['field'] = 'field_email_single';
  $handler->display->display_options['fields']['field_email_single']['label'] = '';
  $handler->display->display_options['fields']['field_email_single']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email_single']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email_single']['type'] = 'email_plain';
  /* Field: Content: Visiting address */
  $handler->display->display_options['fields']['field_visiting_address']['id'] = 'field_visiting_address';
  $handler->display->display_options['fields']['field_visiting_address']['table'] = 'field_data_field_visiting_address';
  $handler->display->display_options['fields']['field_visiting_address']['field'] = 'field_visiting_address';
  $handler->display->display_options['fields']['field_visiting_address']['label'] = '';
  $handler->display->display_options['fields']['field_visiting_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_visiting_address']['element_label_colon'] = FALSE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Field: Content: Mobile phone */
  $handler->display->display_options['fields']['field_mobile_phone']['id'] = 'field_mobile_phone';
  $handler->display->display_options['fields']['field_mobile_phone']['table'] = 'field_data_field_mobile_phone';
  $handler->display->display_options['fields']['field_mobile_phone']['field'] = 'field_mobile_phone';
  $handler->display->display_options['fields']['field_mobile_phone']['label'] = '';
  $handler->display->display_options['fields']['field_mobile_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mobile_phone']['element_label_colon'] = FALSE;
  /* Field: Content: Mobile phone work */
  $handler->display->display_options['fields']['field_mobile_phone_work']['id'] = 'field_mobile_phone_work';
  $handler->display->display_options['fields']['field_mobile_phone_work']['table'] = 'field_data_field_mobile_phone_work';
  $handler->display->display_options['fields']['field_mobile_phone_work']['field'] = 'field_mobile_phone_work';
  $handler->display->display_options['fields']['field_mobile_phone_work']['label'] = '';
  $handler->display->display_options['fields']['field_mobile_phone_work']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mobile_phone_work']['element_label_colon'] = FALSE;
  /* Field: Content: Phone switch */
  $handler->display->display_options['fields']['field_phone_switch']['id'] = 'field_phone_switch';
  $handler->display->display_options['fields']['field_phone_switch']['table'] = 'field_data_field_phone_switch';
  $handler->display->display_options['fields']['field_phone_switch']['field'] = 'field_phone_switch';
  $handler->display->display_options['fields']['field_phone_switch']['label'] = '';
  $handler->display->display_options['fields']['field_phone_switch']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone_switch']['element_label_colon'] = FALSE;
  /* Field: Content: Fax number */
  $handler->display->display_options['fields']['field_fax_number']['id'] = 'field_fax_number';
  $handler->display->display_options['fields']['field_fax_number']['table'] = 'field_data_field_fax_number';
  $handler->display->display_options['fields']['field_fax_number']['field'] = 'field_fax_number';
  $handler->display->display_options['fields']['field_fax_number']['label'] = '';
  $handler->display->display_options['fields']['field_fax_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fax_number']['element_label_colon'] = FALSE;
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_type'] = '0';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['rendered_entity']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'person_card';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Sort criterion: Content: Surname (field_surname) */
  $handler->display->display_options['sorts']['field_surname_value']['id'] = 'field_surname_value';
  $handler->display->display_options['sorts']['field_surname_value']['table'] = 'field_data_field_surname';
  $handler->display->display_options['sorts']['field_surname_value']['field'] = 'field_surname_value';
  /* Sort criterion: Content: First name (field_first_name) */
  $handler->display->display_options['sorts']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['sorts']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['sorts']['field_first_name_value']['field'] = 'field_first_name_value';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'allwords';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
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
    'field_first_name' => 'field_first_name',
    'field_surname' => 'field_surname',
    'field_fax_number' => 'field_fax_number',
    'field_mobile_phone' => 'field_mobile_phone',
    'field_mobile_phone_work' => 'field_mobile_phone_work',
    'field_phone' => 'field_phone',
    'field_phone_switch' => 'field_phone_switch',
    'field_employee_title' => 'field_employee_title',
    'field_visiting_address' => 'field_visiting_address',
    'field_email_single' => 'field_email_single',
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
    t('Organize'),
    t('Asc'),
    t('Desc'),
    t('Choose from taxonomies and/or from target groups the one you want and click "Use".'),
    t('Advanced search'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Page'),
  );
  $export['pori_phone_book'] = $view;

  return $export;
}
