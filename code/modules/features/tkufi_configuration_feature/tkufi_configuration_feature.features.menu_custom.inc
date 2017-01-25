<?php
/**
 * @file
 * tkufi_configuration_feature.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function tkufi_configuration_feature_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
    'language' => 'fi',
    'i18n_mode' => 2,
  );
  // Exported menu: menu-footer-en.
  $menus['menu-footer-en'] = array(
    'menu_name' => 'menu-footer-en',
    'title' => 'Footer menu EN',
    'description' => '',
    'language' => 'en',
    'i18n_mode' => 2,
  );
  // Exported menu: menu-footer-fi.
  $menus['menu-footer-fi'] = array(
    'menu_name' => 'menu-footer-fi',
    'title' => 'Footer menu FI',
    'description' => '',
    'language' => 'fi',
    'i18n_mode' => 2,
  );
  // Exported menu: menu-footer-sv.
  $menus['menu-footer-sv'] = array(
    'menu_name' => 'menu-footer-sv',
    'title' => 'Footer menu SV',
    'description' => '',
    'language' => 'sv',
    'i18n_mode' => 2,
  );
  // Exported menu: menu-main-menu-en.
  $menus['menu-main-menu-en'] = array(
    'menu_name' => 'menu-main-menu-en',
    'title' => 'Main menu EN',
    'description' => '',
    'language' => 'en',
    'i18n_mode' => 2,
  );
  // Exported menu: menu-main-menu-sv.
  $menus['menu-main-menu-sv'] = array(
    'menu_name' => 'menu-main-menu-sv',
    'title' => 'Main menu SV',
    'description' => '',
    'language' => 'sv',
    'i18n_mode' => 2,
  );
  // Exported menu: menu-top-menu-en.
  $menus['menu-top-menu-en'] = array(
    'menu_name' => 'menu-top-menu-en',
    'title' => 'Top menu EN',
    'description' => '',
    'language' => 'en',
    'i18n_mode' => 2,
  );
  // Exported menu: menu-top-menu-fi.
  $menus['menu-top-menu-fi'] = array(
    'menu_name' => 'menu-top-menu-fi',
    'title' => 'Top menu FI',
    'description' => '',
    'language' => 'fi',
    'i18n_mode' => 2,
  );
  // Exported menu: menu-top-menu-sv.
  $menus['menu-top-menu-sv'] = array(
    'menu_name' => 'menu-top-menu-sv',
    'title' => 'Top menu SV',
    'description' => '',
    'language' => 'sv',
    'i18n_mode' => 2,
  );
  // Exported menu: og-menu-single.
  $menus['og-menu-single'] = array(
    'menu_name' => 'og-menu-single',
    'title' => 'OG menu',
    'description' => 'Contains all the links for organic groups and their menus',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contains all the links for organic groups and their menus');
  t('Footer menu EN');
  t('Footer menu FI');
  t('Footer menu SV');
  t('Main menu');
  t('Main menu EN');
  t('Main menu SV');
  t('OG menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('Top menu EN');
  t('Top menu FI');
  t('Top menu SV');


  return $menus;
}
