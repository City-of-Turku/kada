<?php
/**
 * @file
 * pori_front_page_liftups.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pori_front_page_liftups_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pori_front_page_liftups_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_context_default_contexts_alter().
 */
function pori_front_page_liftups_context_default_contexts_alter(&$data) {
  if (isset($data['front_page'])) {
    $data['front_page']->reactions['block']['blocks']['quicktabs-feed_tabs_frontpage_promoted_con'] = array(
      'module' => 'quicktabs',
      'delta' => 'feed_tabs_frontpage_promoted_con',
      'region' => 'before_content',
      'weight' => -10,
    ); /* WAS: '' */
    $data['front_page']->reactions['block']['blocks']['views-kada_news-block_1'] = array(
      'module' => 'views',
      'delta' => 'kada_news-block_1',
      'region' => 'highlighted',
      'weight' => -10,
    ); /* WAS: '' */
    $data['front_page']->reactions['block']['blocks']['views-kada_project_liftups-block_1'] = array(
      'module' => 'views',
      'delta' => 'kada_project_liftups-block_1',
      'region' => 'before_footer',
      'weight' => -10,
    ); /* WAS: '' */
    $data['front_page']->reactions['block']['blocks']['views-kada_recommended-block_1'] = array(
      'module' => 'views',
      'delta' => 'kada_recommended-block_1',
      'region' => 'header',
      'weight' => -8,
    ); /* WAS: '' */
    $data['front_page']->reactions['block']['blocks']['views-kada_top_carousel-block_1'] = array(
      'module' => 'views',
      'delta' => 'kada_top_carousel-block_1',
      'region' => 'header',
      'weight' => -10,
    ); /* WAS: '' */
    unset($data['front_page']->reactions['block']['blocks']['views-kada_news-front_block']);
    unset($data['front_page']->reactions['block']['blocks']['views-kada_recommended-block']);
  }
  if (isset($data['theme_liftups'])) {
    $data['theme_liftups']->conditions['entity_field']['values']['view_mode'] = 'a:39:{s:4:"full";s:4:"full";s:6:"teaser";i:0;s:3:"rss";i:0;s:13:"diff_standard";i:0;s:5:"token";i:0;s:9:"accordion";i:0;s:8:"carousel";i:0;s:7:"current";i:0;s:7:"project";i:0;s:15:"event_grid_item";i:0;s:15:"event_list_item";i:0;s:14:"event_map_item";i:0;s:17:"event_mosaic_item";i:0;s:19:"event_search_result";i:0;s:19:"event_tab_list_item";i:0;s:18:"event_top_carousel";i:0;s:9:"main_news";i:0;s:14:"main_news_wide";i:0;s:10:"only_title";i:0;s:3:"map";i:0;s:8:"revision";i:0;s:10:"label_icon";i:0;s:9:"term_name";i:0;s:5:"title";i:0;s:12:"content_full";i:0;s:12:"content_half";i:0;s:6:"topics";i:0;s:16:"main_liftup_wide";i:0;s:11:"main_liftup";i:0;s:12:"main_content";i:0;s:10:"full_modal";i:0;s:10:"event_list";i:0;s:9:"grid_item";i:0;s:10:"event_node";i:0;s:14:"event_tab_item";i:0;s:6:"person";i:0;s:17:"file_linked_title";i:0;s:13:"search_result";i:0;s:9:"opengraph";i:0;}'; /* WAS: 'a:39:{s:4:"full";s:4:"full";s:6:"teaser";i:0;s:3:"rss";i:0;s:13:"diff_standard";i:0;s:5:"token";i:0;s:9:"accordion";i:0;s:8:"carousel";i:0;s:7:"current";i:0;s:7:"project";i:0;s:13:"search_result";i:0;s:15:"event_grid_item";i:0;s:15:"event_list_item";i:0;s:14:"event_map_item";i:0;s:17:"event_mosaic_item";i:0;s:19:"event_search_result";i:0;s:19:"event_tab_list_item";i:0;s:18:"event_top_carousel";i:0;s:9:"main_news";i:0;s:14:"main_news_wide";i:0;s:10:"only_title";i:0;s:3:"map";i:0;s:8:"revision";i:0;s:10:"label_icon";i:0;s:9:"term_name";i:0;s:5:"title";i:0;s:12:"content_full";i:0;s:12:"content_half";i:0;s:6:"topics";i:0;s:16:"main_liftup_wide";i:0;s:11:"main_liftup";i:0;s:12:"main_content";i:0;s:10:"full_modal";i:0;s:10:"event_list";i:0;s:9:"grid_item";i:0;s:10:"event_node";i:0;s:14:"event_tab_item";i:0;s:6:"person";i:0;s:17:"file_linked_title";i:0;s:9:"opengraph";i:0;}' */
    $data['theme_liftups']->conditions['path'] = array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ); /* WAS: '' */
    $data['theme_liftups']->reactions['region']['seven'] = array(
      'disable' => array(
        'content' => 0,
        'help' => 0,
        'page_top' => 0,
        'page_bottom' => 0,
        'sidebar_first' => 0,
      ),
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function pori_front_page_liftups_views_default_views_alter(&$data) {
  if (isset($data['kada_news'])) {
    $data['kada_news']->display['block_1'] = unserialize(base64_decode('TzoxMzoidmlld3NfZGlzcGxheSI6Nzp7czoxNToiZGlzcGxheV9vcHRpb25zIjthOjEyOntzOjU6InF1ZXJ5IjthOjI6e3M6NDoidHlwZSI7czoxMToidmlld3NfcXVlcnkiO3M6Nzoib3B0aW9ucyI7YTowOnt9fXM6ODoiZGVmYXVsdHMiO2E6MTI6e3M6NToidGl0bGUiO2I6MDtzOjk6ImNzc19jbGFzcyI7YjowO3M6NToicGFnZXIiO2I6MDtzOjEyOiJzdHlsZV9wbHVnaW4iO2I6MDtzOjEzOiJzdHlsZV9vcHRpb25zIjtiOjA7czoxMDoicm93X3BsdWdpbiI7YjowO3M6MTE6InJvd19vcHRpb25zIjtiOjA7czoxMzoicmVsYXRpb25zaGlwcyI7YjowO3M6NToic29ydHMiO2I6MDtzOjk6ImFyZ3VtZW50cyI7YjowO3M6MTM6ImZpbHRlcl9ncm91cHMiO2I6MDtzOjc6ImZpbHRlcnMiO2I6MDt9czo5OiJjc3NfY2xhc3MiO3M6MTI6Im1haW4tbGlmdHVwcyI7czoxOToiZGlzcGxheV9kZXNjcmlwdGlvbiI7czo1NDoiU2hvdyBjb250ZW50IGJhc2VkIG9uIHRoZSBwcm9tb3RlIHRvIGZyb250IHBhZ2Ugc3RhdHVzIjtzOjU6InBhZ2VyIjthOjI6e3M6NDoidHlwZSI7czo0OiJzb21lIjtzOjc6Im9wdGlvbnMiO2E6Mjp7czoxNDoiaXRlbXNfcGVyX3BhZ2UiO3M6MToiNCI7czo2OiJvZmZzZXQiO3M6MToiMCI7fX1zOjEyOiJzdHlsZV9wbHVnaW4iO3M6NzoiZGVmYXVsdCI7czoxMzoic3R5bGVfb3B0aW9ucyI7YToyOntzOjE3OiJkZWZhdWx0X3Jvd19jbGFzcyI7YjowO3M6MTc6InJvd19jbGFzc19zcGVjaWFsIjtiOjA7fXM6MTA6InJvd19wbHVnaW4iO3M6MjoiZHMiO3M6MTE6InJvd19vcHRpb25zIjthOjg6e3M6OToidmlld19tb2RlIjtzOjk6Im1haW5fbmV3cyI7czoxMzoibG9hZF9jb21tZW50cyI7aTowO3M6MTE6ImFsdGVybmF0aW5nIjtpOjA7czo4OiJncm91cGluZyI7aTowO3M6ODoiYWR2YW5jZWQiO2k6MDtzOjE0OiJkZWx0YV9maWVsZHNldCI7YToxOntzOjEyOiJkZWx0YV9maWVsZHMiO2E6MDp7fX1zOjE3OiJncm91cGluZ19maWVsZHNldCI7YToxOntzOjExOiJncm91cF9maWVsZCI7czoxMToibm9kZXxzdGlja3kiO31zOjE2OiJkZWZhdWx0X2ZpZWxkc2V0IjthOjE6e3M6OToidmlld19tb2RlIjtzOjk6Im1haW5fbmV3cyI7fX1zOjEzOiJyZWxhdGlvbnNoaXBzIjthOjE6e3M6MTY6ImZsYWdfY29udGVudF9yZWwiO2E6Njp7czoyOiJpZCI7czoxNjoiZmxhZ19jb250ZW50X3JlbCI7czo1OiJ0YWJsZSI7czo0OiJub2RlIjtzOjU6ImZpZWxkIjtzOjE2OiJmbGFnX2NvbnRlbnRfcmVsIjtzOjU6ImxhYmVsIjtzOjk6Im1haW5fbmV3cyI7czo0OiJmbGFnIjtzOjk6Im1haW5fbmV3cyI7czoxMDoidXNlcl9zY29wZSI7czozOiJhbnkiO319czo1OiJzb3J0cyI7YToyOntzOjY6InN0aWNreSI7YTo0OntzOjI6ImlkIjtzOjY6InN0aWNreSI7czo1OiJ0YWJsZSI7czo0OiJub2RlIjtzOjU6ImZpZWxkIjtzOjY6InN0aWNreSI7czo1OiJvcmRlciI7czo0OiJERVNDIjt9czoyMjoiZmllbGRfb3JkZXJfdGltZV92YWx1ZSI7YTo0OntzOjI6ImlkIjtzOjIyOiJmaWVsZF9vcmRlcl90aW1lX3ZhbHVlIjtzOjU6InRhYmxlIjtzOjI3OiJmaWVsZF9kYXRhX2ZpZWxkX29yZGVyX3RpbWUiO3M6NToiZmllbGQiO3M6MjI6ImZpZWxkX29yZGVyX3RpbWVfdmFsdWUiO3M6NToib3JkZXIiO3M6NDoiREVTQyI7fX1zOjc6ImZpbHRlcnMiO2E6NDp7czo2OiJzdGF0dXMiO2E6Njp7czoyOiJpZCI7czo2OiJzdGF0dXMiO3M6NToidGFibGUiO3M6NDoibm9kZSI7czo1OiJmaWVsZCI7czo2OiJzdGF0dXMiO3M6NToidmFsdWUiO2k6MTtzOjU6Imdyb3VwIjtpOjE7czo2OiJleHBvc2UiO2E6MTp7czo4OiJvcGVyYXRvciI7YjowO319czo0OiJ0eXBlIjthOjU6e3M6MjoiaWQiO3M6NDoidHlwZSI7czo1OiJ0YWJsZSI7czo0OiJub2RlIjtzOjU6ImZpZWxkIjtzOjQ6InR5cGUiO3M6NToidmFsdWUiO2E6MTp7czo5OiJuZXdzX2l0ZW0iO3M6OToibmV3c19pdGVtIjt9czo1OiJncm91cCI7aToxO31zOjg6Imxhbmd1YWdlIjthOjY6e3M6MjoiaWQiO3M6ODoibGFuZ3VhZ2UiO3M6NToidGFibGUiO3M6NDoibm9kZSI7czo1OiJmaWVsZCI7czo4OiJsYW5ndWFnZSI7czo1OiJ2YWx1ZSI7YToyOntzOjIyOiIqKipDVVJSRU5UX0xBTkdVQUdFKioqIjtzOjIyOiIqKipDVVJSRU5UX0xBTkdVQUdFKioqIjtzOjM6InVuZCI7czozOiJ1bmQiO31zOjU6Imdyb3VwIjtpOjE7czo2OiJleHBvc2UiO2E6NDp7czoxMToib3BlcmF0b3JfaWQiO3M6MTE6Imxhbmd1YWdlX29wIjtzOjU6ImxhYmVsIjtzOjg6Ikxhbmd1YWdlIjtzOjg6Im9wZXJhdG9yIjtzOjExOiJsYW5ndWFnZV9vcCI7czoxMDoiaWRlbnRpZmllciI7czo4OiJsYW5ndWFnZSI7fX1zOjc6InByb21vdGUiO2E6NDp7czoyOiJpZCI7czo3OiJwcm9tb3RlIjtzOjU6InRhYmxlIjtzOjQ6Im5vZGUiO3M6NToiZmllbGQiO3M6NzoicHJvbW90ZSI7czo1OiJ2YWx1ZSI7czoxOiIxIjt9fX1zOjg6ImRiX3RhYmxlIjtzOjEzOiJ2aWV3c19kaXNwbGF5IjtzOjM6InZpZCI7aTowO3M6MjoiaWQiO3M6NzoiYmxvY2tfMSI7czoxMzoiZGlzcGxheV90aXRsZSI7czoyNzoiRnJvbnQgbWFpbiBibG9jayAocHJvbW90ZWQpIjtzOjE0OiJkaXNwbGF5X3BsdWdpbiI7czo1OiJibG9jayI7czo4OiJwb3NpdGlvbiI7aTowO30=')); /* WAS: '' */
  }
  if (isset($data['kada_project_liftups'])) {
    $data['kada_project_liftups']->display['block_1'] = unserialize(base64_decode('TzoxMzoidmlld3NfZGlzcGxheSI6Nzp7czoxNToiZGlzcGxheV9vcHRpb25zIjthOjQ6e3M6NToicXVlcnkiO2E6Mjp7czo0OiJ0eXBlIjtzOjExOiJ2aWV3c19xdWVyeSI7czo3OiJvcHRpb25zIjthOjA6e319czoxOToiZGlzcGxheV9kZXNjcmlwdGlvbiI7czoyNzoiQ29udGVudCBmbGFnZ2VkIHRvIHByb2plY3RzIjtzOjg6ImRlZmF1bHRzIjthOjM6e3M6OToiYXJndW1lbnRzIjtiOjA7czoxMzoiZmlsdGVyX2dyb3VwcyI7YjowO3M6NzoiZmlsdGVycyI7YjowO31zOjc6ImZpbHRlcnMiO2E6NTp7czo2OiJzdGF0dXMiO2E6Njp7czoyOiJpZCI7czo2OiJzdGF0dXMiO3M6NToidGFibGUiO3M6NDoibm9kZSI7czo1OiJmaWVsZCI7czo2OiJzdGF0dXMiO3M6NToidmFsdWUiO2k6MTtzOjU6Imdyb3VwIjtpOjE7czo2OiJleHBvc2UiO2E6MTp7czo4OiJvcGVyYXRvciI7YjowO319czo0OiJ0eXBlIjthOjQ6e3M6MjoiaWQiO3M6NDoidHlwZSI7czo1OiJ0YWJsZSI7czo0OiJub2RlIjtzOjU6ImZpZWxkIjtzOjQ6InR5cGUiO3M6NToidmFsdWUiO2E6MTp7czo2OiJsaWZ0dXAiO3M6NjoibGlmdHVwIjt9fXM6NzoiZmxhZ2dlZCI7YTo1OntzOjI6ImlkIjtzOjc6ImZsYWdnZWQiO3M6NToidGFibGUiO3M6ODoiZmxhZ2dpbmciO3M6NToiZmllbGQiO3M6NzoiZmxhZ2dlZCI7czoxMjoicmVsYXRpb25zaGlwIjtzOjE2OiJmbGFnX2NvbnRlbnRfcmVsIjtzOjU6InZhbHVlIjtzOjE6IjEiO31zOjg6Imxhbmd1YWdlIjthOjQ6e3M6MjoiaWQiO3M6ODoibGFuZ3VhZ2UiO3M6NToidGFibGUiO3M6NDoibm9kZSI7czo1OiJmaWVsZCI7czo4OiJsYW5ndWFnZSI7czo1OiJ2YWx1ZSI7YToxOntzOjIyOiIqKipDVVJSRU5UX0xBTkdVQUdFKioqIjtzOjIyOiIqKipDVVJSRU5UX0xBTkdVQUdFKioqIjt9fXM6NzoicHJvbW90ZSI7YTo0OntzOjI6ImlkIjtzOjc6InByb21vdGUiO3M6NToidGFibGUiO3M6NDoibm9kZSI7czo1OiJmaWVsZCI7czo3OiJwcm9tb3RlIjtzOjU6InZhbHVlIjtzOjE6IjEiO319fXM6ODoiZGJfdGFibGUiO3M6MTM6InZpZXdzX2Rpc3BsYXkiO3M6MzoidmlkIjtpOjA7czoyOiJpZCI7czo3OiJibG9ja18xIjtzOjEzOiJkaXNwbGF5X3RpdGxlIjtzOjE5OiJQcm9qZWN0cyB8IFByb21vdGVkIjtzOjE0OiJkaXNwbGF5X3BsdWdpbiI7czo1OiJibG9jayI7czo4OiJwb3NpdGlvbiI7aTowO30=')); /* WAS: '' */
  }
  if (isset($data['kada_top_carousel'])) {
    $data['kada_top_carousel']->display['block_1'] = unserialize(base64_decode('TzoxMzoidmlld3NfZGlzcGxheSI6Nzp7czoxNToiZGlzcGxheV9vcHRpb25zIjthOjU6e3M6NToicXVlcnkiO2E6Mjp7czo0OiJ0eXBlIjtzOjExOiJ2aWV3c19xdWVyeSI7czo3OiJvcHRpb25zIjthOjA6e319czoxOToiZGlzcGxheV9kZXNjcmlwdGlvbiI7czozMDoiU2xpZGVzaG93IG9mIGxpZnR1cHMgcGVyIHRoZW1lIjtzOjg6ImRlZmF1bHRzIjthOjQ6e3M6NjoiZmllbGRzIjtiOjA7czo5OiJhcmd1bWVudHMiO2I6MDtzOjEzOiJmaWx0ZXJfZ3JvdXBzIjtiOjA7czo3OiJmaWx0ZXJzIjtiOjA7fXM6NjoiZmllbGRzIjthOjQ6e3M6MTY6ImZpZWxkX21haW5faW1hZ2UiO2E6MTI6e3M6MjoiaWQiO3M6MTY6ImZpZWxkX21haW5faW1hZ2UiO3M6NToidGFibGUiO3M6Mjc6ImZpZWxkX2RhdGFfZmllbGRfbWFpbl9pbWFnZSI7czo1OiJmaWVsZCI7czoxNjoiZmllbGRfbWFpbl9pbWFnZSI7czo1OiJsYWJlbCI7czowOiIiO3M6MTI6ImVsZW1lbnRfdHlwZSI7czoxOiIwIjtzOjE5OiJlbGVtZW50X2xhYmVsX2NvbG9uIjtiOjA7czoyMDoiZWxlbWVudF93cmFwcGVyX3R5cGUiO3M6MToiMCI7czoyMzoiZWxlbWVudF9kZWZhdWx0X2NsYXNzZXMiO2I6MDtzOjE3OiJjbGlja19zb3J0X2NvbHVtbiI7czozOiJzaWQiO3M6NDoidHlwZSI7czo4OiJjYXJvdXNlbCI7czo4OiJzZXR0aW5ncyI7YToxOntzOjQ6ImxpbmsiO3M6MToiMCI7fXM6MTI6Imdyb3VwX2NvbHVtbiI7czozOiJzaWQiO31zOjIxOiJmaWVsZF9saW5rX3RvX2NvbnRlbnQiO2E6MTM6e3M6MjoiaWQiO3M6MjE6ImZpZWxkX2xpbmtfdG9fY29udGVudCI7czo1OiJ0YWJsZSI7czozMjoiZmllbGRfZGF0YV9maWVsZF9saW5rX3RvX2NvbnRlbnQiO3M6NToiZmllbGQiO3M6MjE6ImZpZWxkX2xpbmtfdG9fY29udGVudCI7czo1OiJsYWJlbCI7czowOiIiO3M6NzoiZXhjbHVkZSI7YjoxO3M6NToiYWx0ZXIiO2E6Mjp7czoxMDoiYWx0ZXJfdGV4dCI7YjoxO3M6NDoidGV4dCI7czo2MDoiPGgzIGNsYXNzPSJmbGV4LWNhcHRpb25fX3RpdGxlIj5bZmllbGRfbGlua190b19jb250ZW50XTwvaDM+Ijt9czoxMjoiZWxlbWVudF90eXBlIjtzOjI6ImgzIjtzOjE5OiJlbGVtZW50X2xhYmVsX2NvbG9uIjtiOjA7czoyMDoiZWxlbWVudF93cmFwcGVyX3R5cGUiO3M6MToiMCI7czoyMzoiZWxlbWVudF9kZWZhdWx0X2NsYXNzZXMiO2I6MDtzOjEwOiJoaWRlX2VtcHR5IjtiOjE7czoxNzoiY2xpY2tfc29ydF9jb2x1bW4iO3M6MzoidXJsIjtzOjEyOiJncm91cF9jb2x1bW4iO3M6OToiZW50aXR5X2lkIjt9czo0OiJib2R5IjthOjEzOntzOjI6ImlkIjtzOjQ6ImJvZHkiO3M6NToidGFibGUiO3M6MTU6ImZpZWxkX2RhdGFfYm9keSI7czo1OiJmaWVsZCI7czo0OiJib2R5IjtzOjU6ImxhYmVsIjtzOjA6IiI7czo3OiJleGNsdWRlIjtiOjE7czo1OiJhbHRlciI7YToyOntzOjEwOiJhbHRlcl90ZXh0IjtiOjE7czo0OiJ0ZXh0IjtzOjY4OiJbZmllbGRfbGlua190b19jb250ZW50XQo8ZGl2IGNsYXNzPSJmbGV4LWNhcHRpb25fX2JvZHkiPltib2R5XTwvZGl2PiI7fXM6MTI6ImVsZW1lbnRfdHlwZSI7czoxOiIwIjtzOjE5OiJlbGVtZW50X2xhYmVsX2NvbG9uIjtiOjA7czoyMDoiZWxlbWVudF93cmFwcGVyX3R5cGUiO3M6MToiMCI7czoyMzoiZWxlbWVudF9kZWZhdWx0X2NsYXNzZXMiO2I6MDtzOjU6ImVtcHR5IjtzOjIzOiJbZmllbGRfbGlua190b19jb250ZW50XSI7czoxNjoiaGlkZV9hbHRlcl9lbXB0eSI7YjowO3M6MTI6Imdyb3VwX2NvbHVtbiI7czo5OiJlbnRpdHlfaWQiO31zOjE2OiJmaWVsZF9jb2xvcl9uYW1lIjthOjk6e3M6MjoiaWQiO3M6MTY6ImZpZWxkX2NvbG9yX25hbWUiO3M6NToidGFibGUiO3M6Mjc6ImZpZWxkX2RhdGFfZmllbGRfY29sb3JfbmFtZSI7czo1OiJmaWVsZCI7czoxNjoiZmllbGRfY29sb3JfbmFtZSI7czoxMjoicmVsYXRpb25zaGlwIjtzOjEzOiJ0ZXJtX25vZGVfdGlkIjtzOjU6ImxhYmVsIjtzOjA6IiI7czo3OiJleGNsdWRlIjtiOjE7czoxOToiZWxlbWVudF9sYWJlbF9jb2xvbiI7YjowO3M6NDoidHlwZSI7czo4OiJsaXN0X2tleSI7czoxMjoiZ3JvdXBfY29sdW1uIjtzOjk6ImVudGl0eV9pZCI7fX1zOjc6ImZpbHRlcnMiO2E6NTp7czo2OiJzdGF0dXMiO2E6Njp7czoyOiJpZCI7czo2OiJzdGF0dXMiO3M6NToidGFibGUiO3M6NDoibm9kZSI7czo1OiJmaWVsZCI7czo2OiJzdGF0dXMiO3M6NToidmFsdWUiO2k6MTtzOjU6Imdyb3VwIjtpOjE7czo2OiJleHBvc2UiO2E6MTp7czo4OiJvcGVyYXRvciI7YjowO319czo4OiJsYW5ndWFnZSI7YTo1OntzOjI6ImlkIjtzOjg6Imxhbmd1YWdlIjtzOjU6InRhYmxlIjtzOjQ6Im5vZGUiO3M6NToiZmllbGQiO3M6ODoibGFuZ3VhZ2UiO3M6NToidmFsdWUiO2E6MTp7czoyMjoiKioqQ1VSUkVOVF9MQU5HVUFHRSoqKiI7czoyMjoiKioqQ1VSUkVOVF9MQU5HVUFHRSoqKiI7fXM6NToiZ3JvdXAiO2k6MTt9czo0OiJ0eXBlIjthOjU6e3M6MjoiaWQiO3M6NDoidHlwZSI7czo1OiJ0YWJsZSI7czo0OiJub2RlIjtzOjU6ImZpZWxkIjtzOjQ6InR5cGUiO3M6NToidmFsdWUiO2E6MTp7czo2OiJsaWZ0dXAiO3M6NjoibGlmdHVwIjt9czo1OiJncm91cCI7aToxO31zOjc6ImZsYWdnZWQiO2E6Njp7czoyOiJpZCI7czo3OiJmbGFnZ2VkIjtzOjU6InRhYmxlIjtzOjg6ImZsYWdnaW5nIjtzOjU6ImZpZWxkIjtzOjc6ImZsYWdnZWQiO3M6MTI6InJlbGF0aW9uc2hpcCI7czoxNjoiZmxhZ19jb250ZW50X3JlbCI7czo1OiJ2YWx1ZSI7czoxOiIxIjtzOjU6Imdyb3VwIjtpOjE7fXM6NzoicHJvbW90ZSI7YTo0OntzOjI6ImlkIjtzOjc6InByb21vdGUiO3M6NToidGFibGUiO3M6NDoibm9kZSI7czo1OiJmaWVsZCI7czo3OiJwcm9tb3RlIjtzOjU6InZhbHVlIjtzOjE6IjEiO319fXM6ODoiZGJfdGFibGUiO3M6MTM6InZpZXdzX2Rpc3BsYXkiO3M6MzoidmlkIjtpOjA7czoyOiJpZCI7czo3OiJibG9ja18xIjtzOjEzOiJkaXNwbGF5X3RpdGxlIjtzOjI5OiJGbGV4U2xpZGVyIHwgcHJvbW90ZWQgY29udGVudCI7czoxNDoiZGlzcGxheV9wbHVnaW4iO3M6NToiYmxvY2siO3M6ODoicG9zaXRpb24iO2k6MDt9')); /* WAS: '' */
    unset($data['kada_top_carousel']->display['kadacalendar_en']->display_options['relationships']['entityqueue_relationship']['limit']);
    unset($data['kada_top_carousel']->display['kadacalendar_en']->display_options['relationships']['entityqueue_relationship']['queues']);
    unset($data['kada_top_carousel']->display['kadacalendar_hobby_en']->display_options['relationships']['entityqueue_relationship']['limit']);
    unset($data['kada_top_carousel']->display['kadacalendar_hobby_en']->display_options['relationships']['entityqueue_relationship']['queues']);
    unset($data['kada_top_carousel']->display['kadacalendar_hobby_ru']->display_options['relationships']['entityqueue_relationship']['limit']);
    unset($data['kada_top_carousel']->display['kadacalendar_hobby_ru']->display_options['relationships']['entityqueue_relationship']['queues']);
    unset($data['kada_top_carousel']->display['kadacalendar_hobby_sv']->display_options['relationships']['entityqueue_relationship']['limit']);
    unset($data['kada_top_carousel']->display['kadacalendar_hobby_sv']->display_options['relationships']['entityqueue_relationship']['queues']);
    unset($data['kada_top_carousel']->display['kadacalendar_hobby']->display_options['relationships']['entityqueue_relationship']['limit']);
    unset($data['kada_top_carousel']->display['kadacalendar_hobby']->display_options['relationships']['entityqueue_relationship']['queues']);
    unset($data['kada_top_carousel']->display['kadacalendar_ru']->display_options['relationships']['entityqueue_relationship']['limit']);
    unset($data['kada_top_carousel']->display['kadacalendar_ru']->display_options['relationships']['entityqueue_relationship']['queues']);
    unset($data['kada_top_carousel']->display['kadacalendar_sv']->display_options['relationships']['entityqueue_relationship']['limit']);
    unset($data['kada_top_carousel']->display['kadacalendar_sv']->display_options['relationships']['entityqueue_relationship']['queues']);
    unset($data['kada_top_carousel']->display['kadacalendar']->display_options['relationships']['entityqueue_relationship']['limit']);
    unset($data['kada_top_carousel']->display['kadacalendar']->display_options['relationships']['entityqueue_relationship']['queues']);
  }
}
