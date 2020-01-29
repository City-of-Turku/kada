<?php

/**
 * @file
 * pori_configuration_overrides_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pori_configuration_overrides_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
