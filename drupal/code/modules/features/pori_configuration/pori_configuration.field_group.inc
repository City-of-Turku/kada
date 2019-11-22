<?php

/**
 * @file
 * pori_configuration.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pori_configuration_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_presentation|node|liftup|form';
  $field_group->group_name = 'group_presentation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'liftup';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Presentation',
    'weight' => '23',
    'children' => array(
      0 => 'field_presentation_link',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_presentation|node|liftup|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Presentation');

  return $field_groups;
}
