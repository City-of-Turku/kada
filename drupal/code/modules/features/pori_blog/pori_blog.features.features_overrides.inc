<?php
/**
 * @file
 * pori_blog.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function pori_blog_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: ds_field_settings
  $overrides["ds_field_settings.node|blog_post|current.settings|post_date|weight"] = 1;

  // Exported overrides for: ds_layout_settings
  $overrides["ds_layout_settings.node|blog_post|current.settings|regions|header|0"] = 'field_main_image';
  $overrides["ds_layout_settings.node|blog_post|current.settings|regions|header|1"] = 'post_date';

  // Exported overrides for: field_instance
  $overrides["field_instance.node-blog_post-field_blog.display|current|label"] = 'hidden';

 return $overrides;
}
