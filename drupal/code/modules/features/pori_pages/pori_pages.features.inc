<?php
/**
 * @file
 * pori_pages.features.inc
 */

/**
 * Implements hook_context_default_contexts_alter().
 */
function pori_pages_context_default_contexts_alter(&$data) {
  if (isset($data['footer_navigation'])) {
    $data['footer_navigation']->disabled = TRUE; /* WAS: FALSE */
  }
  if (isset($data['page'])) {
    $data['page']->conditions['entity_field']['values']['view_mode'] = 'a:39:{s:4:"full";s:4:"full";s:6:"teaser";i:0;s:3:"rss";i:0;s:13:"diff_standard";i:0;s:5:"token";i:0;s:9:"accordion";i:0;s:8:"carousel";i:0;s:7:"current";i:0;s:7:"project";i:0;s:15:"event_grid_item";i:0;s:15:"event_list_item";i:0;s:14:"event_map_item";i:0;s:17:"event_mosaic_item";i:0;s:19:"event_search_result";i:0;s:19:"event_tab_list_item";i:0;s:18:"event_top_carousel";i:0;s:9:"main_news";i:0;s:14:"main_news_wide";i:0;s:10:"only_title";i:0;s:3:"map";i:0;s:8:"revision";i:0;s:10:"label_icon";i:0;s:9:"term_name";i:0;s:5:"title";i:0;s:12:"content_full";i:0;s:12:"content_half";i:0;s:6:"topics";i:0;s:16:"main_liftup_wide";i:0;s:11:"main_liftup";i:0;s:12:"main_content";i:0;s:10:"full_modal";i:0;s:10:"event_list";i:0;s:9:"grid_item";i:0;s:10:"event_node";i:0;s:14:"event_tab_item";i:0;s:6:"person";i:0;s:17:"file_linked_title";i:0;s:13:"search_result";i:0;s:9:"opengraph";i:0;}'; /* WAS: 'a:39:{s:4:"full";s:4:"full";s:6:"teaser";i:0;s:3:"rss";i:0;s:13:"diff_standard";i:0;s:5:"token";i:0;s:9:"accordion";i:0;s:8:"carousel";i:0;s:7:"current";i:0;s:7:"project";i:0;s:13:"search_result";i:0;s:15:"event_grid_item";i:0;s:15:"event_list_item";i:0;s:14:"event_map_item";i:0;s:17:"event_mosaic_item";i:0;s:19:"event_search_result";i:0;s:19:"event_tab_list_item";i:0;s:18:"event_top_carousel";i:0;s:9:"main_news";i:0;s:14:"main_news_wide";i:0;s:10:"only_title";i:0;s:3:"map";i:0;s:8:"revision";i:0;s:10:"label_icon";i:0;s:9:"term_name";i:0;s:5:"title";i:0;s:12:"content_full";i:0;s:12:"content_half";i:0;s:6:"topics";i:0;s:16:"main_liftup_wide";i:0;s:11:"main_liftup";i:0;s:12:"main_content";i:0;s:10:"full_modal";i:0;s:10:"event_list";i:0;s:9:"grid_item";i:0;s:10:"event_node";i:0;s:14:"event_tab_item";i:0;s:6:"person";i:0;s:17:"file_linked_title";i:0;s:9:"opengraph";i:0;}' */
    unset($data['page']->reactions['block']['blocks']['views-kada_pages-top_image']);
  }
  if (isset($data['page_menus'])) {
    $data['page_menus']->disabled = TRUE; /* WAS: FALSE */
  }
}

/**
 * Implements hook_ds_field_settings_info_alter().
 */
function pori_pages_ds_field_settings_info_alter(&$data) {
  if (isset($data['node|page|default'])) {
    $data['node|page|default']->settings['description_page']['weight'] = 5; /* WAS: 6 */
    $data['node|page|default']->settings['duplicate_info_box_bottom']['weight'] = 2; /* WAS: 3 */
    $data['node|page|default']->settings['places_for_services']['weight'] = 8; /* WAS: 10 */
    unset($data['node|page|default']->settings['field_contact_information']);
  }
}

