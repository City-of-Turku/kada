<?php

/**
 * @file
 * amazee.io Drupal 7 configuration file.
 *
 * You should not edit this file, please use environment specific files!
 * They are loaded in this order:
 * - settings.all.php
 *   For settings that should be applied to all environments (dev, prod, staging, docker, etc).
 * - settings.production.php
 *   For settings only for the production environment.
 * - settings.development.php
 *   For settings only for the development environment (dev servers, docker).
 * - settings.local.php
 *   For settings only for the local environment, this file will not be commited in GIT!
 *
 */

### amazee.io database connection
if(getenv('AMAZEEIO_SITENAME')){
  $databases['default']['default'] = array(
    'driver' => 'mysql',
    'database' => getenv('AMAZEEIO_SITENAME'),
    'username' => getenv('AMAZEEIO_DB_USERNAME'),
    'password' => getenv('AMAZEEIO_DB_PASSWORD'),
    'host' => getenv('AMAZEEIO_DB_HOST'),
    'port' => getenv('AMAZEEIO_DB_PORT'),
    'prefix' => '',
  );
}

### amazee.io solr connection (will only be loaded if solr is enabled)
if(getenv('AMAZEEIO_SOLR_HOST') && getenv('AMAZEEIO_SOLR_PORT')){
  // Override search API server settings fetched from default configuration.
  $conf['search_api_override_mode'] = 'load';
  $conf['search_api_override_servers'] = array(
    'solr' => array(
      'name' => 'amazee.io Solr - Environment:' . getenv('AMAZEEIO_SITE_ENVIRONMENT'),
      'options' => array(
        'host' => getenv('AMAZEEIO_SOLR_HOST'),
        'port' => getenv('AMAZEEIO_SOLR_PORT'),
        'path' => '/solr/' . (getenv('AMAZEEIO_SOLR_CORE') ?: getenv('AMAZEEIO_SITENAME')) . '/',
        'http_user' => (getenv('AMAZEEIO_SOLR_USER') ?: ''),
        'http_pass' => (getenv('AMAZEEIO_SOLR_PASSWORD') ?: ''),
        'excerpt' => 0,
        'retrieve_data' => 0,
        'highlight_data' => 0,
        'http_method' => 'POST',
      ),
    ),
  );
}

### amazee.io Varnish & reverse proxy settings
if (getenv('AMAZEEIO_VARNISH_HOSTS') && getenv('AMAZEEIO_VARNISH_SECRET')) {
  $varnish_hosts = explode(',', getenv('AMAZEEIO_VARNISH_HOSTS'));
  array_walk($varnish_hosts, function(&$value, $key) { $value .= ':6082'; });

  $conf['reverse_proxy'] = TRUE;
  $conf['reverse_proxy_addresses'] = array_merge(explode(',', getenv('AMAZEEIO_VARNISH_HOSTS')), array('127.0.0.1'));
  $conf['varnish_control_terminal'] = implode($varnish_hosts, " ");
  $conf['varnish_control_key'] = getenv('AMAZEEIO_VARNISH_SECRET');
  $conf['varnish_version'] = 4;
}

### Base URL
if (getenv('AMAZEEIO_BASE_URL')) {
  $base_url = getenv('AMAZEEIO_BASE_URL');
}

### Temp directory
if (getenv('AMAZEEIO_TMP_PATH')) {
  $conf['file_temporary_path'] = getenv('AMAZEEIO_TMP_PATH');
}

// Loading settings for all environment types.
if (file_exists(__DIR__ . '/all.settings.php')) {
  include __DIR__ . '/all.settings.php';
}

/**
 * Add the domain module setup routine.
 */
if (!defined('IS_BE_PROBE') || !IS_BE_PROBE) {
  include DRUPAL_ROOT . '/sites/all/modules/contrib/domain/settings.inc';
}

$conf['menu_override_parent_selector'] = true;

if (getenv('AMAZEEIO_SITE_URL')) {
  // Set "domain space" that is necessary to handle redirects between domains
  define('DOMAIN_SPACE', getenv('AMAZEEIO_SITE_URL'));

  // HACK - REMOVE WHEN DOMAIN URLS FOR DIFFERENT ENVS CAN BE DONE PROPERLY
  define('KADACALENDAR_BASE_URL', 'http://calendar.'. getenv('AMAZEEIO_SITE_URL') .'/');
}

// Environment specific settings files.
if(getenv('AMAZEEIO_SITE_ENVIRONMENT')){
  if (file_exists(__DIR__ . '/' . getenv('AMAZEEIO_SITE_ENVIRONMENT') . '.settings.php')) {
    include __DIR__ . '/env_' . getenv('AMAZEEIO_SITE_ENVIRONMENT') . '.settings.env.php';
  }
}

// Last: this servers specific settings files.
if (file_exists(__DIR__ . '/settings.local.php')) {
  include __DIR__ . '/settings.local.php';
}
