<?php

/**
 * @file
 * business_pori_configurations.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function business_pori_configurations_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: context
  $overrides["context.businesspori_error_page.reactions|block|blocks|menu_block-45"]["DELETED"] = TRUE;
  $overrides["context.businesspori_error_page.reactions|block|blocks|menu_block-47"] = array(
    'module' => 'menu_block',
    'delta' => 47,
    'region' => 'navigation_top',
    'weight' => -10,
  );
  $overrides["context.businesspori_top_menu.reactions|block|blocks|menu_block-45"]["DELETED"] = TRUE;
  $overrides["context.businesspori_top_menu.reactions|block|blocks|menu_block-47"] = array(
    'module' => 'menu_block',
    'delta' => 47,
    'region' => 'navigation_top',
    'weight' => -10,
  );

  // Exported overrides for: field_base
  $overrides["field_base.field_businesspori_theme.field_permissions"] = array(
    'type' => 0,
  );
  $overrides["field_base.field_businesspori_theme.settings|allowed_values|0|depth"] = '';

  // Exported overrides for: field_instance
  $overrides["field_instance.node-news_item-field_businesspori_theme.label"] = 'Business Pori theme';
  $overrides["field_instance.node-page-field_businesspori_theme.display|default|module"] = 'i18n_taxonomy';
  $overrides["field_instance.node-page-field_businesspori_theme.display|default|type"] = 'i18n_taxonomy_term_reference_link';
  $overrides["field_instance.node-page-field_businesspori_theme.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-page-field_businesspori_theme.display|project|weight"] = 0;
  $overrides["field_instance.node-page-field_businesspori_theme.label"] = 'Business Pori theme';

  // Exported overrides for: variable
  $overrides["variable.menu_block_ids.value|42"] = 44;
  $overrides["variable.menu_block_ids.value|44"] = 46;
  $overrides["variable.menu_block_menu_order.value|menu-business-pori-footer-menu-f"] = '';
  $overrides["variable.menu_block_menu_order.value|menu-business-pori-p-valikko"] = '';
  $overrides["variable.menu_block_menu_order.value|menu-business-pori-top-menu-fi"] = '';

 return $overrides;
}
