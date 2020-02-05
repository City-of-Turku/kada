<?php

/**
 * @file
 * pori_configuration.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function pori_configuration_locale_default_languages() {
  $languages = array();

  // Exported language: de.
  $languages['de'] = array(
    'language' => 'de',
    'name' => 'German',
    'native' => 'DE',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'de',
    'weight' => 0,
  );
  return $languages;
}
