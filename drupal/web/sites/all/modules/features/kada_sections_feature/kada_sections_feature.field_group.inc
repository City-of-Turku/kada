<?php

/**
 * @file
 * kada_sections_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function kada_sections_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_liftups_1_3x4|node|section|form';
  $field_group->group_name = 'group_liftups_1_3x4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Liftups - 1-3x4',
    'weight' => '5',
    'children' => array(
      0 => 'field_liftup_1_3x4',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-liftups-1-3x4 field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_liftups_1_3x4|node|section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recommended_links|node|section|form';
  $field_group->group_name = 'group_recommended_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Recommended links',
    'weight' => '6',
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
  $field_groups['group_recommended_links|node|section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_footer|node|section|form';
  $field_group->group_name = 'group_section_footer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Footer',
    'weight' => '3',
    'children' => array(
      0 => 'field_contact_information',
      1 => 'field_section_footer',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-section-footer field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_section_footer|node|section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_visuals|node|section|form';
  $field_group->group_name = 'group_visuals';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Visuals',
    'weight' => '2',
    'children' => array(
      0 => 'field_color_palette',
      1 => 'field_main_image',
      2 => 'field_sharing_image',
      3 => 'field_site_logo',
      4 => 'field_news_title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-visuals field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_visuals|node|section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_widgets|node|section|form';
  $field_group->group_name = 'group_widgets';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Widgets',
    'weight' => '4',
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
  $field_groups['group_widgets|node|section|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Footer');
  t('Liftups - 1-3x4');
  t('Recommended links');
  t('Visuals');
  t('Widgets');

  return $field_groups;
}
