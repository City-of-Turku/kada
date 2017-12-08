<?php
/**
 * @file
 * kada_domains_feature.domains.inc
 */

/**
 * Implements hook_domain_default_domains().
 */
function kada_domains_feature_domain_default_domains() {
  $domains = array();
  $domains['pori_fi'] = array(
    'subdomain' => 'beta.pori.fi',
    'sitename' => 'Pori.fi',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => -3,
    'is_default' => 1,
    'machine_name' => 'pori_fi',
  );
  $domains['tapahtumat_pori_fi'] = array(
    'subdomain' => 'tapahtumat.pori.fi',
    'sitename' => 'Tapahtumakalenteri',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => -1,
    'is_default' => 0,
    'machine_name' => 'tapahtumat_pori_fi',
  );
  $domains['visitpori_fi'] = array(
    'subdomain' => 'visitpori.fi',
    'sitename' => 'Visitpori',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => -2,
    'is_default' => 0,
    'machine_name' => 'visitpori_fi',
  );

  return $domains;
}

/**
 * Implements hook_domain_alias_default_aliases().
 */
function kada_domains_feature_domain_alias_default_aliases() {
  $domain_aliases = array();
  $domain_aliases['pori_fi'] = array(
    'pori.stage.wunder.io' => array(
      'pattern' => 'pori.stage.wunder.io',
      'redirect' => 0,
      'machine_name' => 'pori_fi',
    ),
    'pori.dev.wunder.io' => array(
      'pattern' => 'pori.dev.wunder.io',
      'redirect' => 0,
      'machine_name' => 'pori_fi',
    ),
    'local.pori.fi' => array(
      'pattern' => 'local.pori.fi',
      'redirect' => 0,
      'machine_name' => 'pori_fi',
    ),
    'pori.fi' => array(
      'pattern' => 'pori.fi',
      'redirect' => 0,
      'machine_name' => 'pori_fi',
    ),
  );
  $domain_aliases['tapahtumat_pori_fi'] = array();
  $domain_aliases['visitpori_fi'] = array(
    'local.visitpori.fi' => array(
      'pattern' => 'local.visitpori.fi',
      'redirect' => 0,
      'machine_name' => 'visitpori_fi',
    ),
  );

  return $domain_aliases;
}
