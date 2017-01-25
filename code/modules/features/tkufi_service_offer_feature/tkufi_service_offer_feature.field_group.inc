<?php
/**
 * @file
 * tkufi_service_offer_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tkufi_service_offer_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|service_offer|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service_offer';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'field_description',
      1 => 'field_offered_service',
      2 => 'field_provided_at',
      3 => 'title_field',
      4 => 'field_fee',
      5 => 'field_precondition',
      6 => 'field_service_nc_id',
      7 => 'field_place_nc_id',
      8 => 'language',
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
  $field_groups['group_content|node|service_offer|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');

  return $field_groups;
}
