<?php

/**
 * @file
 * business_pori_configurations.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function business_pori_configurations_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['domain']['businesspori_fi'] = array(
  'googleanalytics_account' => 'UA-76043723-7',
);
  $realm_variables['domain_language']['businesspori_fi:de'] = array();
  $realm_variables['domain_language']['businesspori_fi:en'] = array(
  'site_frontpage' => 'node/93075',
  'site_name' => 'Drupal',
);
  $realm_variables['domain_language']['businesspori_fi:fi'] = array(
  'site_frontpage' => 'node/84769',
  'site_name' => 'Drupal',
);
  $realm_variables['domain_language']['businesspori_fi:ru'] = array();
  $realm_variables['domain_language']['businesspori_fi:sv'] = array();

return $realm_variables;
}
