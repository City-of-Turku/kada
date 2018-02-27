<?php
/**
 * @file
 * pori_section_override_feature.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function pori_section_override_feature_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: context
  $overrides["context.default_section.conditions|context|values|~visitpori_domain"] = '~visitpori_domain';
  $overrides["context.section_header.reactions|block|blocks|locale-language"] = array(
    'module' => 'locale',
    'delta' => 'language',
    'region' => 'branding',
    'weight' => -8,
  );
  $overrides["context.section_header.reactions|block|blocks|views--exp-main_search-page"] = array(
    'module' => 'views',
    'delta' => '-exp-main_search-page',
    'region' => 'branding',
    'weight' => -9,
  );
  $overrides["context.section_header.reactions|block|blocks|views-kada_section_header-block_1|region"] = 'branding';
  $overrides["context.section_header.reactions|theme_html"] = array(
    'class' => 'section-context',
  );
  $overrides["context.section_menus.condition_mode"] = 1;
  $overrides["context.section_menus.conditions|context_all"] = array(
    'values' => array(
      'default_section' => 'default_section',
    ),
  );
  $overrides["context.section_menus.reactions|block|blocks|menu_block-4"]["DELETED"] = TRUE;

  // Exported overrides for: quicktabs
  $overrides["quicktabs.feed_tabs_section.options|history"] = 0;
  $overrides["quicktabs.feed_tabs_section.renderer"] = 'ui_tabs';
  $overrides["quicktabs.feed_tabs_section.tabs|1|use_title"] = 0;
  $overrides["quicktabs.feed_tabs_section.tabs|2|use_title"] = 0;
  $overrides["quicktabs.feed_tabs_section.tabs|3|use_title"] = 0;
  $overrides["quicktabs.feed_tabs_section.tabs|4|use_title"] = 0;
  $overrides["quicktabs.feed_tabs_section.tabs|5|use_title"] = 0;
  $overrides["quicktabs.feed_tabs_section.tabs|6|use_title"] = 0;
  $overrides["quicktabs.feed_tabs_section.tabs|7|use_title"] = 0;
  $overrides["quicktabs.feed_tabs_section.tabs|8|use_title"] = 0;

 return $overrides;
}
