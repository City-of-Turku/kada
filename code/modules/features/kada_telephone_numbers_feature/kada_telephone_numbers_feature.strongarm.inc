<?php
/**
 * @file
 * kada_telephone_numbers_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function kada_telephone_numbers_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_field_collection_item__field_telephone_numbers';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'redirect' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_field_collection_item__field_telephone_numbers'] = $strongarm;

  return $export;
}
