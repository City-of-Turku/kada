<?php
/**
 * @file
 * pori_section_override_feature.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function pori_section_override_feature_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: context
  $overrides["context.default_section.conditions|context|values|~visitpori_domain"] = '~visitpori_domain';
  $overrides["context.section_menus.condition_mode"] = 1;
  $overrides["context.section_menus.conditions|context_all"] = array(
    'values' => array(
      'default_section' => 'default_section',
    ),
  );

 return $overrides;
}