/**
 * Implements hook_ds_layout_settings_info_alter().
 */
function pori_pages_ds_layout_settings_info_alter(&$data) {
  if (isset($data['node|page|default'])) {
    $data['node|page|default']->layout = 'page_layout'; /* WAS: 'ds_1col' */
    $data['node|page|default']->settings['fields']['body'] = 'main_content'; /* WAS: 'ds_content' */
    $data['node|page|default']->settings['fields']['description_page'] = 'main_content'; /* WAS: 'ds_content' */
    $data['node|page|default']->settings['fields']['domain'] = 'main_content'; /* WAS: 'ds_content' */
    $data['node|page|default']->settings['fields']['duplicate_info_box_bottom'] = 'main_content'; /* WAS: 'ds_content' */
    $data['node|page|default']->settings['fields']['field_contact_information'] = 'main_content'; /* WAS: 'ds_content' */
    $data['node|page|default']->settings['fields']['field_district'] = 'main_content'; /* WAS: 'ds_content' */
    $data['node|page|default']->settings['fields']['field_info_box_bottom'] = 'main_content'; /* WAS: 'ds_content' */
    $data['node|page|default']->settings['fields']['field_keywords'] = 'sidebar'; /* WAS: 'ds_content' */
    $data['node|page|default']->settings['fields']['field_subpage'] = 'main_content'; /* WAS: 'ds_content' */
    $data['node|page|default']->settings['fields']['field_topic'] = 'main_content'; /* WAS: 'ds_content' */
    $data['node|page|default']->settings['fields']['places_for_services'] = 'main_content'; /* WAS: 'ds_content' */
    $data['node|page|default']->settings['layout_disable_css'] = FALSE; /* WAS: '' */
    $data['node|page|default']->settings['regions']['main_content'] = array(
      0 => 'domain',
      1 => 'field_topic',
      2 => 'duplicate_info_box_bottom',
      3 => 'field_contact_information',
      4 => 'description_page',
      5 => 'body',
      6 => 'field_info_box_bottom',
      7 => 'places_for_services',
      9 => 'field_district',
      10 => 'field_subpage',
    ); /* WAS: '' */
    $data['node|page|default']->settings['regions']['sidebar'] = array(
      8 => 'field_keywords',
    ); /* WAS: '' */
    $data['node|page|default']->settings['wrappers']['main_content'] = 'div'; /* WAS: '' */
    $data['node|page|default']->settings['wrappers']['sidebar'] = 'div'; /* WAS: '' */
    unset($data['node|page|default']->settings['fields']['field_info_box']);
    unset($data['node|page|default']->settings['regions']['ds_content']);
    unset($data['node|page|default']->settings['wrappers']['ds_content']);
  }
}

/**
 * Implements hook_field_group_info_alter().
 */
function pori_pages_field_group_info_alter(&$data) {
  if (isset($data['group_content|node|page|form'])) {
    unset($data['group_content|node|page|form']);
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function pori_pages_field_default_field_instances_alter(&$data) {
  if (isset($data['node-page-field_info_box'])) {
    unset($data['node-page-field_info_box']);
  }
  if (isset($data['node-page-field_keywords'])) {
    $data['node-page-field_keywords']['display']['default']['label'] = 'hidden'; /* WAS: 'inline' */
  }
  if (isset($data['node-page-field_main_image'])) {
    $data['node-page-field_main_image']['display']['default']['weight'] = 29; /* WAS: 30 */
    $data['node-page-field_main_image']['label'] = 'Liftup image'; /* WAS: 'Main image' */
    $data['node-page-field_main_image']['settings']['allow_override'] = 0; /* WAS: '' */
  }
}
