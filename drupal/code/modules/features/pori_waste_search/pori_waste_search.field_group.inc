<?php
/**
 * @file
 * pori_waste_search.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pori_waste_search_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_container|taxonomy_term|waste_type|full';
  $field_group->group_name = 'group_image_container';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'waste_type';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image container',
    'weight' => '0',
    'children' => array(
      0 => 'field_images',
      1 => 'duplicate_images',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image container',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'slick-slider-container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_image_container|taxonomy_term|waste_type|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Image container');

  return $field_groups;
}
