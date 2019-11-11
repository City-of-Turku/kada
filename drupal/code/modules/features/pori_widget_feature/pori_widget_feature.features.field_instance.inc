<?php

/**
 * @file
 * pori_widget_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function pori_widget_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-page-field_widgets_after_content'.
  $field_instances['node-page-field_widgets_after_content'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Search for widget by administrative title. These widgets will be rendered after actual page content.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 44,
      ),
      'live_results_search' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'only_title' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'project' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_widgets_after_content',
    'label' => 'Widgets after content',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 23,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Search for widget by administrative title. These widgets will be rendered after actual page content.');
  t('Widgets after content');

  return $field_instances;
}
