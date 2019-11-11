<?php

/**
 * @file
 * kada_media_feature.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function kada_media_feature_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'kada';
  $breakpoint_group->name = 'Kada';
  $breakpoint_group->breakpoints = array(
    0 => 'breakpoints.theme.kada.mbl_prtrt',
    1 => 'breakpoints.theme.kada.mbl',
    2 => 'breakpoints.theme.kada.mbl_nrw',
    3 => 'breakpoints.theme.kada.mbl_wide',
    4 => 'breakpoints.theme.kada.tbl',
    5 => 'breakpoints.theme.kada.dsktp_nrw',
    6 => 'breakpoints.theme.kada.dsktp_wide',
  );
  $breakpoint_group->type = 'theme';
  $breakpoint_group->overridden = 0;
  $export['kada'] = $breakpoint_group;

  return $export;
}
