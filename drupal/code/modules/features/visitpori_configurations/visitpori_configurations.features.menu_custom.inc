<?php
/**
 * @file
 * visitpori_configurations.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function visitpori_configurations_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-visitpori-footer-menu-fi.
  $menus['menu-visitpori-footer-menu-fi'] = array(
    'menu_name' => 'menu-visitpori-footer-menu-fi',
    'title' => 'Visitpori footer menu FI',
    'description' => '',
    'language' => 'fi',
    'i18n_mode' => 2,
  );
  // Exported menu: menu-visitpori-main-menu.
  $menus['menu-visitpori-main-menu'] = array(
    'menu_name' => 'menu-visitpori-main-menu',
    'title' => 'Visitpori päävalikko',
    'description' => '',
    'language' => 'fi',
    'i18n_mode' => 2,
  );
  // Exported menu: menu-visitpori-top-menu-fi.
  $menus['menu-visitpori-top-menu-fi'] = array(
    'menu_name' => 'menu-visitpori-top-menu-fi',
    'title' => 'Visitpori top menu FI',
    'description' => '',
    'language' => 'fi',
    'i18n_mode' => 2,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Visitpori footer menu FI');
  t('Visitpori päävalikko');
  t('Visitpori top menu FI');

  return $menus;
}
