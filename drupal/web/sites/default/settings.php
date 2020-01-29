<?php

/**
 * @file
 * General settings.
 */

// The default list of directories that will be ignored by Drupal's file API.
$conf['file_scan_ignore_directories'] = array(
  'node_modules',
  'bower_components',
);

// Lando configuration overrides.
if (getenv('LANDO_INFO') && file_exists(__DIR__ . '/settings.lando.php')) {
  include __DIR__ . '/settings.lando.php';
}

// Environment specific configuration, if available.
if (file_exists(__DIR__ . '/settings.local.php')) {
  include __DIR__ . '/settings.local.php';
}
