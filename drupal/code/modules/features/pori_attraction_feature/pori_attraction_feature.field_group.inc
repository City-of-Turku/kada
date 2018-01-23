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
  $field_group->identifier = 'group_groups_audiance|node|attraction_card|form';
  $field_group->group_name = 'group_groups_audiance';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'attraction_card';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Groups audiance',
    'weight' => '5',
    'children' => array(
      0 => 'og_group_ref',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-groups-audiance field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_groups_audiance|node|attraction_card|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_images|node|attraction_card|form';
  $field_group->group_name = 'group_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'attraction_card';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '1',
    'children' => array(
      0 => 'field_images',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-images field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_images|node|attraction_card|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_information|node|attraction_card|form';
  $field_group->group_name = 'group_location_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'attraction_card';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location and accessibility information',
    'weight' => '2',
    'children' => array(
      0 => 'field_accessibility_ref',
      1 => 'field_address_visiting',
      2 => 'field_email',
      3 => 'field_location',
      4 => 'field_location_name',
      5 => 'field_phone',
      6 => 'field_provided_at',
      7 => 'field_public_transportation',
      8 => 'field_websites',
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
  $field_groups['group_location_information|node|attraction_card|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_content|node|attraction_card|form';
  $field_group->group_name = 'group_main_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'attraction_card';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main content',
    'weight' => '0',
    'children' => array(
      0 => 'field_attraction_category',
      1 => 'field_description',
      2 => 'field_keywords_et',
      3 => 'field_lead_paragraph_et',
      4 => 'field_target_audience',
      5 => 'title_field',
      6 => 'field_online_shop',
      7 => 'language',
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
  $field_groups['group_main_content|node|attraction_card|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_misc|node|attraction_card|form';
  $field_group->group_name = 'group_misc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'attraction_card';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Misc',
    'weight' => '4',
    'children' => array(
      0 => 'field_ac_ad_zoneid',
      1 => 'field_attraction_info_box',
      2 => 'field_tweet_embed',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-misc field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_misc|node|attraction_card|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|attraction_card|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'attraction_card';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '3',
    'children' => array(
      0 => 'field_attraction_related_content',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-related-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_related_content|node|attraction_card|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_websites|node|attraction_card|form';
  $field_group->group_name = 'group_websites';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'attraction_card';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Websites',
    'weight' => '2',
    'children' => array(
      0 => 'field_website_et',
      1 => 'field_websites',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-websites field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_websites|node|attraction_card|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Groups audiance');
  t('Images');
  t('Location and accessibility information');
  t('Main content');
  t('Misc');
  t('Related content');
  t('Websites');

  return $field_groups;
}
