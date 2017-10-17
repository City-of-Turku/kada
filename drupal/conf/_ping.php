<?php

define('IS_BE_PROBE', TRUE);

//FOR DRUPAL 7 ONLY!
//FILE IS SUPPOSED TO BE IN DRUPAL ROOT DIRECTORY (NEXT TO INDEX.PHP)!!

// Register our shutdown function so that no other shutdown functions run before this one.
// This shutdown function calls exit(), immediately short-circuiting any other shutdown functions,
// such as those registered by the devel.module for statistics.
register_shutdown_function('status_shutdown');
function status_shutdown() {
  exit();
}

function probe_error($err_txt) {
  header('HTTP/1.1 500 Internal Server Error');
  print 'Errors on this server will cause it to be removed from the load balancer.';
  print $err_txt;

  // Exit immediately, note the shutdown function registered at the top of the file.
  exit();
}

// We want to ignore _ping.php from New Relic statistics,
// because with 180rpm and less than 10s avg response times,
// _ping.php skews the overall statistics significantly.
if (extension_loaded('newrelic')) {
  newrelic_ignore_transaction();
}

header("HTTP/1.0 503 Service Unavailable");

// KADA only: Check that the backend isn't disabled
$addr = $_SERVER['SERVER_ADDR'];
$self = $_SERVER['SCRIPT_FILENAME'];
$dirname = dirname($self);
if (file_exists("{$dirname}/{$addr}-DISABLE")) {
  probe_error('Backend disabled');
}
elseif (!filemtime($self)) {
  probe_error('Mtime failed');
}

// Drupal bootstrap.
if (is_dir('/wwwroot/dev.kada.fi/current')) {
  define('DRUPAL_ROOT', '/wwwroot/dev.kada.fi/current');
}
elseif (is_dir('/wwwroot/prod.kada.fi/current')) {
  define('DRUPAL_ROOT', '/wwwroot/prod.kada.fi/current');
}
else {
  probe_error('Directory not found');
}

require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_DATABASE);

// Check that the main database is active.
$result = db_query('SELECT * FROM {users} WHERE uid = 1');
if (!$result->rowCount()) {
  probe_error('Master database not responding.');
}
/*
// Check that all memcache instances are running on this server.
if (isset($conf['memcache_servers'])) {
  foreach ($conf['memcache_servers'] as $address => $bin) {
    list($ip, $port) = explode(':', $address);
    if (!memcache_connect($ip, $port)) {
      probe_error('Memcache bin <em>' . $bin . '</em> at address ' . $address . ' is not available.');
    }
  }
}
*/
// Check that Redis instace is running correctly using PhpRedis
// TCP/IP connection
if (isset($conf['redis_client_host']) && isset($conf['redis_client_port'])) {
  $redis = new Redis();
  if (!$redis->connect($conf['redis_client_host'], $conf['redis_client_port'])) {
    probe_error('Redis at ' . $conf['redis_client_host'] . ':' . $conf['redis_client_port'] . ' is not available.');
  }
}

// UNIX socket connection
if (isset($conf['redis_cache_socket'])) {
  $redis = new Redis();
  if (!$redis->connect($conf['redis_cache_socket'])) {
    probe_error('Redis at ' . $conf['redis_cache_socket'] . ' is not available.');
  }
}
// Check that the files directory is operating properly.
if ($test = tempnam(variable_get('file_directory_path', conf_path() .'/files'), 'status_check_')) {
// Uncomment to check if files are saved in the correct server directory.
//if (!strpos($test, '/mnt/nfs') === 0) {
//  probe_error('Files are not being saved in the NFS mount under /mnt/nfs.');
//}
  if (!unlink($test)) {
    probe_error('Could not delete newly create files in the files directory.');
  }
}
else {
  probe_error('Could not create temporary file in the files directory.');
}

// Split up this message, to prevent the remote chance of monitoring software
// reading the source code if mod_php fails and then matching the string.
header("HTTP/1.0 200 OK");
print 'CONGRATULATIONS' . ' 200';

// Exit immediately, note the shutdown function registered at the top of the file.
exit();
