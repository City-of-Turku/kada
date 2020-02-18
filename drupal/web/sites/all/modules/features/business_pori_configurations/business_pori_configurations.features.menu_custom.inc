<?php

/**
 * @file
 * business_pori_configurations.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function business_pori_configurations_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-business-pori-footer-menu-e.
  $menus['menu-business-pori-footer-menu-e'] = array(
    'menu_name' => 'menu-business-pori-footer-menu-e',
    'title' => 'Business Pori footer menu EN',
    'description' => '',
    'language' => 'en',
    'i18n_mode' => 2,
  );
  // Exported menu: menu-business-pori-footer-menu-f.
  $menus['menu-business-pori-footer-menu-f'] = array(
    'menu_name' => 'menu-business-pori-footer-menu-f',
    'title' => 'Business Pori footer menu FI',
    'description' => '',
    'language' => 'fi',
    'i18n_mode' => 2,
  );
  // Exported menu: menu-business-pori-main-navigati.
  $menus['menu-business-pori-main-navigati'] = array(
    'menu_name' => 'menu-business-pori-main-navigati',
    'title' => 'Business Pori Main navigation EN',
    'description' => '',
    'language' => 'en',
    'i18n_mode' => 2,
  );
  // Exported menu: menu-business-pori-p-valikko.
  $menus['menu-business-pori-p-valikko'] = array(
    'menu_name' => 'menu-business-pori-p-valikko',
    'title' => 'Business Pori päävalikko',
    'description' => '',
    'language' => 'fi',
    'i18n_mode' => 2,
  );
  // Exported menu: menu-business-pori-top-menu-en.
  $menus['menu-business-pori-top-menu-en'] = array(
    'menu_name' => 'menu-business-pori-top-menu-en',
    'title' => 'Business Pori top menu EN',
    'description' => '',
    'language' => 'en',
    'i18n_mode' => 2,
  );
  // Exported menu: menu-business-pori-top-menu-fi.
  $menus['menu-business-pori-top-menu-fi'] = array(
    'menu_name' => 'menu-business-pori-top-menu-fi',
    'title' => 'Business Pori top menu FI',
    'description' => '',
    'language' => 'fi',
    'i18n_mode' => 2,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Business Pori Main navigation EN');
  t('Business Pori footer menu EN');
  t('Business Pori footer menu FI');
  t('Business Pori päävalikko');
  t('Business Pori top menu EN');
  t('Business Pori top menu FI');

  return $menus;
}
