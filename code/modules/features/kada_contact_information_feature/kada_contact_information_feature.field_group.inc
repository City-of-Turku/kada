<?php
/**
 * @file
 * kada_contact_information_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function kada_contact_information_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_detail|node|person|full';
  $field_group->group_name = 'group_contact_detail';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_content_bottom';
  $field_group->data = array(
    'label' => 'More ways to contact',
    'weight' => '4',
    'children' => array(
      0 => 'field_fax_number',
      1 => 'field_mobile_phone',
      2 => 'field_mobile_phone_work',
      3 => 'field_phone',
      4 => 'field_phone_switch',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'More ways to contact',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'person__contact',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_contact_detail|node|person|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|person|full';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_content_bottom';
  $field_group->data = array(
    'label' => 'Contact information',
    'weight' => '3',
    'children' => array(
      0 => 'field_email_single',
      1 => 'person_phone',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contact information',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'person__contact',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_contact|node|person|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_bottom|node|person|full';
  $field_group->group_name = 'group_content_bottom';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content bottom',
    'weight' => '2',
    'children' => array(
      0 => 'group_contact',
      1 => 'group_employee',
      2 => 'group_trustee',
      3 => 'group_contact_detail',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content bottom',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'person__content-bottom',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_content_bottom|node|person|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_top|node|person|full';
  $field_group->group_name = 'group_content_top';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content top',
    'weight' => '0',
    'children' => array(
      0 => 'field_employee_title',
      1 => 'field_first_name',
      2 => 'field_surname',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content top',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'person__content-top',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_content_top|node|person|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|person|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '8',
    'children' => array(
      0 => 'group_employee',
      1 => 'group_trustee',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $field_groups['group_content|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|position_of_trust|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'position_of_trust';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '0',
    'children' => array(
      0 => 'field_periodic_duty_time',
      1 => 'field_trustee',
      2 => 'field_trust_unit',
      3 => 'field_trustee_role',
      4 => 'title_field',
      5 => 'field_deputy_member',
      6 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_content|node|position_of_trust|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_employee|node|person|default';
  $field_group->group_name = 'group_employee';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_htabs';
  $field_group->data = array(
    'label' => 'City employee',
    'weight' => '18',
    'children' => array(
      0 => 'field_employee_title',
      1 => 'field_fax_number',
      2 => 'field_mobile_phone_work',
      3 => 'field_phone',
      4 => 'field_phone_switch',
      5 => 'field_task_description',
      6 => 'field_office_tr',
      7 => 'field_superior',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-employee field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_employee|node|person|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_employee|node|person|form';
  $field_group->group_name = 'group_employee';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Employee',
    'weight' => '16',
    'children' => array(
      0 => 'field_employee_title',
      1 => 'field_fax_number',
      2 => 'field_mobile_phone_work',
      3 => 'field_phone',
      4 => 'field_phone_switch',
      5 => 'field_task_description',
      6 => 'field_visiting_address',
      7 => 'field_office_tr',
      8 => 'field_superior',
      9 => 'field_assistant',
      10 => 'field_assistant_id',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_employee|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_employee|node|person|full';
  $field_group->group_name = 'group_employee';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_content_bottom';
  $field_group->data = array(
    'label' => 'City employee',
    'weight' => '5',
    'children' => array(
      0 => 'field_task_description',
      1 => 'field_visiting_address',
      2 => 'field_office_tr',
      3 => 'field_superior',
      4 => 'field_assistant',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'City employee',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'person__employee',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_employee|node|person|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_htabs|node|person|default';
  $field_group->group_name = 'group_htabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Information',
    'weight' => '4',
    'children' => array(
      0 => 'group_employee',
      1 => 'group_trustee',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-htabs field-group-htabs',
      ),
    ),
  );
  $field_groups['group_htabs|node|person|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_information|node|person|form';
  $field_group->group_name = 'group_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Information',
    'weight' => '13',
    'children' => array(
      0 => 'field_nc_id',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_information|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nc_data|node|position_of_trust|form';
  $field_group->group_name = 'group_nc_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'position_of_trust';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'NC Data',
    'weight' => '1',
    'children' => array(
      0 => 'field_nc_id',
      1 => 'field_object_id',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nc-data field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nc_data|node|position_of_trust|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_trustee|node|person|default';
  $field_group->group_name = 'group_trustee';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_htabs';
  $field_group->data = array(
    'label' => 'Trustee',
    'weight' => '19',
    'children' => array(
      0 => 'field_mobile_phone',
      1 => 'field_political_party',
      2 => 'field_profession',
      3 => 'add_position_link',
      4 => 'positions_of_trust',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-trustee field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_trustee|node|person|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_trustee|node|person|form';
  $field_group->group_name = 'group_trustee';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Trustee',
    'weight' => '17',
    'children' => array(
      0 => 'field_mobile_phone',
      1 => 'field_political_party',
      2 => 'field_profession',
      3 => 'field_municipality',
      4 => 'field_postal_code',
      5 => 'field_street_address',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_trustee|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_trustee|node|person|full';
  $field_group->group_name = 'group_trustee';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_content_bottom';
  $field_group->data = array(
    'label' => 'Trustee',
    'weight' => '6',
    'children' => array(
      0 => 'field_political_party',
      1 => 'field_profession',
      2 => 'field_municipality',
      3 => 'field_postal_code',
      4 => 'field_street_address',
      5 => 'positions_of_trust',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Trustee',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'person__trustee',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_trustee|node|person|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('City employee');
  t('Contact information');
  t('Content bottom');
  t('Content top');
  t('Details');
  t('Employee');
  t('Information');
  t('More ways to contact');
  t('NC Data');
  t('Trustee');

  return $field_groups;
}
