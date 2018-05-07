<?php
/**
 * @file
 * pori_configuration.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pori_configuration_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pori_main_image_for_page';
  $view->description = 'Provides main image for page content type if "Show main image" option is selected';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Pori - Main image for page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Main image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_main_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_main_image']['type'] = 'main_liftup_wide';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'link' => '0',
  );
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );
  /* Filter criterion: Content: Show main image on the page (field_show_main_image) */
  $handler->display->display_options['filters']['field_show_main_image_value']['id'] = 'field_show_main_image_value';
  $handler->display->display_options['filters']['field_show_main_image_value']['table'] = 'field_data_field_show_main_image';
  $handler->display->display_options['filters']['field_show_main_image_value']['field'] = 'field_show_main_image_value';
  $handler->display->display_options['filters']['field_show_main_image_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['pori_main_image_for_page'] = array(
    t('Master'),
    t('<none>'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Block'),
  );
  $export['pori_main_image_for_page'] = $view;

  return $export;
}
