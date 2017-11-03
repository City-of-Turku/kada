<?php
/**
 * @file
 * pori_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pori_configuration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_context_default_contexts_alter().
 */
function pori_configuration_context_default_contexts_alter(&$data) {
  if (isset($data['footer_menu'])) {
    $data['footer_menu']->reactions['block']['blocks']['menu_block-10']['weight'] = 2; /* WAS: -8 */
    $data['footer_menu']->reactions['block']['blocks']['menu_block-8']['weight'] = 0; /* WAS: -10 */
    $data['footer_menu']->reactions['block']['blocks']['menu_block-9']['weight'] = 1; /* WAS: -9 */
  }
  if (isset($data['language_switcher'])) {
    $data['language_switcher']->reactions['block']['blocks']['locale-language']['region'] = 'branding'; /* WAS: 'navigation' */
    $data['language_switcher']->reactions['block']['blocks']['locale-language']['weight'] = -10; /* WAS: -50 */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function pori_configuration_strongarm_alter(&$data) {
  if (isset($data['responsive_menus_css_selectors'])) {
    $data['responsive_menus_css_selectors']->value = '.l-navigation .menu-block-wrapper > .menu
            .l-navigation .block--og-menu-single .block__content > .menu
            .l-branding .menu--language-switcher'; /* WAS: '.l-navigation .menu-block-wrapper > .menu
    .l-navigation .block--og-menu-single .block__content > .menu
    .l-navigation .menu--language-switcher' */
  }
  if (isset($data['responsive_menus_media_size'])) {
    $data['responsive_menus_media_size']->value = 1025; /* WAS: 59.94 */
  }
  if (isset($data['responsive_menus_media_unit'])) {
    $data['responsive_menus_media_unit']->value = 'px'; /* WAS: 'em' */
  }
}
