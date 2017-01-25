<?php
/**
 * @file
 * tkufi_places_feature.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function tkufi_places_feature_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:place.
  $config['node:place'] = array(
    'instance' => 'node:place',
    'config' => array(
      'og:street_address' => array(
        'value' => '[node:field-address-visiting]',
      ),
      'og:region' => array(
        'value' => 'Turku',
      ),
      'og:country_name' => array(
        'value' => 'Finland',
      ),
    ),
  );

  return $config;
}
