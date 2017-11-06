<?php
/**
 * @file
 * pori_some_content.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function pori_some_content_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: ds_field_settings
  $overrides["ds_field_settings.node|social_media_update|current.settings|body"]["DELETED"] = TRUE;
  $overrides["ds_field_settings.node|social_media_update|current.settings|field_image"]["DELETED"] = TRUE;
  $overrides["ds_field_settings.node|social_media_update|current.settings|field_link"]["DELETED"] = TRUE;
  $overrides["ds_field_settings.node|social_media_update|current.settings|field_share_caption"]["DELETED"] = TRUE;
  $overrides["ds_field_settings.node|social_media_update|current.settings|field_share_description"]["DELETED"] = TRUE;
  $overrides["ds_field_settings.node|social_media_update|current.settings|field_some_id"]["DELETED"] = TRUE;
  $overrides["ds_field_settings.node|social_media_update|current.settings|post_date|weight"] = 2;

  // Exported overrides for: ds_layout_settings
  $overrides["ds_layout_settings.node|social_media_update|current.settings|layout_disable_css"] = FALSE;
  $overrides["ds_layout_settings.node|social_media_update|current.settings|regions|ds_content|1"] = 'field_image';
  $overrides["ds_layout_settings.node|social_media_update|current.settings|regions|ds_content|2"] = 'post_date';
  $overrides["ds_layout_settings.node|social_media_update|current.settings|regions|ds_content|3"] = 'body';
  $overrides["ds_layout_settings.node|social_media_update|current.settings|regions|ds_content|4"] = 'field_link';
  $overrides["ds_layout_settings.node|social_media_update|current.settings|regions|ds_content|5"] = 'field_image_url';
  $overrides["ds_layout_settings.node|social_media_update|current.settings|regions|ds_content|6"] = 'field_share_caption';
  $overrides["ds_layout_settings.node|social_media_update|current.settings|regions|ds_content|7"] = 'field_share_description';
  $overrides["ds_layout_settings.node|social_media_update|current.settings|regions|ds_content|8"] = 'field_some_id';

  // Exported overrides for: field_group
  $overrides["field_group.group_top|node|social_media_update|current.group_top|node|social_media_update|current"]["DELETED"] = TRUE;

 return $overrides;
}
