<?php
/**
 * @file
 * pori_waste_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pori_waste_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__waste';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'label_icon' => array(
        'custom_settings' => FALSE,
      ),
      'term_name' => array(
        'custom_settings' => FALSE,
      ),
      'waste_search' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__waste'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__waste_type';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'waste_search' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'label_icon' => array(
        'custom_settings' => FALSE,
      ),
      'term_name' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '7',
        ),
        'path' => array(
          'weight' => '5',
        ),
        'redirect' => array(
          'weight' => '6',
        ),
        'language' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__waste_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_taxonomy_term__waste';
  $strongarm->value = TRUE;
  $export['metatag_enable_taxonomy_term__waste'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_taxonomy_term__waste_type';
  $strongarm->value = TRUE;
  $export['metatag_enable_taxonomy_term__waste_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_waste_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_waste_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_waste_type_pattern';
  $strongarm->value = 'waste/type/[term:name]';
  $export['pathauto_taxonomy_term_waste_type_pattern'] = $strongarm;

  return $export;
}
