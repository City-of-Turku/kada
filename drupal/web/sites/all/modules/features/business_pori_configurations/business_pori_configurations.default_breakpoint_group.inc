<?php

/**
 * @file
 * business_pori_configurations.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function business_pori_configurations_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'businesspori';
  $breakpoint_group->name = 'businesspori';
  $breakpoint_group->breakpoints = array(
    0 => 'breakpoints.theme.businesspori.mbl_prtrt',
    1 => 'breakpoints.theme.businesspori.mbl',
    2 => 'breakpoints.theme.businesspori.mbl_nrw',
    3 => 'breakpoints.theme.businesspori.mbl_wide',
    4 => 'breakpoints.theme.businesspori.tbl',
    5 => 'breakpoints.theme.businesspori.dsktp_nrw',
    6 => 'breakpoints.theme.businesspori.dsktp_wide',
  );
  $breakpoint_group->type = 'theme';
  $breakpoint_group->overridden = 0;
  $export['businesspori'] = $breakpoint_group;

  return $export;
}
