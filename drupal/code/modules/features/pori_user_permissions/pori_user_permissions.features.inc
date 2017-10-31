<?php
/**
 * @file
 * pori_user_permissions.features.inc
 */

/**
 * Implements hook_user_default_permissions_alter().
 */
function pori_user_permissions_user_default_permissions_alter(&$data) {
  if (isset($data['administer nodes'])) {
    unset($data['administer nodes']['roles']['content editor']);
    unset($data['administer nodes']['roles']['web journalist']);
  }
  if (isset($data['administer taxonomy'])) {
    unset($data['administer taxonomy']['roles']['web journalist']);
  }
}
