<?php
/**
 * @file
 * amazee.io Drupal 7 all environment configuration file.
 *
 * This file should contain all settings.php configurations that are needed by all sites.
 * It contains some defaults that the amazee.io team suggests, please edit them as required.
 */

// Minimum cache lifetime should be always 0, therefore no automatic cache purging
$conf['cache_lifetime'] = 0;

// Pages will be compressed by nginx, no need for Drupal to do that
$conf['page_compression'] = 0;

/**
 * Add the domain module setup routine.
 */
if (!defined('IS_BE_PROBE') || !IS_BE_PROBE) {
  include DRUPAL_ROOT . '/sites/all/modules/contrib/domain/settings.inc';
}
