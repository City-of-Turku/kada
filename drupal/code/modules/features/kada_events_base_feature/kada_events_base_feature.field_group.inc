<?php
/**
 * @file
 * kada_events_base_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function kada_events_base_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|event|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'field_description',
      1 => 'field_event_date',
      2 => 'field_event_types',
      3 => 'field_keywords_et',
      4 => 'field_lead_paragraph_et',
      5 => 'title_field',
      6 => 'field_target_audience',
      7 => 'field_date_repeat',
      8 => 'field_date_repeat_extra',
      9 => 'field_date_type',
      10 => 'field_date_vignette',
      11 => 'field_super_event',
      12 => 'language',
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
  $field_groups['group_content|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_details|node|event|form';
  $field_group->group_name = 'group_event_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Web and social media',
    'weight' => '5',
    'children' => array(
      0 => 'field_related_content_et',
      1 => 'field_event_facebook_page_et',
      2 => 'field_event_twitter_page_et',
      3 => 'field_website_et',
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
  $field_groups['group_event_details|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_image|node|event|form';
  $field_group->group_name = 'group_event_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '4',
    'children' => array(
      0 => 'field_content_image_et',
      1 => 'field_content_image_ext',
      2 => 'field_content_image_ext_rights',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-image field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_event_image|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_location|node|event|form';
  $field_group->group_name = 'group_event_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event location',
    'weight' => '1',
    'children' => array(
      0 => 'field_address',
      1 => 'field_district',
      2 => 'field_event_address_extension',
      3 => 'field_location',
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
  $field_groups['group_event_location|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_organizer|node|event|form';
  $field_group->group_name = 'group_event_organizer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organizer info',
    'weight' => '2',
    'children' => array(
      0 => 'field_event_organizer_et',
      1 => 'field_email',
      2 => 'field_phone',
      3 => 'field_contact_email',
      4 => 'field_contact_phone_number',
      5 => 'field_person_in_charge',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Organizer info',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_event_organizer|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_participation|node|event|form';
  $field_group->group_name = 'group_event_participation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Participation details',
    'weight' => '3',
    'children' => array(
      0 => 'field_event_free_admission',
      1 => 'field_event_price_et',
      2 => 'field_event_signup_url_et',
      3 => 'field_event_tickets_url_et',
      4 => 'field_last_day_to_sign_up',
      5 => 'field_event_turnout',
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
  $field_groups['group_event_participation|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section|node|event|form';
  $field_group->group_name = 'group_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section',
    'weight' => '6',
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
  $field_groups['group_section|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_technic_details|node|event|form';
  $field_group->group_name = 'group_technic_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Technic details',
    'weight' => '7',
    'children' => array(
      0 => 'field_event_import_id',
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
  $field_groups['group_technic_details|node|event|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Event location');
  t('Image');
  t('Organizer info');
  t('Participation details');
  t('Section');
  t('Technic details');
  t('Web and social media');

  return $field_groups;
}
