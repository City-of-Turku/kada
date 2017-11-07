<?php
/**
 * @file
 * pori_domains.domains.inc
 */

/**
 * Implements hook_domain_default_domains().
 */
function pori_domains_domain_default_domains() {
  $domains = array();
  $domains['calendar'] = array(
    'subdomain' => 'tapahtumat.pori.fi',
    'sitename' => 'Event calendar',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => -3,
    'is_default' => 0,
    'machine_name' => 'calendar',
  );
  $domains['pori_kada_testing_druid_fi'] = array(
    'subdomain' => 'beta.pori.fi',
    'sitename' => 'Beta.pori.fi',
    'scheme' => 'https',
    'valid' => 1,
    'weight' => -2,
    'is_default' => 1,
    'machine_name' => 'pori_kada_testing_druid_fi',
  );

  return $domains;
}

/**
 * Implements hook_domain_alias_default_aliases().
 */
function pori_domains_domain_alias_default_aliases() {
  $domain_aliases = array();
  $domain_aliases['calendar'] = array(
    'calendar.local.kada.fi' => array(
      'pattern' => 'calendar.local.kada.fi',
      'redirect' => 0,
      'machine_name' => 'calendar',
    ),
  );
  $domain_aliases['pori_kada_testing_druid_fi'] = array(
    'pori.stage.wunder.io' => array(
      'pattern' => 'pori.stage.wunder.io',
      'redirect' => 0,
      'machine_name' => 'pori_kada_testing_druid_fi',
    ),
    'local.pori.fi' => array(
      'pattern' => 'local.pori.fi',
      'redirect' => 0,
      'machine_name' => 'pori_kada_testing_druid_fi',
    ),
  );

  return $domain_aliases;
}
