<?php
/**
 * @file
 * pori_attraction_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pori_attraction_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_websites|node|attraction_card|form';
  $field_group->group_name = 'group_websites';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'attraction_card';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Websites',
    'weight' => '2',
    'children' => array(
      0 => 'field_website_et',
      1 => 'field_websites',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-websites field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_websites|node|attraction_card|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Websites');

  return $field_groups;
}
