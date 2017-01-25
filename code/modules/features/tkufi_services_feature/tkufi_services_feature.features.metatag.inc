<?php
/**
 * @file
 * tkufi_services_feature.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function tkufi_services_feature_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:service.
  $config['node:service'] = array(
    'instance' => 'node:service',
    'config' => array(
      'description' => array(
        'value' => '[tkufi:metatag_description]',
      ),
      'abstract' => array(
        'value' => '[tkufi:metatag_description]',
      ),
      'keywords' => array(
        'value' => '[tkufi:metatag_keywords]',
      ),
      'news_keywords' => array(
        'value' => '[tkufi:metatag_keywords]',
      ),
      'dcterms.subject' => array(
        'value' => '[tkufi:metatag_keywords]',
      ),
      'dcterms.description' => array(
        'value' => '[tkufi:metatag_description]',
      ),
      'itemprop:description' => array(
        'value' => '[tkufi:metatag_description]',
      ),
      'itemprop:image' => array(
        'value' => '[tkufi:metatag_image]',
      ),
      'og:description' => array(
        'value' => '[tkufi:metatag_short_description]',
      ),
      'og:see_also' => array(
        'value' => '[tkufi:metatag_related]',
      ),
      'og:image' => array(
        'value' => '[tkufi:metatag_image]',
      ),
      'og:street_address' => array(
        'value' => '',
      ),
      'og:locality' => array(
        'value' => '',
      ),
      'article:tag' => array(
        'value' => '',
      ),
      'twitter:description' => array(
        'value' => '[tkufi:metatag_description]',
      ),
      'twitter:image:src' => array(
        'value' => '',
      ),
    ),
  );

  return $config;
}
