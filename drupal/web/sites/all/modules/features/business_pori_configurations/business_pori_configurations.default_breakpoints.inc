<?php

/**
 * @file
 * business_pori_configurations.default_breakpoints.inc
 */

/**
 * Implements hook_default_breakpoints().
 */
function business_pori_configurations_default_breakpoints() {
  $export = array();

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.businesspori.dsktp_nrw';
  $breakpoint->name = 'dsktp_nrw';
  $breakpoint->breakpoint = '(max-width: 1199px)';
  $breakpoint->source = 'businesspori';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 5;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.businesspori.dsktp_nrw'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.businesspori.dsktp_wide';
  $breakpoint->name = 'dsktp_wide';
  $breakpoint->breakpoint = 'only screen';
  $breakpoint->source = 'businesspori';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 6;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.businesspori.dsktp_wide'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.businesspori.mbl';
  $breakpoint->name = 'mbl';
  $breakpoint->breakpoint = '(max-width: 479px)';
  $breakpoint->source = 'businesspori';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 1;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.businesspori.mbl'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.businesspori.mbl_nrw';
  $breakpoint->name = 'mbl_nrw';
  $breakpoint->breakpoint = '(max-width: 639px)';
  $breakpoint->source = 'businesspori';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 2;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.businesspori.mbl_nrw'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.businesspori.mbl_prtrt';
  $breakpoint->name = 'mbl_prtrt';
  $breakpoint->breakpoint = '(max-width: 319px)';
  $breakpoint->source = 'businesspori';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 0;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.businesspori.mbl_prtrt'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.businesspori.mbl_wide';
  $breakpoint->name = 'mbl_wide';
  $breakpoint->breakpoint = '(max-width: 767px)';
  $breakpoint->source = 'businesspori';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 3;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.businesspori.mbl_wide'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.businesspori.tbl';
  $breakpoint->name = 'tbl';
  $breakpoint->breakpoint = '(max-width: 959px)';
  $breakpoint->source = 'businesspori';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 4;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.businesspori.tbl'] = $breakpoint;

  return $export;
}
