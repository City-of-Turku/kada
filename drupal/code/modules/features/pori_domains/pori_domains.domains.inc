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
  $domains['beta_pori_fi'] = array(
    'subdomain' => 'beta.pori.fi',
    'sitename' => 'Beta.pori.fi',
    'scheme' => 'https',
    'valid' => 1,
    'weight' => -2,
    'is_default' => 1,
    'machine_name' => 'beta_pori_fi',
  );
  $domains['tapahtumat_pori_fi'] = array(
    'subdomain' => 'tapahtumat.pori.fi',
    'sitename' => 'Event calendar',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => -3,
    'is_default' => 0,
    'machine_name' => 'tapahtumat_pori_fi',
  );
  $domains['visitpori_fi'] = array(
    'subdomain' => 'visitpori.fi',
    'sitename' => 'visitpori.fi',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => 1,
    'is_default' => 0,
    'machine_name' => 'visitpori_fi',
  );

  return $domains;
}

/**
 * Implements hook_domain_alias_default_aliases().
 */
function pori_domains_domain_alias_default_aliases() {
  $domain_aliases = array();
  $domain_aliases['beta_pori_fi'] = array(
    'pori.stage.wunder.io' => array(
      'pattern' => 'pori.stage.wunder.io',
      'redirect' => 0,
      'machine_name' => 'beta_pori_fi',
    ),
    'local.pori.fi' => array(
      'pattern' => 'local.pori.fi',
      'redirect' => 0,
      'machine_name' => 'beta_pori_fi',
    ),
  );
  $domain_aliases['tapahtumat_pori_fi'] = array(
    'calendar.local.kada.fi' => array(
      'pattern' => 'calendar.local.kada.fi',
      'redirect' => 0,
      'machine_name' => 'tapahtumat_pori_fi',
    ),
  );
  $domain_aliases['visitpori_fi'] = array();

  return $domain_aliases;
}
