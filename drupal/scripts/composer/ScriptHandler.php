<?php

/**
 * @file
 * Contains \DrupalProject\composer\ScriptHandler.
 */

namespace DrupalProject\composer;

use Composer\Script\Event;
use Composer\Semver\Comparator;
use DrupalFinder\DrupalFinder;
use Symfony\Component\Filesystem\Filesystem;

class ScriptHandler {

  public static function createRequiredFiles(Event $event) {
    $fs = new Filesystem();
    $drupalFinder = new DrupalFinder();
    $drupalFinder->locateRoot(getcwd());
    $drupalRoot = $drupalFinder->getDrupalRoot();

    $dirs = [
      'sites/all/modules',
      'profiles',
      'sites/all/themes',
    ];

    // Required for unit testing
    foreach ($dirs as $dir) {
      if (!$fs->exists($drupalRoot . '/'. $dir)) {
        $fs->mkdir($drupalRoot . '/'. $dir);
        $fs->touch($drupalRoot . '/'. $dir . '/.gitkeep');
      }
    }

    // Prepare the settings file for installation
    if (!$fs->exists($drupalRoot . '/sites/default/settings.php') && $fs->exists($drupalRoot . '/sites/default/default.settings.php')) {
      $fs->copy($drupalRoot . '/sites/default/default.settings.php', $drupalRoot . '/sites/default/settings.php');
      $fs->chmod($drupalRoot . '/sites/default/settings.php', 0666);
      $event->getIO()->write("Created a sites/default/settings.php file with chmod 0666");
    }

    // Create the files directory with chmod 0777
    if (!$fs->exists($drupalRoot . '/sites/default/files')) {
      $oldmask = umask(0);
      $fs->mkdir($drupalRoot . '/sites/default/files', 0777);
      umask($oldmask);
      $event->getIO()->write("Created a sites/default/files directory with chmod 0777");
    }
  }

  /**
   * Remove project-internal files.
   */
  public static function removeInternalFiles(Event $event) {
    $fs = new Filesystem();

    // List of files to be removed.
    $files = [
      '.travis.yml',
      'LICENSE',
      'phpunit.xml.dist',
      'web/.gitignore',
      'web/CHANGELOG.txt',
      'web/INSTALL.mysql.txt',
      'web/INSTALL.pgsql.txt',
      'web/INSTALL.sqlite.txt',
      'web/install.php',
      'web/INSTALL.txt',
      'web/MAINTAINERS.txt',
      'web/README.txt',
      'web/update.php',
      'web/UPGRADE.txt',
      'web/sites/all/libraries/colorbox/example1',
      'web/sites/all/libraries/colorbox/example2',
      'web/sites/all/libraries/colorbox/example3',
      'web/sites/all/libraries/colorbox/example4',
      'web/sites/all/libraries/colorbox/example5',
      'web/sites/all/libraries/ckeditor/samples',
      'web/sites/all/libraries/openlayers/examples',
      'web/sites/all/libraries/flexslider/demo',
      'web/sites/all/libraries/geoPHP/tests',
      'web/sites/all/libraries/php-proauth/examples',
      'web/sites/all/libraries/plupload/examples',
      'web/sites/all/libraries/predis/examples',
      'web/sites/all/libraries/proj4js/demo',
      'web/sites/all/libraries/ckeditor/plugins/lineutils/dev',
      'web/sites/all/libraries/ckeditor/plugins/widget/dev',
    ];

    foreach ($files as $file) {
      if ($fs->exists($file)) {
        $fs->remove($file);
      }
    }
  }

  /**
   * Checks if the installed version of Composer is compatible.
   *
   * Composer 1.0.0 and higher consider a `composer install` without having a
   * lock file present as equal to `composer update`. We do not ship with a lock
   * file to avoid merge conflicts downstream, meaning that if a project is
   * installed with an older version of Composer the scaffolding of Drupal will
   * not be triggered. We check this here instead of in drupal-scaffold to be
   * able to give immediate feedback to the end user, rather than failing the
   * installation after going through the lengthy process of compiling and
   * downloading the Composer dependencies.
   *
   * @see https://github.com/composer/composer/pull/5035
   */
  public static function checkComposerVersion(Event $event) {
    $composer = $event->getComposer();
    $io = $event->getIO();

    $version = $composer::VERSION;

    // The dev-channel of composer uses the git revision as version number,
    // try to the branch alias instead.
    if (preg_match('/^[0-9a-f]{40}$/i', $version)) {
      $version = $composer::BRANCH_ALIAS_VERSION;
    }

    // If Composer is installed through git we have no easy way to determine if
    // it is new enough, just display a warning.
    if ($version === '@package_version@' || $version === '@package_branch_alias_version@') {
      $io->writeError('<warning>You are running a development version of Composer. If you experience problems, please update Composer to the latest stable version.</warning>');
    }
    elseif (Comparator::lessThan($version, '1.0.0')) {
      $io->writeError('<error>Drupal-project requires Composer version 1.0.0 or higher. Please update your Composer before continuing</error>.');
      exit(1);
    }
  }

    /**
   * Set up _ping.php instance.
   */
  public static function setupPing(Event $event) {
    $fs = new Filesystem();
    $drupalFinder = new DrupalFinder();
    $drupalFinder->locateRoot(getcwd());
    $drupalRoot = $drupalFinder->getDrupalRoot();
    $composerRoot = $drupalFinder->getComposerRoot();

    // Copy _ping.php to drupalRoot.
    $fs->copy($composerRoot . '/conf/_ping.php', $drupalRoot . '_ping.php');
  }

  /**
   * Set up SimpleSAMLphp instance.
   */
  public static function setupSimpleSaml(Event $event) {
    // $fs = new Filesystem();
    // $drupalFinder = new DrupalFinder();
    // $drupalFinder->locateRoot(getcwd());
    // $drupalRoot = $drupalFinder->getDrupalRoot();
    // $composerRoot = $drupalFinder->getComposerRoot();

    // Copy the simplesamlphp/www directory to drupalRoot.
    // $fs->remove($drupalRoot . '/simplesaml');
    // $fs->mirror($composerRoot . '/vendor/simplesamlphp/simplesamlphp/www', $drupalRoot . '/simplesaml');
    // $fs->remove($drupalRoot . '/simplesaml/config');
    // $fs->mkdir($drupalRoot . '/simplesaml/config', 0755);
    // $fs->copy($composerRoot . '/conf/simplesaml/config/authsources.php', $drupalRoot . '/simplesaml/config/authsources.php');
    // $fs->copy($composerRoot . '/conf/simplesaml/config/config.php', $drupalRoot . '/simplesaml/config/config.php');
  }
}
