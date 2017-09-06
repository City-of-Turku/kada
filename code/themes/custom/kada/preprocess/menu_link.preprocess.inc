<?php

/**
 * Implements hook_preprocess_menu_link().
 */
function kada_preprocess_menu_link(&$variables) {

  $variables['element']['#attributes']['class'] = array();

  $menu_item = $variables['element'];

  // Menu Attributes fix
  if (!empty($menu_item['#original_link']['options']['item_attributes']['class'])) {
    $menu_attributes = $menu_item['#original_link']['options']['item_attributes']['class'];
    $variables['element']['#attributes']['class'][] = $menu_attributes;
  }

  if ($menu_item['#original_link']['access'] && !$menu_item['#original_link']['hidden']) {
    $variables['element']['#attributes']['class'][] = 'menu__item';
  }

  if ($menu_item['#original_link']['has_children'] && $menu_item['#below']) {
    $variables['element']['#attributes']['class'][] = 'is-expanded';
  } elseif ($menu_item['#original_link']['has_children'] ) {
    $variables['element']['#attributes']['class'][] = 'is-collapsed';
  }

  if ($menu_item['#original_link']['in_active_trail']) {
    $variables['element']['#attributes']['class'][] = 'is-active-trail';
  }

  if ($menu_item['#original_link']['href'] == $menu_item['#href'] && $menu_item['#original_link']['href'] == $_GET['q']) {
    $variables['element']['#attributes']['class'][] = 'is-active';
  }

  $menu_level = array(
    1 => 'first',
    2 => 'second',
    3 => 'third'
  );

  $menu_item_level = $menu_item['#original_link']['depth'];
  if ($menu_item['#original_link']['menu_name'] == 'og-menu-single') {
    $menu_item_level--;
  }

  if (isset($menu_level[$menu_item['#original_link']['depth']])) {
    $variables['element']['#attributes']['class'][] = 'menu__item--has-' . $menu_level[$menu_item_level] . '-level';
  }
}
