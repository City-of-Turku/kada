<?php
/**
 * @file
 * kada_contact_information_feature.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function kada_contact_information_feature_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|person|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'person';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'add_position_link' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'positions_of_trust' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_email_single' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'person__email',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_first_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<h1 class="person__name">',
        ),
      ),
    ),
    'field_person_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'person__image',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_surname' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '&nbsp;',
          'suffix' => '</h1>',
        ),
      ),
    ),
  );
  $export['node|person|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|person|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'person';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'add_position_link' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'person_phone' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'person__phone',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'positions_of_trust' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_email_single' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'person__email',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_employee_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'person__title',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_first_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<h1 class="person__name">',
        ),
      ),
    ),
    'field_person_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'person__image',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_surname' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '&nbsp;',
          'suffix' => '</h1>',
        ),
      ),
    ),
  );
  $export['node|person|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|person|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'person';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'positions_trust_search' => array(
      'weight' => '4',
      'label' => 'above',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Positions of trust',
        ),
      ),
    ),
    'field_person_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'person__image',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|person|search_result'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|position_of_trust|accordion';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'position_of_trust';
  $ds_fieldsetting->view_mode = 'accordion';
  $ds_fieldsetting->settings = array(
    'field_deputy_member' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|position_of_trust|accordion'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|position_of_trust|only_title';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'position_of_trust';
  $ds_fieldsetting->view_mode = 'only_title';
  $ds_fieldsetting->settings = array(
    'field_trust_unit' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'span',
          'suffix' => ', ',
        ),
      ),
    ),
    'field_trustee_role' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'span',
        ),
      ),
    ),
  );
  $export['node|position_of_trust|only_title'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|office|term_name';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'office';
  $ds_fieldsetting->view_mode = 'term_name';
  $ds_fieldsetting->settings = array(
    'name_field' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'span',
        ),
      ),
    ),
  );
  $export['taxonomy_term|office|term_name'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|trust_unit|default';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'trust_unit';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'name_field' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['taxonomy_term|trust_unit|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function kada_contact_information_feature_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'add_position_link';
  $ds_field->label = 'Add a position link';
  $ds_field->field_type = 3;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'person|*';
  $ds_field->properties = array();
  $export['add_position_link'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'person_phone';
  $ds_field->label = 'Person phone';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
if (!empty($entity->field_phone)) {
  print \'[node:field_phone]\';
}
elseif (!empty($entity->field_mobile_phone_work)) {
  print \'[node:field_mobile_phone_work]\';
}
elseif (!empty($entity->field_mobile_phone)) {
  print \'[node:field_mobile_phone]\';
}
elseif (!empty($entity->field_phone_switch)) {
  print \'[node:field_phone_switch]\';
}

?>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['person_phone'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'positions_of_trust';
  $ds_field->label = 'Positions of trust';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'person|full';
  $ds_field->properties = array(
    'block' => 'views|499fe49ef614901fe640a2778fb27fe7',
    'block_render' => '3',
  );
  $export['positions_of_trust'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function kada_contact_information_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|person|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'person';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_first_name',
        1 => 'field_surname',
        2 => 'field_person_image',
        3 => 'field_email_single',
        4 => 'group_htabs',
        5 => 'field_profession',
        6 => 'field_political_party',
        7 => 'field_mobile_phone',
        8 => 'positions_of_trust',
        9 => 'add_position_link',
        10 => 'field_employee_title',
        11 => 'field_office_tr',
        12 => 'field_task_description',
        13 => 'field_superior',
        14 => 'field_phone',
        15 => 'field_mobile_phone_work',
        16 => 'field_phone_switch',
        17 => 'group_employee',
        18 => 'group_trustee',
        19 => 'field_fax_number',
      ),
    ),
    'fields' => array(
      'field_first_name' => 'ds_content',
      'field_surname' => 'ds_content',
      'field_person_image' => 'ds_content',
      'field_email_single' => 'ds_content',
      'group_htabs' => 'ds_content',
      'field_profession' => 'ds_content',
      'field_political_party' => 'ds_content',
      'field_mobile_phone' => 'ds_content',
      'positions_of_trust' => 'ds_content',
      'add_position_link' => 'ds_content',
      'field_employee_title' => 'ds_content',
      'field_office_tr' => 'ds_content',
      'field_task_description' => 'ds_content',
      'field_superior' => 'ds_content',
      'field_phone' => 'ds_content',
      'field_mobile_phone_work' => 'ds_content',
      'field_phone_switch' => 'ds_content',
      'group_employee' => 'ds_content',
      'group_trustee' => 'ds_content',
      'field_fax_number' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|person|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|person|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'person';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_content_top',
        1 => 'field_task_description',
        2 => 'field_person_image',
        3 => 'group_content_bottom',
        4 => 'field_office_tr',
        5 => 'add_position_link',
        6 => 'field_visiting_address',
        7 => 'group_contact',
        8 => 'field_first_name',
        9 => 'field_assistant',
        10 => 'group_contact_detail',
        11 => 'field_surname',
        12 => 'field_superior',
        13 => 'field_employee_title',
        14 => 'group_employee',
        15 => 'group_trustee',
        16 => 'field_profession',
        17 => 'field_political_party',
        18 => 'field_street_address',
        19 => 'person_phone',
        20 => 'field_postal_code',
        21 => 'field_municipality',
        22 => 'field_email_single',
        23 => 'field_phone',
        24 => 'positions_of_trust',
        25 => 'field_mobile_phone_work',
        26 => 'field_mobile_phone',
        27 => 'field_phone_switch',
        28 => 'field_fax_number',
      ),
    ),
    'fields' => array(
      'group_content_top' => 'ds_content',
      'field_task_description' => 'ds_content',
      'field_person_image' => 'ds_content',
      'group_content_bottom' => 'ds_content',
      'field_office_tr' => 'ds_content',
      'add_position_link' => 'ds_content',
      'field_visiting_address' => 'ds_content',
      'group_contact' => 'ds_content',
      'field_first_name' => 'ds_content',
      'field_assistant' => 'ds_content',
      'group_contact_detail' => 'ds_content',
      'field_surname' => 'ds_content',
      'field_superior' => 'ds_content',
      'field_employee_title' => 'ds_content',
      'group_employee' => 'ds_content',
      'group_trustee' => 'ds_content',
      'field_profession' => 'ds_content',
      'field_political_party' => 'ds_content',
      'field_street_address' => 'ds_content',
      'person_phone' => 'ds_content',
      'field_postal_code' => 'ds_content',
      'field_municipality' => 'ds_content',
      'field_email_single' => 'ds_content',
      'field_phone' => 'ds_content',
      'positions_of_trust' => 'ds_content',
      'field_mobile_phone_work' => 'ds_content',
      'field_mobile_phone' => 'ds_content',
      'field_phone_switch' => 'ds_content',
      'field_fax_number' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|person|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|person|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'person';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'search_result_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'media' => array(
        0 => 'field_person_image',
      ),
      'main' => array(
        1 => 'field_employee_title',
        2 => 'field_task_description',
        3 => 'field_office_tr',
        4 => 'positions_trust_search',
      ),
    ),
    'fields' => array(
      'field_person_image' => 'media',
      'field_employee_title' => 'main',
      'field_task_description' => 'main',
      'field_office_tr' => 'main',
      'positions_trust_search' => 'main',
    ),
    'classes' => array(),
    'wrappers' => array(
      'media' => 'div',
      'main' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|person|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|position_of_trust|accordion';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'position_of_trust';
  $ds_layout->view_mode = 'accordion';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'domain',
        1 => 'field_trust_unit',
        2 => 'field_trustee_role',
        3 => 'field_periodic_duty_time',
        4 => 'field_deputy_member',
      ),
    ),
    'fields' => array(
      'domain' => 'ds_content',
      'field_trust_unit' => 'ds_content',
      'field_trustee_role' => 'ds_content',
      'field_periodic_duty_time' => 'ds_content',
      'field_deputy_member' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|position_of_trust|accordion'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|position_of_trust|only_title';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'position_of_trust';
  $ds_layout->view_mode = 'only_title';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'domain',
        1 => 'field_trust_unit',
        2 => 'field_trustee_role',
      ),
    ),
    'fields' => array(
      'domain' => 'ds_content',
      'field_trust_unit' => 'ds_content',
      'field_trustee_role' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|position_of_trust|only_title'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|office|term_name';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'office';
  $ds_layout->view_mode = 'term_name';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'name_field',
      ),
    ),
    'fields' => array(
      'name_field' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['taxonomy_term|office|term_name'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|political_party|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'political_party';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'name_field',
      ),
    ),
    'fields' => array(
      'name_field' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['taxonomy_term|political_party|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|trust_unit|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'trust_unit';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'name_field',
      ),
    ),
    'fields' => array(
      'name_field' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['taxonomy_term|trust_unit|default'] = $ds_layout;

  return $export;
}
