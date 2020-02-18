<?php

/**
 * @file
 * Settings for Lando environment.
 */

// Database credentials from Lando environment.
$lando_info = json_decode(getenv('LANDO_INFO'), TRUE);
$databases['default']['default'] = [
  'driver' => 'mysql',
  'database' => $lando_info['database']['creds']['database'],
  'username' => $lando_info['database']['creds']['user'],
  'password' => $lando_info['database']['creds']['password'],
  'host' => $lando_info['database']['internal_connection']['host'],
  'port' => $lando_info['database']['internal_connection']['port'],
];

// Salt for one-time login links and cancel links, form tokens, etc.
$drupal_hash_salt = md5(getenv('LANDO_HOST_IP'));

$conf['stage_file_proxy_origin'] = "https://www.pori.fi";

$conf['file_temporary_path'] = "/tmp";

// CACHING
$conf['cache_backends'][] = "sites/all/modules/contrib/memcache/memcache.inc";
$conf['cache_class_cache_form'] = 'DrupalDatabaseCache';
$conf['cache_default_class'] = 'MemCacheDrupal';
$conf['memcache_key_prefix'] = 'wk';

$conf['memcache_servers'] = array (
  'memcached:11211' => 'default',
);

$conf['cache_prefix']['default'] = "kada_";

// // VARNISH
// $conf['cache_backends'][] = 'sites/all/modules/contrib/varnish/varnish.cache.inc';
// $conf['cache_class_cache_page'] = 'VarnishCache';
// $conf['page_cache_invoke_hooks'] = FALSE;
// // Cache clear strategy:
// // 0=none, handle it yourself, 1=all pages, 2=selective, ie. expire module
// $conf['varnish_cache_clear'] = "2";
// // Control terminal host with port
// $conf['varnish_control_terminal'] = "localhost:6082";
// // Secret if used, look for /etc/varnish/secret
// $conf['varnish_control_key'] = getenv("VARNISH_CONTROL_KEY");
// // Flush caches on cron run
// $conf['varnish_flush_cron'] = "0";
// // Varnish version
// $conf['varnish_version'] = "4";

$conf['simple_environment_indicator'] = "DarkGreen Local";

// $conf['preprocess_css'] = false;
// $conf['preprocess_js'] = false;

// Make sure the GA isn't enabled in this env
$conf['googleanalytics_account'] = '';

// Override search API server settings fetched from default configuration.
$conf['search_api_override_mode'] = "load";
$conf['search_api_override_servers'] = array(
  'pori_search_server' => array(
    'name' => 'Pori search server',
    'options' => array(
      'host' => 'solr',
      'port' => '8983',
      'path' => '/solr/lando',
      'http_user' => '',
      'http_pass' => '',
      'excerpt' => 1,
      'retrieve_data' => 1,
      'http_method' => 'AUTO',
    ),
  ),
);

// Add the domain module setup routine.
if (!defined('IS_BE_PROBE') || !IS_BE_PROBE) {
  include DRUPAL_ROOT . "/sites/all/modules/contrib/domain/settings.inc";
}

// Set "domain space" that is necessary to handle redirects between domains
define('DOMAIN_SPACE', "pori.lndo.site");

$conf['menu_override_parent_selector'] = true;

// SimpleSAMLphp_auth paths
// $conf['simplesamlphp_auth_login_path'] = 'login';
// $conf['simplesamlphp_auth_installdir'] = '/conf/simplesaml';

// $conf['simplesamlphp_auth_installdir'] = '/app/conf/simplesaml';
