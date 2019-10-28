<?php

/**
 * @file
 * kada_liftups_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function kada_liftups_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|liftup|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'liftup';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_address',
      2 => 'field_district',
      3 => 'field_keywords',
      4 => 'field_link_to_content',
      5 => 'field_location',
      6 => 'field_main_image',
      7 => 'field_secondary_image',
      8 => 'field_target_audience',
      9 => 'field_theme',
      10 => 'field_vignette',
      11 => 'field_visible_title',
      12 => 'field_visitpori_theme',
      13 => 'field_businesspori_theme',
      14 => 'field_small_liftup_banner_color',
      15 => 'field_liftup_video',
      16 => 'language',
      17 => 'title',
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
  $field_groups['group_content|node|liftup|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section|node|liftup|form';
  $field_group->group_name = 'group_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'liftup';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section',
    'weight' => '2',
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
  $field_groups['group_section|node|liftup|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Section');

  return $field_groups;
}
