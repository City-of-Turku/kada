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
      1 => 'field_address',
      2 => 'field_contact_information',
      3 => 'field_content_image',
      4 => 'field_district',
      5 => 'field_info_box',
      6 => 'field_keywords',
      7 => 'field_lead_paragraph_long_text',
      8 => 'field_liftup_width',
      9 => 'field_location',
      10 => 'field_order_time',
      11 => 'field_related_content',
      12 => 'field_target_audience',
      13 => 'field_theme',
      14 => 'field_tweet_embed',
      15 => 'field_vignette',
      16 => 'field_visitpori_theme',
      17 => 'flag',
      18 => 'language',
      19 => 'title',
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
  $field_group->identifier = 'group_liftup_header|node|news_item|current';
  $field_group->group_name = 'group_liftup_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_item';
  $field_group->mode = 'current';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Liftup header',
    'weight' => '24',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Liftup header',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'liftup-box__header',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_liftup_header|node|news_item|current'] = $field_group;

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
    'weight' => '1',
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
  t('Liftup header');
  t('Section');

  return $field_groups;
}
