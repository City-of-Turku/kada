<?php

/**
 * @file
 * pori_front_page_liftups.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function pori_front_page_liftups_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: views_view
  $overrides["views_view.kada_news.display|section_main|display_options|style_options|row_class"] = 'main-liftup-row';

 return $overrides;
}
