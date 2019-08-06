<?php

/**
 * @file
 * kada_configuration_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function kada_configuration_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'kada_accessibilities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'KADA Accessibilities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Käytä';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Palauta oletusarvoihin';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« ensimmäinen';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ edellinen';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seuraava ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'viimeinen »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'accessibility-type';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Luokittelutermi: Name */
  $handler->display->display_options['fields']['name_field_1']['id'] = 'name_field_1';
  $handler->display->display_options['fields']['name_field_1']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field_1']['field'] = 'name_field';
  $handler->display->display_options['fields']['name_field_1']['label'] = '';
  $handler->display->display_options['fields']['name_field_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_field_1']['link_to_entity'] = 0;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'accessibility' => 'accessibility',
  );
  /* Filter criterion: Luokittelutermi: Name (name_field:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_name_field';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name_field_1' => 'name_field_1',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: DS Label + icon */
  $handler = $view->new_display('block', 'DS Label + icon', 'ds_block');
  $handler->display->display_options['display_description'] = 'View block for Display Suite';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_accessibility_type_er_field_collection_item']['id'] = 'reverse_field_accessibility_type_er_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_accessibility_type_er_field_collection_item']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_accessibility_type_er_field_collection_item']['field'] = 'reverse_field_accessibility_type_er_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_accessibility_type_er_field_collection_item']['label'] = 'field collection';
  $handler->display->display_options['relationships']['reverse_field_accessibility_type_er_field_collection_item']['required'] = TRUE;
  /* Relationship: Field collection item: Entity with the Accessibility (field_accessibility) */
  $handler->display->display_options['relationships']['field_accessibility_node']['id'] = 'field_accessibility_node';
  $handler->display->display_options['relationships']['field_accessibility_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_accessibility_node']['field'] = 'field_accessibility_node';
  $handler->display->display_options['relationships']['field_accessibility_node']['relationship'] = 'reverse_field_accessibility_type_er_field_collection_item';
  $handler->display->display_options['relationships']['field_accessibility_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Luokittelutermi: Icon */
  $handler->display->display_options['fields']['field_icon']['id'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['table'] = 'field_data_field_icon';
  $handler->display->display_options['fields']['field_icon']['field'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['label'] = '';
  $handler->display->display_options['fields']['field_icon']['element_type'] = '0';
  $handler->display->display_options['fields']['field_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_icon']['element_wrapper_class'] = 'accessibility-type--icon';
  $handler->display->display_options['fields']['field_icon']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_icon']['settings'] = array(
    'image_style' => 'accessibility_icon',
    'image_link' => '',
  );
  /* Field: Luokittelutermi: Name */
  $handler->display->display_options['fields']['name_field']['id'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field']['field'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['label'] = '';
  $handler->display->display_options['fields']['name_field']['element_type'] = '0';
  $handler->display->display_options['fields']['name_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_field']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['name_field']['element_wrapper_class'] = 'accessibility-type--name';
  $handler->display->display_options['fields']['name_field']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name_field']['link_to_entity'] = 0;
  /* Field: Field collection item: Description EN */
  $handler->display->display_options['fields']['field_description_en']['id'] = 'field_description_en';
  $handler->display->display_options['fields']['field_description_en']['table'] = 'field_data_field_description_en';
  $handler->display->display_options['fields']['field_description_en']['field'] = 'field_description_en';
  $handler->display->display_options['fields']['field_description_en']['relationship'] = 'reverse_field_accessibility_type_er_field_collection_item';
  $handler->display->display_options['fields']['field_description_en']['label'] = '';
  $handler->display->display_options['fields']['field_description_en']['element_type'] = '0';
  $handler->display->display_options['fields']['field_description_en']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description_en']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_description_en']['element_wrapper_class'] = 'accessibility-type--description';
  $handler->display->display_options['fields']['field_description_en']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_description_en']['hide_empty'] = TRUE;
  /* Field: Field collection item: Description FI */
  $handler->display->display_options['fields']['field_description_fi']['id'] = 'field_description_fi';
  $handler->display->display_options['fields']['field_description_fi']['table'] = 'field_data_field_description_fi';
  $handler->display->display_options['fields']['field_description_fi']['field'] = 'field_description_fi';
  $handler->display->display_options['fields']['field_description_fi']['relationship'] = 'reverse_field_accessibility_type_er_field_collection_item';
  $handler->display->display_options['fields']['field_description_fi']['label'] = '';
  $handler->display->display_options['fields']['field_description_fi']['element_type'] = '0';
  $handler->display->display_options['fields']['field_description_fi']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description_fi']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_description_fi']['element_wrapper_class'] = 'accessibility-type--description';
  $handler->display->display_options['fields']['field_description_fi']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_description_fi']['hide_empty'] = TRUE;
  /* Field: Field collection item: Description SV */
  $handler->display->display_options['fields']['field_description_sv']['id'] = 'field_description_sv';
  $handler->display->display_options['fields']['field_description_sv']['table'] = 'field_data_field_description_sv';
  $handler->display->display_options['fields']['field_description_sv']['field'] = 'field_description_sv';
  $handler->display->display_options['fields']['field_description_sv']['relationship'] = 'reverse_field_accessibility_type_er_field_collection_item';
  $handler->display->display_options['fields']['field_description_sv']['label'] = '';
  $handler->display->display_options['fields']['field_description_sv']['element_type'] = '0';
  $handler->display->display_options['fields']['field_description_sv']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description_sv']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_description_sv']['element_wrapper_class'] = 'accessibility-type--description';
  $handler->display->display_options['fields']['field_description_sv']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_description_sv']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_accessibility_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Kaikki';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $translatables['kada_accessibilities'] = array(
    t('Master'),
    t('more'),
    t('Käytä'),
    t('Palauta oletusarvoihin'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« ensimmäinen'),
    t('‹ edellinen'),
    t('seuraava ›'),
    t('viimeinen »'),
    t('Entity Reference'),
    t('DS Label + icon'),
    t('View block for Display Suite'),
    t('field collection'),
    t('field_accessibility'),
    t('Kaikki'),
  );
  $export['kada_accessibilities'] = $view;

  $view = new view();
  $view->name = 'kada_contact_information';
  $view->description = 'Display contant information from referenced Place';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KADA Contact information';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Yhteystiedot';
  $handler->display->display_options['css_class'] = 'contact-information';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'views_content_cache';
  $handler->display->display_options['cache']['results_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_max_lifespan'] = '300';
  $handler->display->display_options['cache']['output_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_max_lifespan'] = '300';
  $handler->display->display_options['cache']['keys'] = array(
    'comment' => array(
      'changed' => 0,
    ),
    'node' => array(
      'place' => 'place',
      'blog' => 0,
      'blog_post' => 0,
      'feed_import_facebook' => 0,
      'feed_import_instagram' => 0,
      'feed_import_twitter' => 0,
      'feed_import_youtube_channel' => 0,
      'person' => 0,
      'landing_page' => 0,
      'position_of_trust' => 0,
      'liftup' => 0,
      'service' => 0,
      'service_offer' => 0,
      'page' => 0,
      'section' => 0,
      'social_media_update' => 0,
      'event' => 0,
      'news_item' => 0,
      'webform' => 0,
    ),
    'node_only' => array(
      'node_changed' => 'node_changed',
    ),
    'og' => array(
      'current' => 0,
      'user' => 0,
    ),
  );
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Käytä';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Palauta oletusarvoihin';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['relationship'] = 'field_contact_information_target_id';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Relationship: Place */
  $handler->display->display_options['relationships']['field_contact_information_target_id']['id'] = 'field_contact_information_target_id';
  $handler->display->display_options['relationships']['field_contact_information_target_id']['table'] = 'field_data_field_contact_information';
  $handler->display->display_options['relationships']['field_contact_information_target_id']['field'] = 'field_contact_information_target_id';
  $handler->display->display_options['relationships']['field_contact_information_target_id']['ui_name'] = 'Place';
  $handler->display->display_options['relationships']['field_contact_information_target_id']['label'] = 'Toimipiste';
  $handler->display->display_options['relationships']['field_contact_information_target_id']['required'] = TRUE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Kaikki';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_contact_information_target_id';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_contact_information_target_id';
  $handler->display->display_options['filters']['type']['value'] = array(
    'place' => 'place',
  );

  /* Display: Places */
  $handler = $view->new_display('block', 'Places', 'contact_info');
  $handler->display->display_options['display_description'] = 'Places referenced via contact information field';
  $translatables['kada_contact_information'] = array(
    t('Master'),
    t('Yhteystiedot'),
    t('more'),
    t('Käytä'),
    t('Palauta oletusarvoihin'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Toimipiste'),
    t('Kaikki'),
    t('Places'),
    t('Places referenced via contact information field'),
  );
  $export['kada_contact_information'] = $view;

  $view = new view();
  $view->name = 'kada_recommended';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'KADA Recommended';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Käytä';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Palauta oletusarvoihin';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Link to content multiple */
  $handler->display->display_options['fields']['field_link_to_content_multiple']['id'] = 'field_link_to_content_multiple';
  $handler->display->display_options['fields']['field_link_to_content_multiple']['table'] = 'field_data_field_link_to_content_multiple';
  $handler->display->display_options['fields']['field_link_to_content_multiple']['field'] = 'field_link_to_content_multiple';
  $handler->display->display_options['fields']['field_link_to_content_multiple']['label'] = '';
  $handler->display->display_options['fields']['field_link_to_content_multiple']['element_type'] = '0';
  $handler->display->display_options['fields']['field_link_to_content_multiple']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_to_content_multiple']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_link_to_content_multiple']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link_to_content_multiple']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_to_content_multiple']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_link_to_content_multiple']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Kaikki';
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
  /* Filter criterion: Content: Link to content multiple (field_link_to_content_multiple:url) */
  $handler->display->display_options['filters']['field_link_to_content_multiple_url']['id'] = 'field_link_to_content_multiple_url';
  $handler->display->display_options['filters']['field_link_to_content_multiple_url']['table'] = 'field_data_field_link_to_content_multiple';
  $handler->display->display_options['filters']['field_link_to_content_multiple_url']['field'] = 'field_link_to_content_multiple_url';
  $handler->display->display_options['filters']['field_link_to_content_multiple_url']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['kada_recommended'] = array(
    t('Master'),
    t('more'),
    t('Käytä'),
    t('Palauta oletusarvoihin'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Kaikki'),
    t('Block'),
  );
  $export['kada_recommended'] = $view;

  return $export;
}
