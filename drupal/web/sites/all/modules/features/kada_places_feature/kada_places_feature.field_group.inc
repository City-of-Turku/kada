<?php

/**
 * @file
 * kada_places_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function kada_places_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_accessibility|node|place|form';
  $field_group->group_name = 'group_accessibility';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'place';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Accessibility',
    'weight' => '1',
    'children' => array(
      0 => 'field_accessibility',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-accessibility field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_accessibility|node|place|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_billing_address|node|place|form';
  $field_group->group_name = 'group_billing_address';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'place';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Billing address',
    'weight' => '17',
    'children' => array(
      0 => 'field_billing_address',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_billing_address|node|place|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|place|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'place';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'field_description',
      1 => 'field_location',
      2 => 'title_field',
      3 => 'field_availability',
      4 => 'field_email',
      5 => 'field_fax_number',
      6 => 'field_main_image',
      7 => 'field_person_responsible',
      8 => 'field_phone',
      9 => 'field_phone_switch',
      10 => 'field_website_et',
      11 => 'field_read_more',
      12 => 'group_billing_address',
      13 => 'group_postal_address',
      14 => 'group_street_address',
      15 => 'group_visiting_address',
      17 => 'field_sorting_point',
      18 => 'field_responsibility',
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
  $field_groups['group_content|node|place|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_postal_address|node|place|form';
  $field_group->group_name = 'group_postal_address';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'place';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Postal address',
    'weight' => '16',
    'children' => array(
      0 => 'field_postal_address',
      1 => 'field_address_postal',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_postal_address|node|place|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_services|node|place|form';
  $field_group->group_name = 'group_services';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'place';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Services',
    'weight' => '3',
    'children' => array(
      0 => 'field_service_offer',
      1 => 'field_nc_id',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-services field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_services|node|place|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_street_address|node|place|form';
  $field_group->group_name = 'group_street_address';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'place';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Street address',
    'weight' => '14',
    'children' => array(
      1 => 'field_address_street',
      2 => 'field_municipality_term',
      3 => 'field_district',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_street_address|node|place|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_visiting_address|node|place|form';
  $field_group->group_name = 'group_visiting_address';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'place';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Visiting address',
    'weight' => '15',
    'children' => array(
      0 => 'field_address_visiting',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_visiting_address|node|place|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Accessibility');
  t('Billing address');
  t('Content');
  t('Postal address');
  t('Services');
  t('Street address');
  t('Visiting address');

  return $field_groups;
}
