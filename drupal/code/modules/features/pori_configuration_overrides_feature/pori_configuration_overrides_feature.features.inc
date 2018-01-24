<?php
/**
 * @file
 * pori_configuration_overrides_feature.features.inc
 */

/**
 * Implements hook_context_default_contexts_alter().
 */
function pori_configuration_overrides_feature_context_default_contexts_alter(&$data) {
  if (isset($data['footer_navigation'])) {
    unset($data['footer_navigation']->reactions['block']);
  }
  if (isset($data['language_switcher'])) {
    $data['language_switcher']->conditions['context']['values']['visitpori_domain'] = 'visitpori_domain'; /* WAS: '' */
    $data['language_switcher']->reactions['block']['blocks']['locale-language']['region'] = 'branding'; /* WAS: 'navigation' */
    $data['language_switcher']->reactions['block']['blocks']['locale-language']['weight'] = -9; /* WAS: -50 */
    $data['language_switcher']->reactions['block']['blocks']['views--exp-main_search-page'] = array(
      'module' => 'views',
      'delta' => '-exp-main_search-page',
      'region' => 'branding',
      'weight' => -10,
    ); /* WAS: '' */
  }
  if (isset($data['sitewide_en'])) {
    $data['sitewide_en']->reactions['block']['blocks']['block-1']['weight'] = -40; /* WAS: -10 */
  }
  if (isset($data['sitewide_fi'])) {
    $data['sitewide_fi']->reactions['block']['blocks']['block-2']['weight'] = -40; /* WAS: -10 */
  }
}

/**
 * Implements hook_ds_field_settings_info_alter().
 */
function pori_configuration_overrides_feature_ds_field_settings_info_alter(&$data) {
  if (isset($data['node|page|default'])) {
    $data['node|page|default']->settings['places_for_services']['weight'] = 5; /* WAS: 4 */
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
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function pori_configuration_overrides_feature_field_default_field_instances_alter(&$data) {
  if (isset($data['node-person-field_account_name'])) {
    $data['node-person-field_account_name']['display']['live_results_search'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-person-field_account_name']['display']['person_card'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
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
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 26,
    ); /* WAS: '' */
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
      'settings' => array(),
      'type' => 'hidden',
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
      'settings' => array(),
      'type' => 'hidden',
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
      'settings' => array(),
      'type' => 'hidden',
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
      'settings' => array(),
      'type' => 'hidden',
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
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 34,
    ); /* WAS: '' */
    $data['node-person-field_political_party']['display']['teaser']['settings']['bypass_access'] = FALSE; /* WAS: '' */
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
      'settings' => array(),
      'type' => 'hidden',
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
      'settings' => array(),
      'type' => 'hidden',
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
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 31,
    ); /* WAS: '' */
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
      'settings' => array(),
      'type' => 'hidden',
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
      'settings' => array(),
      'type' => 'hidden',
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
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 28,
    ); /* WAS: '' */
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
}

/**
 * Implements hook_strongarm_alter().
 */
function pori_configuration_overrides_feature_strongarm_alter(&$data) {
  if (isset($data['field_bundle_settings_node__person'])) {
    $data['field_bundle_settings_node__person']->value['extra_fields']['display']['domain']['person_card'] = array(
      'weight' => 40,
      'visible' => FALSE,
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
  if (isset($data['menu_block_8_depth'])) {
    $data['menu_block_8_depth']->value = 2; /* WAS: 0 */
  }
}
