<?php
/**
 * @file
 * kada_sections_feature.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function kada_sections_feature_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-sections.
  $menus['menu-sections'] = array(
    'menu_name' => 'menu-sections',
    'title' => 'Sections FI',
    'description' => '',
    'language' => 'fi',
    'i18n_mode' => 2,
  );
  // Exported menu: menu-sections-en.
  $menus['menu-sections-en'] = array(
    'menu_name' => 'menu-sections-en',
    'title' => 'Sections EN',
    'description' => '',
    'language' => 'en',
    'i18n_mode' => 2,
  );
  // Exported menu: menu-sections-sv.
  $menus['menu-sections-sv'] = array(
    'menu_name' => 'menu-sections-sv',
    'title' => 'Sections SV',
    'description' => '',
    'language' => 'sv',
    'i18n_mode' => 2,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Sections EN');
  t('Sections FI');
  t('Sections SV');


  return $menus;
}
