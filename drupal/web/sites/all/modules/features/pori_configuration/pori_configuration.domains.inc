<?php

/**
 * @file
 * pori_configuration.domains.inc
 */

/**
 * Implements hook_domain_conf_default_variables().
 */
function pori_configuration_domain_conf_default_variables() {
  $domain_variables = array();
  $domain_variables['pori_fi'] = array(
    'googleanalytics_account' => 'UA-76043723-2',
  );

  return $domain_variables;
}
