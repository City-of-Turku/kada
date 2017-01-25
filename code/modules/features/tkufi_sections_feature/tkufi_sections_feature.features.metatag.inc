<?php
/**
 * @file
 * tkufi_sections_feature.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function tkufi_sections_feature_metatag_export_default() {
  $config = array();

// Exported Metatag config instance: node:section.
  $config['node:section'] = array(
    'instance' => 'node:section',
    'config' => array(
      'description' => array(
        'value' => '',
      ),
      'abstract' => array(
        'value' => '',
      ),
      'keywords' => array(
        'value' => '',
      ),
      'news_keywords' => array(
        'value' => '[tkufi:metatag_keywords]',
      ),
      'image_src' => array(
        'value' => '[tkufi:metatag_image]',
      ),
      'dcterms.subject' => array(
        'value' => '',
      ),
      'dcterms.description' => array(
        'value' => '',
      ),
      'itemprop:description' => array(
        'value' => '',
      ),
      'itemprop:image' => array(
        'value' => '[tkufi:metatag_image]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:description' => array(
        'value' => '',
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
      'twitter:description' => array(
        'value' => '',
      ),
      'twitter:image:src' => array(
        'value' => '[tkufi:metatag_image]',
      ),
    ),
  );

  return $config;
}