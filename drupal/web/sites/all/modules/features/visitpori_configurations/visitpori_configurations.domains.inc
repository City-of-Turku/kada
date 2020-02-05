<?php

/**
 * @file
 * visitpori_configurations.domains.inc
 */

/**
 * Implements hook_domain_conf_default_variables().
 */
function visitpori_configurations_domain_conf_default_variables() {
  $domain_variables = array();
  $domain_variables['visitpori_fi'] = array(
    'googleanalytics_account' => 'UA-76043723-3',
  );

  return $domain_variables;
}
