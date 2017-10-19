<?php

/**
 * Release configuration
 *
 * These hooks are called from:
 * https://github.com/druidfi/build-tool/blob/master/src/Druidfi/Release.php
 *
 * Hooks must return true on success or error string
 */

/** @var string $env environment */
/** @var \Symfony\Component\Filesystem\Filesystem $fs Filesystem */
/** @var \Symfony\Component\Console\Output\ConsoleOutput $output Console output */

if ($env === 'testing') {
  $env = 'development';
}

$symlinking = [
    // Custom modules, features and themes
    'code/modules/features' => 'sites/all/modules/features',
    'code/modules/custom' => 'sites/all/modules/custom',
    'code/themes/custom' => 'sites/all/themes/custom',

    // Libraries
    //'code/libraries/fonts' => 'sites/all/themes/libraries/fonts',
    //'code/libraries/jquery.charCount' => 'sites/all/libraries/jquery.charCount',
    //'code/libraries/jquery.cycle' => 'sites/all/libraries/jquery.cycle',
    //'code/libraries/jquery.cycle2' => 'sites/all/libraries/jquery.cycle2',
    //'code/libraries/PHPExcel' => 'sites/all/libraries/PHPExcel',

    // Drush settings
    'drush' => 'sites/all/drush',

    // Profiles
    'code/profiles/kadaprofile' => 'profiles/kadaprofile',

    // Shared settings file
    'conf/all.settings.php' => 'sites/default/all.settings.php',
    'conf/settings.php' => 'sites/default/settings.php',

    'conf/'. $env .'.settings.php' => 'sites/default/'. $env .'.settings.php',

    // Files
    'files' => 'sites/default/files',
    //'files_private' => 'sites/default/private',
];

/**
 * Pre-release hook
 *
 * Build is not yet symlinked to release
 *
 * @param string $selected_path Build's path
 * @param \Symfony\Component\Filesystem\Filesystem $fs
 * @return boolean Success
 */
$pre_release = function($selected_path, $fs) use ($output, $symlinking) {
    return true;
};

/**
 * Post-release hook
 *
 * Build is symlinked to release
 *
 * @param string $selected_path Build's path
 * @param \Symfony\Component\Filesystem\Filesystem $fs
 * @return boolean Success
 */
$post_release = function($selected_path, $fs) use ($output, $symlinking) {
    $selected_path = str_replace(getcwd() . DIRECTORY_SEPARATOR, '', $selected_path);
    foreach ($symlinking as $source => $symlink) {
        $symlink = $selected_path . DIRECTORY_SEPARATOR . $symlink;
        $go_up = substr_count($symlink, DIRECTORY_SEPARATOR);
        $source = str_repeat('..'. DIRECTORY_SEPARATOR, $go_up) . $source;

        $output->writeln(sprintf(' - symlinking from %s to %s', $symlink, $source));
        $fs->symlink($source, $symlink);
    }

    return true;
};
