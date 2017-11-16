<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * kada theme.
 */

/**
 * Implements hook_theme().
 */
function kada_theme() {
  return array(
    'remote_image_style' => array(
      'variables' => array(
        'style_name' => NULL,
        'path' => NULL,
        'width' => NULL,
        'height' => NULL,
        'alt' => '',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  );
}

// Change the classes of the language switcher
function kada_links__locale_block(&$variables) {
  // An array of list items
  $items = array();

  foreach ($variables['links'] as $language => $info) {
    $name     = $info['language']->native;
    $href     = isset($info['href']) ? $info['href'] : '';
    $li_classes   = array('menu__item', 'menu--language-switcher__item');
    $link_classes = array('menu__link', 'menu--language-switcher__link');
    $options = array('attributes' => array('class'    => $link_classes),
      'language' => $info['language'],
      'html'     => true
    );
    $link = l($name, $href, $options);

    // Display only translated links
    if ($href) {
      $items[] = array('data' => $link, 'class' => $li_classes);
    }
  }

  // Output
  $attributes = array('class' => array('menu', 'menu--language-switcher'));
  $output = theme_item_list(array('items' => $items,
    'title' => '',
    'type'  => 'ul',
    'attributes' => $attributes
  ));
  return $output;
}

function kada_breadcrumb(&$variables) {
  $breadcrumb = $variables['breadcrumb'];
  $current_page = drupal_get_title();

  if (!empty($breadcrumb)) {
    $crumbs = '<ul class="breadcrumb">';

    foreach($breadcrumb as $value) {
      $crumbs .= '<li class="breadcrumb__item">' . $value . '</li>';
    }
    $crumbs .= '<li class="breadcrumb__item"><span class="breadcrumb__current-page">' . $current_page . '</span></li>';
    $crumbs .= '</ul>';

    return $crumbs;
  }
}

function kada_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '><span class="menu__item--expanded-toggle"></span>' . $output . $sub_menu . "</li>\n";
}


/**
 * Add a preprocessor to prepare data from FlexSlider Views
 */
function kada_process_flexslider_views(&$vars) {
  // Only run the preprocessor if it is a view
  if (!empty($vars['view'])) {
    $i = 0;
    foreach ($vars['rows'] as $id => $row) {
      $item['caption'] = (isset($row->caption) && !empty($row->caption)) ? $row->caption : NULL;
      if (isset($row->field_color_name[0]['raw']['value'])) {
        $vars['items'][$i]['theme_color'] = $row->field_field_color_name[0]['raw']['value'];
      }
      else {
        $vars['items'][$i]['theme_color'] = "";
      }
      $i++;
    }
    // Add classes to event types
    if ($vars['view']->current_display == "kadacalendar") {
      $i = 0;
      foreach ($vars['rows'] as $id => $row) {
        if ($row->_field_data['nid']['entity']->type == "event" &&
          isset($row->field_field_event_types[0]['raw']['tid'])) {
          $term_parents = taxonomy_get_parents_all($row->field_field_event_types[0]['raw']['tid']);
          $term_parent = end($term_parents);
            if ($term_parent->name == "Event") {
              $parent_class = "events";
            }
            elseif ($term_parent->name == "Hobby") {
              $parent_class = "hobbies";
            }
          if ($vars['items'][$i]['theme_color'] == "") {
            $vars['items'][$i]['theme_color'] = $parent_class;
          }
        }
        $i++;
      }
    }
  }
  return $vars;
}


/**
 * Process function for flexslider_list_item
 */
function kada_process_flexslider_list_item(&$vars) {
  $caption = &$vars['caption'];

  // Remove wrapping div from flex-caption
  $caption = substr($caption, 26);
  if (!empty($caption)) {
    $caption = '<div class="flex-caption-wrapper container flexslider__container"><div class="flex-caption theme-color-'. $vars['theme_color'] .' clearfix">' . $caption . '</div>';
  }
}


/**
 * Default theme implementation for flexslider_list
 */
function kada_flexslider_list(&$vars) {
  // Reference configuration variables
  $optionset = &$vars['settings']['optionset'];
  $items = &$vars['items'];
  $attributes = &$vars['settings']['attributes'];
  $type = &$vars['settings']['type'];
  $output = '';

  // Build the list
  if (!empty($items)) {
    $output .= "<$type" . drupal_attributes($attributes) . '>';
    foreach ($items as $i => $item) {

      $caption = '';
      if (!empty($item['caption'])) {
        $caption = $item['caption'];
      }

      $output .= theme('flexslider_list_item', array(
        'item' => $item['slide'],
        'theme_color' => $item['theme_color'],
        'settings' => array(
          'optionset' => $optionset,
        ),
        'caption' => $caption,
      ));
    }
    $output .= "</$type>";
  }

  return $output;
}

/**
 * Format the items shown in the node.
 */
function kada_service_links_block_format($variables) {
  $items = $variables['items'];
  $style = $variables['style'];
  $classbase = 'service-links-';

  foreach ($items as $item) {
    preg_match("/class=\"(.*?)\"/", $item, $matches);
    if (count($matches) >= 2 && stristr($matches[1], $classbase)) {
      $sometype = substr($matches[1], strlen($classbase));
      $temp_items[] = '<li class="some-link some-link--' . $sometype . '">' . $item . '</li>';
    }
  }

  $items = $temp_items;

  if (empty($items)) {
    return;
  }

  switch ($style) {
    case SERVICE_LINKS_STYLE_IMAGE:
      $output = implode(' ', $items);
      break;
    default:
      $output = theme('item_list', array('items' => array_values($items)));
  }
  return '<div class="some-links"><ul class="some-links__list">'. $output .'</ul></div>';
}

function kada_views_pre_render(&$view) {
  if ($view->name == 'kada_search') {
    foreach ($view->result as $result) {
      $theme_raw = $result->_entity_properties['field_theme']['0'];
      $theme_term = taxonomy_term_load($theme_raw);
      $theme = $theme_term->field_color_name['und']['0']['value'];
      $page = $result->_entity_properties['type'];
      $result->_entity_properties['#attributes']['class']['theme'] = $theme;
      $result->_entity_properties['#attributes']['class']['page'] = $page;
    }
  }
  elseif ($view->name == 'kada_sarnia_search') {
    foreach ($view->result as $result) {
      if (!empty($result->entity->solr_document['im_field_theme'])) {
        $theme_raw = $result->entity->solr_document['im_field_theme'][0];
        $theme_term = taxonomy_term_load($theme_raw);
        $theme = $theme_term->field_color_name['und']['0']['value'];
        $result->_entity_properties['#attributes']['class']['theme'] = 'theme-color-' . $theme;
      }
    }
  }

  // Add link to map popup title
  if ($view->name == 'kada_services_on_map' && $view->current_display == 'ol_service_data') {
    foreach ($view->result as $result) {
      $language = $result->_field_data['nid']['entity']->language;
      $title = $result->_field_data['nid']['entity']->title_field[$language][0]['safe_value'];
      // Get current service title
      $service_title = $result->field_title_field[0]['raw']['safe_value'];
      // Get path alias.
      $path = drupal_get_path_alias('node/' . $result->nid);
      // Create options array
      $options = array('attributes' =>
        array(
          'title' => $title,
        ),
      );
      // Create new link to direct to place and return it to rendering
      $place_link = l($service_title, $path, $options);
      $result->field_title_field[0]['rendered']['#markup'] = $place_link;
    }
  }
}

/**
 *Load parents of term
 */
function _kada_term_parents_search($term) {
  // Get taxonomy term parent
  $parents = taxonomy_get_parents($term);

  // If no parents found load term
  if (empty($parents)) {
    $term = taxonomy_term_load($term);
  }
  else {
    while (TRUE) {
      // Get the term
      $term = reset($parents);
      if (!empty($term->field_url_keyword)) {
        break;
      }
      $parents = taxonomy_get_parents($term->tid);
      if (empty($parents)) {
        // Keyword not found
        return FALSE;
      }
    }
  }

  return $term;
}


function kada_preprocess_views_view_fields(&$vars) {
  // @TODO: This needs refactoring. Should be converted so that it can be used later again.
  if ($vars['view']->name == 'kada_widget_event_carousel') {

    $term_id = $vars['row']->field_field_event_types[0]['raw']['tid'];
    $term = _kada_term_parents_search($term_id);
    $url_keyword = $term->field_url_keyword['und'][0]['value'];

    // Get domain ID
    $domain_id = domain_load_domain_id('calendar');
    $domain = domain_lookup($domain_id);
    $domain_path = domain_get_path($domain);
    if (isset($vars['row']->node_language) && $vars['row']->node_language != 'fi') {
      $node_language = $vars['row']->node_language . '/';
    }
    else {
      $node_language = '';
    }

    // Create url for rendering
    $path = drupal_lookup_path('alias', 'node/' . $vars['row']->nid);
    $node_title = $vars['row']->field_title_field[0]['raw']['safe_value'];
    $complete_path_string = $domain_path;
    $complete_path_string .= $node_language;
    $complete_path_string .= $url_keyword . '/' . $path;
    // url to render
    $path = l($node_title, $complete_path_string, array(
      'html' => TRUE,
      'external' => TRUE,
    ));

    // Recreate content string to render
    $wrapper_class = $vars['fields']['title_field']->handler->options['element_class'];
    $wrapper_element = $vars['fields']['title_field']->element_type;
    $content = '<' . $wrapper_element . ' class="' . $wrapper_class . '">';
    $content .= $path;
    $content .= '</' .$wrapper_element . '>';

    // Remade field content
    $vars['fields']['title_field']->content = $content;
  }
}

/**
 * Implements hook_ds_pre_render_alter().
 */
function kada_ds_pre_render_alter(&$layout_render_array, $context, &$variables) {
  /**
   * Change mosaic links to point to correct domain.
   * @TODO: This needs refactoring. Copy paste from previous function since it isn't reuseable.
   */
  if (!empty($variables['view_mode']) && $variables['view_mode'] == 'event_mosaic_item') {
    // Create read more link.
    $event_node = $variables['node'];
    $path = tkufi_events_division_event_url($event_node);

    $layout_render_array['image'][2][0]['#markup'] = $path;
    $layout_render_array['image'][2]['#items'][0]['value'] = $path;
  }

  // kalenteri.turku.fi front page liftup mosaic should point to latest occurrance
  // of an (recurring, sub)event if a master (event series) was added to the liftup.
  if (!empty($variables['view_mode']) && $variables['view_mode'] == 'event_grid_item') {
    if(!empty($context['entity']) && !empty($context['entity']->nid)){
      $event_node = $context['entity'];
      if(!empty($event_node->field_date_type[LANGUAGE_NONE][0]['value'])
        && $event_node->field_date_type[LANGUAGE_NONE][0]['value'] == 'super'){
          // Find next recurring event, link to it and show its date/title/read more links
          $sub_event_node = tkufi_events_division_fetch_next_recurring_event($event_node);
          if(!empty($sub_event_node) && !empty($sub_event_node->nid)){
            if(!empty($layout_render_array['image'][1][0]['#markup'])){
              $layout_render_array['image'][1][0]['#markup'] = l(t("Read more"), 'node/'. $sub_event_node->nid);
            }
            if(!empty($layout_render_array['content_bottom'][2][0]['#markup'])){
              // Dateformat currently hardcoded.
              $sub_date = date('d.m.Y H:i', strtotime($sub_event_node->field_event_date[LANGUAGE_NONE][0]['value']));
              $layout_render_array['content_bottom'][2][0]['#markup'] = $sub_date;
            }
            if(!empty($layout_render_array['content_bottom'][3][0]['#markup'])){
              $layout_render_array['content_bottom'][3][0]['#markup'] = l($sub_event_node->title, 'node/'. $sub_event_node->nid);
            }
          }
      }
    }
  }

  if ($context['entity_type'] == 'node') {
    // Wrap Project liftup visible title in h2.
    if ($variables['type'] == 'liftup' && $variables['view_mode'] == 'project') {
      if(!empty($layout_render_array['left'][1][0]['#markup'])) {
        $markup = $layout_render_array['left'][1][0]['#markup'];
        $layout_render_array['left'][1][0]['#markup'] = '<h2>' . $markup . '</h2>';
      }
    }

//    if ($variables['type'] == 'news_item' && $variables['view_mode'] == 'main_news') {
//      if(!empty($layout_render_array['main'][2][0]['#markup'])) {
//        $markup = $layout_render_array['main'][2][0]['#markup'];
//        $layout_render_array['main'][2][0]['#markup'] = '<h3>' . $markup . '</h3>';
//      }
//    }

    if ($variables['type'] == 'social_media_update') {
      $hide_link = FALSE;

      // Add SoMe type to node classes
      if (!empty($variables['field_some_type']['und'][0]['value'])) {
        $variables['classes_array'][] = 'node--' . $variables['field_some_type']['und'][0]['value'];
      }
      // Linking image to URL if update has image
      if (!empty($variables['field_image'][0]['fid'])) {
        if (!empty($variables['field_image_url'][0])) {
          // Some updates have separate Image URL value
          foreach ($layout_render_array['ds_content'] as $key => $value) {
            if (isset($value['#field_name'])) {
              if ($value['#field_name'] == 'field_image') {
                $layout_render_array['ds_content'][$key][0]['#path']['path'] = $variables['field_image_url'][0]['url'];
                // Hide Image URL because the image is linked to the URL
                $hide_link = TRUE;
              }
            }
          }
        } elseif (!empty($variables['field_link'][0]['url'])) {
          // Some updates do not have separate Image URL value, such as Facebook
          // link shares, so link the image to the share link
          foreach ($layout_render_array['ds_content'] as $key => $value) {
            if (isset($value['#field_name'])) {
              if ($value['#field_name'] == 'field_image') {
                $link = $variables['field_link'][0];
                $layout_render_array['ds_content'][$key][0]['#path']['path'] = $link['url'];
                $layout_render_array['ds_content'][$key][0]['#path']['options']['query'] = $link['query'];
                // Hide Image URL because the image is linked to the URL
                $hide_link = TRUE;
              }
            }
          }
        }
      }
      // If content does have a share title, then it has also link which should be
      // visible after all
      if (!empty($variables['field_link'][0]['title'])) {
        if (!empty($variables['field_share_title']['und'][0]['value'])) {
          $hide_link = FALSE;
        }
      } else {
        $hide_link = TRUE;
      }
      // We cannot remove link field from display mode settings, because otherwise
      // it will not appear in $variables, so we hide it here.
      if ($hide_link) {
        foreach ($layout_render_array['ds_content'] as $key => $value) {
          if (!empty($value['#field_name']) && ($value['#field_name'] == 'field_link' || $value['#field_name'] == 'field_image_url')) {
            unset($layout_render_array['ds_content'][$key]);
          }
        }
      }
    }
  }
}

/**
 * Implements theme_form_element().
 */
function kada_form_element($variables) {
  // Add hierarchy classes to specified checkboxes
  if ($variables['element']['#type'] == 'checkbox') {
    preg_match_all("/(-+)[^-]/", $variables['element']['#title'], $matches, PREG_PATTERN_ORDER);
    if (!empty($matches[1])) {
      $dashes = strlen($matches[1][0]);
    }
    else {
      $dashes = 0;
    }
    $class = "taxonomy-level taxonomy-level-" . $dashes;

    // remove dashes from label
    $variables['element']['#title'] = ltrim($variables['element']['#title'], "-");
    return '<div class="' . $class . '" data-taxonomy-level="' . $dashes . '">' . theme_form_element($variables) . '</div>';
  }
  // Modify BEF checkboxes
  if ($variables['element']['#type'] == 'bef-checkbox') {
    $classes = array('facetapi-facet');
    if ($variables['element']['#selected']) {
      $classes[] = 'facetapi-active';
    }
    else {
      $classes[] = 'facetapi-inactive';
    }
    return theme_form_element($variables);
  }
  else {
    return theme_form_element($variables);
  }
}

/**
 * Implements theme_facetapi_deactivate_widget().
 */
function kada_facetapi_deactivate_widget($variables) {
  return '';
}

/**
 * Implements theme_facetapi_count().
 */
function kada_facetapi_count($variables) {
  return '<span class="facet__count"><span>' . (int) $variables['count'] . '</span></span>';
}

/**
 * Implements theme_facetapi_link_active().
 */
function kada_facetapi_link_active($variables) {
  // Sanitizes the link text if necessary.
  $sanitize = empty($variables['options']['html']);
  $link_text = ($sanitize) ? check_plain($variables['text']) : $variables['text'];
  $link_text = '<span class="facet__icon"></span><span class="facet__title">' . $link_text . '</span>';

  // Builds accessible markup.
  // @see http://drupal.org/node/1316580
  $accessible_vars = array(
    'text' => $variables['text'],
    'active' => TRUE,
  );

  // Builds link, passes through t() which gives us the ability to change the
  // position of the widget on a per-language basis.
  $replacements = array(
    '!facetapi_deactivate_widget' => theme('facetapi_deactivate_widget', $variables),
    '!facetapi_accessible_markup' => theme('facetapi_accessible_markup', $accessible_vars),
    '!facetapi_link_text' => $link_text,
  );
  $variables['text'] = t('!facetapi_deactivate_widget!facetapi_link_text!facetapi_accessible_markup', $replacements);
  $variables['options']['html'] = TRUE;
  return theme_link($variables);
}

/**
 * Implements theme_facetapi_link_inactive().
 */
function kada_facetapi_link_inactive($variables) {
  // Sanitizes the link text if necessary.
  $sanitize = empty($variables['options']['html']);
  $link_text = ($sanitize) ? check_plain($variables['text']) : $variables['text'];
  $link_text = '<span class="facet__icon"></span><span class="facet__title">' . $link_text . '</span>';

  // Builds accessible markup.
  // @see http://drupal.org/node/1316580
  $accessible_vars = array(
    'text' => $variables['text'],
    'active' => FALSE,
  );

  $replacements = array(
    '!facetapi_accessible_markup' => theme('facetapi_accessible_markup', $accessible_vars),
    '!facetapi_link_text' => $link_text,
  );

  $variables['text'] = t('!facetapi_link_text!facetapi_accessible_markup', $replacements);
  $variables['options']['html'] = TRUE;

  // Adds count to link if one was passed.
  if (isset($variables['count'])) {
    $variables['text'] .= theme('facetapi_count', $variables);
  }

  $markup = theme_link($variables);

  return $markup;
}

/**
 * Themes a taxonomy-based exposed filter as a nested unordered list.
 */
function kada_select_as_tree($vars) {
  $element = $vars['element'];

  // The selected keys from #options.
  $selected_options = empty($element['#value']) ? $element['#default_value'] : $element['#value'];

  // Build a bunch of nested unordered lists to represent the hierarchy based
  // on the '-' prefix added by Views or optgroup structure.
  $output = '<ul class="facetapi-collapsible bef-tree">';
  $curr_depth = 0;

  foreach ($element['#options'] as $option_id => $option_label) {
    $has_children = FALSE;
    $option_value = $option_id;

    // Check for Taxonomy-based filters.
    if (is_object($option_label)) {
      $slice = array_slice($option_label->option, 0, 1, TRUE);
      list($option_value, $option_label) = each($slice);
    }

    // Check for optgroups -- which is basically a two-level deep tree.
    if (is_array($option_label)) {
      // TODO:
    }
    else {
      // Build hierarchy based on prefixed '-' on the element label.
      if (t('- Any -') == $option_label) {
        $depth = 0;
      }
      else {
        preg_match('/^(-*).*$/', $option_label, $matches);
        $depth = strlen($matches[1]);
        $option_label = ltrim($option_label, '-');

        // Also calculate the depth of the next element here so we know if there are children
        $next_depth = -1;
        $next_option_id = $option_id + 1;
        if (!empty($element['#options'][$next_option_id])) {
          $next_option_label = reset($element['#options'][$next_option_id]->option);
          preg_match('/^(-*).*$/', $next_option_label, $matches);
          $next_depth = strlen($matches[1]);
        }
      }

      // If the next option is deeper than the current one, it's hopefully deeper in hierarchy
      $has_children = $next_depth > $depth;

      // Build either checkboxes or radio buttons, depending on Views' settings.
      $html = '';
      if (!empty($element['#multiple'])) {
        if (isset($element['#bef_term_descriptions'][$option_value])) {
          $element[$option_value]['#description'] = $element['#bef_term_descriptions'][$option_value];
        }
        $attributes = array(
          'element' => $element,
          'value' => $option_value,
          'label' => $option_label,
          'selected' => (array_search($option_value, $selected_options) !== FALSE),
          'has_children' => $has_children,
        );
        $html = theme('bef_checkbox', $attributes);
      }
      else {
        if (isset($element['#bef_term_descriptions'][$option_value])) {
          $element[$option_value]['#description'] = $element['#bef_term_descriptions'][$option_value];
        }
        $element[$option_value]['#title'] = $option_label;
        $element[$option_value]['#children'] = theme('radio', array('element' => $element[$option_value]));
        $html .= theme('form_element', array('element' => $element[$option_value]));
      }

      if ($depth > $curr_depth) {
        // We've moved down a level: create a new nested <ul>.
        // TODO: Is there is a way to jump more than one level deeper at a time?
        // I don't think so...
        $output .= "<ul class='item-list bef-tree-child bef-tree-depth-$depth'><li>$html";
        $curr_depth = $depth;
      }
      elseif ($depth < $curr_depth) {
        // We've moved up a level: finish previous <ul> and <li> tags, once for
        // each level, since we can jump multiple levels up at a time.
        while ($depth < $curr_depth) {
          $output .= '</li></ul>';
          $curr_depth--;
        }
        $output .= "</li><li>$html";
      }
      else {
        if (-1 == $curr_depth) {
          // No </li> needed -- this is the first element.
          $output .= "<li>$html";
          $curr_depth = 0;
        }
        else {
          // Remain at same level as previous entry.
          $output .= "</li><li>$html";
        }
      }
    }
  } // foreach ($element['#options'] as $option_value => $option_label)

  if (!$curr_depth) {
    // Close last <li> tag.
    $output .= '</li>';
  }
  else {
    // Finish closing <ul> and <li> tags.
    while ($curr_depth) {
      $curr_depth--;
      $output .= '</li></ul></li>';
    }
  }

  // Close the opening <ul class="bef-tree"> tag.
  $output .= '</ul>';

  // Add exposed filter description.
  $description = '';
  if (!empty($element['#bef_description'])) {
    $description = '<div class="description">' . $element['#bef_description'] . '</div>';
  }

  // Add the select all/none option, if needed.
  if (!empty($element['#bef_select_all_none'])) {
    if (empty($element['#attributes']['class'])) {
      $element['#attributes']['class'] = array();
    }
    $element['#attributes']['class'][] = 'bef-select-all-none';
  }
  // Add the select all/none nested option, if needed.
  if (!empty($element['#bef_select_all_none_nested'])) {
    if (empty($element['#attributes']['class'])) {
      $element['#attributes']['class'] = array();
    }
    $element['#attributes']['class'][] = 'bef-select-all-none-nested';
  }

  // Name and multiple attributes are not valid for <div>'s.
  if (isset($element['#attributes']['name'])) {
    unset($element['#attributes']['name']);
  }
  if (isset($element['#attributes']['multiple'])) {
    unset($element['#attributes']['multiple']);
  }

  $element['#attributes']['class'] = array('form-bef-checkboxes', 'block--facetapi');

  return '<div' . drupal_attributes($element['#attributes']) . ">$description$output</div>";
}

/**
 * Build a BEF checkbox.
 */
function kada_bef_checkbox($variables) {
  $element = $variables['element'];
  $value = check_plain($variables['value']);
  $label = filter_xss_admin($variables['label']);
  $selected = $variables['selected'];
  $has_children = $variables['has_children'];
  $id = drupal_html_id($element['#id'] . '-' . $value);
  $attributes = array('class' => array('facetapi-facet'));
  if ($selected) {
    $active_class = 'facetapi-active';
  }
  else {
    $active_class = 'facetapi-inactive';
  }
  $attributes['class'][] = $active_class;
  // Custom ID for each checkbox based on the <select>'s original ID.
  $properties = array(
    '#required' => FALSE,
    '#id' => $id,
    '#type' => 'bef-checkbox',
    '#name' => $id,
    '#description' => isset($element['#bef_term_descriptions'][$value]) ? $element['#bef_term_descriptions'][$value] :
      '',
    '#selected' => $selected,
    '#tag' => 'div',
    '#attributes' => $attributes,
  );

  // Prevent the select-all-none class from cascading to all checkboxes.
  if (!empty($element['#attributes']['class'])
      && FALSE !== ($key = array_search('bef-select-all-none', $element['#attributes']['class']))) {
    unset($element['#attributes']['class'][$key]);
  }

  // Unset the name attribute as we are setting it manually.
  unset($element['#attributes']['name']);

  // Unset the multiple attribute as it doesn't apply for checkboxes.
  unset ($element['#attributes']['multiple']);

  $icon = '<span class="facet__icon"></span>';
  $handle = '<span class="facetapi-collapsible-handle"></span>';
  $checkbox = '<input type="checkbox" '
    // Brackets are key -- just like select.
    . 'name="' . $element['#name'] . '[]" '
    . 'id="' . $id . '" '
    . 'value="' . $value . '" '
    . ($selected ? 'checked="checked" ' : '')
    . drupal_attributes($element['#attributes']) . ' />';
  $option = "$icon$checkbox <label class='facet__title' for='$id'>$label</label>";
  if ($has_children) {
    $option .= $handle;
  }
  $properties['#value'] = '<a class="' . $active_class .'" href="javascript:;">' . $option . '</a>';
  $output = theme('html_tag', array('element' => $properties));
  return $output;
}


/**
 * Themes a select element as a set of checkboxes.
 */
function kada_select_as_checkboxes($vars) {
  $element = $vars['element'];
  if (!empty($element['#bef_nested'])) {
    if (empty($element['#attributes']['class'])) {
      $element['#attributes']['class'] = array();
    }
    $element['#attributes']['class'][] = 'form-bef-checkboxes';
    return theme('select_as_tree', array('element' => $element));
  }

  // The selected keys from #options.
  $selected_options = empty($element['#value']) ? (empty($element['#default_value']) ? array() : $element['#default_value']) : $element['#value'];
  if (!is_array($selected_options)) {
    $selected_options = array($selected_options);
  }

  // Grab exposed filter description.  We'll put it under the label where it
  // makes more sense.
  $description = '';
  if (!empty($element['#bef_description'])) {
    $description = '<div class="description">' . $element['#bef_description'] . '</div>';
  }

  $output = '<div class="bef-checkboxes">';
  foreach ($element['#options'] as $option => $elem) {
    if ('All' === $option) {
      // TODO: 'All' text is customizable in Views.
      // No need for an 'All' option -- either unchecking or checking all the
      // checkboxes is equivalent.
      continue;
    }

    // Check for Taxonomy-based filters.
    if (is_object($elem)) {
      $slice = array_slice($elem->option, 0, 1, TRUE);
      list($option, $elem) = each($slice);
    }

    // Check for optgroups.  Put subelements in the $element_set array and add
    // a group heading. Otherwise, just add the element to the set.
    $element_set = array();
    $is_optgroup = FALSE;
    if (is_array($elem)) {
      $output .= '<div class="bef-group">';
      $output .= '<div class="bef-group-heading">' . $option . '</div>';
      $output .= '<div class="bef-group-items">';
      $element_set = $elem;
      $is_optgroup = TRUE;
    }
    else {
      $element_set[$option] = $elem;
    }

    foreach ($element_set as $key => $value) {
      $output .= theme('bef_checkbox', array('element' => $element, 'value' => $key, 'label' => $value, 'selected' => array_search($key, $selected_options) !== FALSE));
    }

    if ($is_optgroup) {
      // Close group and item <div>s.
      $output .= '</div></div>';
    }

  }
  $output .= '</div>';

  // Fake theme_checkboxes() which we can't call because it calls
  // theme_form_element() for each option.
  $attributes['class'] = array('bef-select-as-checkboxes', 'form-bef-checkboxes', 'block--facetapi');
  if (!empty($element['#bef_select_all_none'])) {
    $attributes['class'][] = 'bef-select-all-none';
  }
  if (!empty($element['#bef_select_all_none_nested'])) {
    $attributes['class'][] = 'bef-select-all-none-nested';
  }
  if (!empty($element['#attributes']['class'])) {
    $attributes['class'] = array_merge($element['#attributes']['class'], $attributes['class']);
  }

  return '<div' . drupal_attributes($attributes) . ">$description$output</div>";
}



/**
 * Alter phone numbers for rendering
 */
function _kada_phonenumber_format($number, $lang) {
  $formatters = array(
    5 => '### ##',
    6 => '### ###',
    7 => '### ####',
    8 => '#### ####',
    9 => '### ### ###',
    10 => '### ### ####',
  );

  // Remove all whitespace
  $number = trim(preg_replace('/\s-\(\)/', '', $number));

  // Separate multiple numbers with , or /
  $numbers = explode(', ', $number);
  if (count($numbers) <= 1) {
    $numbers = explode(' / ', $number);
  }

  if (!is_array($numbers)) {
    $numbers = array($number);
  }

  $output = array();
  // Loop through the number(s)
  foreach ($numbers as $number) {
    // Change the international code to a zero
    $number = preg_replace('/^\+?358\s*/', '0', $number);

    // Remove everything except digits
    $number = trim(preg_replace('/[^0-9]/', '', $number));

    // Number doesn't contain prefix
    if (substr($number, 0, 1) != '0') {
      // Number is long enough for prefix (shortest one is 050 12345 = 7 digits)
      if (strlen($number) >= 7) {
        $number = '0' . $number;
      }
      // Turku landlines (without prefix)
      elseif (in_array(substr($number, 0, 3), array('262', '266'))) {
        $number = '02' . $number;
      }
    }

    // Too short, probably a local number or something
    if (strlen($number) < 8) {
      continue;
    }

    // Separate the prefix (03, 019, 041, 044, 045, 050, 0400, 0800)
    preg_match('/^(0\d(?:1|4|5|9|0{0,2}))(\d+)/', $number, $matches);

    $prefix = $matches[1];

    // Add intl prefix if necessary
    if ($lang == 'en') {
      $prefix = '+358 ' . substr($prefix, 1);
    }
    // Add parentheses if necessary (optional prefix) – either two digits or 019
    elseif (substr($prefix, 2, 0) === FALSE || substr($prefix, 2, 0) == '9') {
      $prefix = '(' . $prefix . ')';
    }

    // Prefix
    $formatted = $prefix . ' ';

    $local = $matches[2];

    $len = strlen($local);
    if (!isset($formatters[$len])) {
      watchdog('turkufi', t('Missing phone number formatter for length %len'), array('%len' => $len), WATCHDOG_WARNING);
      continue;
    }
    $formatter = $formatters[$len];

    $char_i = 0;
    foreach (str_split($formatter, 1) as $i => $tpl) {
      if ($tpl == ' ') {
        $formatted .= ' ';
      }
      else {
        $formatted .= substr($local, $char_i++, 1);
      }
    }

    $output[] = $formatted;
  }

  return $output;
}

function kada_preprocess_field(&$variables) {
  global $language;

  if ($variables['element']['#bundle'] == 'person' ||
    $variables['element']['#bundle'] == 'event' ||
    $variables['element']['#bundle'] == 'place') {
    if (stripos($variables['element']['#field_name'], 'phone') ||
      stripos($variables['element']['#field_name'], 'fax_number')) {
      global $language;
      $current_language = $language->language;
      $numbers = $variables['items'][0]['#markup'];
      $numbers = _kada_phonenumber_format($numbers, $current_language);
      $numbers_formated = '';
      foreach ($numbers as $number) {
        $numbers_formated .= $number . ', ';
      }
      // Subtract last two characters from string
      $numbers_formated = substr($numbers_formated, 0, -2);
      $variables['items'][0]['#markup'] = $numbers_formated;
    }
  }

  // Alter keywords url to search page instead of taxonomy page
  // List of field names
  $field_names = array(
    'field_keywords_et',
    'field_district',
    );

  if (in_array($variables['element']['#field_name'], $field_names) &&
    $variables['element']['#bundle'] == 'event') {
    // Current field name
    $field_name = $variables['element']['#field_name'];
    // Get domain name to determine which search page is used
    $domain = domain_get_domain();
    $domain_name = $domain['machine_name'];

    foreach ($variables['items'] as &$item) {
      $item = _kada_search_facet_filter_taxonomy_url($item, $field_name, $domain_name);
    }
  }

  // Preprocess for field--field-keywords--*.tpl.php
  // For page and news-item content types
  if (in_array($variables['element']['#bundle'], array('page', 'news_item')) &&
      $variables['element']['#field_name'] == 'field_keywords') {
    foreach ($variables['items'] as &$item) {
      // Some view modes only display the term name without link, don't interfere them
      if (isset($item['#options']['entity']) && isset($item['#href'])) {
        // Override keyword taxonomy term links to search
        $item['#href'] = 'search/' . 'keywords/"' . $item['#options']['entity']->tid . '"';
      }
    }
  }
}

function _kada_search_facet_filter_taxonomy_url(&$item, $field_name, $domain_name) {
  if ($domain_name == 'calendar') {
    // When in turkucalendar search taxonomy filters has title component on url
    $url_taxonomy_text = strtolower(preg_replace("/&([a-z])[a-z]+;/i", "$1", htmlentities($item['#title'])));
    $href_component = 'event-search/' . $field_name . '/';
    $item['#href'] = $href_component . '' . $url_taxonomy_text . '-' . $item['#options']['entity']->tid;
  }

  else {
    // Explode the string
    $field_name = explode('_', $field_name);
    // Select the second part of array, it contains taxonomy name
    $field_name = $field_name[1];
    $href_component = 'search/' . $field_name . '/"';
    $href = $href_component . '' . $item['#options']['entity']->tid . '"';
    $item['#options']['query'] = array('keys' => '');
    $item['#href'] = $href;
  }

  return $item;
}

/**
 * Implements theme_date_display_range().
 */
function kada_date_display_range($variables) {
  $date1 = $variables['date1'];
  $date2 = $variables['date2'];
  $timezone = $variables['timezone'];
  $attributes_start = $variables['attributes_start'];
  $attributes_end = $variables['attributes_end'];

  // If the dates are full dates (dd.mm.yyyy hh:mm), they should be separated
  // with an n-dash *and* spaces
  $either_date_contains_spaces = (strpos($date1, ' ') !== FALSE) || (strpos($date2, ' ') !== FALSE);
  if ($either_date_contains_spaces) {
    $separator = ' – ';
  }
  else {
    $separator = '–';
  }

  // Wrap the result with the attributes.
  return t('!start-date' . $separator . '!end-date', array(
    '!start-date' => '<span class="date-display-start"' . drupal_attributes($attributes_start) . '>' . $date1 . '</span>',
    '!end-date' => '<span class="date-display-end"' . drupal_attributes($attributes_end) . '>' . $date2 . $timezone . '</span>',
  ));
}

/**
 * Implements hook_feed_icon().
 */
function kada_feed_icon($variables) {
  $text = t('Subscribe to feed');
  if ($image = theme('image', array('path' => drupal_get_path('theme', variable_get('theme_default', NULL)) . '/dist/image/rss-icon.svg', 'width' => 16, 'height' => 16, 'alt' => $text))) {
    return '<div class="rss-feed">' . l($image, $variables['url'], array('html' => TRUE, 'attributes' => array('class' => array('rss-feed__link'), 'title' => $text))) . '</div>';
  }
}

/**
 * Implements hook_js_alter().
 */
function kada_js_alter(&$js) {
  // Load behaviours last
  $js['sites/all/themes/custom/kada/js/kada.behaviors.js']['scope'] = 'footer';
  $js['sites/all/themes/custom/kada/js/kada.behaviors.js']['weight'] = 100;
}
