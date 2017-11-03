<?php
/**
 * @file
 * pori_configuration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pori_configuration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hotjar_settings';
  $strongarm->value = array(
    'hotjar_account' => '673332',
    'hotjar_visibility_pages' => '0',
    'hotjar_pages' => 'admin
admin/*
batch
node/add*
node/*/*
user/*/*',
    'hotjar_visibility_roles' => '0',
    'hotjar_roles' => array(
      1 => 0,
      2 => 0,
      4 => 0,
      8 => 0,
      3 => 0,
      7 => 0,
      5 => 0,
      6 => 0,
    ),
  );
  $export['hotjar_settings'] = $strongarm;

  return $export;
}
