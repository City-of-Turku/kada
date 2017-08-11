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
  $domains['local_kada_fi'] = array(
    'subdomain' => 'demo.kada.fi',
    'sitename' => 'Kada.fi',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => 0,
    'is_default' => 0,
    'machine_name' => 'local_kada_fi',
  );

  return $domains;
}

/**
 * Implements hook_domain_alias_default_aliases().
 */
function kada_domains_feature_domain_alias_default_aliases() {
  $domain_aliases = array();
  $domain_aliases['local_kada_fi'] = array(
    'local.kada.fi' => array(
      'pattern' => 'local.kada.fi',
      'redirect' => 0,
      'machine_name' => 'local_kada_fi',
    ),
  );

  return $domain_aliases;
}
