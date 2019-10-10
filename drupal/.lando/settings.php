<?php

// Load database credentials from .lando.yml.
$databases['default']['default'] = array (
  'database' => getenv('DB_NAME_DRUPAL'),
  'username' => getenv('DB_USER_DRUPAL'),
  'password' => getenv('DB_PASS_DRUPAL'),
  'host' => getenv('DB_HOST_DRUPAL'),
  'port' => '3306',
  'driver' => 'mysql',
);

// Generate the hash_salt setting.
$drupal_hash_salt = md5(getenv('LANDO_HOST_IP'));

$base_url = 'https://pori.lndo.site';
$conf['stage_file_proxy_origin'] = 'https://www.pori.fi';

// CACHING
$conf['cache_backends'][] = 'sites/all/modules/contrib/memcache/memcache.inc';
$conf['cache_class_cache_form'] = 'DrupalDatabaseCache';
$conf['cache_default_class'] = 'MemCacheDrupal';
$conf['memcache_key_prefix'] = 'wk';
// Needed for Predis-1.0 which changed the library paths from 0.8.7
#define('PREDIS_BASE_PATH', DRUPAL_ROOT . '/sites/all/libraries/predis/src/');

#$conf['redis_client_interface'] = 'Predis'; // Can be "Predis".
#$conf['redis_client_host']      = 'localhost';  // Your Redis instance hostname.
#$conf['redis_client_password']  = '';
#$conf['lock_inc']               = 'sites/all/modules/contrib/redis/redis.lock.inc';
#$conf['path_inc']               = 'sites/all/modules/contrib/redis/redis.path.inc';
#$conf['cache_backends'][]       = 'sites/all/modules/contrib/redis/redis.autoload.inc';
#$conf['cache_default_class']    = 'Redis_Cache';
//$conf['cache_default_class']    = 'DrupalDatabaseCache';
// Do not use Redis for cache_form (no performance difference).
$conf['cache_class_cache_form'] = 'DrupalDatabaseCache';
$conf['cache_prefix']['default'] = 'kada_';

#$conf['radioactivity_redis_host'] = $conf['redis_client_host'];
#$conf['radioactivity_redis_password'] = $conf['redis_client_password'];

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

$conf['simple_environment_indicator'] = 'DarkGreen Local';
$conf['file_temporary_path'] = "/tmp";
// $conf['preprocess_css'] = false;
// $conf['preprocess_js'] = false;
$conf['googleanalytics_account'] = ''; // Make sure the GA isn't enabled in this env

$conf['simplesamlphp_auth_installdir'] = '/conf/simplesaml';
// Override search API server settings fetched from default configuration.
$conf['search_api_override_mode'] = 'load';
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
$conf['memcache_servers'] = array (
  'memcached:11211' => 'default',
);

// This shouldn't be necessary to set. Memcache module is pretty smart in handling bins.
$conf['memcache_bins'] = array (
  'cache' => 'default',
);

/**
 * Add the domain module setup routine.
 */
if (!defined('IS_BE_PROBE') || !IS_BE_PROBE) {
  include DRUPAL_ROOT . '/sites/all/modules/contrib/domain/settings.inc';
}

$conf['menu_override_parent_selector'] = true;

// Set "domain space" that is necessary to handle redirects between domains
define('DOMAIN_SPACE', 'pori.lndo.site');

// HACK - REMOVE WHEN DOMAIN URLS FOR DIFFERENT ENVS CAN BE DONE PROPERLY
//define('KADACALENDAR_BASE_URL', 'http://calendar.pori-kada-development.druid.fi/');

// SimpleSAMLphp_auth Login Path
$conf['simplesamlphp_auth_login_path'] = 'login';

$conf['drupal_http_request_fails'] = FALSE;

/**
 * Tell all Drupal sites that we're running behind an HTTPS proxy.
 */

$conf['reverse_proxy'] = TRUE;
$conf['reverse_proxy_addresses'] = ['127.0.0.1', 'appserver.pori.internal', 'pori.lndo.site'];

// Force the protocol provided by the proxy. This isn't always done
// automatically in Drupal 7. Otherwise, you'll get mixed content warnings
// and/or some assets will be blocked by the browser.
if (php_sapi_name() != 'cli') {
  if (isset($_SERVER['SITE_SUBDIR']) && isset($_SERVER['RAW_HOST'])) {
    // Handle subdirectory mode.
    $base_url = $_SERVER['HTTP_X_FORWARDED_PROTO'] . '://' . $_SERVER['RAW_HOST'] . '/' . $_SERVER['SITE_SUBDIR'];
  }
  else {
    $base_url = $_SERVER['HTTP_X_FORWARDED_PROTO'] . '://' . $_SERVER['SERVER_NAME'];
  }
}
