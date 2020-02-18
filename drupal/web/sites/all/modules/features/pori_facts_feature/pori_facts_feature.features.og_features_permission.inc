<?php

/**
 * @file
 * pori_facts_feature.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function pori_facts_feature_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:section:create fact content'
  $permissions['node:section:create fact content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:section:delete any fact content'
  $permissions['node:section:delete any fact content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:section:delete own fact content'
  $permissions['node:section:delete own fact content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:section:update any fact content'
  $permissions['node:section:update any fact content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:section:update own fact content'
  $permissions['node:section:update own fact content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
