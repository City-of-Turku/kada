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
  $field_group->identifier = 'group_accordion_item_2nd|node|attraction_card|full';
  $field_group->group_name = 'group_accordion_item_2nd';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'attraction_card';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_accordion';
  $field_group->data = array(
    'label' => 'Products',
    'weight' => '45',
    'children' => array(),
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
    'children' => array(),
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
    'weight' => '8',
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
      0 => 'field_attraction_info_box',
      1 => 'field_attraction_related_content',
      2 => 'field_description',
      3 => 'field_image',
      4 => 'field_lead_paragraph_et',
      5 => 'field_tweet_embed',
      6 => 'title_field',
      7 => 'language',
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
  $field_group->identifier = 'group_infobox|node|attraction_card|full';
  $field_group->group_name = 'group_infobox';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'attraction_card';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '4',
    'children' => array(
      0 => 'field_address_visiting',
      1 => 'field_phone',
      2 => 'field_website_et',
      3 => 'field_email',
      4 => 'field_public_transportation',
      5 => 'field_accessibility_ref',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Info',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'contact-info',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
        'required_fields' => 1,
      ),
      'formatter' => '',
    ),
  );
  $field_groups[''] = $field_group;

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
      5 => 'field_website_et',
      6 => 'field_email',
      7 => 'field_public_transportation',
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
      0 => 'field_attraction_category',
      1 => 'field_keywords_et',
      2 => 'field_target_audience',
      3 => 'field_accessibility_ref',
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
  t('Info');
  t('Location');
  t('Map');
  t('Products');
  t('Section');
  t('Taxonomy');

  return $field_groups;
}
