<?php
/**
 * @file
 * pori_news.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function pori_news_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: context
  $overrides["context.footer_menu.conditions|context|values|news_list"] = 'news_list';
  $overrides["context.main_menu.conditions|context|values|news_list"] = 'news_list';
  $overrides["context.news_list.conditions|path|values|news"]["DELETED"] = TRUE;
  $overrides["context.news_list.conditions|path|values|news-archive"] = 'news-archive';
  $overrides["context.news_list.description"] = 'News archive';
  $overrides["context.news_list.reactions|block"]["DELETED"] = TRUE;
  $overrides["context.top_menu.conditions|context|values|news_list"] = 'news_list';

  // Exported overrides for: ds_field_settings
  $overrides["ds_field_settings.node|news_item|current.settings|links|weight"] = 4;
  $overrides["ds_field_settings.node|news_item|current.settings|post_date|weight"] = 1;
  $overrides["ds_field_settings.node|news_item|current.settings|title|weight"] = 2;

  // Exported overrides for: ds_layout_settings
  $overrides["ds_layout_settings.node|news_item|current.settings|fields|field_vignette"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.node|news_item|current.settings|regions|header|0"] = 'field_content_image';
  $overrides["ds_layout_settings.node|news_item|current.settings|regions|header|1"] = 'post_date';
  $overrides["ds_layout_settings.node|news_item|current.settings|regions|header|2"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.node|news_item|current.settings|regions|main|2"] = 'title';
  $overrides["ds_layout_settings.node|news_item|current.settings|regions|main|3"] = 'field_lead_paragraph_long_text';
  $overrides["ds_layout_settings.node|news_item|current.settings|regions|main|4"] = 'links';
  $overrides["ds_layout_settings.node|news_item|current.settings|regions|main|5"]["DELETED"] = TRUE;

 return $overrides;
}
