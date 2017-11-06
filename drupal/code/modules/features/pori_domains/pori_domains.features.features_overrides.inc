<?php
/**
 * @file
 * pori_domains.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function pori_domains_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: context
  $overrides["context.default_domain.conditions|domain|values|local_kada_fi"]["DELETED"] = TRUE;
  $overrides["context.default_domain.conditions|domain|values|pori_kada_testing_druid_fi"] = 'pori_kada_testing_druid_fi';

 return $overrides;
}
