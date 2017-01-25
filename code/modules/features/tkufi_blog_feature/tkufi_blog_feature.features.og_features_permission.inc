<?php
/**
 * @file
 * tkufi_blog_feature.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function tkufi_blog_feature_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:section:create blog_post content'
  $permissions['node:section:create blog_post content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:delete any blog_post content'
  $permissions['node:section:delete any blog_post content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:delete own blog_post content'
  $permissions['node:section:delete own blog_post content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:update any blog_post content'
  $permissions['node:section:update any blog_post content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:update own blog_post content'
  $permissions['node:section:update own blog_post content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
