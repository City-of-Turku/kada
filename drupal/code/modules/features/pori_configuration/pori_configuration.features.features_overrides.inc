<?php
/**
 * @file
 * pori_configuration.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function pori_configuration_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: context
  $overrides["context.footer_menu.reactions|block|blocks|menu_block-10|weight"] = 2;
  $overrides["context.footer_menu.reactions|block|blocks|menu_block-8|weight"] = 0;
  $overrides["context.footer_menu.reactions|block|blocks|menu_block-9|weight"] = 1;
  $overrides["context.language_switcher.reactions|block|blocks|locale-language|region"] = 'branding';
  $overrides["context.language_switcher.reactions|block|blocks|locale-language|weight"] = -10;

  // Exported overrides for: variable
  $overrides["variable.responsive_menus_css_selectors.value"] = '.l-navigation .menu-block-wrapper > .menu
          .l-navigation .block--og-menu-single .block__content > .menu
          .l-branding .menu--language-switcher';
  $overrides["variable.responsive_menus_media_size.value"] = 1025;
  $overrides["variable.responsive_menus_media_unit.value"] = 'px';

 return $overrides;
}
