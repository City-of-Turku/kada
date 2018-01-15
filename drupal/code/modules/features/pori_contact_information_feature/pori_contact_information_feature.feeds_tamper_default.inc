<?php
/**
 * @file
 * pori_contact_information_feature.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function pori_contact_information_feature_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_csv-person_type-default_value_employee';
  $feeds_tamper->importer = 'phone_csv';
  $feeds_tamper->source = 'person_type';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'employee',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Default: employee';
  $export['phone_csv-person_type-default_value_employee'] = $feeds_tamper;

  return $export;
}
