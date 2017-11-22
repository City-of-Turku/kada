<?php
/**
 * @file
 * pori_pages.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function pori_pages_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: context
  $overrides["context.footer_navigation.disabled"] = TRUE;
  $overrides["context.page.conditions|entity_field|values|view_mode"] = 'a:39:{s:4:"full";s:4:"full";s:6:"teaser";i:0;s:3:"rss";i:0;s:13:"diff_standard";i:0;s:5:"token";i:0;s:9:"accordion";i:0;s:8:"carousel";i:0;s:7:"current";i:0;s:7:"project";i:0;s:15:"event_grid_item";i:0;s:15:"event_list_item";i:0;s:14:"event_map_item";i:0;s:17:"event_mosaic_item";i:0;s:19:"event_search_result";i:0;s:19:"event_tab_list_item";i:0;s:18:"event_top_carousel";i:0;s:9:"main_news";i:0;s:14:"main_news_wide";i:0;s:10:"only_title";i:0;s:3:"map";i:0;s:8:"revision";i:0;s:10:"label_icon";i:0;s:9:"term_name";i:0;s:5:"title";i:0;s:12:"content_full";i:0;s:12:"content_half";i:0;s:6:"topics";i:0;s:16:"main_liftup_wide";i:0;s:11:"main_liftup";i:0;s:12:"main_content";i:0;s:10:"full_modal";i:0;s:10:"event_list";i:0;s:9:"grid_item";i:0;s:10:"event_node";i:0;s:14:"event_tab_item";i:0;s:6:"person";i:0;s:17:"file_linked_title";i:0;s:13:"search_result";i:0;s:9:"opengraph";i:0;}';
  $overrides["context.page.reactions|block|blocks|views-kada_pages-top_image"]["DELETED"] = TRUE;
  $overrides["context.page_menus.disabled"] = TRUE;

  // Exported overrides for: ds_field_settings
  $overrides["ds_field_settings.node|page|default.settings|description_page|weight"] = 5;
  $overrides["ds_field_settings.node|page|default.settings|duplicate_info_box_bottom|weight"] = 2;
  $overrides["ds_field_settings.node|page|default.settings|field_contact_information"]["DELETED"] = TRUE;
  $overrides["ds_field_settings.node|page|default.settings|places_for_services|weight"] = 8;

  // Exported overrides for: ds_layout_settings
  $overrides["ds_layout_settings.node|page|default.layout"] = 'page_layout';
  $overrides["ds_layout_settings.node|page|default.settings|fields|body"] = 'main_content';
  $overrides["ds_layout_settings.node|page|default.settings|fields|description_page"] = 'main_content';
  $overrides["ds_layout_settings.node|page|default.settings|fields|domain"] = 'main_content';
  $overrides["ds_layout_settings.node|page|default.settings|fields|duplicate_info_box_bottom"] = 'main_content';
  $overrides["ds_layout_settings.node|page|default.settings|fields|field_contact_information"] = 'main_content';
  $overrides["ds_layout_settings.node|page|default.settings|fields|field_district"] = 'main_content';
  $overrides["ds_layout_settings.node|page|default.settings|fields|field_info_box"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.node|page|default.settings|fields|field_info_box_bottom"] = 'main_content';
  $overrides["ds_layout_settings.node|page|default.settings|fields|field_keywords"] = 'sidebar';
  $overrides["ds_layout_settings.node|page|default.settings|fields|field_subpage"] = 'main_content';
  $overrides["ds_layout_settings.node|page|default.settings|fields|field_topic"] = 'main_content';
  $overrides["ds_layout_settings.node|page|default.settings|fields|places_for_services"] = 'main_content';
  $overrides["ds_layout_settings.node|page|default.settings|layout_disable_css"] = FALSE;
  $overrides["ds_layout_settings.node|page|default.settings|regions|ds_content"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.node|page|default.settings|regions|main_content"] = array(
    0 => 'domain',
    1 => 'field_topic',
    2 => 'duplicate_info_box_bottom',
    3 => 'field_contact_information',
    4 => 'description_page',
    5 => 'body',
    6 => 'field_info_box_bottom',
    7 => 'places_for_services',
    9 => 'field_district',
    10 => 'field_subpage',
  );
  $overrides["ds_layout_settings.node|page|default.settings|regions|sidebar"] = array(
    8 => 'field_keywords',
  );
  $overrides["ds_layout_settings.node|page|default.settings|wrappers|ds_content"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.node|page|default.settings|wrappers|main_content"] = 'div';
  $overrides["ds_layout_settings.node|page|default.settings|wrappers|sidebar"] = 'div';

  // Exported overrides for: field_group
  $overrides["field_group.group_content|node|page|form.group_content|node|page|form"]["DELETED"] = TRUE;

  // Exported overrides for: field_instance
  $overrides["field_instance.node-page-field_info_box.node-page-field_info_box"]["DELETED"] = TRUE;
  $overrides["field_instance.node-page-field_keywords.display|default|label"] = 'hidden';
  $overrides["field_instance.node-page-field_main_image.display|default|weight"] = 29;
  $overrides["field_instance.node-page-field_main_image.label"] = 'Liftup image';
  $overrides["field_instance.node-page-field_main_image.settings|allow_override"] = 0;

 return $overrides;
}
