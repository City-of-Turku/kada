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

  // Exported overrides for: ds_layout_settings
  $overrides["ds_layout_settings.taxonomy_term|accessibility|default.layout"] = 'accessibility_layout';
  $overrides["ds_layout_settings.taxonomy_term|accessibility|default.settings|fields|description_field"] = 'main_content';
  $overrides["ds_layout_settings.taxonomy_term|accessibility|default.settings|fields|field_icon"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.taxonomy_term|accessibility|default.settings|layout_disable_css"] = FALSE;
  $overrides["ds_layout_settings.taxonomy_term|accessibility|default.settings|regions|main_content|1"] = 'description_field';
  $overrides["ds_layout_settings.taxonomy_term|accessibility|default.settings|wrappers|ds_content"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.taxonomy_term|accessibility|default.settings|wrappers|main_content"] = 'div';

  // Exported overrides for: field_base
  $overrides["field_base.field_accessibility.settings|hide_initial_item"] = FALSE;
  $overrides["field_base.field_icon.field_icon"]["DELETED"] = TRUE;

  // Exported overrides for: field_instance
  $overrides["field_instance.taxonomy_term-accessibility-description_field.description"] = 'Write here a really short description of the accessibility feature in question if you want. Please notice that there is very little space for the description so it needs to be just a few words.';
  $overrides["field_instance.taxonomy_term-accessibility-description_field.display|default|label"] = 'hidden';
  $overrides["field_instance.taxonomy_term-accessibility-description_field.display|default|weight"] = 1;
  $overrides["field_instance.taxonomy_term-accessibility-description_field.settings|context"] = 'title';
  $overrides["field_instance.taxonomy_term-accessibility-description_field.settings|linkit"] = array(
    'button_text' => 'Search',
    'enable' => 0,
    'profile' => '',
  );
  $overrides["field_instance.taxonomy_term-accessibility-description_field.settings|text_processing"] = 0;
  $overrides["field_instance.taxonomy_term-accessibility-description_field.widget|settings|maxlength_js"]["DELETED"] = TRUE;
  $overrides["field_instance.taxonomy_term-accessibility-description_field.widget|settings|maxlength_js_enforce"]["DELETED"] = TRUE;
  $overrides["field_instance.taxonomy_term-accessibility-description_field.widget|settings|maxlength_js_label"]["DELETED"] = TRUE;
  $overrides["field_instance.taxonomy_term-accessibility-description_field.widget|settings|maxlength_js_label_summary"]["DELETED"] = TRUE;
  $overrides["field_instance.taxonomy_term-accessibility-description_field.widget|settings|maxlength_js_summary"]["DELETED"] = TRUE;
  $overrides["field_instance.taxonomy_term-accessibility-description_field.widget|settings|maxlength_js_truncate_html"]["DELETED"] = TRUE;
  $overrides["field_instance.taxonomy_term-accessibility-description_field.widget|settings|rows"] = 4;
  $overrides["field_instance.taxonomy_term-accessibility-field_icon.taxonomy_term-accessibility-field_icon"]["DELETED"] = TRUE;
  $overrides["field_instance.taxonomy_term-accessibility-field_mds_code.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.taxonomy_term-accessibility-field_mds_code.display|default|settings|decimal_separator"]["DELETED"] = TRUE;
  $overrides["field_instance.taxonomy_term-accessibility-field_mds_code.display|default|settings|prefix_suffix"]["DELETED"] = TRUE;
  $overrides["field_instance.taxonomy_term-accessibility-field_mds_code.display|default|settings|scale"]["DELETED"] = TRUE;
  $overrides["field_instance.taxonomy_term-accessibility-field_mds_code.display|default|settings|thousand_separator"]["DELETED"] = TRUE;
  $overrides["field_instance.taxonomy_term-accessibility-field_mds_code.display|default|type"] = 'hidden';
  $overrides["field_instance.taxonomy_term-accessibility-field_mds_code.display|default|weight"] = 5;
  $overrides["field_instance.taxonomy_term-accessibility-name_field.display|default|module"] = 'title';
  $overrides["field_instance.taxonomy_term-accessibility-name_field.display|default|settings|title_class"] = '';
  $overrides["field_instance.taxonomy_term-accessibility-name_field.display|default|settings|title_link"] = '';
  $overrides["field_instance.taxonomy_term-accessibility-name_field.display|default|settings|title_style"] = '';
  $overrides["field_instance.taxonomy_term-accessibility-name_field.display|default|type"] = 'title_linked';

  // Exported overrides for: variable
  $overrides["variable.menu_block_8_depth.value"] = 2;

 return $overrides;
}
