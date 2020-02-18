<?php

/**
 * @file
 * pori_configuration.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function pori_configuration_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['domain']['pori_fi'] = array(
  'googleanalytics_account' => 'UA-76043723-2',
);

return $realm_variables;
}
