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
  $domains['calendar'] = array(
    'subdomain' => 'kalenteri.pori.fi',
    'sitename' => 'kalenteri.pori.fi',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => -3,
    'is_default' => 0,
    'machine_name' => 'calendar',
  );
  $domains['local_kada_fi'] = array(
    'subdomain' => 'visitpori.fi',
    'sitename' => 'visitpori.fi',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => 0,
    'is_default' => 0,
    'machine_name' => 'local_kada_fi',
  );
  $domains['pori_fi_docker_amazee_io'] = array(
    'subdomain' => 'pori.fi.docker.amazee.io',
    'sitename' => 'pori.fi',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => -2,
    'is_default' => 1,
    'machine_name' => 'pori_fi_docker_amazee_io',
  );

  return $domains;
}

/**
 * Implements hook_domain_alias_default_aliases().
 */
function kada_domains_feature_domain_alias_default_aliases() {
  $domain_aliases = array();
  $domain_aliases['calendar'] = array(
    'calendar.local.kada.fi' => array(
      'pattern' => 'calendar.local.kada.fi',
      'redirect' => 0,
      'machine_name' => 'calendar',
    ),
  );
  $domain_aliases['local_kada_fi'] = array(
    'local.kada.fi' => array(
      'pattern' => 'local.kada.fi',
      'redirect' => 0,
      'machine_name' => 'local_kada_fi',
    ),
  );
  $domain_aliases['pori_fi_docker_amazee_io'] = array(
    'beta.pori.fi' => array(
      'pattern' => 'beta.pori.fi',
      'redirect' => 0,
      'machine_name' => 'pori_fi_docker_amazee_io',
    ),
    'pori.fi' => array(
      'pattern' => 'pori.fi',
      'redirect' => 0,
      'machine_name' => 'pori_fi_docker_amazee_io',
    ),
  );

  return $domain_aliases;
}
