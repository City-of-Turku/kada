<?php
/**
 * @file
 * pori_liftups.features.inc
 */

/**
 * Implements hook_ds_field_settings_info_alter().
 */
function pori_liftups_ds_field_settings_info_alter(&$data) {
  if (isset($data['node|liftup|current'])) {
    $data['node|liftup|current']->settings['links']['weight'] = 4; /* WAS: 5 */
    $data['node|liftup|current']->settings['post_date']['weight'] = 1; /* WAS: 2 */
    unset($data['node|liftup|current']->settings['body']);
    unset($data['node|liftup|current']->settings['field_link_to_content']);
    unset($data['node|liftup|current']->settings['field_main_image']);
    unset($data['node|liftup|current']->settings['field_vignette']);
  }
}

/**
 * Implements hook_ds_layout_settings_info_alter().
 */
function pori_liftups_ds_layout_settings_info_alter(&$data) {
  if (isset($data['node|liftup|current'])) {
    $data['node|liftup|current']->settings['layout_disable_css'] = FALSE; /* WAS: '' */
    $data['node|liftup|current']->settings['regions']['main'][1] = 'post_date'; /* WAS: '' */
    $data['node|liftup|current']->settings['regions']['main'][2] = 'field_link_to_content'; /* WAS: 'post_date' */
    $data['node|liftup|current']->settings['regions']['main'][3] = 'body'; /* WAS: 'field_link_to_content' */
    $data['node|liftup|current']->settings['regions']['main'][4] = 'links'; /* WAS: 'body' */
    unset($data['node|liftup|current']->settings['fields']['field_vignette']);
    unset($data['node|liftup|current']->settings['regions']['header'][1]);
    unset($data['node|liftup|current']->settings['regions']['main'][5]);
  }
}

/**
 * Implements hook_field_group_info_alter().
 */
function pori_liftups_field_group_info_alter(&$data) {
  if (isset($data['group_liftup_header|node|news_item|current'])) {
    unset($data['group_liftup_header|node|news_item|current']);
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function pori_liftups_views_default_views_alter(&$data) {
  if (isset($data['kada_current'])) {
    $data['kada_current']->display['default']->display_options['css_class'] = 'liftup-box-list liftup-box-list--current'; /* WAS: 'liftup-box-list' */
  }
  if (isset($data['kada_current_promoted_'])) {
    $data['kada_current_promoted_']->display['default']->display_options['css_class'] = 'liftup-box-list liftup-box-list--current'; /* WAS: 'liftup-box-list' */
  }
  if (isset($data['kada_top_carousel'])) {
    $data['kada_top_carousel']->display['block_1']->display_options['fields']['field_link_to_content']['alter']['text'] = '<div class="flex-caption__target-group">[field_theme]</div>
                <div class="flex-caption__body">[body]</div>'; /* WAS: '<div class="flex-caption__target-group">[field_theme][field_target_audience]</div>
            <div class="flex-caption__body">[body]</div>' */
    $data['kada_top_carousel']->display['block_1']->display_options['fields']['field_link_to_content']['empty'] = '<div class="flex-caption__target-group">[field_theme]</div>
                <div class="flex-caption__body">[body]</div>'; /* WAS: '<div class="flex-caption__target-group">[field_theme][field_target_audience]</div>
            <div class="flex-caption__body">[body]</div>' */
    $data['kada_top_carousel']->display['block_2']->display_options['fields']['field_link_to_content']['alter']['text'] = '<div class="flex-caption__target-group">[field_theme]</div>
            <div class="flex-caption__body">[body]</div>'; /* WAS: '<div class="flex-caption__target-group">[field_theme][field_target_audience]</div>
            <div class="flex-caption__body">[body]</div>' */
    $data['kada_top_carousel']->display['block_2']->display_options['fields']['field_link_to_content']['empty'] = '<div class="flex-caption__target-group">[field_theme]</div>
            <div class="flex-caption__body">[body]</div>'; /* WAS: '<div class="flex-caption__target-group">[field_theme][field_target_audience]</div>
            <div class="flex-caption__body">[body]</div>' */
    $data['kada_top_carousel']->display['section']->display_options['fields']['field_link_to_content']['alter']['text'] = '<div class="flex-caption__target-group">[field_theme]</div>
                <div class="flex-caption__body">[body]</div>'; /* WAS: '<div class="flex-caption__target-group">[field_theme][field_target_audience]</div>
            <div class="flex-caption__body">[body]</div>' */
    $data['kada_top_carousel']->display['section']->display_options['fields']['field_link_to_content']['empty'] = '<div class="flex-caption__target-group">[field_theme]</div>
                <div class="flex-caption__body">[body]</div>'; /* WAS: '<div class="flex-caption__target-group">[field_theme][field_target_audience]</div>
            <div class="flex-caption__body">[body]</div>' */
    $data['kada_top_carousel']->display['slider']->display_options['fields']['field_link_to_content']['alter']['text'] = '<div class="flex-caption__target-group">[field_theme]</div>
                <div class="flex-caption__body">[body]</div>'; /* WAS: '<div class="flex-caption__target-group">[field_theme][field_target_audience]</div>
            <div class="flex-caption__body">[body]</div>' */
    $data['kada_top_carousel']->display['slider']->display_options['fields']['field_link_to_content']['empty'] = '<div class="flex-caption__target-group">[field_theme]</div>
                <div class="flex-caption__body">[body]</div>'; /* WAS: '<div class="flex-caption__target-group">[field_theme][field_target_audience]</div>
            <div class="flex-caption__body">[body]</div>' */
    unset($data['kada_top_carousel']->display['block_1']->display_options['fields']['field_target_audience']);
    unset($data['kada_top_carousel']->display['block_2']->display_options['fields']['field_target_audience']);
    unset($data['kada_top_carousel']->display['section']->display_options['fields']['field_target_audience']);
    unset($data['kada_top_carousel']->display['slider']->display_options['fields']['field_target_audience']);
  }
}
