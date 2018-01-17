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

  // Exported overrides for: variable
  $overrides["variable.menu_block_8_depth.value"] = 2;

 return $overrides;
}
