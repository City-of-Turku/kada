<?php

/**
 * Implements hook_preprocess_page().
 */
function visitpori_preprocess_page(&$variables) {
  global $language;

  // Check if page is node page.
  if (isset($variables['node'])) {
    $node = $variables['node'];
    $node_wrapper = entity_metadata_wrapper('node', $variables['node']);

    if ($node->type == 'person') {
      // Rebuild person title without email address
      $title = implode(' ', array($node_wrapper->field_first_name->value(), $node_wrapper->field_surname->value()));
      drupal_set_title($title);
      $variables['title'] = $title;
    }

    if ($node->type == 'page') {
      foreach ($node_wrapper->field_visitpori_theme->getIterator() as $delta => $term_wrapper) {
        try {
          if(is_object($term_wrapper) && !empty($term_wrapper->field_visitpori_color_name)) {
            $color = $term_wrapper->field_visitpori_color_name->value();
          } else {
            $color = '';
          }
          if (!empty($color)) {
            $variables['classes_array'][] = 'theme-color-' . $color;
          }
        }
        catch (EntityMetadataWrapperException $e) {
          // Do nothing.
        }
      }
    }

    // Force news items to always have two sidebars
    if ($node->type == 'news_item') {
      $page = &$variables['page'];
      if (empty($page['sidebar_first'])) {
        $page['sidebar_first'][]= '';
      }
      if (empty($page['sidebar_second'])) {
        $page['sidebar_second'][]= '';
      }
    }

    // Set section wrapper if node type matches.
    if ($node->type == 'section') {
      $section_wrapper = $node_wrapper;
    }
    // Or look for section reference field.
    else if (!empty($node->og_group_ref)) {
      // @todo: How to handle multiple sections with news for example?
      $section_wrapper = $node_wrapper->og_group_ref[0];
    }
    // If section is present, process overrides.
    if (isset($section_wrapper)) {
      $section_node = $section_wrapper->value();
      // Look for original section node if current one is translation.
      if (!empty($section_node->source)) {
        if ($section_wrapper->source->value()->nid != $section_wrapper->nid) {
          $section_source_wrapper = $section_wrapper->source;
        }
      }

      // Frontpage link on sections that are in the main domain
      // Used by theme in logo and site name linking
      if (!empty($section_node->domains) && in_array(1, $section_node->domains)) {
        // Only react on domain id 1 == main Turku.fi domain
        $variables['front_page'] = url('node/' . $section_node->nid);
      }

      // Logo override.
      // If page logo is set for section, override the one from theme.
      $site_logo_atom = $section_wrapper->field_site_logo->value();
      // Try getting logo from original section if current translation doesn't contain it.
      if (empty($site_logo_atom) && isset($section_source_wrapper)) {
        $site_logo_atom = $section_source_wrapper->field_site_logo->value();
      }
      // If atom is present, use logo uri from it as path.
      if (isset($site_logo_atom->scald_thumbnail[LANGUAGE_NONE][0]['uri'])) {
        $site_logo_path = $site_logo_atom->scald_thumbnail[LANGUAGE_NONE][0]['uri'];
      }

      // Color palette.
      // Try to get color palette.
      $color_palette = $section_wrapper->field_color_palette->value();
      // Try getting color palette from original section if current translation doesn't contain it.
      if (empty($color_palette) && isset($section_source_wrapper)) {
        $color_palette = $section_source_wrapper->field_color_palette->value();
      }
    }

    if ($node->type == 'page' || $node->type == 'landing_page' || $node->type == 'section') {
      if (!empty($variables['page']['before_header']['kada_search_feature_quicksearch'])) {
        // Duplicate the quick search block.
        // Note that navigation_top_extra is not a real region
        $variables['page']['navigation_top_extra'][] = $variables['page']['before_header']['kada_search_feature_quicksearch'];
      }
    }
  }

  // Page logo.
  // If page logo is not set, use default from theme.
  if (empty($site_logo_path)) {
    $lang_suffix = $language->language == 'sv' ? '_sv': '';
    $site_logo_path = drupal_get_path('theme', variable_get('theme_default', NULL)) . '/logo' . $lang_suffix . '.png';
    $site_logo_footer_path = drupal_get_path('theme', variable_get('theme_default', NULL)) . '/logo-footer.png';
  }
  // Set page logo markup.
  $variables['site_logo']['#markup'] = theme('remote_image_style', array(
    'style_name' => 'site_logo',
    'path' => $site_logo_path,
  ));
  $variables['site_logo_path'] = $site_logo_path;
  $variables['site_logo_footer_path'] = $site_logo_footer_path;

  // Color palette
  // TO-DO: This is rather hackish, but I wanted to avoid section override code duplication.
  if (!empty($color_palette)) {
    $kada_page_classes = &drupal_static('kada_page_classes');
    $kada_page_classes .= ' color-palette--' . $color_palette;
  }

  // Help text on search page.
  if (isset($variables['page']['#views_contextual_links_info']) &&
    $variables['page']['#views_contextual_links_info']['views_ui']['view_name'] == 'kada_sarnia_search') {
    $help_item = theme_html_tag(array(
      'element' => array(
        '#tag' => 'div',
        '#attributes' => array(
          'class' => 'search-help',
        ),
        '#value' => t('You can filter the search results by selecting the desired filters on the left.'),
      ),
    ));
    $markup = $help_item . $variables['page']['content']['system_main']['main']['#markup'];
    $variables['page']['content']['system_main']['main']['#markup'] = $markup;
  }
}
