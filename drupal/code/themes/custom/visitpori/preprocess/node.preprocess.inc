<?php

/**
 * Implements hook_preprocess_node().
 */
function visitpori_preprocess_node(&$variables) {
  $node = $variables['node'];

  if ($variables['type'] == 'liftup' || $variables['type'] == 'page') {
    // Getting color for those liftups which have a theme with a color set
    $node_wrapper = entity_metadata_wrapper('node', $node);
    foreach ($node_wrapper->field_visitpori_theme->getIterator() as $delta => $term_wrapper) {
      try {
        $color = $term_wrapper->field_visitpori_color_name->value();
        if (!empty($color)) {
          $variables['classes_array'][] = 'theme-color-' . $color;
        }
      }
      catch (EntityMetadataWrapperException $e) {
        watchdog('visitpori_theme', 'EntityMetadataWrapperException with message %message', array('%message' => $e->getMessage()), WATCHDOG_ERROR);
      }
    }
  }

  // If template is not rendered by Display Suite
  if(!isset($variables['rendered_by_ds'])) {
    $variables['theme_hook_suggestions'][] = 'node__' . $variables['view_mode'];
    $variables['theme_hook_suggestions'][] = 'node__' . $variables['node']->type . '__' . $variables['view_mode'];
  }

  // Linking content image to the give URL if it has been set
  if ($variables['view_mode'] == 'current' || $variables['node']->type == 'liftup' && $variables['view_mode'] == 'teaser') {
    // Optional Link to content URL can be given to a liftup
    $liftup_link_items = field_get_items('node', $node, 'field_link_to_content');
    if (isset($liftup_link_items[0]['query'])) {
      $options = array('query' => $liftup_link_items[0]['query']);
      $url = url($liftup_link_items[0]['url'], $options);
      // Storing URL to a variable which is used in different templates
      $variables['liftup_link_url'] = $url;
    }
  }

  // Add theme color classes to main news liftups
  if ($variables['type'] == 'news_item') {
    if ($variables['view_mode'] == 'main_news' || $variables['view_mode'] == 'main_news_wide' || $variables['view_mode'] == 'current') {
      $node_wrapper = entity_metadata_wrapper('node', $node);
      foreach ($node_wrapper->field_visitpori_theme->getIterator() as $delta => $term_wrapper) {
        try {
          $color = $term_wrapper->field_visitpori_color_name->value();
          if (!empty($color)) {
            $variables['classes_array'][] = 'theme-color-' . $color;
          }
        }
        catch (EntityMetadataWrapperException $e) {
          watchdog('visitpori_theme', 'EntityMetadataWrapperException with message %message', array('%message' => $e->getMessage()), WATCHDOG_ERROR);
        }

      }
    }
  }

  if ($variables['type'] == 'place') {
    if ($variables['view_mode'] == 'full') {
      $node_wrapper = entity_metadata_wrapper('node', $node);
    }
  }
}
