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
  $breakpoint_group->machine_name = 'driveturku';
  $breakpoint_group->name = 'DriveTurku';
  $breakpoint_group->breakpoints = array(
    0 => 'breakpoints.theme.driveturku.desktop',
    1 => 'breakpoints.theme.driveturku.smalldesktop',
    2 => 'breakpoints.theme.driveturku.tablet',
    3 => 'breakpoints.theme.driveturku.phablet',
    4 => 'breakpoints.theme.driveturku.mobile',
  );
  $breakpoint_group->type = 'theme';
  $breakpoint_group->overridden = 0;
  $export['driveturku'] = $breakpoint_group;

  return $export;
}
