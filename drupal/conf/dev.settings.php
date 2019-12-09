<?php

$databases = array (
  'default' =>
  array (
    'default' =>
    array (
      'database' => 'tku_dev',
      'username' => 'tku_dev',
      'password' => '',
      'host' => 'db.local',
      'port' => '',
      'driver' => 'mysql',
      'prefix' => '',
    ),
  ),
);

// Needed for Predis-1.0 which changed the library paths from 0.8.7
define('PREDIS_BASE_PATH', DRUPAL_ROOT . '/sites/all/libraries/predis/src/');

// MEMCACHED
$conf['radioactivity_memcached_host'] = 'memcache.local';

// Activating memcache as primary cache backend
$conf['cache_backends'][] = 'sites/all/modules/contrib/memcache/memcache.inc';
$conf['cache_default_class'] = 'MemCacheDrupal';
$conf['memcache_key_prefix'] = 'tku_';

$conf['memcache_servers'] = array(
  '127.0.0.1:11211' => 'default',
);

// This shouldn't be necessary to set. Memcache module is pretty smart in handling bins.
$conf['memcache_bins'] = array(
    'cache' => 'default',
);

$conf['memcache_persistent'] = TRUE;

// Cache_form bin is assigned to non-volatile storage:
$conf['cache_class_cache_form'] = 'DrupalDatabaseCache';
$conf['cache_prefix']['default'] = 'tku_';

// Use memcache as the system lock to avoid deadlock (which occur easily with semaphore in database)
$conf['lock_inc'] = 'sites/all/modules/contrib/memcache/memcache-lock.inc';

// Varnish
$conf['cache_backends'][] = 'sites/all/modules/contrib/varnish/varnish.cache.inc';
$conf['cache_class_cache_page'] = 'VarnishCache';
$conf['page_cache_invoke_hooks'] = FALSE;
// Cache clear strategy:
// 0=none, handle it yourself, 1=all pages, 2=selective, ie. expire module
$conf['varnish_cache_clear'] = "2";
// Control terminal host with port
$conf['varnish_control_terminal'] = "varnish.local:6082";
// Secret if used, look for /etc/varnish/secret
$conf['varnish_control_key'] = "SECRET";
// Flush caches on cron run
$conf['varnish_flush_cron'] = "0";
// Varnish version
$conf['varnish_version'] = "3";

// Override search API server settings fetched from default configuration.
$conf['search_api_override_mode'] = 'load';
$conf['search_api_override_servers'] = array(
  'driveturku' => array(
    'name' => 'DriveTurku dev',
    'options' => array(
      'host' => 'solr.local',
      'port' => '8983',
      'path' => '/solr/turku',
      'http_user' => '',
      'http_pass' => '',
      'excerpt' => 1,
      'retrieve_data' => 1,
      'http_method' => 'AUTO',
    ),
  ),
  'driveturku_sarnia_search' => array(
    'name' => 'DriveTurku dev Sarnia search',
    'options' => array(
      'host' => 'solr.local',
      'port' => '8983',
      'path' => '/solr/turku',
      'http_user' => '',
      'http_pass' => '',
      'excerpt' => 1,
      'retrieve_data' => 1,
      'http_method' => 'AUTO',
      'sarnia_request_handler' => '',
    ),
  ),
);

$conf['advagg_auth_basic_user'] = 'dev';
$conf['advagg_auth_basic_pass'] = 'asdf';

/**
 * Add the domain module setup routine.
 */
if (!defined('IS_BE_PROBE') || !IS_BE_PROBE) {
  include DRUPAL_ROOT . '/sites/all/modules/contrib/domain/settings.inc';
}

// Set "domain space" that is necessary to handle redirects between domains
define('DOMAIN_SPACE', 'dt-demo.turku.fi');

// HACK - REMOVE WHEN DOMAIN URLS FOR DIFFERENT ENVS CAN BE DONE PROPERLY
define('TURKUCALENDAR_BASE_URL', 'http://turkukalenteri.dt-demo.turku.fi/');

// SimpleSAMLphp_auth Login Path
$conf['simplesamlphp_auth_login_path'] = 'login_ad';
