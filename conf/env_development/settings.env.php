<?php

/**
 * Environment specific settings.
 */

//$base_url = 'http://itis-dev.druid.fi';

$databases = array(
  'default' =>
    array (
      'default' =>
        array (
          'database' => 'itis',
          'username' => 'itis_dev',
          'password' => 'druidshallpass',
          'host' => 'localhost',
          'port' => '',
          'driver' => 'mysql',
          'prefix' => '',
          'charset' => 'utf8mb4',
          'collation' => 'utf8mb4_general_ci',
        ),
    ),
);


// Enable theme debug.
$conf['theme_debug'] = FALSE;

// File system.
$conf['file_public_path'] = 'sites/default/files';
$conf['file_temporary_path'] = '/tmp';

$conf['drupal_http_request_fails'] = FALSE;

// Disable css/js aggregation and make errors visible.
$conf['preprocess_css'] = 0;
$conf['preprocess_js'] = 0;
//$conf['error_level'] = 2;

$conf['advagg_skip_gzip_check'] = TRUE;
$conf['advagg_skip_404_check'] = TRUE;

// Set default language to English during development.
// This is good for example for exporting features.
// Uncomment the line below to activate this setting.
#$conf['language_default'] = language_default();

if ((isset($_SERVER['HTTPS']) && strtolower($_SERVER['HTTPS']) == 'on')
  || (isset($_SERVER['HTTP_X_FORWARDED_PROTO']) && $_SERVER['HTTP_X_FORWARDED_PROTO'] == 'https')
  || (isset($_SERVER['HTTP_HTTPS']) && $_SERVER['HTTP_HTTPS'] == 'on')
) {
  $_SERVER['HTTPS'] = 'on';
}

if (getenv('AMAZEEIO_SITENAME')){
  $databases['default']['default'] = array(
    'driver' => 'mysql',
    'database' => getenv('AMAZEEIO_SITENAME'),
    'username' => getenv('AMAZEEIO_DB_USERNAME'),
    'password' => getenv('AMAZEEIO_DB_PASSWORD'),
    'host' => getenv('AMAZEEIO_DB_HOST'),
    'port' => getenv('AMAZEEIO_DB_PORT'),
    'prefix' => '',
    'charset' => 'utf8mb4',
    'collation' => 'utf8mb4_general_ci',
  );
}

### amazee.io Base URL
if (getenv('AMAZEEIO_BASE_URL')) {
  $base_url = getenv('AMAZEEIO_BASE_URL');
}
