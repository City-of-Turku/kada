<?php
/**
 * @file
 * pori_visitpori_override_feature.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function pori_visitpori_override_feature_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: variable
  $overrides["variable.menu_block_ids.value|25"] = 23;
  $overrides["variable.menu_block_ids.value|26"] = 28;
  $overrides["variable.menu_options_page.value|10"] = 'menu-visitpori-footer-menu-en';
  $overrides["variable.menu_options_page.value|11"] = 'menu-visitpori-footer-menu-fi';
  $overrides["variable.menu_options_page.value|12"] = 'menu-visitpori-main-navigation';
  $overrides["variable.menu_options_page.value|13"] = 'menu-visitpori-main-menu';
  $overrides["variable.menu_options_page.value|14"] = 'menu-visitpori-top-menu-en';
  $overrides["variable.menu_options_page.value|15"] = 'menu-visitpori-top-menu-fi';

 return $overrides;
}
