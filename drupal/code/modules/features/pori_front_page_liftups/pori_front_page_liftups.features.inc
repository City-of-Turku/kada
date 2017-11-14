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
}

/**
 * Implements hook_views_default_views_alter().
 */
function pori_front_page_liftups_views_default_views_alter(&$data) {
  if (isset($data['kada_news'])) {
    $data['kada_news']->display['block_1'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:12:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:12:{s:5:"title";b:0;s:9:"css_class";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:13:"relationships";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:9:"css_class";s:12:"main-liftups";s:19:"display_description";s:54:"Show content based on the promote to front page status";s:5:"pager";a:2:{s:4:"type";s:4:"some";s:7:"options";a:2:{s:14:"items_per_page";s:1:"4";s:6:"offset";s:1:"0";}}s:12:"style_plugin";s:7:"default";s:13:"style_options";a:2:{s:17:"default_row_class";b:0;s:17:"row_class_special";b:0;}s:10:"row_plugin";s:2:"ds";s:11:"row_options";a:8:{s:9:"view_mode";s:9:"main_news";s:13:"load_comments";i:0;s:11:"alternating";i:0;s:8:"grouping";i:0;s:8:"advanced";i:0;s:14:"delta_fieldset";a:1:{s:12:"delta_fields";a:0:{}}s:17:"grouping_fieldset";a:1:{s:11:"group_field";s:11:"node|sticky";}s:16:"default_fieldset";a:1:{s:9:"view_mode";s:9:"main_news";}}s:13:"relationships";a:1:{s:16:"flag_content_rel";a:6:{s:2:"id";s:16:"flag_content_rel";s:5:"table";s:4:"node";s:5:"field";s:16:"flag_content_rel";s:5:"label";s:9:"main_news";s:4:"flag";s:9:"main_news";s:10:"user_scope";s:3:"any";}}s:5:"sorts";a:2:{s:6:"sticky";a:4:{s:2:"id";s:6:"sticky";s:5:"table";s:4:"node";s:5:"field";s:6:"sticky";s:5:"order";s:4:"DESC";}s:22:"field_order_time_value";a:4:{s:2:"id";s:22:"field_order_time_value";s:5:"table";s:27:"field_data_field_order_time";s:5:"field";s:22:"field_order_time_value";s:5:"order";s:4:"DESC";}}s:7:"filters";a:4:{s:6:"status";a:6:{s:2:"id";s:6:"status";s:5:"table";s:4:"node";s:5:"field";s:6:"status";s:5:"value";i:1;s:5:"group";i:1;s:6:"expose";a:1:{s:8:"operator";b:0;}}s:4:"type";a:5:{s:2:"id";s:4:"type";s:5:"table";s:4:"node";s:5:"field";s:4:"type";s:5:"value";a:1:{s:9:"news_item";s:9:"news_item";}s:5:"group";i:1;}s:8:"language";a:6:{s:2:"id";s:8:"language";s:5:"table";s:4:"node";s:5:"field";s:8:"language";s:5:"value";a:2:{s:22:"***CURRENT_LANGUAGE***";s:22:"***CURRENT_LANGUAGE***";s:3:"und";s:3:"und";}s:5:"group";i:1;s:6:"expose";a:4:{s:11:"operator_id";s:11:"language_op";s:5:"label";s:8:"Language";s:8:"operator";s:11:"language_op";s:10:"identifier";s:8:"language";}}s:7:"promote";a:4:{s:2:"id";s:7:"promote";s:5:"table";s:4:"node";s:5:"field";s:7:"promote";s:5:"value";s:1:"1";}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:7:"block_1";s:13:"display_title";s:27:"Front main block (promoted)";s:14:"display_plugin";s:5:"block";s:8:"position";i:0;}'); /* WAS: '' */
  }
  if (isset($data['kada_top_carousel'])) {
    $data['kada_top_carousel']->display['block_1']->display_options['fields']['body']['alter']['max_length'] = 460; /* WAS: '' */
    $data['kada_top_carousel']->display['block_1']->display_options['fields']['body']['alter']['path'] = '[field_link_to_content]'; /* WAS: '' */
    $data['kada_top_carousel']->display['block_1']->display_options['fields']['field_link_to_content']['alter']['make_link'] = TRUE; /* WAS: '' */
    $data['kada_top_carousel']->display['block_1']->display_options['fields']['field_link_to_content']['alter']['path'] = '[field_link_to_content]'; /* WAS: '' */
    $data['kada_top_carousel']->display['block_1']->display_options['fields']['field_link_to_content']['alter']['text'] = '<div class="flex-caption__target-group">[field_theme][field_target_audience]</div>
    <div class="flex-caption__body">[body]</div>'; /* WAS: '<h3 class="flex-caption__title">[field_link_to_content]</h3>' */
    $data['kada_top_carousel']->display['block_1']->display_options['fields']['field_link_to_content']['empty'] = '<div class="flex-caption__target-group">[field_theme][field_target_audience]</div>
    <div class="flex-caption__body">[body]</div>'; /* WAS: '' */
    $data['kada_top_carousel']->display['block_1']->display_options['fields']['field_link_to_content']['hide_alter_empty'] = FALSE; /* WAS: '' */
    $data['kada_top_carousel']->display['block_1']->display_options['fields']['field_link_to_content']['type'] = 'link_absolute'; /* WAS: '' */
    $data['kada_top_carousel']->display['block_1']->display_options['fields']['field_main_image']['alter'] = array(
      'path' => '[field_link_to_content]',
    ); /* WAS: '' */
    $data['kada_top_carousel']->display['block_1']->display_options['fields']['field_target_audience'] = array(
      'id' => 'field_target_audience',
      'table' => 'field_data_field_target_audience',
      'field' => 'field_target_audience',
      'label' => '',
      'exclude' => TRUE,
      'alter' => array(
        'alter_text' => TRUE,
        'text' => '<span class="flex-caption__target-group__item">[field_target_audience]</span>',
      ),
      'element_label_colon' => FALSE,
      'type' => 'i18n_taxonomy_term_reference_plain',
      'delta_offset' => 0,
    ); /* WAS: '' */
    $data['kada_top_carousel']->display['block_1']->display_options['fields']['field_theme'] = array(
      'id' => 'field_theme',
      'table' => 'field_data_field_theme',
      'field' => 'field_theme',
      'label' => '',
      'exclude' => TRUE,
      'alter' => array(
        'alter_text' => TRUE,
        'text' => '<span class="flex-caption__target-group__item">[field_theme]</span>',
      ),
      'element_label_colon' => FALSE,
      'type' => 'i18n_taxonomy_term_reference_plain',
      'delta_offset' => 0,
    ); /* WAS: '' */
    $data['kada_top_carousel']->display['default']->display_options['style_options']['captionfield'] = 'field_link_to_content'; /* WAS: 'body' */
    $data['kada_top_carousel']->display['section']->display_options['fields']['body']['hide_empty'] = TRUE; /* WAS: '' */
    $data['kada_top_carousel']->display['section']->display_options['fields']['field_link_to_content']['alter']['make_link'] = TRUE; /* WAS: '' */
    $data['kada_top_carousel']->display['section']->display_options['fields']['field_link_to_content']['alter']['path'] = '[field_link_to_content]'; /* WAS: '' */
    $data['kada_top_carousel']->display['section']->display_options['fields']['field_link_to_content']['alter']['text'] = '<div class="flex-caption__target-group">[field_theme][field_target_audience]</div>
    <div class="flex-caption__body">[body]</div>'; /* WAS: '<h3 class="flex-caption__title">[field_link_to_content]</h3>' */
    $data['kada_top_carousel']->display['section']->display_options['fields']['field_link_to_content']['empty'] = '<div class="flex-caption__target-group">[field_theme][field_target_audience]</div>
    <div class="flex-caption__body">[body]</div>'; /* WAS: '' */
    $data['kada_top_carousel']->display['section']->display_options['fields']['field_link_to_content']['hide_alter_empty'] = FALSE; /* WAS: '' */
    $data['kada_top_carousel']->display['section']->display_options['fields']['field_link_to_content']['type'] = 'link_plain'; /* WAS: '' */
    $data['kada_top_carousel']->display['section']->display_options['fields']['field_target_audience'] = array(
      'id' => 'field_target_audience',
      'table' => 'field_data_field_target_audience',
      'field' => 'field_target_audience',
      'label' => '',
      'exclude' => TRUE,
      'alter' => array(
        'alter_text' => TRUE,
        'text' => '<span class="flex-caption__target-group__item">[field_target_audience]</span>',
      ),
      'element_label_colon' => FALSE,
      'type' => 'i18n_taxonomy_term_reference_plain',
      'delta_offset' => 0,
    ); /* WAS: '' */
    $data['kada_top_carousel']->display['section']->display_options['fields']['field_theme'] = array(
      'id' => 'field_theme',
      'table' => 'field_data_field_theme',
      'field' => 'field_theme',
      'label' => '',
      'exclude' => TRUE,
      'alter' => array(
        'alter_text' => TRUE,
        'text' => '<span class="flex-caption__target-group__item">[field_theme]</span>',
      ),
      'element_label_colon' => FALSE,
      'type' => 'i18n_taxonomy_term_reference_plain',
      'delta_offset' => 0,
    ); /* WAS: '' */
    $data['kada_top_carousel']->display['slider']->display_options['fields']['body']['hide_empty'] = TRUE; /* WAS: '' */
    $data['kada_top_carousel']->display['slider']->display_options['fields']['field_link_to_content']['alter']['make_link'] = TRUE; /* WAS: '' */
    $data['kada_top_carousel']->display['slider']->display_options['fields']['field_link_to_content']['alter']['path'] = '[field_link_to_content]'; /* WAS: '' */
    $data['kada_top_carousel']->display['slider']->display_options['fields']['field_link_to_content']['alter']['text'] = '<div class="flex-caption__target-group">[field_theme][field_target_audience]</div>
    <div class="flex-caption__body">[body]</div>'; /* WAS: '<h2 class="flex-caption__title">[field_link_to_content]</h2>' */
    $data['kada_top_carousel']->display['slider']->display_options['fields']['field_link_to_content']['empty'] = '<div class="flex-caption__target-group">[field_theme][field_target_audience]</div>
    <div class="flex-caption__body">[body]</div>'; /* WAS: '' */
    $data['kada_top_carousel']->display['slider']->display_options['fields']['field_link_to_content']['hide_alter_empty'] = FALSE; /* WAS: '' */
    $data['kada_top_carousel']->display['slider']->display_options['fields']['field_link_to_content']['type'] = 'link_plain'; /* WAS: '' */
    $data['kada_top_carousel']->display['slider']->display_options['fields']['field_target_audience'] = array(
      'id' => 'field_target_audience',
      'table' => 'field_data_field_target_audience',
      'field' => 'field_target_audience',
      'label' => '',
      'exclude' => TRUE,
      'alter' => array(
        'alter_text' => TRUE,
        'text' => '<span class="flex-caption__target-group__item">[field_target_audience]</span>',
      ),
      'element_label_colon' => FALSE,
      'type' => 'i18n_taxonomy_term_reference_plain',
      'delta_offset' => 0,
    ); /* WAS: '' */
    $data['kada_top_carousel']->display['slider']->display_options['fields']['field_theme'] = array(
      'id' => 'field_theme',
      'table' => 'field_data_field_theme',
      'field' => 'field_theme',
      'label' => '',
      'exclude' => TRUE,
      'alter' => array(
        'alter_text' => TRUE,
        'text' => '<span class="flex-caption__target-group__item">[field_theme]</span>',
      ),
      'element_label_colon' => FALSE,
      'type' => 'i18n_taxonomy_term_reference_plain',
      'delta_offset' => 0,
    ); /* WAS: '' */
    unset($data['kada_top_carousel']->display['block_1']->display_options['fields']['body']['alter']['alter_text']);
    unset($data['kada_top_carousel']->display['block_1']->display_options['fields']['body']['alter']['text']);
    unset($data['kada_top_carousel']->display['block_1']->display_options['fields']['field_link_to_content']['element_default_classes']);
    unset($data['kada_top_carousel']->display['block_1']->display_options['fields']['field_link_to_content']['element_type']);
    unset($data['kada_top_carousel']->display['block_1']->display_options['fields']['field_link_to_content']['element_wrapper_type']);
    unset($data['kada_top_carousel']->display['block_1']->display_options['fields']['field_link_to_content']['hide_empty']);
    unset($data['kada_top_carousel']->display['section']->display_options['fields']['body']['alter']);
    unset($data['kada_top_carousel']->display['section']->display_options['fields']['body']['element_type']);
    unset($data['kada_top_carousel']->display['section']->display_options['fields']['body']['element_wrapper_type']);
    unset($data['kada_top_carousel']->display['section']->display_options['fields']['body']['empty']);
    unset($data['kada_top_carousel']->display['section']->display_options['fields']['field_link_to_content']['element_type']);
    unset($data['kada_top_carousel']->display['section']->display_options['fields']['field_link_to_content']['element_wrapper_type']);
    unset($data['kada_top_carousel']->display['section']->display_options['fields']['field_link_to_content']['hide_empty']);
    unset($data['kada_top_carousel']->display['section']->display_options['fields']['field_secondary_image']);
    unset($data['kada_top_carousel']->display['slider']->display_options['fields']['body']['alter']);
    unset($data['kada_top_carousel']->display['slider']->display_options['fields']['body']['element_type']);
    unset($data['kada_top_carousel']->display['slider']->display_options['fields']['body']['element_wrapper_type']);
    unset($data['kada_top_carousel']->display['slider']->display_options['fields']['body']['empty']);
    unset($data['kada_top_carousel']->display['slider']->display_options['fields']['field_link_to_content_1']);
    unset($data['kada_top_carousel']->display['slider']->display_options['fields']['field_link_to_content']['element_default_classes']);
    unset($data['kada_top_carousel']->display['slider']->display_options['fields']['field_link_to_content']['element_type']);
    unset($data['kada_top_carousel']->display['slider']->display_options['fields']['field_link_to_content']['element_wrapper_type']);
    unset($data['kada_top_carousel']->display['slider']->display_options['fields']['field_link_to_content']['hide_empty']);
  }
}
