<?php

/**
 * @file
 * kada_sections_feature.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function kada_sections_feature_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:section:access all webform results'
  $permissions['node:section:access all webform results'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:section:add user'
  $permissions['node:section:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:section:administer group'
  $permissions['node:section:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:section:approve and deny subscription'
  $permissions['node:section:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:section:create event content'
  $permissions['node:section:create event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:section:create liftup content'
  $permissions['node:section:create liftup content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:section:create news_item content'
  $permissions['node:section:create news_item content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:section:create page content'
  $permissions['node:section:create page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:section:create social_media_update content'
  $permissions['node:section:create social_media_update content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:section:delete all webform submissions'
  $permissions['node:section:delete all webform submissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:section:delete any event content'
  $permissions['node:section:delete any event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:delete any liftup content'
  $permissions['node:section:delete any liftup content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:section:delete any news_item content'
  $permissions['node:section:delete any news_item content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:section:delete any page content'
  $permissions['node:section:delete any page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:section:delete any social_media_update content'
  $permissions['node:section:delete any social_media_update content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:section:delete own event content'
  $permissions['node:section:delete own event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:section:delete own liftup content'
  $permissions['node:section:delete own liftup content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:section:delete own news_item content'
  $permissions['node:section:delete own news_item content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:section:delete own page content'
  $permissions['node:section:delete own page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:section:delete own social_media_update content'
  $permissions['node:section:delete own social_media_update content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:section:edit all webform submissions'
  $permissions['node:section:edit all webform submissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:section:manage members'
  $permissions['node:section:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:section:manage menu'
  $permissions['node:section:manage menu'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:section:manage permissions'
  $permissions['node:section:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:section:manage roles'
  $permissions['node:section:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:section:publish any content'
  $permissions['node:section:publish any content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:section:publish editable content'
  $permissions['node:section:publish editable content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:section:subscribe'
  $permissions['node:section:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:section:subscribe without approval'
  $permissions['node:section:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:unpublish any content'
  $permissions['node:section:unpublish any content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:section:unpublish editable content'
  $permissions['node:section:unpublish editable content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:section:unsubscribe'
  $permissions['node:section:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:section:update any event content'
  $permissions['node:section:update any event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:section:update any liftup content'
  $permissions['node:section:update any liftup content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:section:update any news_item content'
  $permissions['node:section:update any news_item content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:section:update any page content'
  $permissions['node:section:update any page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:section:update any social_media_update content'
  $permissions['node:section:update any social_media_update content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:section:update group'
  $permissions['node:section:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:section:update own event content'
  $permissions['node:section:update own event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:section:update own liftup content'
  $permissions['node:section:update own liftup content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:section:update own news_item content'
  $permissions['node:section:update own news_item content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:section:update own page content'
  $permissions['node:section:update own page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:section:update own social_media_update content'
  $permissions['node:section:update own social_media_update content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  return $permissions;
}
