<?php
/**
 * @file
 * pori_visitpori_override_feature.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function pori_visitpori_override_feature_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: context
  $overrides["context.non_content_special_page.conditions|context_all"] = array(
    'values' => array(
      '~visitpori_domain' => '~visitpori_domain',
    ),
  );
  $overrides["context.visitpori_footer_menu.reactions|block|blocks|menu_block-32"] = array(
    'module' => 'menu_block',
    'delta' => 32,
    'region' => 'footer',
    'weight' => -8,
  );
  $overrides["context.visitpori_footer_menu.reactions|block|blocks|menu_block-33"] = array(
    'module' => 'menu_block',
    'delta' => 33,
    'region' => 'footer',
    'weight' => -7,
  );
  $overrides["context.visitpori_top_menu.reactions|block|blocks|menu_block-34"] = array(
    'module' => 'menu_block',
    'delta' => 34,
    'region' => 'navigation',
    'weight' => -8,
  );
  $overrides["context.visitpori_top_menu.reactions|block|blocks|menu_block-35"] = array(
    'module' => 'menu_block',
    'delta' => 35,
    'region' => 'navigation',
    'weight' => -7,
  );
  $overrides["context.visitpori_top_menu.reactions|block|blocks|menu_block-36"] = array(
    'module' => 'menu_block',
    'delta' => 36,
    'region' => 'navigation_top',
    'weight' => -8,
  );
  $overrides["context.visitpori_top_menu.reactions|block|blocks|menu_block-37"] = array(
    'module' => 'menu_block',
    'delta' => 37,
    'region' => 'navigation_top',
    'weight' => -7,
  );

  // Exported overrides for: variable
  $overrides["variable.menu_options_landing_page.value|0"] = 'menu-footer-fi';
  $overrides["variable.menu_options_landing_page.value|1"] = 'menu-footer-en';
  $overrides["variable.menu_options_landing_page.value|10"] = 'menu-visitpori-footer-menu-en';
  $overrides["variable.menu_options_landing_page.value|11"] = 'menu-visitpori-footer-menu-fi';
  $overrides["variable.menu_options_landing_page.value|12"] = 'menu-visitpori-footer-menu-sv';
  $overrides["variable.menu_options_landing_page.value|13"] = 'menu-visitpori-main-menu-de';
  $overrides["variable.menu_options_landing_page.value|14"] = 'menu-visitpori-main-navigation';
  $overrides["variable.menu_options_landing_page.value|15"] = 'menu-visitpori-main-menu-sv';
  $overrides["variable.menu_options_landing_page.value|16"] = 'menu-visitpori-main-menu';
  $overrides["variable.menu_options_landing_page.value|17"] = 'menu-visitpori-top-menu-de';
  $overrides["variable.menu_options_landing_page.value|18"] = 'menu-visitpori-top-menu-en';
  $overrides["variable.menu_options_landing_page.value|19"] = 'menu-visitpori-top-menu-fi';
  $overrides["variable.menu_options_landing_page.value|20"] = 'menu-visitpori-top-menu-sv';
  $overrides["variable.menu_options_landing_page.value|9"] = 'menu-visitpori-footer-menu-de';
  $overrides["variable.menu_options_page.value|10"] = 'menu-visitpori-footer-menu-de';
  $overrides["variable.menu_options_page.value|11"] = 'menu-visitpori-footer-menu-en';
  $overrides["variable.menu_options_page.value|12"] = 'menu-visitpori-footer-menu-fi';
  $overrides["variable.menu_options_page.value|13"] = 'menu-visitpori-footer-menu-sv';
  $overrides["variable.menu_options_page.value|14"] = 'menu-visitpori-main-menu-de';
  $overrides["variable.menu_options_page.value|15"] = 'menu-visitpori-main-navigation';
  $overrides["variable.menu_options_page.value|16"] = 'menu-visitpori-main-menu-sv';
  $overrides["variable.menu_options_page.value|17"] = 'menu-visitpori-main-menu';
  $overrides["variable.menu_options_page.value|18"] = 'menu-visitpori-top-menu-de';
  $overrides["variable.menu_options_page.value|19"] = 'menu-visitpori-top-menu-en';
  $overrides["variable.menu_options_page.value|20"] = 'menu-visitpori-top-menu-fi';
  $overrides["variable.menu_options_page.value|21"] = 'menu-visitpori-top-menu-sv';

 return $overrides;
}
