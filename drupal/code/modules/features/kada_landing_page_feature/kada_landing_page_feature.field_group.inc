<?php

/**
 * @file
 * kada_landing_page_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function kada_landing_page_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|landing_page|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'field_district',
      1 => 'field_main_image',
      2 => 'field_related_content',
      3 => 'field_target_audience',
      4 => 'field_topic',
      5 => 'field_keywords',
      6 => 'language',
      7 => 'title',
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
  $field_groups['group_content|node|landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recommended_links|node|landing_page|form';
  $field_group->group_name = 'group_recommended_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Recommended links',
    'weight' => '2',
    'children' => array(
      0 => 'field_link_to_content_multiple',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-recommended-links field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_recommended_links|node|landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_widgets|node|landing_page|form';
  $field_group->group_name = 'group_widgets';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Widgets',
    'weight' => '1',
    'children' => array(
      0 => 'field_feed_tabs',
      1 => 'field_widget_before_content',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-widgets field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_widgets|node|landing_page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Recommended links');
  t('Widgets');

  return $field_groups;
}
