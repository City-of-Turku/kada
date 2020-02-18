<?php

/**
 * @file
 * pori_facts_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pori_facts_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fact_appearance|node|fact|form';
  $field_group->group_name = 'group_fact_appearance';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Appearance',
    'weight' => '4',
    'children' => array(
      0 => 'field_fact_frame',
      1 => 'field_fact_color',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-fact-appearance field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_fact_appearance|node|fact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section|node|fact|form';
  $field_group->group_name = 'group_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sivusto',
    'weight' => '9',
    'children' => array(
      0 => 'og_group_ref',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-section field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_section|node|fact|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Appearance');
  t('Sivusto');

  return $field_groups;
}
