<?php
/**
 * @file
 * pori_api_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pori_api_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'attraction_card_feed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Attraction card feed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Attraction card feed';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'nid',
    ),
  );
  $handler->display->display_options['style_options']['root_object'] = 'attractions';
  $handler->display->display_options['style_options']['top_child_object'] = 'attraction';
  $handler->display->display_options['style_options']['plaintext_output'] = 0;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Relationship: Field: Category (field_attraction_category) */
  $handler->display->display_options['relationships']['field_attraction_category_tid']['id'] = 'field_attraction_category_tid';
  $handler->display->display_options['relationships']['field_attraction_category_tid']['table'] = 'field_data_field_attraction_category';
  $handler->display->display_options['relationships']['field_attraction_category_tid']['field'] = 'field_attraction_category_tid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Field: Entity translation: Title: translated */
  $handler->display->display_options['fields']['title_field_et']['id'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_et']['field'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['label'] = 'title_field';
  $handler->display->display_options['fields']['title_field_et']['element_label_colon'] = FALSE;
  /* Field: Entity translation: Description: translated */
  $handler->display->display_options['fields']['field_description_et']['id'] = 'field_description_et';
  $handler->display->display_options['fields']['field_description_et']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description_et']['field'] = 'field_description_et';
  $handler->display->display_options['fields']['field_description_et']['label'] = 'description';
  $handler->display->display_options['fields']['field_description_et']['element_label_colon'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = 'description';
  /* Field: Content: Lead paragraph */
  $handler->display->display_options['fields']['field_lead_paragraph_et']['id'] = 'field_lead_paragraph_et';
  $handler->display->display_options['fields']['field_lead_paragraph_et']['table'] = 'field_data_field_lead_paragraph_et';
  $handler->display->display_options['fields']['field_lead_paragraph_et']['field'] = 'field_lead_paragraph_et';
  $handler->display->display_options['fields']['field_lead_paragraph_et']['label'] = 'lead_paragraph';
  /* Field: Entity translation: Lead paragraph: translated */
  $handler->display->display_options['fields']['field_lead_paragraph_et_et']['id'] = 'field_lead_paragraph_et_et';
  $handler->display->display_options['fields']['field_lead_paragraph_et_et']['table'] = 'field_data_field_lead_paragraph_et';
  $handler->display->display_options['fields']['field_lead_paragraph_et_et']['field'] = 'field_lead_paragraph_et_et';
  $handler->display->display_options['fields']['field_lead_paragraph_et_et']['label'] = 'lead_paragraph';
  /* Field: Entity translation: Keywords: translated */
  $handler->display->display_options['fields']['field_keywords_et_et']['id'] = 'field_keywords_et_et';
  $handler->display->display_options['fields']['field_keywords_et_et']['table'] = 'field_data_field_keywords_et';
  $handler->display->display_options['fields']['field_keywords_et_et']['field'] = 'field_keywords_et_et';
  $handler->display->display_options['fields']['field_keywords_et_et']['label'] = 'keywords';
  $handler->display->display_options['fields']['field_keywords_et_et']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_keywords_et_et']['delta_offset'] = '0';
  /* Field: Field: Target audience */
  $handler->display->display_options['fields']['field_target_audience']['id'] = 'field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['field'] = 'field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['label'] = 'target_audience';
  $handler->display->display_options['fields']['field_target_audience']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_target_audience']['delta_offset'] = '0';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_attraction_category_tid';
  $handler->display->display_options['fields']['tid']['label'] = 'categories';
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Content: Websites */
  $handler->display->display_options['fields']['field_websites']['id'] = 'field_websites';
  $handler->display->display_options['fields']['field_websites']['table'] = 'field_data_field_websites';
  $handler->display->display_options['fields']['field_websites']['field'] = 'field_websites';
  $handler->display->display_options['fields']['field_websites']['label'] = 'website';
  $handler->display->display_options['fields']['field_websites']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_websites']['delta_offset'] = '0';
  /* Field: Content: Online shop */
  $handler->display->display_options['fields']['field_online_shop']['id'] = 'field_online_shop';
  $handler->display->display_options['fields']['field_online_shop']['table'] = 'field_data_field_online_shop';
  $handler->display->display_options['fields']['field_online_shop']['field'] = 'field_online_shop';
  $handler->display->display_options['fields']['field_online_shop']['label'] = 'online_shop';
  $handler->display->display_options['fields']['field_online_shop']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_online_shop']['type'] = 'link_absolute';
  /* Field: Field: Images */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['label'] = 'images';
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'sid';
  $handler->display->display_options['fields']['field_images']['type'] = 'file_representation';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
  /* Field: Content: Location name */
  $handler->display->display_options['fields']['field_location_name']['id'] = 'field_location_name';
  $handler->display->display_options['fields']['field_location_name']['table'] = 'field_data_field_location_name';
  $handler->display->display_options['fields']['field_location_name']['field'] = 'field_location_name';
  $handler->display->display_options['fields']['field_location_name']['label'] = 'location_name';
  /* Field: Entity translation: Visiting address: translated */
  $handler->display->display_options['fields']['field_address_visiting_et']['id'] = 'field_address_visiting_et';
  $handler->display->display_options['fields']['field_address_visiting_et']['table'] = 'field_data_field_address_visiting';
  $handler->display->display_options['fields']['field_address_visiting_et']['field'] = 'field_address_visiting_et';
  $handler->display->display_options['fields']['field_address_visiting_et']['label'] = 'address_street_1';
  $handler->display->display_options['fields']['field_address_visiting_et']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_visiting_et']['alter']['text'] = '[field_address_visiting_et-thoroughfare]';
  $handler->display->display_options['fields']['field_address_visiting_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_visiting_et']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address_visiting_et']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Entity translation: Visiting address: translated */
  $handler->display->display_options['fields']['field_address_visiting_et_1']['id'] = 'field_address_visiting_et_1';
  $handler->display->display_options['fields']['field_address_visiting_et_1']['table'] = 'field_data_field_address_visiting';
  $handler->display->display_options['fields']['field_address_visiting_et_1']['field'] = 'field_address_visiting_et';
  $handler->display->display_options['fields']['field_address_visiting_et_1']['label'] = 'address_street_2';
  $handler->display->display_options['fields']['field_address_visiting_et_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_visiting_et_1']['alter']['text'] = '[field_address_visiting_et_1-premise]';
  $handler->display->display_options['fields']['field_address_visiting_et_1']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address_visiting_et_1']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Entity translation: Visiting address: translated */
  $handler->display->display_options['fields']['field_address_visiting_et_2']['id'] = 'field_address_visiting_et_2';
  $handler->display->display_options['fields']['field_address_visiting_et_2']['table'] = 'field_data_field_address_visiting';
  $handler->display->display_options['fields']['field_address_visiting_et_2']['field'] = 'field_address_visiting_et';
  $handler->display->display_options['fields']['field_address_visiting_et_2']['label'] = 'address_postcode';
  $handler->display->display_options['fields']['field_address_visiting_et_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_visiting_et_2']['alter']['text'] = '[field_address_visiting_et_2-postal_code]';
  $handler->display->display_options['fields']['field_address_visiting_et_2']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address_visiting_et_2']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Entity translation: Visiting address: translated */
  $handler->display->display_options['fields']['field_address_visiting_et_3']['id'] = 'field_address_visiting_et_3';
  $handler->display->display_options['fields']['field_address_visiting_et_3']['table'] = 'field_data_field_address_visiting';
  $handler->display->display_options['fields']['field_address_visiting_et_3']['field'] = 'field_address_visiting_et';
  $handler->display->display_options['fields']['field_address_visiting_et_3']['label'] = 'address_locality';
  $handler->display->display_options['fields']['field_address_visiting_et_3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_visiting_et_3']['alter']['text'] = '[field_address_visiting_et_3-locality]';
  $handler->display->display_options['fields']['field_address_visiting_et_3']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address_visiting_et_3']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Visiting address - Country */
  $handler->display->display_options['fields']['field_address_visiting_country']['id'] = 'field_address_visiting_country';
  $handler->display->display_options['fields']['field_address_visiting_country']['table'] = 'field_data_field_address_visiting';
  $handler->display->display_options['fields']['field_address_visiting_country']['field'] = 'field_address_visiting_country';
  $handler->display->display_options['fields']['field_address_visiting_country']['label'] = 'address_country';
  $handler->display->display_options['fields']['field_address_visiting_country']['display_name'] = 1;
  /* Field: Content: Video URL - Video URL */
  $handler->display->display_options['fields']['field_video_url_video_url']['id'] = 'field_video_url_video_url';
  $handler->display->display_options['fields']['field_video_url_video_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['fields']['field_video_url_video_url']['field'] = 'field_video_url_video_url';
  $handler->display->display_options['fields']['field_video_url_video_url']['label'] = 'video_url';
  /* Field: Content: Related content */
  $handler->display->display_options['fields']['field_attraction_related_content']['id'] = 'field_attraction_related_content';
  $handler->display->display_options['fields']['field_attraction_related_content']['table'] = 'field_data_field_attraction_related_content';
  $handler->display->display_options['fields']['field_attraction_related_content']['field'] = 'field_attraction_related_content';
  $handler->display->display_options['fields']['field_attraction_related_content']['label'] = 'related_content';
  $handler->display->display_options['fields']['field_attraction_related_content']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_attraction_related_content']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_attraction_related_content']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_attraction_related_content']['multi_type'] = 'ul';
  /* Field: Field: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = 'location';
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: Accessibility */
  $handler->display->display_options['fields']['field_accessibility_ref']['id'] = 'field_accessibility_ref';
  $handler->display->display_options['fields']['field_accessibility_ref']['table'] = 'field_data_field_accessibility_ref';
  $handler->display->display_options['fields']['field_accessibility_ref']['field'] = 'field_accessibility_ref';
  $handler->display->display_options['fields']['field_accessibility_ref']['label'] = 'accessibility';
  $handler->display->display_options['fields']['field_accessibility_ref']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_accessibility_ref']['delta_offset'] = '0';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = 'email';
  $handler->display->display_options['fields']['field_email']['type'] = 'email_plain';
  $handler->display->display_options['fields']['field_email']['delta_offset'] = '0';
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = 'phone';
  $handler->display->display_options['fields']['field_phone']['type'] = 'text_plain';
  /* Field: Content: Public transportation */
  $handler->display->display_options['fields']['field_public_transportation']['id'] = 'field_public_transportation';
  $handler->display->display_options['fields']['field_public_transportation']['table'] = 'field_data_field_public_transportation';
  $handler->display->display_options['fields']['field_public_transportation']['field'] = 'field_public_transportation';
  $handler->display->display_options['fields']['field_public_transportation']['label'] = 'public_transport';
  $handler->display->display_options['fields']['field_public_transportation']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_public_transportation']['delta_offset'] = '0';
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
    'attraction_card' => 'attraction_card',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'attraction_cards.json';
  $translatables['attraction_card_feed'] = array(
    t('Master'),
    t('Attraction card feed'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term from field_attraction_category'),
    t('nid'),
    t('title_field'),
    t('description'),
    t('lead_paragraph'),
    t('keywords'),
    t('target_audience'),
    t('categories'),
    t('.'),
    t('website'),
    t('online_shop'),
    t('images'),
    t('location_name'),
    t('address_street_1'),
    t('[field_address_visiting_et-thoroughfare]'),
    t('address_street_2'),
    t('[field_address_visiting_et_1-premise]'),
    t('address_postcode'),
    t('[field_address_visiting_et_2-postal_code]'),
    t('address_locality'),
    t('[field_address_visiting_et_3-locality]'),
    t('address_country'),
    t('video_url'),
    t('related_content'),
    t('location'),
    t('accessibility'),
    t('email'),
    t('phone'),
    t('public_transport'),
    t('Page'),
  );
  $export['attraction_card_feed'] = $view;

  $view = new view();
  $view->name = 'attraction_categories_feed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Attraction categories feed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Attraction categories feed';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'tid',
    ),
  );
  $handler->display->display_options['style_options']['root_object'] = 'categories';
  $handler->display->display_options['style_options']['top_child_object'] = 'category';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'attraction_category' => 'attraction_category',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'attraction_categories.json';
  $translatables['attraction_categories_feed'] = array(
    t('Master'),
    t('Attraction categories feed'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Term ID'),
    t('.'),
    t('Page'),
  );
  $export['attraction_categories_feed'] = $view;

  return $export;
}
