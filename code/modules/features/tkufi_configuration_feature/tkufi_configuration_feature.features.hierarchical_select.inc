<?php
/**
 * @file
 * tkufi_configuration_feature.features.hierarchical_select.inc
 */

/**
 * Implements hook_hierarchical_select_default_configs().
 */
function tkufi_configuration_feature_hierarchical_select_default_configs() {
$configs = array();
$config = array(
  'config_id'       => 'taxonomy-field_classification',
  'save_lineage'    => 1,
  'enforce_deepest' => 0,
  'resizable'       => 1,
  'level_labels' => array(
    'status' => 0,
    'labels' => array(
    ),
  ),
  'dropbox' => array(
    'status'    => 1,
    'title'     => 'All selections',
    'limit'     => 0,
    'reset_hs'  => 0,
    'sort'      => 1,
  ),
  'editability' => array(
    'status' => 0,
    'item_types' => array(
    ),
    'allowed_levels' => array(
    ),
    'allow_new_levels' => 0,
    'max_levels'       => 2,
  ),
  'entity_count' => array(
    'enabled' => 0,
    'require_entity' => 0,
    'settings' => array(
      'count_children' => 0,
      'entity_types' => array(
        'node' => array(
          'count_node' => array(
            'page' => 'page',
            'place' => 'place',
            'service' => 'service',
            'service_offer' => 'service_offer',
            'webform' => 'webform',
          ),
        ),
      ),
    ),
  ),
);

$configs['taxonomy-field_classification'] = $config;
return $configs;
}
