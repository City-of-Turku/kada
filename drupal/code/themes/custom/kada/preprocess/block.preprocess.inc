<?php

/**
 * Implements hook_preprocess_block().
 */
function kada_preprocess_block(&$variables) {
  $node = menu_get_object();

  if (!is_null($node)) {
    $node_wrapper = entity_metadata_wrapper('node', $node);
  }

  if (isset($node_wrapper->field_theme)) {
    // Getting color for those liftups which have a theme with a color set

    foreach ($node_wrapper->field_theme->getIterator() as $delta => $term_wrapper) {
      try {
        $color = $term_wrapper->field_color_name->value();
        if (!empty($color)) {
          $variables['title_attributes_array']['class'][] = 'theme-color-' . $color;
        }
      }
      catch (EntityMetadataWrapperException $e) {
        watchdog('kada_theme', 'EntityMetadataWrapperException with message %message', array('%message' => $e->getMessage()), WATCHDOG_ERROR);
      }

    }
  }

  // collapse places for pages tabs block
  $block = $variables['elements']['#block'];
  if (in_array($block->delta, array("places_for_pages_tabs"))) {
    $variables['content'] = theme('ctools_collapsible',
      array(
        'handle' => $block->subject,
        'content' => $block->content,
        'collapsed' => TRUE,
      )
    );
    $variables['classes_array'][] = "block--quicktabs--collapsible";
  }

  if ($block->region == "filters") {
    $variables['facetclass'] = "filter--" . strtr($variables['elements']['#settings']->facet, '_:', '--');
    $variables['attributes_array']['class'] = array("filter", "is-collapsed", $variables['facetclass']);
    $variables['title_attributes_array']['class'] = array("filter__state");
    $variables['content_attributes_array']['class'] = array("filter__content", $variables['facetclass']);
    $variables['content_attributes_array']['id'] = $variables['block_html_id'];
  }

  if ($block->module == 'kada_widget_feature') {
    $node_nid = arg(1);
    $node_content = node_load($node_nid);
    if (!empty($node_content->field_theme['und']['0']['tid'])) {
      $theme_raw = $node_content->field_theme['und']['0']['tid'];
      $theme_term = taxonomy_term_load($theme_raw);
      $theme = $theme_term->field_color_name['und']['0']['value'];
      $theme_color = 'theme-color-' . $theme;
      $variables['classes_array'][] = $theme_color;
    };
  }

  // Look for facets in turkucalendar frontpage and add translatable labes.
  // Old subject variable is overridden from facets default label variable
  if ($variables['elements']['#block']->module == 'facetapi'
    && $variables['elements']['#block']->context == 'turkucalendar_front') {
    // Alter dates facet subject
    if ($variables['elements']['#settings']->facet == 'individual_dates') {
      $variables['block']->subject = t($variables['elements']['#settings']->settings['default_option_label']);
    }

    // Alter event types facet subject
    if ($variables['elements']['#settings']->facet == 'field_event_types') {
      $variables['block']->subject = t($variables['elements']['#settings']->settings['default_option_label']);
    }

    // Alter target audience facet subject
    if ($variables['elements']['#settings']->facet == 'field_target_audience') {
      $variables['block']->subject = t($variables['elements']['#settings']->settings['default_option_label']);
    }

    // Alter district facet subject
    if ($variables['elements']['#settings']->facet == 'field_district') {
      $variables['block']->subject = t($variables['elements']['#settings']->settings['default_option_label']);
    }
  }

  if ($variables["block_html_id"] == 'block-quicktabs-feed-tabs' && $node->type == 'page') {
    $blockObject = block_load('kada_news_feature', 'news_archive_link');
    $block = _block_get_renderable_array(_block_render_blocks(array($blockObject)));
    $variables['read_more_block']  = drupal_render($block);;
  }

}
