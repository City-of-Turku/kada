<?php
/**
 * @file
 * pori_news.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function pori_news_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: context
  $overrides["context.news_list.conditions|path"]["DELETED"] = TRUE;
  $overrides["context.news_list.conditions|views"] = array(
    'values' => array(
      'pori_news:page' => 'pori_news:page',
    ),
  );
  $overrides["context.news_list.description"] = 'News archive';
  $overrides["context.news_list.reactions|block"]["DELETED"] = TRUE;

  // Exported overrides for: ds_field_settings
  $overrides["ds_field_settings.node|news_item|current.settings|links|weight"] = 4;
  $overrides["ds_field_settings.node|news_item|current.settings|post_date|weight"] = 1;
  $overrides["ds_field_settings.node|news_item|current.settings|title|weight"] = 2;
  $overrides["ds_field_settings.node|news_item|full.settings|service_links_displays_group"]["DELETED"] = TRUE;

  // Exported overrides for: ds_layout_settings
  $overrides["ds_layout_settings.node|news_item|current.settings|fields|field_vignette"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.node|news_item|current.settings|regions|header|0"] = 'field_content_image';
  $overrides["ds_layout_settings.node|news_item|current.settings|regions|header|1"] = 'post_date';
  $overrides["ds_layout_settings.node|news_item|current.settings|regions|header|2"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.node|news_item|current.settings|regions|main|2"] = 'title';
  $overrides["ds_layout_settings.node|news_item|current.settings|regions|main|3"] = 'field_lead_paragraph_long_text';
  $overrides["ds_layout_settings.node|news_item|current.settings|regions|main|4"] = 'links';
  $overrides["ds_layout_settings.node|news_item|current.settings|regions|main|5"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.node|news_item|full.settings|fields|domain"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.node|news_item|full.settings|fields|field_additional_info_link"] = 'additional_information';
  $overrides["ds_layout_settings.node|news_item|full.settings|fields|field_contact_person"] = 'contact_information';
  $overrides["ds_layout_settings.node|news_item|full.settings|fields|field_district"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.node|news_item|full.settings|fields|field_file_attachment"] = 'additional_information';
  $overrides["ds_layout_settings.node|news_item|full.settings|fields|service_links_displays_group"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.node|news_item|full.settings|regions|additional_information"] = array(
    6 => 'field_additional_info_link',
    7 => 'field_file_attachment',
  );
  $overrides["ds_layout_settings.node|news_item|full.settings|regions|contact_information"] = array(
    8 => 'field_contact_person',
  );
  $overrides["ds_layout_settings.node|news_item|full.settings|regions|main_content|1"] = 'field_lead_paragraph_long_text';
  $overrides["ds_layout_settings.node|news_item|full.settings|regions|main_content|2"] = 'field_content_image';
  $overrides["ds_layout_settings.node|news_item|full.settings|regions|main_content|3"] = 'field_info_box';
  $overrides["ds_layout_settings.node|news_item|full.settings|regions|main_content|4"] = 'body';
  $overrides["ds_layout_settings.node|news_item|full.settings|regions|main_content|5"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.node|news_item|full.settings|regions|main_content|6"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.node|news_item|full.settings|regions|sidebar|5"] = 'field_keywords';
  $overrides["ds_layout_settings.node|news_item|full.settings|regions|sidebar|7"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.node|news_item|full.settings|regions|sidebar|8"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.node|news_item|full.settings|wrappers|contact_information"] = 'div';

  // Exported overrides for: field_group
  $overrides["field_group.group_additional_information|node|news_item|form.data|children|1"] = 'field_contact_person';
  $overrides["field_group.group_additional_information|node|news_item|form.data|children|2"] = 'field_file_attachment';
  $overrides["field_group.group_content|node|news_item|form.data|children|1"] = 'field_content_image';
  $overrides["field_group.group_content|node|news_item|form.data|children|10"] = 'field_visitpori_theme';
  $overrides["field_group.group_content|node|news_item|form.data|children|11"] = 'flag';
  $overrides["field_group.group_content|node|news_item|form.data|children|12"] = 'language';
  $overrides["field_group.group_content|node|news_item|form.data|children|13"] = 'title';
  $overrides["field_group.group_content|node|news_item|form.data|children|14"]["DELETED"] = TRUE;
  $overrides["field_group.group_content|node|news_item|form.data|children|15"]["DELETED"] = TRUE;
  $overrides["field_group.group_content|node|news_item|form.data|children|16"]["DELETED"] = TRUE;
  $overrides["field_group.group_content|node|news_item|form.data|children|17"]["DELETED"] = TRUE;
  $overrides["field_group.group_content|node|news_item|form.data|children|18"]["DELETED"] = TRUE;
  $overrides["field_group.group_content|node|news_item|form.data|children|19"]["DELETED"] = TRUE;
  $overrides["field_group.group_content|node|news_item|form.data|children|2"] = 'field_info_box';
  $overrides["field_group.group_content|node|news_item|form.data|children|3"] = 'field_keywords';
  $overrides["field_group.group_content|node|news_item|form.data|children|4"] = 'field_lead_paragraph_long_text';
  $overrides["field_group.group_content|node|news_item|form.data|children|5"] = 'field_liftup_width';
  $overrides["field_group.group_content|node|news_item|form.data|children|6"] = 'field_order_time';
  $overrides["field_group.group_content|node|news_item|form.data|children|7"] = 'field_target_audience';
  $overrides["field_group.group_content|node|news_item|form.data|children|8"] = 'field_theme';
  $overrides["field_group.group_content|node|news_item|form.data|children|9"] = 'field_vignette';
  $overrides["field_group.group_liftup_header|node|news_item|current.group_liftup_header|node|news_item|current"]["DELETED"] = TRUE;
  $overrides["field_group.group_section|node|news_item|form.data|weight"] = 2;

  // Exported overrides for: field_instance
  $overrides["field_instance.node-news_item-body.display|full|weight"] = 4;
  $overrides["field_instance.node-news_item-body.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-news_item-field_address.display|default|weight"] = 36;
  $overrides["field_instance.node-news_item-field_address.display|full|weight"] = 36;
  $overrides["field_instance.node-news_item-field_address.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-news_item-field_contact_information.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-news_item-field_contact_information.display|default|settings|bypass_access"]["DELETED"] = TRUE;
  $overrides["field_instance.node-news_item-field_contact_information.display|default|settings|link"]["DELETED"] = TRUE;
  $overrides["field_instance.node-news_item-field_contact_information.display|default|type"] = 'hidden';
  $overrides["field_instance.node-news_item-field_contact_information.display|default|weight"] = 25;
  $overrides["field_instance.node-news_item-field_contact_information.display|full|weight"] = 26;
  $overrides["field_instance.node-news_item-field_contact_information.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-news_item-field_contact_information.widget|weight"] = 16;
  $overrides["field_instance.node-news_item-field_content_image.display|default|weight"] = 2;
  $overrides["field_instance.node-news_item-field_content_image.display|full|type"] = 'content_full';
  $overrides["field_instance.node-news_item-field_content_image.display|full|weight"] = 2;
  $overrides["field_instance.node-news_item-field_content_image.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-news_item-field_content_image.widget|weight"] = 4;
  $overrides["field_instance.node-news_item-field_district.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-news_item-field_district.display|default|type"] = 'hidden';
  $overrides["field_instance.node-news_item-field_district.display|default|weight"] = 28;
  $overrides["field_instance.node-news_item-field_district.display|full|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-news_item-field_district.display|full|type"] = 'hidden';
  $overrides["field_instance.node-news_item-field_district.display|full|weight"] = 24;
  $overrides["field_instance.node-news_item-field_district.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-news_item-field_info_box.display|default|weight"] = 3;
  $overrides["field_instance.node-news_item-field_info_box.display|full|weight"] = 3;
  $overrides["field_instance.node-news_item-field_info_box.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-news_item-field_keywords.display|default|label"] = 'hidden';
  $overrides["field_instance.node-news_item-field_keywords.display|default|weight"] = 5;
  $overrides["field_instance.node-news_item-field_keywords.display|full|weight"] = 5;
  $overrides["field_instance.node-news_item-field_keywords.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-news_item-field_keywords.widget|weight"] = 7;
  $overrides["field_instance.node-news_item-field_lead_paragraph_long_text.display|default|weight"] = 1;
  $overrides["field_instance.node-news_item-field_lead_paragraph_long_text.display|full|weight"] = 1;
  $overrides["field_instance.node-news_item-field_lead_paragraph_long_text.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-news_item-field_liftup_width.display|default|weight"] = 32;
  $overrides["field_instance.node-news_item-field_liftup_width.display|full|weight"] = 29;
  $overrides["field_instance.node-news_item-field_liftup_width.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-news_item-field_liftup_width.widget|weight"] = 11;
  $overrides["field_instance.node-news_item-field_location.display|default|weight"] = 35;
  $overrides["field_instance.node-news_item-field_location.display|full|weight"] = 35;
  $overrides["field_instance.node-news_item-field_location.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-news_item-field_order_time.display|default|weight"] = 31;
  $overrides["field_instance.node-news_item-field_order_time.display|full|weight"] = 32;
  $overrides["field_instance.node-news_item-field_order_time.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-news_item-field_order_time.widget|weight"] = 13;
  $overrides["field_instance.node-news_item-field_related_content.display|default|weight"] = 34;
  $overrides["field_instance.node-news_item-field_related_content.display|full|weight"] = 34;
  $overrides["field_instance.node-news_item-field_related_content.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-news_item-field_related_content.widget|weight"] = 11;
  $overrides["field_instance.node-news_item-field_target_audience.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-news_item-field_target_audience.display|default|type"] = 'hidden';
  $overrides["field_instance.node-news_item-field_target_audience.display|default|weight"] = 27;
  $overrides["field_instance.node-news_item-field_target_audience.display|full|weight"] = 33;
  $overrides["field_instance.node-news_item-field_target_audience.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-news_item-field_target_audience.widget|weight"] = 10;
  $overrides["field_instance.node-news_item-field_theme.display|default|weight"] = 37;
  $overrides["field_instance.node-news_item-field_theme.display|full|weight"] = 37;
  $overrides["field_instance.node-news_item-field_theme.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-news_item-field_theme.widget|weight"] = 8;
  $overrides["field_instance.node-news_item-field_tweet_embed.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-news_item-field_tweet_embed.display|default|type"] = 'hidden';
  $overrides["field_instance.node-news_item-field_tweet_embed.display|default|weight"] = 23;
  $overrides["field_instance.node-news_item-field_tweet_embed.display|full|weight"] = 27;
  $overrides["field_instance.node-news_item-field_tweet_embed.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-news_item-field_tweet_embed.widget|weight"] = 17;
  $overrides["field_instance.node-news_item-field_vignette.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-news_item-field_vignette.display|default|type"] = 'hidden';
  $overrides["field_instance.node-news_item-field_vignette.display|default|weight"] = 26;
  $overrides["field_instance.node-news_item-field_vignette.display|full|weight"] = 31;
  $overrides["field_instance.node-news_item-field_vignette.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-news_item-field_vignette.widget|weight"] = 3;
  $overrides["field_instance.node-news_item-field_visitpori_theme.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-news_item-field_visitpori_theme.display|default|type"] = 'hidden';
  $overrides["field_instance.node-news_item-field_visitpori_theme.display|default|weight"] = 24;
  $overrides["field_instance.node-news_item-field_visitpori_theme.display|full|weight"] = 25;
  $overrides["field_instance.node-news_item-field_visitpori_theme.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-news_item-field_visitpori_theme.widget|weight"] = 9;
  $overrides["field_instance.node-news_item-og_group_ref.display|default|weight"] = 33;
  $overrides["field_instance.node-news_item-og_group_ref.display|full|weight"] = 28;
  $overrides["field_instance.node-news_item-og_group_ref.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );

  // Exported overrides for: variable
  $overrides["variable.field_bundle_settings_node__news_item.value|extra_fields|display|domain|default|visible"] = FALSE;
  $overrides["variable.field_bundle_settings_node__news_item.value|extra_fields|display|language|default|visible"] = FALSE;
  $overrides["variable.field_bundle_settings_node__news_item.value|extra_fields|form|domain|weight"] = 4;
  $overrides["variable.field_bundle_settings_node__news_item.value|extra_fields|form|metatags|weight"] = 5;
  $overrides["variable.field_bundle_settings_node__news_item.value|extra_fields|form|path|weight"] = 6;
  $overrides["variable.field_bundle_settings_node__news_item.value|extra_fields|form|redirect|weight"] = 7;
  $overrides["variable.field_bundle_settings_node__news_item.value|view_modes|attraction_card_mosaic_item"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__news_item.value|view_modes|event_mosaic_item"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__news_item.value|view_modes|event_search_result"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__news_item.value|view_modes|live_results_search"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__news_item.value|view_modes|person_card"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__news_item.value|view_modes|product"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.node_options_news_item.value|1"] = 'revision';

 return $overrides;
}
