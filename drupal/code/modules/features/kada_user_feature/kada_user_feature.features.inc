<?php
/**
 * @file
 * kada_user_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kada_user_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
