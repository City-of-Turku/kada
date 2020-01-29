<?php

/**
 * @file
 * kada_news_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function kada_news_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|news_item|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_content_image',
      2 => 'field_info_box',
      3 => 'field_keywords',
      4 => 'field_lead_paragraph_long_text',
      5 => 'field_liftup_width',
      6 => 'field_order_time',
      7 => 'field_target_audience',
      8 => 'field_theme',
      9 => 'field_vignette',
      10 => 'field_visitpori_theme',
      11 => 'field_businesspori_theme',
      12 => 'flag',
      13 => 'language',
      20 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-content field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_content|node|news_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section|node|news_item|form';
  $field_group->group_name = 'group_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section',
    'weight' => 2,
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
  $field_groups['group_section|node|news_item|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Section');

  return $field_groups;
}
