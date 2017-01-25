<?php

/**
 * Implements hook_preprocess_html().
 */

function driveturku_preprocess_html(&$variables) {
  global $language;
  $path = current_path();

  drupal_add_js(drupal_get_path('theme', 'driveturku') . '/js/masonry.pkgd.min.js', array(
    'scope' => 'footer',
    'weight' => '15'
  ));

  drupal_add_js(drupal_get_path('theme', 'driveturku') . '/js/imagesloaded.pkgd.min.js', array(
    'scope' => 'header',
    'weight' => '15'
  ));

  // TODO moment should be conditionally loaded
  drupal_add_js(drupal_get_path('theme', 'driveturku') . '/js/moment.min.js', array(
    'scope' => 'footer',
    'weight' => '15'
  ));

  // Add chat to event add form page.
  if ($path == 'event/add' && $language->language == 'fi') {
    drupal_add_js(drupal_get_path('theme', 'driveturku') . '/js/chat/event.js', array(
      'scope' => 'header',
      'weight' => '15',
    ));
  }

  // Fetch body classes from custom static variable.
  // @see tkufi_page_feature_views_post_execute()
  $classes = &drupal_static('tkufi_page_classes');

  if ($classes) {
    $variables['classes_array'][] = $classes;
  }
}
