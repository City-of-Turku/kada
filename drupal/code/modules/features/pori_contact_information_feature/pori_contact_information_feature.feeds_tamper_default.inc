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
  $feeds_tamper->id = 'phone_csv-7-phone_06_prefixes';
  $feeds_tamper->importer = 'phone_csv';
  $feeds_tamper->source = '7';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/^\\W*6\\W*([0-9 \\-]*)\\W*$/',
    'replace' => '026 \\1',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Phone 6 prefixes';
  $export['phone_csv-7-phone_06_prefixes'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_csv-7-phone_5_digit';
  $feeds_tamper->importer = 'phone_csv';
  $feeds_tamper->source = '7';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/^\\W*([0-9]{5})\\W*$/',
    'replace' => '02 62 \\1',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Phone 5-digit numbers';
  $export['phone_csv-7-phone_5_digit'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_csv-7-phone_801_prefix';
  $feeds_tamper->importer = 'phone_csv';
  $feeds_tamper->source = '7';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/^\\W*801\\W*([0-9 \\-]*)\\W*$/',
    'replace' => '044 701 \\1',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Phone 801 prefix';
  $export['phone_csv-7-phone_801_prefix'] = $feeds_tamper;

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
