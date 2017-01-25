<?php
// Link this file to ~/.drush

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

$aliases['local'] = array(
  'uri' => 'local.example.org',
  'remote-host' => '192.168.10.10',
  'remote-user' => 'vagrant',
  'root' => '/vagrant/drupal/current',
  'path-aliases' => array(
    '%files' => '/vagrant/drupal/current/sites/default/files',
    '%dump-dir' => '/home/vagrant',
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

$aliases['develop'] = array(
  'uri' => 'dev.example.org',
  'root' => '/wwwroot/dev.example.org/current',
  'remote-host' => 'dev.example.org',
  'remote-user' => 'user',
  'path-aliases' => array(
    '%dump-dir' => '/home/user',
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
