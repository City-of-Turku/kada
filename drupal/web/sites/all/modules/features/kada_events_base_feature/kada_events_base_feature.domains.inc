<?php
/**
 * @file
 * kada_events_base_feature.domains.inc
 */

/**
 * Implements hook_domain_default_domains().
 */
function kada_events_base_feature_domain_default_domains() {
  $domains = array();
  $domains['calendar'] = array(
    'subdomain' => 'calendar.local.kada.fi',
    'sitename' => 'Event calendar',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => -3,
    'is_default' => 0,
    'machine_name' => 'calendar',
  );

  return $domains;
}

/**
 * Implements hook_domain_alias_default_aliases().
 */
function kada_events_base_feature_domain_alias_default_aliases() {
  $domain_aliases = array();
  $domain_aliases['calendar'] = array(
    'calendar.local.kada.fi' => array(
      'pattern' => 'calendar.local.kada.fi',
      'redirect' => 0,
      'machine_name' => 'calendar',
    ),
  );

  return $domain_aliases;
}
