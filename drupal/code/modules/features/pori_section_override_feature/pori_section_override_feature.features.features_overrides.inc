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
