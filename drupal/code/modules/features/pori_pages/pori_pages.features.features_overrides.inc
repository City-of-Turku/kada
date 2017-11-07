<?php
/**
 * @file
 * pori_pages.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function pori_pages_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: context
  $overrides["context.footer_navigation.disabled"] = TRUE;
  $overrides["context.page_menus.disabled"] = TRUE;

  // Exported overrides for: field_instance
  $overrides["field_instance.node-page-field_info_box.node-page-field_info_box"]["DELETED"] = TRUE;
  $overrides["field_instance.node-page-field_main_image.node-page-field_main_image"]["DELETED"] = TRUE;

 return $overrides;
}
