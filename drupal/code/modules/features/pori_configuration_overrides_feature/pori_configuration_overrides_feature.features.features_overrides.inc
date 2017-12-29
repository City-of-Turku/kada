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
  $overrides["context.sitewide_en.reactions|block|blocks|block-1|weight"] = -40;
  $overrides["context.sitewide_fi.reactions|block|blocks|block-2|weight"] = -40;

 return $overrides;
}
