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

  // Exported overrides for: variable
  $overrides["variable.menu_block_menu_order.value|menu-business-pori-footer-menu-f"] = '';
  $overrides["variable.menu_block_menu_order.value|menu-business-pori-p-valikko"] = '';
  $overrides["variable.menu_block_menu_order.value|menu-business-pori-top-menu-fi"] = '';

 return $overrides;
}
