<?php
/**
 * @file
 * kada_some_content_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function kada_some_content_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_top|node|social_media_update|current';
  $field_group->group_name = 'group_top';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'social_media_update';
  $field_group->mode = 'current';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Top',
    'weight' => '0',
    'children' => array(
      0 => 'field_some_id',
      1 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Top',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'top',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_top|node|social_media_update|current'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Top');

  return $field_groups;
}
