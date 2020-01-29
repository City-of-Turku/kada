<?php

/**
 * @file
 * kada_contact_information_feature.features.hierarchical_select.inc
 */

/**
 * Implements hook_hierarchical_select_default_configs().
 */
function kada_contact_information_feature_hierarchical_select_default_configs() {
$configs = array();
$config = array(
  'save_lineage' => 1,
  'enforce_deepest' => 0,
  'resizable' => 1,
  'level_labels' => array(
    'status' => 0,
    'labels' => array(),
  ),
  'dropbox' => array(
    'status' => 0,
    'title' => 'All selections',
    'limit' => 0,
    'reset_hs' => 1,
    'sort' => 1,
  ),
  'editability' => array(
    'status' => 0,
    'item_types' => array(),
    'allowed_levels' => array(),
    'allow_new_levels' => 0,
    'max_levels' => 2,
  ),
  'entity_count' => array(
    'enabled' => 0,
    'require_entity' => 0,
    'settings' => array(
      'count_children' => 0,
      'entity_types' => array(
        'node' => array(
          'count_node' => array(
            'blog' => '0',
            'blog_post' => '0',
            'event' => '0',
            'feed_import_facebook' => '0',
            'feed_import_instagram' => '0',
            'feed_import_twitter' => '0',
            'feed_import_youtube_channel' => '0',
            'landing_page' => '0',
            'liftup' => '0',
            'news_item' => '0',
            'page' => '0',
            'person' => '0',
            'place' => '0',
            'position_of_trust' => '0',
            'section' => '0',
            'service' => '0',
            'service_offer' => '0',
            'social_media_update' => '0',
            'webform' => '0',
          ),
        ),
      ),
    ),
  ),
  'animation_delay' => 400,
  'special_items' => array(),
  'render_flat_select' => 0,
  'config_id' => 'taxonomy-field_office_tr',
);

$configs['taxonomy-field_office_tr'] = $config;
return $configs;
}
