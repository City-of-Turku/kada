<?php
/**
 * @file
 * tkufi_attraction_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tkufi_attraction_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_accordion_item_2nd|node|attraction_card|full';
  $field_group->group_name = 'group_accordion_item_2nd';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'attraction_card';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_accordion';
  $field_group->data = array(
    'label' => 'Products',
    'weight' => '45',
    'children' => array(
      0 => 'field_product_liftup',
      1 => 'field_attraction_product_desc',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Products',
      'instance_settings' => array(
        'classes' => 'group-accordion-item-2nd field-group-accordion-item',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_accordion_item_2nd|node|attraction_card|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_accordion_item|node|attraction_card|full';
  $field_group->group_name = 'group_accordion_item';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'attraction_card';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_accordion';
  $field_group->data = array(
    'label' => 'Map',
    'weight' => '43',
    'children' => array(
      0 => 'map_attraction',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Map',
      'instance_settings' => array(
        'classes' => 'group-accordion-item field-group-accordion-item',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_accordion_item|node|attraction_card|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_accordion|node|attraction_card|full';
  $field_group->group_name = 'group_accordion';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'attraction_card';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Accordion',
    'weight' => '36',
    'children' => array(
      0 => 'group_accordion_item_2nd',
      1 => 'group_accordion_item',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-accordion field-group-accordion',
        'effect' => 'bounceslide',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_accordion|node|attraction_card|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ads|node|attraction_card|form';
  $field_group->group_name = 'group_ads';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'attraction_card';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ads',
    'weight' => '3',
    'children' => array(
      0 => 'field_ac_ad_zoneid',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ads field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ads|node|attraction_card|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|attraction_card|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'attraction_card';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'field_image',
      1 => 'field_social_media_facebook',
      2 => 'field_description',
      3 => 'field_lead_paragraph_et',
      4 => 'title_field',
      5 => 'field_tweet_embed',
      6 => 'field_attraction_info_box',
      7 => 'field_attraction_related_content',
      8 => 'field_product_liftup',
      9 => 'field_attraction_product_desc',
      10 => 'language',
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
  $field_groups['group_content|node|attraction_card|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|attraction_card|form';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'attraction_card';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '1',
    'children' => array(
      0 => 'field_address_visiting',
      1 => 'field_location',
      2 => 'field_location_name',
      3 => 'field_phone',
      4 => 'field_provided_at',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_location|node|attraction_card|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site|node|attraction_card|form';
  $field_group->group_name = 'group_site';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'attraction_card';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section',
    'weight' => '4',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'domain',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-site field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_site|node|attraction_card|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|node|attraction_card|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'attraction_card';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '2',
    'children' => array(
      0 => 'field_keywords_et',
      1 => 'field_attraction_category',
      2 => 'field_target_audience',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-taxonomy field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_taxonomy|node|attraction_card|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Accordion');
  t('Ads');
  t('Content');
  t('Location');
  t('Map');
  t('Products');
  t('Section');
  t('Taxonomy');

  return $field_groups;
}
