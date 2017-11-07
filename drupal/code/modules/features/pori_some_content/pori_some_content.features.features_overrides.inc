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
  $overrides["ds_layout_settings.node|social_media_update|current.layout"] = 'liftup_current_layout';
  $overrides["ds_layout_settings.node|social_media_update|current.settings|fields|body"] = 'main';
  $overrides["ds_layout_settings.node|social_media_update|current.settings|fields|field_image"] = 'header';
  $overrides["ds_layout_settings.node|social_media_update|current.settings|fields|field_image_url"] = 'main';
  $overrides["ds_layout_settings.node|social_media_update|current.settings|fields|field_link"] = 'main';
  $overrides["ds_layout_settings.node|social_media_update|current.settings|fields|field_share_caption"] = 'main';
  $overrides["ds_layout_settings.node|social_media_update|current.settings|fields|field_share_description"] = 'main';
  $overrides["ds_layout_settings.node|social_media_update|current.settings|fields|field_some_id"] = 'header';
  $overrides["ds_layout_settings.node|social_media_update|current.settings|fields|group_top"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.node|social_media_update|current.settings|fields|post_date"] = 'header';
  $overrides["ds_layout_settings.node|social_media_update|current.settings|layout_disable_css"] = FALSE;
  $overrides["ds_layout_settings.node|social_media_update|current.settings|regions|ds_content"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.node|social_media_update|current.settings|regions|header"] = array(
    0 => 'field_some_id',
    1 => 'field_image',
    2 => 'post_date',
  );
  $overrides["ds_layout_settings.node|social_media_update|current.settings|regions|main"] = array(
    3 => 'body',
    4 => 'field_link',
    5 => 'field_image_url',
    6 => 'field_share_caption',
    7 => 'field_share_description',
  );
  $overrides["ds_layout_settings.node|social_media_update|current.settings|wrappers|ds_content"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.node|social_media_update|current.settings|wrappers|header"] = 'div';
  $overrides["ds_layout_settings.node|social_media_update|current.settings|wrappers|main"] = 'div';

  // Exported overrides for: field_group
  $overrides["field_group.group_top|node|social_media_update|current.group_top|node|social_media_update|current"]["DELETED"] = TRUE;

  // Exported overrides for: field_instance
  $overrides["field_instance.node-social_media_update-body.display|current|weight"] = 3;
  $overrides["field_instance.node-social_media_update-field_district.display|current|weight"] = 25;
  $overrides["field_instance.node-social_media_update-field_image.display|current|weight"] = 1;
  $overrides["field_instance.node-social_media_update-field_image_url.display|current|weight"] = 5;
  $overrides["field_instance.node-social_media_update-field_keywords.display|current|weight"] = 20;
  $overrides["field_instance.node-social_media_update-field_link.display|current|weight"] = 4;
  $overrides["field_instance.node-social_media_update-field_location.display|current|weight"] = 22;
  $overrides["field_instance.node-social_media_update-field_location_name.display|current|weight"] = 27;
  $overrides["field_instance.node-social_media_update-field_object_id.display|current|weight"] = 32;
  $overrides["field_instance.node-social_media_update-field_share_title.display|current|weight"] = 30;
  $overrides["field_instance.node-social_media_update-field_share_type.display|current|weight"] = 31;
  $overrides["field_instance.node-social_media_update-field_some_id.display|current|weight"] = 0;
  $overrides["field_instance.node-social_media_update-field_some_type.display|current|weight"] = 29;
  $overrides["field_instance.node-social_media_update-field_target_audience.display|current|weight"] = 24;
  $overrides["field_instance.node-social_media_update-field_theme.display|current|weight"] = 33;
  $overrides["field_instance.node-social_media_update-og_group_ref.display|current|weight"] = 26;

 return $overrides;
}
