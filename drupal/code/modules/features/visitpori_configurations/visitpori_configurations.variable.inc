<?php
/**
 * @file
 * visitpori_configurations.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function visitpori_configurations_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['domain']['visitpori_fi'] = array(
  'googleanalytics_account' => 'UA-76043723-3',
);

return $realm_variables;
}
