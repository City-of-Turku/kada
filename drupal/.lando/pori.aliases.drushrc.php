<?php

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

// Lando
$aliases['local'] = [
  'root' => '/app/web',
  'uri' => 'https://pori.lndo.site',
  'path-aliases' =>
  [
    '%drush' => '/var/www/.composer/vendor/bin/drush',
    '%files' => '/app/files',
  ],
];

$aliases['v.local'] = $aliases['local'];
$aliases['v.local']['uri'] = 'https://visitpori.lndo.site';

$aliases['b.local'] = $aliases['local'];
$aliases['b.local']['uri'] = 'https://businesspori.lndo.site';

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

$aliases['v.dev'] = $aliases['dev'];
$aliases['v.dev']['uri'] = 'https://visitpori.dev.wunder.io';

$aliases['b.dev'] = $aliases['stage'];
$aliases['b.dev']['uri'] = 'https://businesspori.dev.wunder.io';

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

$aliases['b.stage'] = $aliases['stage'];
$aliases['b.stage']['uri'] = 'https://businesspori.stage.wunder.io';

$aliases['prod'] = array(
  'uri' => 'https://www.pori.fi',
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

$aliases['b.prod'] = $aliases['stage'];
$aliases['b.prod']['uri'] = 'https://www.businesspori.fi';
