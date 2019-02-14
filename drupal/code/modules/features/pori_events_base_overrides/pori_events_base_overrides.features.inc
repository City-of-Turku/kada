<?php
/**
 * @file
 * pori_events_base_overrides.features.inc
 */

/**
 * Implements hook_user_default_permissions_alter().
 */
function pori_events_base_overrides_user_default_permissions_alter(&$data) {
  if (isset($data['create event content'])) {
    $data['create event content']['roles']['content editor'] = 'content editor'; /* WAS: '' */
    unset($data['create event content']['roles']['anonymous user']);
    unset($data['create event content']['roles']['authenticated user']);
  }
}
