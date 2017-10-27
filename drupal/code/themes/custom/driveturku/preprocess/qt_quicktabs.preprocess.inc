<?php

/**
 * Implements hook_preprocess_qt_quicktabs().
 */
function driveturku_preprocess_qt_quicktabs(&$variables) {
  $qt = substr($variables['element']['#options']['attributes']['id'], strlen('quicktabs-'));
  if (in_array($qt, array("feed_tabs", "feed_tabs_section"))) {
    $quicktab = quicktabs_load($qt);
    $is_section = $quicktab->machine_name === "feed_tabs_section";
    $shown_tabs = array();
    $menu_object = menu_get_object();
    // Get shown feed tabs from content
    if (!empty($menu_object->field_feed_tabs[LANGUAGE_NONE])) {
      foreach ($menu_object->field_feed_tabs[LANGUAGE_NONE] as $field_item) {
        $shown_tabs[] = $field_item['value'];
      }
    }
    // Flag when tab with content is found and set to active.
    $active_set = FALSE;
    // Go over tabs
    foreach ($quicktab->tabs as $tab_pos => $tab) {
      // This relies on having view displays named as tab_<tab-field-value>
      $tab_matching_name = '';
      if ($tab['type'] == 'view') {
        $tab_matching_name = substr($tab['display'], $is_section ? 12: 4);
        $is_empty = empty($variables['element']['container']['divs'][$tab_pos]['content']['#markup']);
      }
      // This is for combined custom block, which is always "new".
      else if($tab['type'] == 'block') {
        $tab_matching_name = 'new';
        // Remove 'delta' from name to get proper key.
        $block = str_replace('delta_', '', $tab['bid']);
        $is_empty = empty($variables['element']['container']['divs'][$tab_pos]['content'][$block]['#markup']);
      }
      // Get container prefix for classes.
      $container_prefix =& $variables['element']['container']['divs'][$tab_pos]['#prefix'];
      // Remove tab when it's not selected.
      if ($is_empty || !in_array($tab_matching_name, $shown_tabs)) {
        // Tab.
        $variables['element']['tabs']['tablinks'][$tab_pos]['hidden'] = TRUE;
        // Container.
        $hidden_str = 'class="qt-hidden ';
        if ($tab_pos == 0) {
          $hidden_str .= ' quicktabs-hide ';
        }
        $container_prefix = str_replace('class="', $hidden_str, $container_prefix);
      }
      else if (!$active_set) {
        $active_set = TRUE;
        $variables['element']['tabs']['#options']['active'] = $tab_pos;
        $container_prefix = str_replace('quicktabs-hide', '', $container_prefix);
      }
    }
  }
}
