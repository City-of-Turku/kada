<?php
/**
 * @file
 * pori_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pori_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pori_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_context_default_contexts_alter().
 */
function pori_news_context_default_contexts_alter(&$data) {
  if (isset($data['news_list'])) {
    $data['news_list']->conditions['views'] = array(
      'values' => array(
        'pori_news:page' => 'pori_news:page',
      ),
    ); /* WAS: '' */
    $data['news_list']->description = 'News archive'; /* WAS: 'News archive/list' */
    unset($data['news_list']->conditions['path']);
    unset($data['news_list']->reactions['block']);
  }
}

/**
 * Implements hook_ds_field_settings_info_alter().
 */
function pori_news_ds_field_settings_info_alter(&$data) {
  if (isset($data['node|news_item|current'])) {
    $data['node|news_item|current']->settings['links']['weight'] = 4; /* WAS: 5 */
    $data['node|news_item|current']->settings['post_date']['weight'] = 1; /* WAS: 0 */
    $data['node|news_item|current']->settings['title']['weight'] = 2; /* WAS: 3 */
  }
  if (isset($data['node|news_item|full'])) {
    unset($data['node|news_item|full']->settings['service_links_displays_group']);
  }
}

/**
 * Implements hook_ds_layout_settings_info_alter().
 */
function pori_news_ds_layout_settings_info_alter(&$data) {
  if (isset($data['node|news_item|current'])) {
    $data['node|news_item|current']->settings['regions']['header'][0] = 'field_content_image'; /* WAS: 'post_date' */
    $data['node|news_item|current']->settings['regions']['header'][1] = 'post_date'; /* WAS: 'field_content_image' */
    $data['node|news_item|current']->settings['regions']['main'][2] = 'title'; /* WAS: '' */
    $data['node|news_item|current']->settings['regions']['main'][3] = 'field_lead_paragraph_long_text'; /* WAS: 'title' */
    $data['node|news_item|current']->settings['regions']['main'][4] = 'links'; /* WAS: 'field_lead_paragraph_long_text' */
    unset($data['node|news_item|current']->settings['fields']['field_vignette']);
    unset($data['node|news_item|current']->settings['regions']['header'][2]);
    unset($data['node|news_item|current']->settings['regions']['main'][5]);
  }
  if (isset($data['node|news_item|full'])) {
    $data['node|news_item|full']->settings['fields']['field_additional_info_link'] = 'additional_information'; /* WAS: '' */
    $data['node|news_item|full']->settings['fields']['field_contact_person'] = 'contact_information'; /* WAS: '' */
    $data['node|news_item|full']->settings['fields']['field_file_attachment'] = 'additional_information'; /* WAS: '' */
    $data['node|news_item|full']->settings['regions']['additional_information'] = array(
      6 => 'field_additional_info_link',
      7 => 'field_file_attachment',
    ); /* WAS: '' */
    $data['node|news_item|full']->settings['regions']['contact_information'] = array(
      8 => 'field_contact_person',
    ); /* WAS: '' */
    $data['node|news_item|full']->settings['regions']['main_content'][1] = 'field_lead_paragraph_long_text'; /* WAS: 'domain' */
    $data['node|news_item|full']->settings['regions']['main_content'][2] = 'field_content_image'; /* WAS: 'field_lead_paragraph_long_text' */
    $data['node|news_item|full']->settings['regions']['main_content'][3] = 'field_info_box'; /* WAS: 'field_content_image' */
    $data['node|news_item|full']->settings['regions']['main_content'][4] = 'body'; /* WAS: 'field_info_box' */
    $data['node|news_item|full']->settings['regions']['sidebar'][5] = 'field_keywords'; /* WAS: '' */
    $data['node|news_item|full']->settings['wrappers']['contact_information'] = 'div'; /* WAS: '' */
    unset($data['node|news_item|full']->settings['fields']['domain']);
    unset($data['node|news_item|full']->settings['fields']['field_district']);
    unset($data['node|news_item|full']->settings['fields']['service_links_displays_group']);
    unset($data['node|news_item|full']->settings['regions']['main_content'][5]);
    unset($data['node|news_item|full']->settings['regions']['main_content'][6]);
    unset($data['node|news_item|full']->settings['regions']['sidebar'][7]);
    unset($data['node|news_item|full']->settings['regions']['sidebar'][8]);
  }
}

