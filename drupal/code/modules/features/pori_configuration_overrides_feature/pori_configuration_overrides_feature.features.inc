<?php
/**
 * @file
 * pori_configuration_overrides_feature.features.inc
 */

/**
 * Implements hook_context_default_contexts_alter().
 */
function pori_configuration_overrides_feature_context_default_contexts_alter(&$data) {
  if (isset($data['footer_menu'])) {
    $data['footer_menu']->conditions['context']['values']['news_list'] = 'news_list'; /* WAS: '' */
    $data['footer_menu']->conditions['context']['values']['person_list'] = 'person_list'; /* WAS: '' */
    $data['footer_menu']->conditions['context']['values']['search_page'] = 'search_page'; /* WAS: '' */
    $data['footer_menu']->reactions['block']['blocks']['menu_block-29'] = array(
      'module' => 'menu_block',
      'delta' => 29,
      'region' => 'footer',
      'weight' => -7,
    ); /* WAS: '' */
  }
  if (isset($data['footer_navigation'])) {
    unset($data['footer_navigation']->reactions['block']);
  }
  if (isset($data['language_switcher'])) {
    $data['language_switcher']->conditions['context']['values']['news_list'] = 'news_list'; /* WAS: '' */
    $data['language_switcher']->conditions['context']['values']['person_list'] = 'person_list'; /* WAS: '' */
    $data['language_switcher']->conditions['context']['values']['search_page'] = 'search_page'; /* WAS: '' */
    $data['language_switcher']->conditions['context']['values']['visitpori_domain'] = 'visitpori_domain'; /* WAS: '' */
    $data['language_switcher']->reactions['block']['blocks']['locale-language']['region'] = 'branding'; /* WAS: 'navigation' */
    $data['language_switcher']->reactions['block']['blocks']['locale-language']['weight'] = -9; /* WAS: -50 */
    $data['language_switcher']->reactions['block']['blocks']['views--exp-main_search-page'] = array(
      'module' => 'views',
      'delta' => '-exp-main_search-page',
      'region' => 'branding',
      'weight' => -10,
    ); /* WAS: '' */
    unset($data['language_switcher']->conditions['context']['values']['section_menus']);
  }
  if (isset($data['main_menu'])) {
    $data['main_menu']->conditions['context']['values']['news_list'] = 'news_list'; /* WAS: '' */
    $data['main_menu']->conditions['context']['values']['person_list'] = 'person_list'; /* WAS: '' */
    $data['main_menu']->conditions['context']['values']['search_page'] = 'search_page'; /* WAS: '' */
    $data['main_menu']->reactions['block']['blocks']['menu_block-30'] = array(
      'module' => 'menu_block',
      'delta' => 30,
      'region' => 'navigation',
      'weight' => -7,
    ); /* WAS: '' */
  }
  if (isset($data['sitewide_en'])) {
    $data['sitewide_en']->reactions['block']['blocks']['block-1']['weight'] = -40; /* WAS: -10 */
    unset($data['sitewide_en']->conditions['context']);
  }
  if (isset($data['sitewide_fi'])) {
    $data['sitewide_fi']->reactions['block']['blocks']['block-2']['weight'] = -40; /* WAS: -10 */
    unset($data['sitewide_fi']->conditions['context']);
  }
  if (isset($data['sitewide_sv'])) {
    unset($data['sitewide_sv']->conditions['context']);
  }
  if (isset($data['top_menu'])) {
    $data['top_menu']->conditions['context']['values']['news_list'] = 'news_list'; /* WAS: '' */
    $data['top_menu']->conditions['context']['values']['person_list'] = 'person_list'; /* WAS: '' */
    $data['top_menu']->conditions['context']['values']['search_page'] = 'search_page'; /* WAS: '' */
    $data['top_menu']->conditions['domain'] = array(
      'values' => array(
        'pori_fi' => 'pori_fi',
      ),
    ); /* WAS: '' */
    $data['top_menu']->reactions['block']['blocks']['menu_block-31'] = array(
      'module' => 'menu_block',
      'delta' => 31,
      'region' => 'navigation_top',
      'weight' => -7,
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_ds_field_settings_info_alter().
 */
function pori_configuration_overrides_feature_ds_field_settings_info_alter(&$data) {
  if (isset($data['node|page|default'])) {
    $data['node|page|default']->settings['places_for_services']['weight'] = 5; /* WAS: 4 */
  }
  if (isset($data['node|place|teaser'])) {
    unset($data['node|place|teaser']->settings['node_link']);
  }
}

/**
 * Implements hook_ds_layout_settings_info_alter().
 */
function pori_configuration_overrides_feature_ds_layout_settings_info_alter(&$data) {
  if (isset($data['node|page|default'])) {
    $data['node|page|default']->settings['fields']['field_contact_person'] = 'contact_information'; /* WAS: '' */
    $data['node|page|default']->settings['regions']['after_content'][10] = 'field_subpage'; /* WAS: '' */
    $data['node|page|default']->settings['regions']['after_content'][9] = 'field_topic'; /* WAS: 'field_subpage' */
    $data['node|page|default']->settings['regions']['contact_information'] = array(
      8 => 'field_contact_person',
    ); /* WAS: '' */
    $data['node|page|default']->settings['wrappers']['contact_information'] = 'div'; /* WAS: '' */
    unset($data['node|page|default']->settings['regions']['after_content'][8]);
  }
  if (isset($data['node|place|teaser'])) {
    $data['node|place|teaser']->settings['fields']['field_read_more'] = 'main_content'; /* WAS: '' */
    $data['node|place|teaser']->settings['regions']['main_content'][6] = 'field_read_more'; /* WAS: 'node_link' */
    unset($data['node|place|teaser']->settings['fields']['node_link']);
  }
  if (isset($data['scald_atom|image|content_full'])) {
    $data['scald_atom|image|content_full']->settings['fields']['atom'] = 'main'; /* WAS: '' */
    $data['scald_atom|image|content_full']->settings['layout_disable_css'] = FALSE; /* WAS: '' */
    $data['scald_atom|image|content_full']->settings['regions']['main'][0] = 'atom'; /* WAS: 'scald_thumbnail' */
    unset($data['scald_atom|image|content_full']->settings['fields']['scald_thumbnail']);
  }
  if (isset($data['scald_atom|image|content_half'])) {
    $data['scald_atom|image|content_half']->settings['fields']['atom'] = 'main'; /* WAS: '' */
    $data['scald_atom|image|content_half']->settings['layout_disable_css'] = FALSE; /* WAS: '' */
    $data['scald_atom|image|content_half']->settings['regions']['main'][0] = 'atom'; /* WAS: 'scald_thumbnail' */
    unset($data['scald_atom|image|content_half']->settings['fields']['scald_thumbnail']);
  }
  if (isset($data['taxonomy_term|accessibility|default'])) {
    $data['taxonomy_term|accessibility|default']->layout = 'accessibility_layout'; /* WAS: 'minimal_layout' */
    $data['taxonomy_term|accessibility|default']->settings['fields']['description_field'] = 'main_content'; /* WAS: '' */
    $data['taxonomy_term|accessibility|default']->settings['layout_disable_css'] = FALSE; /* WAS: '' */
    $data['taxonomy_term|accessibility|default']->settings['regions']['main_content'][1] = 'description_field'; /* WAS: 'field_icon' */
    $data['taxonomy_term|accessibility|default']->settings['wrappers']['main_content'] = 'div'; /* WAS: '' */
    unset($data['taxonomy_term|accessibility|default']->settings['fields']['field_icon']);
    unset($data['taxonomy_term|accessibility|default']->settings['wrappers']['ds_content']);
  }
}

/**
 * Implements hook_field_default_field_bases_alter().
 */
function pori_configuration_overrides_feature_field_default_field_bases_alter(&$data) {
  if (isset($data['field_accessibility'])) {
    $data['field_accessibility']['settings']['hide_initial_item'] = FALSE; /* WAS: '' */
  }
}

/**
 * Implements hook_field_group_info_alter().
 */
function pori_configuration_overrides_feature_field_group_info_alter(&$data) {
  if (isset($data['group_additional_information|node|page|form'])) {
    $data['group_additional_information|node|page|form']->data['children'][2] = 'field_contact_person'; /* WAS: '' */
  }
  if (isset($data['group_content|node|place|form'])) {
    $data['group_content|node|place|form']->data['children'][11] = 'field_read_more'; /* WAS: 'language' */
    $data['group_content|node|place|form']->data['children'][17] = 'field_sorting_point'; /* WAS: '' */
    $data['group_content|node|place|form']->data['children'][18] = 'field_responsibility'; /* WAS: '' */
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function pori_configuration_overrides_feature_field_default_field_instances_alter(&$data) {
  if (isset($data['node-event-field_keywords_et'])) {
    $data['node-event-field_keywords_et']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-event-field_keywords_et']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'allow'; /* WAS: '' */
  }
  if (isset($data['node-event-field_related_content_et'])) {
    $data['node-event-field_related_content_et']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-event-field_related_content_et']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'deny'; /* WAS: '' */
  }
  if (isset($data['node-feed_import_facebook-field_keywords'])) {
    $data['node-feed_import_facebook-field_keywords']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-feed_import_facebook-field_keywords']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'deny'; /* WAS: '' */
  }
  if (isset($data['node-feed_import_instagram-field_keywords'])) {
    $data['node-feed_import_instagram-field_keywords']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-feed_import_instagram-field_keywords']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'deny'; /* WAS: '' */
  }
  if (isset($data['node-feed_import_twitter-field_keywords'])) {
    $data['node-feed_import_twitter-field_keywords']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-feed_import_twitter-field_keywords']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'deny'; /* WAS: '' */
  }
  if (isset($data['node-feed_import_youtube_channel-field_keywords'])) {
    $data['node-feed_import_youtube_channel-field_keywords']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-feed_import_youtube_channel-field_keywords']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'deny'; /* WAS: '' */
  }
  if (isset($data['node-landing_page-field_keywords'])) {
    $data['node-landing_page-field_keywords']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-landing_page-field_keywords']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'deny'; /* WAS: '' */
  }
  if (isset($data['node-landing_page-field_related_content'])) {
    $data['node-landing_page-field_related_content']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-landing_page-field_related_content']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'deny'; /* WAS: '' */
  }
  if (isset($data['node-landing_page-field_topic'])) {
    $data['node-landing_page-field_topic']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-landing_page-field_topic']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'deny'; /* WAS: '' */
  }
  if (isset($data['node-landing_page-field_widget_before_content'])) {
    $data['node-landing_page-field_widget_before_content']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-landing_page-field_widget_before_content']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'deny'; /* WAS: '' */
  }
  if (isset($data['node-liftup-body'])) {
    $data['node-liftup-body']['display']['small_liftup_banner'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 2,
    ); /* WAS: '' */
  }
  if (isset($data['node-liftup-field_address'])) {
    $data['node-liftup-field_address']['display']['small_liftup_banner'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 18,
    ); /* WAS: '' */
  }
  if (isset($data['node-liftup-field_district'])) {
    $data['node-liftup-field_district']['display']['small_liftup_banner'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 27,
    ); /* WAS: '' */
  }
  if (isset($data['node-liftup-field_keywords'])) {
    $data['node-liftup-field_keywords']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-liftup-field_keywords']['display']['small_liftup_banner'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 31,
    ); /* WAS: '' */
    $data['node-liftup-field_keywords']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'deny'; /* WAS: '' */
  }
  if (isset($data['node-liftup-field_link_to_content'])) {
    $data['node-liftup-field_link_to_content']['display']['small_liftup_banner'] = array(
      'label' => 'hidden',
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_title_plain',
      'weight' => 1,
    ); /* WAS: '' */
  }
  if (isset($data['node-liftup-field_location'])) {
    $data['node-liftup-field_location']['display']['small_liftup_banner'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 26,
    ); /* WAS: '' */
  }
  if (isset($data['node-liftup-field_main_image'])) {
    $data['node-liftup-field_main_image']['display']['small_liftup_banner'] = array(
      'label' => 'hidden',
      'module' => 'atom_reference',
      'settings' => array(
        'link' => 0,
        'override' => 0,
      ),
      'type' => 'small_liftup_banner',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-liftup-field_secondary_image'])) {
    $data['node-liftup-field_secondary_image']['display']['small_liftup_banner'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 25,
    ); /* WAS: '' */
  }
  if (isset($data['node-liftup-field_target_audience'])) {
    $data['node-liftup-field_target_audience']['display']['small_liftup_banner'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 24,
    ); /* WAS: '' */
  }
  if (isset($data['node-liftup-field_theme'])) {
    $data['node-liftup-field_theme']['display']['small_liftup_banner'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 23,
    ); /* WAS: '' */
  }
  if (isset($data['node-liftup-field_vignette'])) {
    $data['node-liftup-field_vignette']['display']['small_liftup_banner'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 22,
    ); /* WAS: '' */
  }
  if (isset($data['node-liftup-field_visible_title'])) {
    $data['node-liftup-field_visible_title']['display']['small_liftup_banner'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 21,
    ); /* WAS: '' */
  }
  if (isset($data['node-liftup-field_visitpori_theme'])) {
    $data['node-liftup-field_visitpori_theme']['display']['small_liftup_banner'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 19,
    ); /* WAS: '' */
  }
  if (isset($data['node-liftup-og_group_ref'])) {
    $data['node-liftup-og_group_ref']['display']['small_liftup_banner'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 20,
    ); /* WAS: '' */
  }
  if (isset($data['node-news_item-field_keywords'])) {
    $data['node-news_item-field_keywords']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'deny'; /* WAS: '' */
  }
  if (isset($data['node-news_item-field_related_content'])) {
    $data['node-news_item-field_related_content']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'deny'; /* WAS: '' */
  }
  if (isset($data['node-page-field_contact_information'])) {
    $data['node-page-field_contact_information']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-page-field_contact_information']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'deny'; /* WAS: '' */
  }
  if (isset($data['node-page-field_contact_person'])) {
    $data['node-page-field_contact_person']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'deny'; /* WAS: '' */
  }
  if (isset($data['node-page-field_keywords'])) {
    $data['node-page-field_keywords']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-page-field_keywords']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'deny'; /* WAS: '' */
  }
  if (isset($data['node-page-field_related_content'])) {
    $data['node-page-field_related_content']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-page-field_related_content']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'deny'; /* WAS: '' */
    unset($data['node-page-field_related_content']['widget']['settings']['references_dialog_add']);
    unset($data['node-page-field_related_content']['widget']['settings']['references_dialog_edit']);
    unset($data['node-page-field_related_content']['widget']['settings']['references_dialog_search']);
    unset($data['node-page-field_related_content']['widget']['settings']['references_dialog_search_view']);
  }
  if (isset($data['node-page-field_subpage'])) {
    $data['node-page-field_subpage']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-page-field_subpage']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'deny'; /* WAS: '' */
  }
  if (isset($data['node-page-field_topic'])) {
    $data['node-page-field_topic']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-page-field_topic']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'deny'; /* WAS: '' */
  }
  if (isset($data['node-page-field_widget_before_content'])) {
    $data['node-page-field_widget_before_content']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-page-field_widget_before_content']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'deny'; /* WAS: '' */
  }
  if (isset($data['node-person-field_account_name'])) {
    $data['node-person-field_account_name']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-person-field_account_name']['display']['person_card'] = array(
      'label' => 'above',
      'module' => 'title',
      'settings' => array(
        'title_class' => '',
        'title_link' => '',
        'title_style' => '',
      ),
      'type' => 'title_linked',
      'weight' => 11,
    ); /* WAS: '' */
  }
  if (isset($data['node-person-field_assistant'])) {
    $data['node-person-field_assistant']['display']['default']['settings']['bypass_access'] = FALSE; /* WAS: '' */
    $data['node-person-field_assistant']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-person-field_assistant']['display']['person_card'] = array(
      'label' => 'above',
      'module' => 'entityreference',
      'settings' => array(
        'bypass_access' => FALSE,
        'link' => FALSE,
      ),
      'type' => 'entityreference_label',
      'weight' => 26,
    ); /* WAS: '' */
    $data['node-person-field_assistant']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'deny'; /* WAS: '' */
  }
  if (isset($data['node-person-field_email_single'])) {
    $data['node-person-field_email_single']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-person-field_email_single']['display']['person_card'] = array(
      'label' => 'hidden',
      'module' => 'email',
      'settings' => array(),
      'type' => 'email_default',
      'weight' => 5,
    ); /* WAS: '' */
  }
  if (isset($data['node-person-field_employee_title'])) {
    $data['node-person-field_employee_title']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-person-field_employee_title']['display']['person_card'] = array(
      'label' => 'hidden',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 1,
    ); /* WAS: '' */
  }
  if (isset($data['node-person-field_fax_number'])) {
    $data['node-person-field_fax_number']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-person-field_fax_number']['display']['person_card'] = array(
      'label' => 'inline',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 10,
    ); /* WAS: '' */
  }
  if (isset($data['node-person-field_first_name'])) {
    $data['node-person-field_first_name']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-person-field_first_name']['display']['person_card'] = array(
      'label' => 'above',
      'module' => 'title',
      'settings' => array(
        'title_class' => '',
        'title_link' => '',
        'title_style' => '',
      ),
      'type' => 'title_linked',
      'weight' => 38,
    ); /* WAS: '' */
  }
  if (isset($data['node-person-field_mobile_phone'])) {
    $data['node-person-field_mobile_phone']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-person-field_mobile_phone']['display']['person_card'] = array(
      'label' => 'hidden',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 6,
    ); /* WAS: '' */
  }
  if (isset($data['node-person-field_mobile_phone_work'])) {
    $data['node-person-field_mobile_phone_work']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-person-field_mobile_phone_work']['display']['person_card'] = array(
      'label' => 'hidden',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 8,
    ); /* WAS: '' */
  }
  if (isset($data['node-person-field_municipality'])) {
    $data['node-person-field_municipality']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-person-field_municipality']['display']['person_card'] = array(
      'label' => 'above',
      'module' => 'title',
      'settings' => array(
        'title_class' => '',
        'title_link' => '',
        'title_style' => '',
      ),
      'type' => 'title_linked',
      'weight' => 37,
    ); /* WAS: '' */
  }
  if (isset($data['node-person-field_office_tr'])) {
    $data['node-person-field_office_tr']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-person-field_office_tr']['display']['person_card'] = array(
      'label' => 'hidden',
      'module' => 'i18n_taxonomy',
      'settings' => array(),
      'type' => 'i18n_taxonomy_term_reference_plain',
      'weight' => 3,
    ); /* WAS: '' */
  }
  if (isset($data['node-person-field_person_image'])) {
    $data['node-person-field_person_image']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-person-field_person_image']['display']['person_card'] = array(
      'label' => 'above',
      'module' => 'atom_reference',
      'settings' => array(
        'link' => 0,
        'override' => 0,
      ),
      'type' => 'title',
      'weight' => 36,
    ); /* WAS: '' */
  }
  if (isset($data['node-person-field_person_type'])) {
    $data['node-person-field_person_type']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-person-field_person_type']['display']['person_card'] = array(
      'label' => 'above',
      'module' => 'i18n_field',
      'settings' => array(),
      'type' => 'i18n_list_default',
      'weight' => 35,
    ); /* WAS: '' */
  }
  if (isset($data['node-person-field_phone'])) {
    $data['node-person-field_phone']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-person-field_phone']['display']['person_card'] = array(
      'label' => 'hidden',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 7,
    ); /* WAS: '' */
  }
  if (isset($data['node-person-field_phone_switch'])) {
    $data['node-person-field_phone_switch']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-person-field_phone_switch']['display']['person_card'] = array(
      'label' => 'hidden',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 9,
    ); /* WAS: '' */
  }
  if (isset($data['node-person-field_political_party'])) {
    $data['node-person-field_political_party']['display']['default']['settings']['bypass_access'] = FALSE; /* WAS: '' */
    $data['node-person-field_political_party']['display']['full']['settings']['bypass_access'] = FALSE; /* WAS: '' */
    $data['node-person-field_political_party']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-person-field_political_party']['display']['person_card'] = array(
      'label' => 'above',
      'module' => 'entityreference',
      'settings' => array(
        'bypass_access' => FALSE,
        'link' => FALSE,
      ),
      'type' => 'entityreference_label',
      'weight' => 34,
    ); /* WAS: '' */
    $data['node-person-field_political_party']['display']['teaser']['settings']['bypass_access'] = FALSE; /* WAS: '' */
    $data['node-person-field_political_party']['widget']['settings']['content_taxonomy_opt_groups'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-person-field_postal_code'])) {
    $data['node-person-field_postal_code']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-person-field_postal_code']['display']['person_card'] = array(
      'label' => 'above',
      'module' => 'title',
      'settings' => array(
        'title_class' => '',
        'title_link' => '',
        'title_style' => '',
      ),
      'type' => 'title_linked',
      'weight' => 33,
    ); /* WAS: '' */
  }
  if (isset($data['node-person-field_profession'])) {
    $data['node-person-field_profession']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-person-field_profession']['display']['person_card'] = array(
      'label' => 'hidden',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 2,
    ); /* WAS: '' */
  }
  if (isset($data['node-person-field_street_address'])) {
    $data['node-person-field_street_address']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-person-field_street_address']['display']['person_card'] = array(
      'label' => 'above',
      'module' => 'title',
      'settings' => array(
        'title_class' => '',
        'title_link' => '',
        'title_style' => '',
      ),
      'type' => 'title_linked',
      'weight' => 32,
    ); /* WAS: '' */
  }
  if (isset($data['node-person-field_superior'])) {
    $data['node-person-field_superior']['display']['default']['settings']['bypass_access'] = FALSE; /* WAS: '' */
    $data['node-person-field_superior']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-person-field_superior']['display']['person_card'] = array(
      'label' => 'above',
      'module' => 'entityreference',
      'settings' => array(
        'bypass_access' => FALSE,
        'link' => FALSE,
      ),
      'type' => 'entityreference_label',
      'weight' => 31,
    ); /* WAS: '' */
    $data['node-person-field_superior']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'deny'; /* WAS: '' */
  }
  if (isset($data['node-person-field_surname'])) {
    $data['node-person-field_surname']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-person-field_surname']['display']['person_card'] = array(
      'label' => 'above',
      'module' => 'title',
      'settings' => array(
        'title_class' => '',
        'title_link' => '',
        'title_style' => '',
      ),
      'type' => 'title_linked',
      'weight' => 30,
    ); /* WAS: '' */
  }
  if (isset($data['node-person-field_task_description'])) {
    $data['node-person-field_task_description']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-person-field_task_description']['display']['person_card'] = array(
      'label' => 'above',
      'module' => 'title',
      'settings' => array(
        'title_class' => '',
        'title_link' => '',
        'title_style' => '',
      ),
      'type' => 'title_linked',
      'weight' => 29,
    ); /* WAS: '' */
  }
  if (isset($data['node-person-field_visiting_address'])) {
    $data['node-person-field_visiting_address']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-person-field_visiting_address']['display']['person_card'] = array(
      'label' => 'hidden',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 4,
    ); /* WAS: '' */
  }
  if (isset($data['node-person-title_field'])) {
    $data['node-person-title_field']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-person-title_field']['display']['person_card'] = array(
      'label' => 'above',
      'module' => 'title',
      'settings' => array(
        'title_class' => '',
        'title_link' => '',
        'title_style' => '',
      ),
      'type' => 'title_linked',
      'weight' => 28,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_accessibility'])) {
    $data['node-place-field_accessibility']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_accessibility']['display']['teaser']['weight'] = 28; /* WAS: 25 */
    $data['node-place-field_accessibility']['display']['waste_map'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 29,
    ); /* WAS: '' */
    $data['node-place-field_accessibility']['display']['waste_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 29,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_address_postal'])) {
    $data['node-place-field_address_postal']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_address_postal']['display']['teaser']['weight'] = 24; /* WAS: 21 */
    $data['node-place-field_address_postal']['display']['waste_map'] = array(
      'label' => 'inline',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 26,
    ); /* WAS: '' */
    $data['node-place-field_address_postal']['display']['waste_search'] = array(
      'label' => 'inline',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 26,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_address_street'])) {
    $data['node-place-field_address_street']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_address_street']['display']['teaser']['weight'] = 27; /* WAS: 24 */
    $data['node-place-field_address_street']['display']['waste_map'] = array(
      'label' => 'inline',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 27,
    ); /* WAS: '' */
    $data['node-place-field_address_street']['display']['waste_search'] = array(
      'label' => 'inline',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 27,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_address_visiting'])) {
    $data['node-place-field_address_visiting']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_address_visiting']['display']['waste_map'] = array(
      'label' => 'hidden',
      'module' => 'addressfield',
      'settings' => array(
        'format_handlers' => array(
          0 => 'address',
        ),
        'use_widget_handlers' => 1,
      ),
      'type' => 'addressfield_default',
      'weight' => 1,
    ); /* WAS: '' */
    $data['node-place-field_address_visiting']['display']['waste_search'] = array(
      'label' => 'hidden',
      'module' => 'addressfield',
      'settings' => array(
        'format_handlers' => array(
          0 => 'address',
        ),
        'use_widget_handlers' => 1,
      ),
      'type' => 'addressfield_default',
      'weight' => 1,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_availability'])) {
    $data['node-place-field_availability']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_availability']['display']['waste_map'] = array(
      'label' => 'above',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 4,
    ); /* WAS: '' */
    $data['node-place-field_availability']['display']['waste_search'] = array(
      'label' => 'above',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 4,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_billing_address'])) {
    $data['node-place-field_billing_address']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_billing_address']['display']['teaser']['weight'] = 36; /* WAS: 33 */
    $data['node-place-field_billing_address']['display']['waste_map'] = array(
      'label' => 'inline',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 28,
    ); /* WAS: '' */
    $data['node-place-field_billing_address']['display']['waste_search'] = array(
      'label' => 'inline',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 28,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_description'])) {
    $data['node-place-field_description']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_description']['display']['waste_map'] = array(
      'label' => 'hidden',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 19,
    ); /* WAS: '' */
    $data['node-place-field_description']['display']['waste_search'] = array(
      'label' => 'hidden',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 5,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_district'])) {
    $data['node-place-field_district']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_district']['display']['teaser']['weight'] = 26; /* WAS: 23 */
    $data['node-place-field_district']['display']['waste_map'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 35,
    ); /* WAS: '' */
    $data['node-place-field_district']['display']['waste_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 35,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_email'])) {
    $data['node-place-field_email']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_email']['display']['waste_map'] = array(
      'label' => 'hidden',
      'module' => 'email',
      'settings' => array(),
      'type' => 'email_default',
      'weight' => 3,
    ); /* WAS: '' */
    $data['node-place-field_email']['display']['waste_search'] = array(
      'label' => 'hidden',
      'module' => 'email',
      'settings' => array(),
      'type' => 'email_default',
      'weight' => 3,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_fax_number'])) {
    $data['node-place-field_fax_number']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_fax_number']['display']['teaser']['weight'] = 37; /* WAS: 34 */
    $data['node-place-field_fax_number']['display']['waste_map'] = array(
      'label' => 'inline',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 24,
    ); /* WAS: '' */
    $data['node-place-field_fax_number']['display']['waste_search'] = array(
      'label' => 'inline',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 25,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_location'])) {
    $data['node-place-field_location']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_location']['display']['teaser']['weight'] = 35; /* WAS: 32 */
    $data['node-place-field_location']['display']['waste_map'] = array(
      'label' => 'hidden',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 30,
    ); /* WAS: '' */
    $data['node-place-field_location']['display']['waste_search'] = array(
      'label' => 'hidden',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 30,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_main_image'])) {
    $data['node-place-field_main_image']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_main_image']['display']['teaser']['weight'] = 30; /* WAS: 27 */
    $data['node-place-field_main_image']['display']['waste_map'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 33,
    ); /* WAS: '' */
    $data['node-place-field_main_image']['display']['waste_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 33,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_municipality_term'])) {
    $data['node-place-field_municipality_term']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_municipality_term']['display']['teaser']['weight'] = 25; /* WAS: 22 */
    $data['node-place-field_municipality_term']['display']['waste_map'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 34,
    ); /* WAS: '' */
    $data['node-place-field_municipality_term']['display']['waste_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 34,
    ); /* WAS: '' */
    $data['node-place-field_municipality_term']['widget']['settings']['content_taxonomy_opt_groups'] = FALSE; /* WAS: '' */
  }
  if (isset($data['node-place-field_person_responsible'])) {
    $data['node-place-field_person_responsible']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_person_responsible']['display']['teaser']['weight'] = 32; /* WAS: 29 */
    $data['node-place-field_person_responsible']['display']['waste_map'] = array(
      'label' => 'inline',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 22,
    ); /* WAS: '' */
    $data['node-place-field_person_responsible']['display']['waste_search'] = array(
      'label' => 'inline',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 23,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_phone'])) {
    $data['node-place-field_phone']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_phone']['display']['waste_map'] = array(
      'label' => 'hidden',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 2,
    ); /* WAS: '' */
    $data['node-place-field_phone']['display']['waste_search'] = array(
      'label' => 'hidden',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 2,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_phone_switch'])) {
    $data['node-place-field_phone_switch']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_phone_switch']['display']['teaser']['weight'] = 29; /* WAS: 26 */
    $data['node-place-field_phone_switch']['display']['waste_map'] = array(
      'label' => 'inline',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 23,
    ); /* WAS: '' */
    $data['node-place-field_phone_switch']['display']['waste_search'] = array(
      'label' => 'inline',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 24,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_read_more'])) {
    $data['node-place-field_read_more']['display']['default']['type'] = 'hidden'; /* WAS: 'link_default' */
    $data['node-place-field_read_more']['display']['waste_map'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 37,
    ); /* WAS: '' */
    $data['node-place-field_read_more']['display']['waste_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 37,
    ); /* WAS: '' */
    unset($data['node-place-field_read_more']['display']['default']['module']);
  }
  if (isset($data['node-place-field_responsibility'])) {
    $data['node-place-field_responsibility']['display']['default']['type'] = 'hidden'; /* WAS: 'text_default' */
    $data['node-place-field_responsibility']['display']['waste_map'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 36,
    ); /* WAS: '' */
    $data['node-place-field_responsibility']['display']['waste_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 36,
    ); /* WAS: '' */
    unset($data['node-place-field_responsibility']['display']['default']['module']);
  }
  if (isset($data['node-place-field_service_offer'])) {
    $data['node-place-field_service_offer']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_service_offer']['display']['teaser']['weight'] = 34; /* WAS: 31 */
    $data['node-place-field_service_offer']['display']['waste_map'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 32,
    ); /* WAS: '' */
    $data['node-place-field_service_offer']['display']['waste_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 32,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-field_sorting_point'])) {
    $data['node-place-field_sorting_point']['display']['default']['type'] = 'hidden'; /* WAS: 'list_default' */
    $data['node-place-field_sorting_point']['display']['waste_map'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 38,
    ); /* WAS: '' */
    $data['node-place-field_sorting_point']['display']['waste_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 38,
    ); /* WAS: '' */
    unset($data['node-place-field_sorting_point']['display']['default']['module']);
  }
  if (isset($data['node-place-field_website_et'])) {
    $data['node-place-field_website_et']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-field_website_et']['display']['teaser']['weight'] = 31; /* WAS: 28 */
    $data['node-place-field_website_et']['display']['waste_map'] = array(
      'label' => 'inline',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 25,
    ); /* WAS: '' */
    $data['node-place-field_website_et']['display']['waste_search'] = array(
      'label' => 'hidden',
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_label',
      'weight' => 6,
    ); /* WAS: '' */
  }
  if (isset($data['node-place-title_field'])) {
    $data['node-place-title_field']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-title_field']['display']['teaser']['weight'] = 33; /* WAS: 30 */
    $data['node-place-title_field']['display']['waste_map'] = array(
      'label' => 'hidden',
      'module' => 'title',
      'settings' => array(
        'title_class' => '',
        'title_link' => '',
        'title_style' => 'h3',
      ),
      'type' => 'title_linked',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-place-title_field']['display']['waste_search'] = array(
      'label' => 'hidden',
      'module' => 'title',
      'settings' => array(
        'title_class' => '',
        'title_link' => '',
        'title_style' => 'h3',
      ),
      'type' => 'title_linked',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-position_of_trust-field_deputy_member'])) {
    $data['node-position_of_trust-field_deputy_member']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-position_of_trust-field_deputy_member']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'deny'; /* WAS: '' */
  }
  if (isset($data['node-section-field_contact_information'])) {
    $data['node-section-field_contact_information']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-section-field_contact_information']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'deny'; /* WAS: '' */
  }
  if (isset($data['node-section-field_widget_before_content'])) {
    $data['node-section-field_widget_before_content']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-section-field_widget_before_content']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'deny'; /* WAS: '' */
  }
  if (isset($data['node-service-field_described_by_er_et'])) {
    $data['node-service-field_described_by_er_et']['display']['default']['settings']['bypass_access'] = FALSE; /* WAS: '' */
    $data['node-service-field_described_by_er_et']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-service-field_described_by_er_et']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'deny'; /* WAS: '' */
  }
  if (isset($data['taxonomy_term-accessibility-description_field'])) {
    $data['taxonomy_term-accessibility-description_field']['description'] = 'Write here a really short description of the accessibility feature in question if you want. Please notice that there is very little space for the description so it needs to be just a few words.'; /* WAS: '' */
    $data['taxonomy_term-accessibility-description_field']['display']['default']['label'] = 'hidden'; /* WAS: 'above' */
    $data['taxonomy_term-accessibility-description_field']['display']['default']['weight'] = 1; /* WAS: 2 */
    $data['taxonomy_term-accessibility-description_field']['settings']['context'] = 'title'; /* WAS: 'debug' */
    $data['taxonomy_term-accessibility-description_field']['settings']['linkit'] = array(
      'button_text' => 'Search',
      'enable' => 0,
      'profile' => '',
    ); /* WAS: '' */
    $data['taxonomy_term-accessibility-description_field']['settings']['text_processing'] = 0; /* WAS: 1 */
    $data['taxonomy_term-accessibility-description_field']['widget']['settings']['rows'] = 4; /* WAS: 1 */
    unset($data['taxonomy_term-accessibility-description_field']['widget']['settings']['maxlength_js']);
    unset($data['taxonomy_term-accessibility-description_field']['widget']['settings']['maxlength_js_enforce']);
    unset($data['taxonomy_term-accessibility-description_field']['widget']['settings']['maxlength_js_label']);
    unset($data['taxonomy_term-accessibility-description_field']['widget']['settings']['maxlength_js_label_summary']);
    unset($data['taxonomy_term-accessibility-description_field']['widget']['settings']['maxlength_js_summary']);
    unset($data['taxonomy_term-accessibility-description_field']['widget']['settings']['maxlength_js_truncate_html']);
  }
  if (isset($data['taxonomy_term-accessibility-field_mds_code'])) {
    $data['taxonomy_term-accessibility-field_mds_code']['display']['default']['type'] = 'hidden'; /* WAS: 'number_integer' */
    $data['taxonomy_term-accessibility-field_mds_code']['display']['default']['weight'] = 5; /* WAS: 3 */
    unset($data['taxonomy_term-accessibility-field_mds_code']['display']['default']['module']);
    unset($data['taxonomy_term-accessibility-field_mds_code']['display']['default']['settings']['decimal_separator']);
    unset($data['taxonomy_term-accessibility-field_mds_code']['display']['default']['settings']['prefix_suffix']);
    unset($data['taxonomy_term-accessibility-field_mds_code']['display']['default']['settings']['scale']);
    unset($data['taxonomy_term-accessibility-field_mds_code']['display']['default']['settings']['thousand_separator']);
  }
  if (isset($data['taxonomy_term-accessibility-name_field'])) {
    $data['taxonomy_term-accessibility-name_field']['display']['default']['module'] = 'title'; /* WAS: 'text' */
    $data['taxonomy_term-accessibility-name_field']['display']['default']['settings']['title_class'] = ''; /* WAS: '' */
    $data['taxonomy_term-accessibility-name_field']['display']['default']['settings']['title_link'] = ''; /* WAS: '' */
    $data['taxonomy_term-accessibility-name_field']['display']['default']['settings']['title_style'] = ''; /* WAS: '' */
    $data['taxonomy_term-accessibility-name_field']['display']['default']['type'] = 'title_linked'; /* WAS: 'text_default' */
  }
  if (isset($data['widget-event_carousel-field_keywords_et'])) {
    $data['widget-event_carousel-field_keywords_et']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'deny'; /* WAS: '' */
  }
  if (isset($data['widget-event_mosaic-field_keywords_et'])) {
    $data['widget-event_mosaic-field_keywords_et']['widget']['settings']['content_taxonomy_autocomplete_new_terms'] = 'deny'; /* WAS: '' */
  }
}

/**
 * Implements hook_flexslider_default_presets_alter().
 */
function pori_configuration_overrides_feature_flexslider_default_presets_alter(&$data) {
  if (isset($data['top_carousel'])) {
    $data['top_carousel']->options['smoothHeight'] = 0; /* WAS: 1 */
  }
}

/**
 * Implements hook_image_styles_alter().
 */
function pori_configuration_overrides_feature_image_styles_alter(&$data) {
  if (isset($data['site_logo'])) {

  if (!isset($data['site_logo']['storage']) || $data['site_logo']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['site_logo']['effects'] = array_values($data['site_logo']['effects']);
    $data['site_logo']['effects'][0]['data']['height'] = 50;
  }
  }
}

/**
 * Implements hook_locale_default_languages_alter().
 */
function pori_configuration_overrides_feature_locale_default_languages_alter(&$data) {
  if (isset($data['sv'])) {
    $data['sv']['enabled'] = 1; /* WAS: 0 */
  }
}

/**
 * Implements hook_default_scald_context_config_alter().
 */
function pori_configuration_overrides_feature_default_scald_context_config_alter(&$data) {
  if (isset($data['content_full'])) {
    $data['content_full']->player['image']['settings']['caption'] = ''; /* WAS: '[atom:title_text]' */
  }
  if (isset($data['content_half'])) {
    $data['content_half']->player['image']['settings']['caption'] = ''; /* WAS: '[atom:title_text]' */
  }
  if (isset($data['full'])) {
    $data['full']->player['image']['*'] = 'image_figure'; /* WAS: 'default' */
    $data['full']->player['image']['settings']['caption'] = '[atom:title], by [atom:author]'; /* WAS: '' */
    $data['full']->player['image']['settings']['classes'] = ''; /* WAS: '' */
    $data['full']->transcoder['image']['*'] = 'group-responsive_content_full'; /* WAS: 'passthrough' */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function pori_configuration_overrides_feature_strongarm_alter(&$data) {
  if (isset($data['field_bundle_settings_node__liftup'])) {
    $data['field_bundle_settings_node__liftup']->value['extra_fields']['display']['domain']['small_liftup_banner'] = array(
      'weight' => 30,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__liftup']->value['extra_fields']['display']['language']['small_liftup_banner'] = array(
      'weight' => 29,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__liftup']->value['view_modes']['attraction_card_mosaic_item'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__liftup']->value['view_modes']['event_search_result'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__liftup']->value['view_modes']['live_results_search'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__liftup']->value['view_modes']['person_card'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__liftup']->value['view_modes']['product'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__liftup']->value['view_modes']['small_liftup_banner'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
  }
  if (isset($data['field_bundle_settings_node__person'])) {
    $data['field_bundle_settings_node__person']->value['extra_fields']['display']['domain']['person_card'] = array(
      'weight' => 40,
      'visible' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__person']->value['view_modes']['attraction_card_mosaic_item'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__person']->value['view_modes']['event_mosaic_item'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__person']->value['view_modes']['event_search_result'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__person']->value['view_modes']['live_results_search'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__person']->value['view_modes']['person_card'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__person']->value['view_modes']['product'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['field_bundle_settings_node__place'])) {
    $data['field_bundle_settings_node__place']->value['extra_fields']['display']['domain']['teaser']['weight'] = 23; /* WAS: 19 */
    $data['field_bundle_settings_node__place']->value['extra_fields']['display']['domain']['waste_map'] = array(
      'weight' => 31,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__place']->value['extra_fields']['display']['domain']['waste_search'] = array(
      'weight' => 31,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__place']->value['view_modes']['waste_map'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__place']->value['view_modes']['waste_search'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
  }
  if (isset($data['field_bundle_settings_scald_atom__image'])) {
    $data['field_bundle_settings_scald_atom__image']->value['extra_fields']['display']['atom']['content_full']['visible'] = TRUE; /* WAS: FALSE */
    $data['field_bundle_settings_scald_atom__image']->value['extra_fields']['display']['atom']['content_full']['weight'] = 0; /* WAS: 1 */
    $data['field_bundle_settings_scald_atom__image']->value['extra_fields']['display']['atom']['content_half']['visible'] = TRUE; /* WAS: FALSE */
    $data['field_bundle_settings_scald_atom__image']->value['extra_fields']['display']['atom']['content_half']['weight'] = 0; /* WAS: 1 */
    $data['field_bundle_settings_scald_atom__image']->value['extra_fields']['display']['atom']['small_liftup_banner'] = array(
      'weight' => 0,
      'visible' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_scald_atom__image']->value['view_modes']['content_250_wide'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_scald_atom__image']->value['view_modes']['small_liftup_banner'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
  }
  if (isset($data['menu_block_20_expanded'])) {
    $data['menu_block_20_expanded']->value = 1; /* WAS: 0 */
  }
  if (isset($data['menu_block_21_expanded'])) {
    $data['menu_block_21_expanded']->value = 1; /* WAS: 0 */
  }
  if (isset($data['menu_block_22_expanded'])) {
    $data['menu_block_22_expanded']->value = 1; /* WAS: 0 */
  }
  if (isset($data['menu_block_25_expanded'])) {
    $data['menu_block_25_expanded']->value = 1; /* WAS: 0 */
  }
  if (isset($data['menu_block_28_expanded'])) {
    $data['menu_block_28_expanded']->value = 1; /* WAS: 0 */
  }
  if (isset($data['menu_block_8_depth'])) {
    $data['menu_block_8_depth']->value = 2; /* WAS: 0 */
  }
  if (isset($data['node_options_attraction_card'])) {
    $data['node_options_attraction_card']->value[1] = 'revision'; /* WAS: '' */
  }
  if (isset($data['menu_block_ids'])) {
    $data['menu_block_ids']->value[25] = 23; /* WAS: '' */
    $data['menu_block_ids']->value[26] = 28; /* WAS: '' */
    $data['menu_block_ids']->value[27] = 29; /* WAS: '' */
    $data['menu_block_ids']->value[28] = 30; /* WAS: '' */
    $data['menu_block_ids']->value[29] = 31; /* WAS: '' */
    $data['menu_block_ids']->value[30] = 32; /* WAS: '' */
    $data['menu_block_ids']->value[31] = 33; /* WAS: '' */
    $data['menu_block_ids']->value[32] = 34; /* WAS: '' */
    $data['menu_block_ids']->value[33] = 35; /* WAS: '' */
    $data['menu_block_ids']->value[34] = 36; /* WAS: '' */
    $data['menu_block_ids']->value[35] = 37; /* WAS: '' */
  }
  if (isset($data['node_options_landing_page'])) {
    $data['node_options_landing_page']->value[1] = 'revision'; /* WAS: '' */
  }
  if (isset($data['node_options_page'])) {
    $data['node_options_page']->value[1] = 'revision'; /* WAS: '' */
  }
  if (isset($data['scald_custom_contexts'])) {
    $data['scald_custom_contexts']->value['content_250_wide'] = array(
      'name' => 'content_250_wide',
      'title' => 'Content 250 wide',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ); /* WAS: '' */
    $data['scald_custom_contexts']->value['page_carousel'] = array(
      'name' => 'page_carousel',
      'title' => 'Page carousel',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ); /* WAS: '' */
    $data['scald_custom_contexts']->value['small_liftup_banner'] = array(
      'name' => 'small_liftup_banner',
      'title' => 'Small liftup banner',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ); /* WAS: '' */
  }
  if (isset($data['variable_realm_list_domain'])) {
    $data['variable_realm_list_domain']->value[0] = 'googleanalytics_account'; /* WAS: 'piwik_site_id' */
    $data['variable_realm_list_domain']->value[1] = 'piwik_site_id'; /* WAS: 'site_name' */
    $data['variable_realm_list_domain']->value[2] = 'site_name'; /* WAS: 'site_frontpage' */
    $data['variable_realm_list_domain']->value[3] = 'site_frontpage'; /* WAS: '' */
  }
}
