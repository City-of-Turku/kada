<?php
/**
 * @file
 * pori_contact_information_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pori_contact_information_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_views_api().
 */
function pori_contact_information_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