/**
 * Implements hook_field_group_info_alter().
 */
function pori_news_field_group_info_alter(&$data) {
  if (isset($data['group_additional_information|node|news_item|form'])) {
    $data['group_additional_information|node|news_item|form']->data['children'][1] = 'field_contact_person'; /* WAS: 'field_file_attachment' */
    $data['group_additional_information|node|news_item|form']->data['children'][2] = 'field_file_attachment'; /* WAS: 'field_contact_person' */
  }
  if (isset($data['group_content|node|news_item|form'])) {
    $data['group_content|node|news_item|form']->data['children'][1] = 'field_content_image'; /* WAS: 'field_address' */
    $data['group_content|node|news_item|form']->data['children'][10] = 'field_visitpori_theme'; /* WAS: 'field_order_time' */
    $data['group_content|node|news_item|form']->data['children'][11] = 'flag'; /* WAS: 'field_related_content' */
    $data['group_content|node|news_item|form']->data['children'][12] = 'language'; /* WAS: 'field_target_audience' */
    $data['group_content|node|news_item|form']->data['children'][13] = 'title'; /* WAS: 'field_theme' */
    $data['group_content|node|news_item|form']->data['children'][2] = 'field_info_box'; /* WAS: 'field_contact_information' */
    $data['group_content|node|news_item|form']->data['children'][3] = 'field_keywords'; /* WAS: 'field_content_image' */
    $data['group_content|node|news_item|form']->data['children'][4] = 'field_lead_paragraph_long_text'; /* WAS: 'field_district' */
    $data['group_content|node|news_item|form']->data['children'][5] = 'field_liftup_width'; /* WAS: 'field_info_box' */
    $data['group_content|node|news_item|form']->data['children'][6] = 'field_order_time'; /* WAS: 'field_keywords' */
    $data['group_content|node|news_item|form']->data['children'][7] = 'field_target_audience'; /* WAS: 'field_lead_paragraph_long_text' */
    $data['group_content|node|news_item|form']->data['children'][8] = 'field_theme'; /* WAS: 'field_liftup_width' */
    $data['group_content|node|news_item|form']->data['children'][9] = 'field_vignette'; /* WAS: 'field_location' */
    unset($data['group_content|node|news_item|form']->data['children'][14]);
    unset($data['group_content|node|news_item|form']->data['children'][15]);
    unset($data['group_content|node|news_item|form']->data['children'][16]);
    unset($data['group_content|node|news_item|form']->data['children'][17]);
    unset($data['group_content|node|news_item|form']->data['children'][18]);
    unset($data['group_content|node|news_item|form']->data['children'][19]);
  }
  if (isset($data['group_liftup_header|node|news_item|current'])) {
    unset($data['group_liftup_header|node|news_item|current']);
  }
  if (isset($data['group_section|node|news_item|form'])) {
    $data['group_section|node|news_item|form']->data['weight'] = 2; /* WAS: 1 */
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function pori_news_field_default_field_instances_alter(&$data) {
  if (isset($data['node-news_item-body'])) {
    $data['node-news_item-body']['display']['full']['weight'] = 4; /* WAS: 5 */
    $data['node-news_item-body']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-news_item-field_address'])) {
    $data['node-news_item-field_address']['display']['default']['weight'] = 36; /* WAS: 13 */
    $data['node-news_item-field_address']['display']['full']['weight'] = 36; /* WAS: 31 */
    $data['node-news_item-field_address']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-news_item-field_contact_information'])) {
    $data['node-news_item-field_contact_information']['display']['default']['type'] = 'hidden'; /* WAS: 'entityreference_label' */
    $data['node-news_item-field_contact_information']['display']['default']['weight'] = 25; /* WAS: 16 */
    $data['node-news_item-field_contact_information']['display']['full']['weight'] = 26; /* WAS: 21 */
    $data['node-news_item-field_contact_information']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-news_item-field_contact_information']['widget']['weight'] = 16; /* WAS: 18 */
    unset($data['node-news_item-field_contact_information']['display']['default']['module']);
    unset($data['node-news_item-field_contact_information']['display']['default']['settings']['bypass_access']);
    unset($data['node-news_item-field_contact_information']['display']['default']['settings']['link']);
  }
  if (isset($data['node-news_item-field_content_image'])) {
    $data['node-news_item-field_content_image']['display']['default']['weight'] = 2; /* WAS: 3 */
    $data['node-news_item-field_content_image']['display']['full']['type'] = 'full'; /* WAS: 'main_content' */
    $data['node-news_item-field_content_image']['display']['full']['weight'] = 2; /* WAS: 3 */
    $data['node-news_item-field_content_image']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-news_item-field_content_image']['widget']['weight'] = 4; /* WAS: 3 */
  }
  if (isset($data['node-news_item-field_district'])) {
    $data['node-news_item-field_district']['display']['default']['type'] = 'hidden'; /* WAS: 'i18n_taxonomy_term_reference_link' */
    $data['node-news_item-field_district']['display']['default']['weight'] = 28; /* WAS: 7 */
    $data['node-news_item-field_district']['display']['full']['type'] = 'hidden'; /* WAS: 'i18n_taxonomy_term_reference_link' */
    $data['node-news_item-field_district']['display']['full']['weight'] = 24; /* WAS: 6 */
    $data['node-news_item-field_district']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    unset($data['node-news_item-field_district']['display']['default']['module']);
    unset($data['node-news_item-field_district']['display']['full']['module']);
  }
  if (isset($data['node-news_item-field_info_box'])) {
    $data['node-news_item-field_info_box']['display']['default']['weight'] = 3; /* WAS: 5 */
    $data['node-news_item-field_info_box']['display']['full']['weight'] = 3; /* WAS: 4 */
    $data['node-news_item-field_info_box']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-news_item-field_keywords'])) {
    $data['node-news_item-field_keywords']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
    $data['node-news_item-field_keywords']['display']['default']['weight'] = 5; /* WAS: 6 */
    $data['node-news_item-field_keywords']['display']['full']['weight'] = 5; /* WAS: 7 */
    $data['node-news_item-field_keywords']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-news_item-field_keywords']['widget']['weight'] = 7; /* WAS: 11 */
  }
  if (isset($data['node-news_item-field_lead_paragraph_long_text'])) {
    $data['node-news_item-field_lead_paragraph_long_text']['display']['default']['weight'] = 1; /* WAS: 0 */
    $data['node-news_item-field_lead_paragraph_long_text']['display']['full']['weight'] = 1; /* WAS: 2 */
    $data['node-news_item-field_lead_paragraph_long_text']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-news_item-field_liftup_width'])) {
    $data['node-news_item-field_liftup_width']['display']['default']['weight'] = 32; /* WAS: 8 */
    $data['node-news_item-field_liftup_width']['display']['full']['weight'] = 29; /* WAS: 24 */
    $data['node-news_item-field_liftup_width']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-news_item-field_liftup_width']['widget']['weight'] = 11; /* WAS: 16 */
  }
  if (isset($data['node-news_item-field_location'])) {
    $data['node-news_item-field_location']['display']['default']['weight'] = 35; /* WAS: 12 */
    $data['node-news_item-field_location']['display']['full']['weight'] = 35; /* WAS: 30 */
    $data['node-news_item-field_location']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-news_item-field_order_time'])) {
    $data['node-news_item-field_order_time']['display']['default']['weight'] = 31; /* WAS: 7 */
    $data['node-news_item-field_order_time']['display']['full']['weight'] = 32; /* WAS: 26 */
    $data['node-news_item-field_order_time']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-news_item-field_order_time']['widget']['weight'] = 13; /* WAS: 15 */
  }
  if (isset($data['node-news_item-field_related_content'])) {
    $data['node-news_item-field_related_content']['display']['default']['weight'] = 34; /* WAS: 11 */
    $data['node-news_item-field_related_content']['display']['full']['weight'] = 34; /* WAS: 29 */
    $data['node-news_item-field_related_content']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-news_item-field_related_content']['widget']['weight'] = 11; /* WAS: 7 */
  }
  if (isset($data['node-news_item-field_target_audience'])) {
    $data['node-news_item-field_target_audience']['display']['default']['type'] = 'hidden'; /* WAS: 'i18n_taxonomy_term_reference_link' */
    $data['node-news_item-field_target_audience']['display']['default']['weight'] = 27; /* WAS: 8 */
    $data['node-news_item-field_target_audience']['display']['full']['weight'] = 33; /* WAS: 28 */
    $data['node-news_item-field_target_audience']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-news_item-field_target_audience']['widget']['weight'] = 10; /* WAS: 8 */
    unset($data['node-news_item-field_target_audience']['display']['default']['module']);
  }
  if (isset($data['node-news_item-field_theme'])) {
    $data['node-news_item-field_theme']['display']['default']['weight'] = 37; /* WAS: 14 */
    $data['node-news_item-field_theme']['display']['full']['weight'] = 37; /* WAS: 32 */
    $data['node-news_item-field_theme']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-news_item-field_theme']['widget']['weight'] = 8; /* WAS: 9 */
  }
  if (isset($data['node-news_item-field_tweet_embed'])) {
    $data['node-news_item-field_tweet_embed']['display']['default']['type'] = 'hidden'; /* WAS: 'text_default' */
    $data['node-news_item-field_tweet_embed']['display']['default']['weight'] = 23; /* WAS: 15 */
    $data['node-news_item-field_tweet_embed']['display']['full']['weight'] = 27; /* WAS: 22 */
    $data['node-news_item-field_tweet_embed']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-news_item-field_tweet_embed']['widget']['weight'] = 17; /* WAS: 19 */
    unset($data['node-news_item-field_tweet_embed']['display']['default']['module']);
  }
  if (isset($data['node-news_item-field_vignette'])) {
    $data['node-news_item-field_vignette']['display']['default']['type'] = 'hidden'; /* WAS: 'text_default' */
    $data['node-news_item-field_vignette']['display']['default']['weight'] = 26; /* WAS: 9 */
    $data['node-news_item-field_vignette']['display']['full']['weight'] = 31; /* WAS: 25 */
    $data['node-news_item-field_vignette']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-news_item-field_vignette']['widget']['weight'] = 3; /* WAS: 4 */
    unset($data['node-news_item-field_vignette']['display']['default']['module']);
  }
  if (isset($data['node-news_item-field_visitpori_theme'])) {
    $data['node-news_item-field_visitpori_theme']['display']['default']['type'] = 'hidden'; /* WAS: 'i18n_taxonomy_term_reference_link' */
    $data['node-news_item-field_visitpori_theme']['display']['default']['weight'] = 24; /* WAS: 17 */
    $data['node-news_item-field_visitpori_theme']['display']['full']['weight'] = 25; /* WAS: 0 */
    $data['node-news_item-field_visitpori_theme']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-news_item-field_visitpori_theme']['widget']['weight'] = 9; /* WAS: 10 */
    unset($data['node-news_item-field_visitpori_theme']['display']['default']['module']);
  }
  if (isset($data['node-news_item-og_group_ref'])) {
    $data['node-news_item-og_group_ref']['display']['default']['weight'] = 33; /* WAS: 10 */
    $data['node-news_item-og_group_ref']['display']['full']['weight'] = 28; /* WAS: 23 */
    $data['node-news_item-og_group_ref']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function pori_news_strongarm_alter(&$data) {
  if (isset($data['field_bundle_settings_node__news_item'])) {
    $data['field_bundle_settings_node__news_item']->value['extra_fields']['display']['domain']['default']['visible'] = FALSE; /* WAS: TRUE */
    $data['field_bundle_settings_node__news_item']->value['extra_fields']['display']['language']['default']['visible'] = FALSE; /* WAS: TRUE */
    $data['field_bundle_settings_node__news_item']->value['extra_fields']['form']['domain']['weight'] = 4; /* WAS: 1 */
    $data['field_bundle_settings_node__news_item']->value['extra_fields']['form']['metatags']['weight'] = 5; /* WAS: 40 */
    $data['field_bundle_settings_node__news_item']->value['extra_fields']['form']['path']['weight'] = 6; /* WAS: 2 */
    $data['field_bundle_settings_node__news_item']->value['extra_fields']['form']['redirect']['weight'] = 7; /* WAS: 1 */
    $data['field_bundle_settings_node__news_item']->value['view_modes']['attraction_card_mosaic_item'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__news_item']->value['view_modes']['event_mosaic_item'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__news_item']->value['view_modes']['event_search_result'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__news_item']->value['view_modes']['live_results_search'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__news_item']->value['view_modes']['person_card'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__news_item']->value['view_modes']['product'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['node_options_news_item'])) {
    $data['node_options_news_item']->value[1] = 'revision'; /* WAS: '' */
  }
}
