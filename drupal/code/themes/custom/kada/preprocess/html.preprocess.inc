<?php

/**
 * Implements hook_preprocess_html().
 */

function kada_preprocess_html(&$variables) {
  global $language;
  $path = current_path();

  drupal_add_js(drupal_get_path('theme', variable_get('theme_default', NULL)) . '/dist/js/vendor/modernizr.min.js', array(
    'scope' => 'header',
    'weight' => '15'
  ));

  drupal_add_js(drupal_get_path('theme', variable_get('theme_default', NULL)) . '/dist/js/vendor/masonry.pkgd.min.js', array(
    'scope' => 'footer',
    'weight' => '15'
  ));

  drupal_add_js(drupal_get_path('theme', variable_get('theme_default', NULL)) . '/dist/js/vendor/imagesloaded.pkgd.min.js', array(
    'scope' => 'header',
    'weight' => '15'
  ));

  // TODO moment should be conditionally loaded
  drupal_add_js(drupal_get_path('theme', variable_get('theme_default', NULL)) . '/dist/js/vendor/moment.min.js', array(
    'scope' => 'footer',
    'weight' => '15'
  ));

  // Add chat to event add form page.
  if ($path == 'event/add' && $language->language == 'fi') {
    drupal_add_js(drupal_get_path('theme', variable_get('theme_default', NULL)) . '/dist/js/vendor/event.js', array(
      'scope' => 'header',
      'weight' => '15',
    ));
  }

  // Fetch body classes from custom static variable.
  // @see kada_page_feature_views_post_execute()
  $classes = &drupal_static('kada_page_classes');

  if ($classes) {
    $variables['classes_array'][] = $classes;
  }

  $node = menu_get_object();

  if ($node->field_theme_main_page['und'][0]['value'] == 1) {
    $variables['classes_array'][] = 'theme-main-page';
  }
}
