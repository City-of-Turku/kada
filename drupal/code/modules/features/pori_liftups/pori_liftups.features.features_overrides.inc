<?php
/**
 * @file
 * pori_liftups.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function pori_liftups_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: ds_field_settings
  $overrides["ds_field_settings.node|liftup|current.settings|body"]["DELETED"] = TRUE;
  $overrides["ds_field_settings.node|liftup|current.settings|field_link_to_content"]["DELETED"] = TRUE;
  $overrides["ds_field_settings.node|liftup|current.settings|field_main_image"]["DELETED"] = TRUE;
  $overrides["ds_field_settings.node|liftup|current.settings|field_vignette"]["DELETED"] = TRUE;
  $overrides["ds_field_settings.node|liftup|current.settings|links|weight"] = 4;
  $overrides["ds_field_settings.node|liftup|current.settings|post_date|weight"] = 1;

  // Exported overrides for: ds_layout_settings
  $overrides["ds_layout_settings.node|liftup|current.settings|fields|field_vignette"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.node|liftup|current.settings|layout_disable_css"] = FALSE;
  $overrides["ds_layout_settings.node|liftup|current.settings|regions|header|1"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.node|liftup|current.settings|regions|main|1"] = 'post_date';
  $overrides["ds_layout_settings.node|liftup|current.settings|regions|main|2"] = 'field_link_to_content';
  $overrides["ds_layout_settings.node|liftup|current.settings|regions|main|3"] = 'body';
  $overrides["ds_layout_settings.node|liftup|current.settings|regions|main|4"] = 'links';
  $overrides["ds_layout_settings.node|liftup|current.settings|regions|main|5"]["DELETED"] = TRUE;

  // Exported overrides for: views_view
  $overrides["views_view.kada_current.display|default|display_options|css_class"] = 'liftup-box-list liftup-box-list--current';
  $overrides["views_view.kada_current_promoted_.display|default|display_options|css_class"] = 'liftup-box-list liftup-box-list--current';
  $overrides["views_view.kada_top_carousel.display|block_1|display_options|fields|field_link_to_content|alter|text"] = '<div class="flex-caption__target-group">[field_theme]</div>
              <div class="flex-caption__body">[body]</div>';
  $overrides["views_view.kada_top_carousel.display|block_1|display_options|fields|field_link_to_content|empty"] = '<div class="flex-caption__target-group">[field_theme]</div>
              <div class="flex-caption__body">[body]</div>';
  $overrides["views_view.kada_top_carousel.display|block_1|display_options|fields|field_target_audience"]["DELETED"] = TRUE;
  $overrides["views_view.kada_top_carousel.display|block_2|display_options|fields|field_link_to_content|alter|text"] = '<div class="flex-caption__target-group">[field_theme]</div>
          <div class="flex-caption__body">[body]</div>';
  $overrides["views_view.kada_top_carousel.display|block_2|display_options|fields|field_link_to_content|empty"] = '<div class="flex-caption__target-group">[field_theme]</div>
          <div class="flex-caption__body">[body]</div>';
  $overrides["views_view.kada_top_carousel.display|block_2|display_options|fields|field_target_audience"]["DELETED"] = TRUE;
  $overrides["views_view.kada_top_carousel.display|section|display_options|fields|field_link_to_content|alter|text"] = '<div class="flex-caption__target-group">[field_theme]</div>
              <div class="flex-caption__body">[body]</div>';
  $overrides["views_view.kada_top_carousel.display|section|display_options|fields|field_link_to_content|empty"] = '<div class="flex-caption__target-group">[field_theme]</div>
              <div class="flex-caption__body">[body]</div>';
  $overrides["views_view.kada_top_carousel.display|section|display_options|fields|field_target_audience"]["DELETED"] = TRUE;
  $overrides["views_view.kada_top_carousel.display|slider|display_options|fields|field_link_to_content|alter|text"] = '<div class="flex-caption__target-group">[field_theme]</div>
              <div class="flex-caption__body">[body]</div>';
  $overrides["views_view.kada_top_carousel.display|slider|display_options|fields|field_link_to_content|empty"] = '<div class="flex-caption__target-group">[field_theme]</div>
              <div class="flex-caption__body">[body]</div>';
  $overrides["views_view.kada_top_carousel.display|slider|display_options|fields|field_target_audience"]["DELETED"] = TRUE;

 return $overrides;
}
