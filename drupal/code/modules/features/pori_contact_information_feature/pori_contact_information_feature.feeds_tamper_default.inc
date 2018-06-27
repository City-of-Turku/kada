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
  $feeds_tamper->id = 'phone_csv-company_contact-default_value';
  $feeds_tamper->importer = 'phone_csv';
  $feeds_tamper->source = 'Company Contact';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'employee',
    'only_if_empty' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set as employee';
  $export['phone_csv-company_contact-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_csv-kulva-required';
  $feeds_tamper->importer = 'phone_csv';
  $feeds_tamper->source = 'Kulva';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array(
    'invert' => 0,
    'log' => 1,
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Pakollinen kenttä';
  $export['phone_csv-kulva-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_csv-kulva-trim';
  $feeds_tamper->importer = 'phone_csv';
  $feeds_tamper->source = 'Kulva';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';
  $export['phone_csv-kulva-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_csv-label_1-keyword_filter';
  $feeds_tamper->importer = 'phone_csv';
  $feeds_tamper->source = 'Label 1';
  $feeds_tamper->plugin_id = 'keyword_filter';
  $feeds_tamper->settings = array(
    'words' => 'salainen',
    'word_boundaries' => 0,
    'exact' => 1,
    'case_sensitive' => 0,
    'invert' => 1,
    'word_list' => array(
      0 => '/^salainen$/ui',
    ),
    'regex' => TRUE,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Skip items with salainen';
  $export['phone_csv-label_1-keyword_filter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone_csv-nettiluetteloesto-keyword_filter';
  $feeds_tamper->importer = 'phone_csv';
  $feeds_tamper->source = 'Nettiluetteloesto';
  $feeds_tamper->plugin_id = 'keyword_filter';
  $feeds_tamper->settings = array(
    'words' => 'x',
    'word_boundaries' => 0,
    'exact' => 1,
    'case_sensitive' => 0,
    'invert' => 1,
    'word_list' => array(
      0 => '/^x$/ui',
    ),
    'regex' => TRUE,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Skip items with x';
  $export['phone_csv-nettiluetteloesto-keyword_filter'] = $feeds_tamper;

  return $export;
}
