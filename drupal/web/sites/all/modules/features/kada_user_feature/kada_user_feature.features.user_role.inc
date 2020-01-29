<?php

/**
 * @file
 * kada_user_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function kada_user_feature_user_default_roles() {
  $roles = array();

  // Exported role: admin.
  $roles['admin'] = array(
    'name' => 'admin',
    'weight' => 4,
  );

  // Exported role: content editor.
  $roles['content editor'] = array(
    'name' => 'content editor',
    'weight' => 2,
  );

  // Exported role: event editor.
  $roles['event editor'] = array(
    'name' => 'event editor',
    'weight' => 6,
  );

  // Exported role: event external editor.
  $roles['event external editor'] = array(
    'name' => 'event external editor',
    'weight' => 7,
  );

  // Exported role: external editor.
  $roles['external editor'] = array(
    'name' => 'external editor',
    'weight' => 5,
  );

  // Exported role: web journalist.
  $roles['web journalist'] = array(
    'name' => 'web journalist',
    'weight' => 3,
  );

  return $roles;
}
