<?php
/**
 * @file
 * pori_configuration_overrides_feature.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function pori_configuration_overrides_feature_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: context
  $overrides["context.footer_navigation.reactions|block"]["DELETED"] = TRUE;
  $overrides["context.language_switcher.conditions|context|values|visitpori_domain"] = 'visitpori_domain';
  $overrides["context.language_switcher.reactions|block|blocks|locale-language|region"] = 'branding';
  $overrides["context.language_switcher.reactions|block|blocks|locale-language|weight"] = -10;
  $overrides["context.sitewide_en.reactions|block|blocks|block-1|weight"] = -40;
  $overrides["context.sitewide_fi.reactions|block|blocks|block-2|weight"] = -40;

  // Exported overrides for: ds_field_settings
  $overrides["ds_field_settings.node|page|default.settings|places_for_services|weight"] = 5;

  // Exported overrides for: ds_layout_settings
  $overrides["ds_layout_settings.node|page|default.settings|fields|field_contact_person"] = 'contact_information';
  $overrides["ds_layout_settings.node|page|default.settings|regions|after_content|10"] = 'field_subpage';
  $overrides["ds_layout_settings.node|page|default.settings|regions|after_content|8"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.node|page|default.settings|regions|after_content|9"] = 'field_topic';
  $overrides["ds_layout_settings.node|page|default.settings|regions|contact_information"] = array(
    8 => 'field_contact_person',
  );
  $overrides["ds_layout_settings.node|page|default.settings|wrappers|contact_information"] = 'div';

  // Exported overrides for: field_group
  $overrides["field_group.group_additional_information|node|page|form.data|children|2"] = 'field_contact_person';

  // Exported overrides for: field_instance
  $overrides["field_instance.node-person-field_account_name.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_account_name.display|person_card"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 11,
  );
  $overrides["field_instance.node-person-field_assistant.display|default|settings|bypass_access"] = FALSE;
  $overrides["field_instance.node-person-field_assistant.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_assistant.display|person_card"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 26,
  );
  $overrides["field_instance.node-person-field_email_single.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_email_single.display|person_card"] = array(
    'label' => 'hidden',
    'module' => 'email',
    'settings' => array(),
    'type' => 'email_default',
    'weight' => 5,
  );
  $overrides["field_instance.node-person-field_employee_title.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_employee_title.display|person_card"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 1,
  );
  $overrides["field_instance.node-person-field_fax_number.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_fax_number.display|person_card"] = array(
    'label' => 'inline',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 10,
  );
  $overrides["field_instance.node-person-field_first_name.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_first_name.display|person_card"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 38,
  );
  $overrides["field_instance.node-person-field_mobile_phone.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_mobile_phone.display|person_card"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 6,
  );
  $overrides["field_instance.node-person-field_mobile_phone_work.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_mobile_phone_work.display|person_card"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 8,
  );
  $overrides["field_instance.node-person-field_municipality.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_municipality.display|person_card"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 37,
  );
  $overrides["field_instance.node-person-field_office_tr.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_office_tr.display|person_card"] = array(
    'label' => 'hidden',
    'module' => 'i18n_taxonomy',
    'settings' => array(),
    'type' => 'i18n_taxonomy_term_reference_plain',
    'weight' => 3,
  );
  $overrides["field_instance.node-person-field_person_image.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_person_image.display|person_card"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 36,
  );
  $overrides["field_instance.node-person-field_person_type.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_person_type.display|person_card"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 35,
  );
  $overrides["field_instance.node-person-field_phone.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_phone.display|person_card"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 7,
  );
  $overrides["field_instance.node-person-field_phone_switch.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_phone_switch.display|person_card"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 9,
  );
  $overrides["field_instance.node-person-field_political_party.display|default|settings|bypass_access"] = FALSE;
  $overrides["field_instance.node-person-field_political_party.display|full|settings|bypass_access"] = FALSE;
  $overrides["field_instance.node-person-field_political_party.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_political_party.display|person_card"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 34,
  );
  $overrides["field_instance.node-person-field_political_party.display|teaser|settings|bypass_access"] = FALSE;
  $overrides["field_instance.node-person-field_postal_code.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_postal_code.display|person_card"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 33,
  );
  $overrides["field_instance.node-person-field_profession.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_profession.display|person_card"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 2,
  );
  $overrides["field_instance.node-person-field_street_address.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_street_address.display|person_card"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 32,
  );
  $overrides["field_instance.node-person-field_superior.display|default|settings|bypass_access"] = FALSE;
  $overrides["field_instance.node-person-field_superior.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_superior.display|person_card"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 31,
  );
  $overrides["field_instance.node-person-field_surname.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_surname.display|person_card"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 30,
  );
  $overrides["field_instance.node-person-field_task_description.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_task_description.display|person_card"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 29,
  );
  $overrides["field_instance.node-person-field_visiting_address.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_visiting_address.display|person_card"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 4,
  );
  $overrides["field_instance.node-person-title_field.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-title_field.display|person_card"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 28,
  );

  // Exported overrides for: variable
  $overrides["variable.field_bundle_settings_node__person.value|extra_fields|display|domain|person_card"] = array(
    'weight' => 40,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__person.value|view_modes|attraction_card_mosaic_item"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__person.value|view_modes|event_mosaic_item"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__person.value|view_modes|event_search_result"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__person.value|view_modes|live_results_search"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__person.value|view_modes|person_card"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__person.value|view_modes|product"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.menu_block_8_depth.value"] = 2;

 return $overrides;
}
