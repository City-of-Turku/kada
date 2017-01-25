<?php
/**
 * @file
 * tkufi_field_bases_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tkufi_field_bases_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}
