<?php
// Link this file to ~/.drush
// If the .vagrant folder exists find the ssh key for the virtual machine
if (file_exists(drush_server_home() . '/.vagrant.d')) {
  $home = drush_server_home();
  // Solve the key file to use
  $path = explode('/', dirname(__FILE__));
  array_pop($path);
  array_pop($path);
  $path[] = '.vagrant';
  $path = implode('/', $path);
  $key = shell_exec('find ' . $path . ' -iname private_key');
  if (!$key) {
    $key = $home . '/.vagrant.d/insecure_private_key';
  }
  $key = rtrim($key);

} else {
  // .vagrant directory doesn't exist, just use empty key
  $key = "";
}

$cache_tables = array(
  'cache',
  'cache_admin_menu',
  'cache_block',
  'cache_bootstrap',
  'cache_coffee',
  'cache_eck',
  'cache_entity_og_membership',
  'cache_entity_og_membership_type',
  'cache_field',
  'cache_filter',
  'cache_form',
  'cache_image',
  'cache_libraries',
  'cache_menu',
  'cache_metatag',
  'cache_page',
  'cache_path',
  'cache_rules',
  'cache_scald',
  'cache_search_api_solr',
  'cache_shorten',
  'cache_token',
  'cache_variable',
  'cache_views',
  'cache_views_data',
  'history',
  'sessions',
);

$aliases['docker'] = array(
  'uri' => 'http://localhost:8095',
  'remote-host' => 'docker',
  'remote-user' => 'root',
  'root' => '/wwwroot/current',
  'ssh-options' => '-p 2235 -o UserKnownHostsFile=/dev/null -o StrictHostKeyChecking=no',
  'path-aliases' => array(
#    '%files' => '/wwwroot/current/sites/default/files',
#    '%dump-dir' => '/home/vagrant',
#    '%drush-script' => '/usr/lib/composer/vendor/bin/drush',
  ),
  'command-specific' => array(
    'sql-sync' => array(
      'no-cache' => TRUE,
      'no-ordered-dump' => TRUE,
      'structure-tables' => array(
        'custom' => $cache_tables,
      ),
    ),
  ),
);
$aliases['v.docker'] = $aliases['docker'];
$aliases['v.docker']['uri'] = 'http://local.visitpori.fi:8095';

$aliases['local'] = array(
  'parent' => '@parent',
  'site' => 'pori-kada',
  'env' => 'vagrant',
  'root' => '/vagrant/drupal/web',
  'remote-host' => 'local.pori.fi',
  'remote-user' => 'vagrant',
  'ssh-options' => '-i ' . $key,
  'path-aliases' => array(
    '%files' => '/vagrant/drupal/files',
    '%dump-dir' => '/home/vagrant',
  ),
  'command-specific' => array(
    'sql-sync' => array(
      'no-cache' => TRUE,
      'structure-tables' => array(
        'custom' => $cache_tables,
      ),
    ),
  ),
);

$aliases['dev'] = array(
  'uri' => 'https://pori.dev.wunder.io',
  'remote-user' => 'www-admin',
  'remote-host' => 'pori.dev.wunder.io',
  'root' => '/var/www/pori.dev.wunder.io/current/web',
  'path-aliases' => array(
    '%dump-dir' => '/home/www-admin',
  ),
  'command-specific' => array(
    'sql-sync' => array(
      'no-cache' => TRUE,
      'structure-tables' => array(
        'custom' => $cache_tables,
      ),
    ),
  ),
);

$aliases['stage'] = array(
  'uri' => 'https://pori.stage.wunder.io',
  'remote-user' => 'www-admin',
  'remote-host' => 'pori.stage.wunder.io',
  'root' => '/var/www/pori.stage.wunder.io/current/web',
  'path-aliases' => array(
    '%dump-dir' => '/home/www-admin',
  ),
  'command-specific' => array(
    'sql-sync' => array(
      'no-cache' => TRUE,
      'structure-tables' => array(
        'custom' => $cache_tables,
      ),
    ),
  ),
);

$aliases['v.stage'] = $aliases['stage'];
$aliases['v.stage']['uri'] = 'https://visitpori.stage.wunder.io';

$aliases['prod'] = array(
  'uri' => 'https://beta.pori.fi',
  'remote-user' => 'www-admin',
  'remote-host' => 'pori.prod.wunder.io',
  'root' => '/var/www/pori.prod.wunder.io/current/web',
  'path-aliases' => array(
    '%dump-dir' => '/home/www-admin',
  ),
  'command-specific' => array(
    'sql-sync' => array(
      'no-cache' => TRUE,
      'structure-tables' => array(
        'custom' => $cache_tables,
      ),
    ),
  ),
);

$aliases['v.prod'] = $aliases['stage'];
$aliases['v.prod']['uri'] = 'https://www.visitpori.fi';
