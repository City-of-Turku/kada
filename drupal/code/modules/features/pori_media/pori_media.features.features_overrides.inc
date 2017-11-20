<?php
/**
 * @file
 * pori_media.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function pori_media_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.scald_atom-file-scald_authors.required"] = 1;
  $overrides["field_instance.scald_atom-file-scald_authors.widget|active"] = 0;
  $overrides["field_instance.scald_atom-file-scald_tags.required"] = 1;
  $overrides["field_instance.scald_atom-file-scald_tags.widget|active"] = 0;
  $overrides["field_instance.scald_atom-image-scald_authors.required"] = 1;
  $overrides["field_instance.scald_atom-image-scald_authors.widget|active"] = 0;
  $overrides["field_instance.scald_atom-image-scald_tags.required"] = 1;
  $overrides["field_instance.scald_atom-image-scald_tags.widget|active"] = 0;
  $overrides["field_instance.scald_atom-video-scald_authors.required"] = 1;
  $overrides["field_instance.scald_atom-video-scald_authors.widget|active"] = 0;
  $overrides["field_instance.scald_atom-video-scald_tags.required"] = 1;
  $overrides["field_instance.scald_atom-video-scald_tags.widget|active"] = 0;

  // Exported overrides for: flexslider_optionset
  $overrides["flexslider_optionset.default.export_type"]["DELETED"] = TRUE;
  $overrides["flexslider_optionset.default.type"]["DELETED"] = TRUE;
  $overrides["flexslider_optionset.top_carousel.options|slideshow"] = 0;

  // Exported overrides for: image
  $overrides["image.topics.effects|0|data|height"] = 257;
  $overrides["image.topics.effects|0|data|width"] = 457;
  $overrides["image.topics_breakpoints_theme_kada_mobile_1x.effects|0|data|height"] = 158;
  $overrides["image.topics_breakpoints_theme_kada_mobile_1x.effects|0|data|width"] = 280;
  $overrides["image.topics_breakpoints_theme_kada_phablet_1x.effects|0|data|height"] = 280;
  $overrides["image.topics_breakpoints_theme_kada_smalldesktop_1x.effects|0|data|height"] = 365;
  $overrides["image.topics_breakpoints_theme_kada_smalldesktop_1x.effects|0|data|width"] = 649;
  $overrides["image.topics_breakpoints_theme_kada_tablet_1x.effects|0|data|height"] = 386;
  $overrides["image.topics_breakpoints_theme_kada_tablet_1x.effects|0|data|width"] = 687;

  // Exported overrides for: openlayers_maps
  $overrides["openlayers_maps.default.disabled"] = FALSE;

  // Exported overrides for: openlayers_styles
  $overrides["openlayers_styles.default.disabled"] = FALSE;

  // Exported overrides for: views_view
  $overrides["views_view.kada_scald_atoms.display|default|display_options|fields|representation"]["DELETED"] = TRUE;
  $overrides["views_view.kada_scald_atoms.display|default|display_options|fields|scald_thumbnail"] = array(
    'id' => 'scald_thumbnail',
    'table' => 'field_data_scald_thumbnail',
    'field' => 'scald_thumbnail',
    'click_sort_column' => 'fid',
    'settings' => array(
      'image_style' => 'large',
      'image_link' => 'file',
    ),
  );

 return $overrides;
}
