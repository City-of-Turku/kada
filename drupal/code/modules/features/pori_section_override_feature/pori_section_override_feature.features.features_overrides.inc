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
  $overrides["context.section.reactions|block|blocks|views-kada_pages-top_image"]["DELETED"] = TRUE;
  $overrides["context.section_front.reactions|block|blocks|kada_export_feature-kada_rss_feed_for_section|weight"] = -7;
  $overrides["context.section_front.reactions|block|blocks|kada_news_feature-news_archive_link"] = array(
    'module' => 'kada_news_feature',
    'delta' => 'news_archive_link',
    'region' => 'before_content',
    'weight' => -8,
  );
  $overrides["context.section_front.reactions|block|blocks|views-4e860b19463e3f674732c95e074be424"] = array(
    'module' => 'views',
    'delta' => '4e860b19463e3f674732c95e074be424',
    'region' => 'above_footer',
    'weight' => -10,
  );
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

  // Exported overrides for: views_view
  $overrides["views_view.og_extras_members.display|block_1|display_options|fields|name|alter"]["DELETED"] = TRUE;
  $overrides["views_view.og_extras_members.display|block_1|display_options|fields|name|empty_zero"]["DELETED"] = TRUE;
  $overrides["views_view.og_extras_members.display|block_1|display_options|fields|name|hide_empty"]["DELETED"] = TRUE;
  $overrides["views_view.og_extras_members.display|block_1|display_options|fields|name|link_to_user"]["DELETED"] = TRUE;
  $overrides["views_view.og_extras_members.display|block_1|display_options|fields|name|overwrite_anonymous"]["DELETED"] = TRUE;
  $overrides["views_view.og_extras_members.display|block_1|display_options|use_more_always"]["DELETED"] = TRUE;
  $overrides["views_view.og_extras_members.display|default|display_options|arguments|gid|break_phrase"]["DELETED"] = TRUE;
  $overrides["views_view.og_extras_members.display|default|display_options|arguments|gid|default_argument_skip_url"]["DELETED"] = TRUE;
  $overrides["views_view.og_extras_members.display|default|display_options|arguments|gid|not"]["DELETED"] = TRUE;
  $overrides["views_view.og_extras_members.display|default|display_options|arguments|gid|specify_validation"] = TRUE;
  $overrides["views_view.og_extras_members.display|default|display_options|arguments|gid|title_enable"] = TRUE;
  $overrides["views_view.og_extras_members.display|default|display_options|fields|name|alter"]["DELETED"] = TRUE;
  $overrides["views_view.og_extras_members.display|default|display_options|fields|name|empty_zero"]["DELETED"] = TRUE;
  $overrides["views_view.og_extras_members.display|default|display_options|fields|name|hide_empty"]["DELETED"] = TRUE;
  $overrides["views_view.og_extras_members.display|default|display_options|fields|name|link_to_user"]["DELETED"] = TRUE;
  $overrides["views_view.og_extras_members.display|default|display_options|fields|name|overwrite_anonymous"]["DELETED"] = TRUE;
  $overrides["views_view.og_extras_members.display|default|display_options|fields|picture|alter"]["DELETED"] = TRUE;
  $overrides["views_view.og_extras_members.display|default|display_options|fields|picture|element_default_classes"]["DELETED"] = TRUE;
  $overrides["views_view.og_extras_members.display|default|display_options|fields|picture|empty_zero"]["DELETED"] = TRUE;
  $overrides["views_view.og_extras_members.display|default|display_options|fields|picture|hide_alter_empty"]["DELETED"] = TRUE;
  $overrides["views_view.og_extras_members.display|default|display_options|fields|picture|hide_empty"]["DELETED"] = TRUE;
  $overrides["views_view.og_extras_members.display|default|display_options|fields|picture|link_photo_to_profile"]["DELETED"] = TRUE;
  $overrides["views_view.og_extras_members.display|default|display_options|pager|options|expose"]["DELETED"] = TRUE;
  $overrides["views_view.og_extras_members.display|default|display_options|relationships|og_membership_rel|required"]["DELETED"] = TRUE;
  $overrides["views_view.og_extras_members.display|default|display_options|style_options"]["DELETED"] = TRUE;
  $overrides["views_view.og_extras_members.display|page_1|display_options|access"] = array(
    'type' => 'role',
    'role' => array(
      2 => 2,
    ),
  );
  $overrides["views_view.og_extras_members.display|page_1|display_options|defaults"] = array(
    'access' => FALSE,
  );

 return $overrides;
}
