<?php

/**
 * @file
 * kada_sections_feature.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function kada_sections_feature_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:section.
  $config['node:section'] = array(
    'instance' => 'node:section',
    'disabled' => FALSE,
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
        'value' => '[kada:metatag_keywords]',
      ),
      'image_src' => array(
        'value' => '[kada:metatag_image]',
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
        'value' => '[kada:metatag_image]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:description' => array(
        'value' => '',
      ),
      'og:see_also' => array(
        'value' => '[kada:metatag_related]',
      ),
      'og:image' => array(
        'value' => '[kada:metatag_image]',
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
      'twitter:image' => array(
        'value' => '[kada:metatag_image]',
      ),
    ),
  );

  return $config;
}
