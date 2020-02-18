<?php

/**
 * @file
 * pori_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pori_news_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_information|node|news_item|form';
  $field_group->group_name = 'group_additional_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional information',
    'weight' => '1',
    'children' => array(
      0 => 'field_additional_info_link',
      1 => 'field_contact_person',
      2 => 'field_file_attachment',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-additional-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_additional_information|node|news_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_unused|node|news_item|form';
  $field_group->group_name = 'group_unused';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Unused',
    'weight' => '3',
    'children' => array(
      0 => 'field_address',
      1 => 'field_contact_information',
      2 => 'field_district',
      3 => 'field_location',
      4 => 'field_related_content',
      5 => 'field_tweet_embed',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-unused field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_unused|node|news_item|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional information');
  t('Unused');

  return $field_groups;
}
