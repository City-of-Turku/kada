<?php
/**
 * @file
 * pori_configuration_overrides_feature.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function pori_configuration_overrides_feature_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: context
  $overrides["context.footer_menu.conditions|context|values|news_list"] = 'news_list';
  $overrides["context.footer_menu.conditions|context|values|person_list"] = 'person_list';
  $overrides["context.footer_menu.conditions|context|values|search_page"] = 'search_page';
  $overrides["context.footer_menu.reactions|block|blocks|menu_block-29"] = array(
    'module' => 'menu_block',
    'delta' => 29,
    'region' => 'footer',
    'weight' => -7,
  );
  $overrides["context.footer_navigation.reactions|block"]["DELETED"] = TRUE;
  $overrides["context.language_switcher.conditions|context|values|news_list"] = 'news_list';
  $overrides["context.language_switcher.conditions|context|values|person_list"] = 'person_list';
  $overrides["context.language_switcher.conditions|context|values|search_page"] = 'search_page';
  $overrides["context.language_switcher.conditions|context|values|section_menus"]["DELETED"] = TRUE;
  $overrides["context.language_switcher.conditions|context|values|visitpori_domain"] = 'visitpori_domain';
  $overrides["context.language_switcher.reactions|block|blocks|locale-language|region"] = 'branding';
  $overrides["context.language_switcher.reactions|block|blocks|locale-language|weight"] = -9;
  $overrides["context.language_switcher.reactions|block|blocks|views--exp-main_search-page"] = array(
    'module' => 'views',
    'delta' => '-exp-main_search-page',
    'region' => 'branding',
    'weight' => -10,
  );
  $overrides["context.main_menu.conditions|context|values|news_list"] = 'news_list';
  $overrides["context.main_menu.conditions|context|values|person_list"] = 'person_list';
  $overrides["context.main_menu.conditions|context|values|search_page"] = 'search_page';
  $overrides["context.main_menu.reactions|block|blocks|menu_block-30"] = array(
    'module' => 'menu_block',
    'delta' => 30,
    'region' => 'navigation',
    'weight' => -7,
  );
  $overrides["context.page.conditions|entity_field|values|view_mode"] = 'a:46:{s:4:"full";s:4:"full";s:6:"teaser";i:0;s:3:"rss";i:0;s:13:"diff_standard";i:0;s:19:"live_results_search";i:0;s:5:"token";i:0;s:9:"accordion";i:0;s:8:"carousel";i:0;s:7:"current";i:0;s:7:"project";i:0;s:15:"event_grid_item";i:0;s:15:"event_list_item";i:0;s:14:"event_map_item";i:0;s:17:"event_mosaic_item";i:0;s:19:"event_search_result";i:0;s:19:"event_tab_list_item";i:0;s:18:"event_top_carousel";i:0;s:9:"main_news";i:0;s:14:"main_news_wide";i:0;s:10:"only_title";i:0;s:3:"map";i:0;s:27:"attraction_card_mosaic_item";i:0;s:7:"product";i:0;s:11:"person_card";i:0;s:19:"small_liftup_banner";i:0;s:8:"revision";i:0;s:10:"label_icon";i:0;s:9:"term_name";i:0;s:5:"title";i:0;s:12:"content_full";i:0;s:12:"content_half";i:0;s:6:"topics";i:0;s:16:"main_liftup_wide";i:0;s:11:"main_liftup";i:0;s:12:"main_content";i:0;s:10:"full_modal";i:0;s:10:"event_list";i:0;s:9:"grid_item";i:0;s:10:"event_node";i:0;s:14:"event_tab_item";i:0;s:6:"person";i:0;s:17:"file_linked_title";i:0;s:13:"search_result";i:0;s:9:"opengraph";i:0;s:16:"content_250_wide";i:0;s:13:"page_carousel";i:0;}';
  $overrides["context.page.reactions|block|blocks|views-pori_main_image_for_page-block"] = array(
    'module' => 'views',
    'delta' => 'pori_main_image_for_page-block',
    'region' => 'highlighted',
    'weight' => -10,
  );
  $overrides["context.sitewide_en.conditions|context"]["DELETED"] = TRUE;
  $overrides["context.sitewide_en.reactions|block|blocks|block-1|weight"] = -40;
  $overrides["context.sitewide_fi.conditions|context"]["DELETED"] = TRUE;
  $overrides["context.sitewide_fi.reactions|block|blocks|block-2|weight"] = -40;
  $overrides["context.sitewide_sv.conditions|context"]["DELETED"] = TRUE;
  $overrides["context.top_menu.conditions|context|values|news_list"] = 'news_list';
  $overrides["context.top_menu.conditions|context|values|person_list"] = 'person_list';
  $overrides["context.top_menu.conditions|context|values|search_page"] = 'search_page';
  $overrides["context.top_menu.conditions|domain"] = array(
    'values' => array(
      'pori_fi' => 'pori_fi',
    ),
  );
  $overrides["context.top_menu.reactions|block|blocks|menu_block-31"] = array(
    'module' => 'menu_block',
    'delta' => 31,
    'region' => 'navigation_top',
    'weight' => -7,
  );

  // Exported overrides for: ds_field_settings
  $overrides["ds_field_settings.node|page|default.settings|places_for_services|weight"] = 5;
  $overrides["ds_field_settings.node|place|teaser.settings|node_link"]["DELETED"] = TRUE;

  // Exported overrides for: ds_layout_settings
  $overrides["ds_layout_settings.node|page|default.settings|fields|field_contact_person"] = 'contact_information';
  $overrides["ds_layout_settings.node|page|default.settings|regions|after_content|10"] = 'field_subpage';
  $overrides["ds_layout_settings.node|page|default.settings|regions|after_content|8"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.node|page|default.settings|regions|after_content|9"] = 'field_topic';
  $overrides["ds_layout_settings.node|page|default.settings|regions|contact_information"] = array(
    8 => 'field_contact_person',
  );
  $overrides["ds_layout_settings.node|page|default.settings|wrappers|contact_information"] = 'div';
  $overrides["ds_layout_settings.node|place|teaser.settings|fields|field_read_more"] = 'main_content';
  $overrides["ds_layout_settings.node|place|teaser.settings|fields|node_link"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.node|place|teaser.settings|regions|main_content|6"] = 'field_read_more';
  $overrides["ds_layout_settings.scald_atom|image|content_full.settings|fields|atom"] = 'main';
  $overrides["ds_layout_settings.scald_atom|image|content_full.settings|fields|scald_thumbnail"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.scald_atom|image|content_full.settings|layout_disable_css"] = FALSE;
  $overrides["ds_layout_settings.scald_atom|image|content_full.settings|regions|main|0"] = 'atom';
  $overrides["ds_layout_settings.scald_atom|image|content_half.settings|fields|atom"] = 'main';
  $overrides["ds_layout_settings.scald_atom|image|content_half.settings|fields|scald_thumbnail"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.scald_atom|image|content_half.settings|layout_disable_css"] = FALSE;
  $overrides["ds_layout_settings.scald_atom|image|content_half.settings|regions|main|0"] = 'atom';
  $overrides["ds_layout_settings.taxonomy_term|accessibility|default.layout"] = 'accessibility_layout';
  $overrides["ds_layout_settings.taxonomy_term|accessibility|default.settings|fields|description_field"] = 'main_content';
  $overrides["ds_layout_settings.taxonomy_term|accessibility|default.settings|fields|field_icon"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.taxonomy_term|accessibility|default.settings|layout_disable_css"] = FALSE;
  $overrides["ds_layout_settings.taxonomy_term|accessibility|default.settings|regions|main_content|1"] = 'description_field';
  $overrides["ds_layout_settings.taxonomy_term|accessibility|default.settings|wrappers|ds_content"]["DELETED"] = TRUE;
  $overrides["ds_layout_settings.taxonomy_term|accessibility|default.settings|wrappers|main_content"] = 'div';

  // Exported overrides for: field_base
  $overrides["field_base.field_accessibility.settings|hide_initial_item"] = FALSE;

  // Exported overrides for: field_group
  $overrides["field_group.group_additional_information|node|page|form.data|children|2"] = 'field_contact_person';
  $overrides["field_group.group_content|node|page|form.data|children|10"] = 'field_responsibility';
  $overrides["field_group.group_content|node|page|form.data|children|11"] = 'field_show_main_image';
  $overrides["field_group.group_content|node|page|form.data|children|12"] = 'language';
  $overrides["field_group.group_content|node|page|form.data|children|13"] = 'title';
  $overrides["field_group.group_content|node|page|form.data|children|9"] = 'field_widgets_after_content';
  $overrides["field_group.group_content|node|place|form.data|children|11"] = 'field_read_more';
  $overrides["field_group.group_content|node|place|form.data|children|17"] = 'field_sorting_point';
  $overrides["field_group.group_content|node|place|form.data|children|18"] = 'field_responsibility';

  // Exported overrides for: field_instance
  $overrides["field_instance.node-event-field_keywords_et.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-event-field_keywords_et.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'allow';
  $overrides["field_instance.node-event-field_related_content_et.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-event-field_related_content_et.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'deny';
  $overrides["field_instance.node-feed_import_facebook-field_keywords.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-feed_import_facebook-field_keywords.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'deny';
  $overrides["field_instance.node-feed_import_instagram-field_keywords.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-feed_import_instagram-field_keywords.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'deny';
  $overrides["field_instance.node-feed_import_twitter-field_keywords.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-feed_import_twitter-field_keywords.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'deny';
  $overrides["field_instance.node-feed_import_youtube_channel-field_keywords.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-feed_import_youtube_channel-field_keywords.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'deny';
  $overrides["field_instance.node-landing_page-field_keywords.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-landing_page-field_keywords.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'deny';
  $overrides["field_instance.node-landing_page-field_related_content.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-landing_page-field_related_content.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'deny';
  $overrides["field_instance.node-landing_page-field_topic.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-landing_page-field_topic.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'deny';
  $overrides["field_instance.node-landing_page-field_widget_before_content.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-landing_page-field_widget_before_content.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'deny';
  $overrides["field_instance.node-liftup-body.display|small_liftup_banner"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 2,
  );
  $overrides["field_instance.node-liftup-field_address.display|small_liftup_banner"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 18,
  );
  $overrides["field_instance.node-liftup-field_district.display|small_liftup_banner"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 27,
  );
  $overrides["field_instance.node-liftup-field_keywords.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-liftup-field_keywords.display|small_liftup_banner"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 31,
  );
  $overrides["field_instance.node-liftup-field_keywords.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'deny';
  $overrides["field_instance.node-liftup-field_link_to_content.display|small_liftup_banner"] = array(
    'label' => 'hidden',
    'module' => 'link',
    'settings' => array(),
    'type' => 'link_title_plain',
    'weight' => 1,
  );
  $overrides["field_instance.node-liftup-field_location.display|small_liftup_banner"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 26,
  );
  $overrides["field_instance.node-liftup-field_main_image.display|small_liftup_banner"] = array(
    'label' => 'hidden',
    'module' => 'atom_reference',
    'settings' => array(
      'link' => 0,
      'override' => 0,
    ),
    'type' => 'small_liftup_banner',
    'weight' => 0,
  );
  $overrides["field_instance.node-liftup-field_secondary_image.display|small_liftup_banner"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 25,
  );
  $overrides["field_instance.node-liftup-field_target_audience.display|small_liftup_banner"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 24,
  );
  $overrides["field_instance.node-liftup-field_theme.display|small_liftup_banner"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 23,
  );
  $overrides["field_instance.node-liftup-field_vignette.display|small_liftup_banner"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 22,
  );
  $overrides["field_instance.node-liftup-field_visible_title.display|small_liftup_banner"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 21,
  );
  $overrides["field_instance.node-liftup-field_visitpori_theme.display|small_liftup_banner"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 19,
  );
  $overrides["field_instance.node-liftup-og_group_ref.display|small_liftup_banner"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 20,
  );
  $overrides["field_instance.node-news_item-field_keywords.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'deny';
  $overrides["field_instance.node-news_item-field_related_content.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'deny';
  $overrides["field_instance.node-page-body.widget|weight"] = 15;
  $overrides["field_instance.node-page-field_contact_information.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-page-field_contact_information.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'deny';
  $overrides["field_instance.node-page-field_contact_person.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'deny';
  $overrides["field_instance.node-page-field_info_box.widget|weight"] = 16;
  $overrides["field_instance.node-page-field_keywords.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-page-field_keywords.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'deny';
  $overrides["field_instance.node-page-field_keywords.widget|weight"] = 17;
  $overrides["field_instance.node-page-field_lead_paragraph.widget|weight"] = 14;
  $overrides["field_instance.node-page-field_related_content.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-page-field_related_content.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'deny';
  $overrides["field_instance.node-page-field_related_content.widget|settings|references_dialog_add"]["DELETED"] = TRUE;
  $overrides["field_instance.node-page-field_related_content.widget|settings|references_dialog_edit"]["DELETED"] = TRUE;
  $overrides["field_instance.node-page-field_related_content.widget|settings|references_dialog_search"]["DELETED"] = TRUE;
  $overrides["field_instance.node-page-field_related_content.widget|settings|references_dialog_search_view"]["DELETED"] = TRUE;
  $overrides["field_instance.node-page-field_service_offering.widget|weight"] = 21;
  $overrides["field_instance.node-page-field_subpage.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-page-field_subpage.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'deny';
  $overrides["field_instance.node-page-field_target_audience.widget|weight"] = 20;
  $overrides["field_instance.node-page-field_theme.widget|weight"] = 18;
  $overrides["field_instance.node-page-field_topic.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-page-field_topic.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'deny';
  $overrides["field_instance.node-page-field_visitpori_theme.widget|weight"] = 19;
  $overrides["field_instance.node-page-field_widgets_after_content.widget|weight"] = 22;
  $overrides["field_instance.node-page-field_widget_before_content.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-page-field_widget_before_content.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'deny';
  $overrides["field_instance.node-person-field_account_name.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_account_name.display|person_card"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 28,
  );
  $overrides["field_instance.node-person-field_assistant.display|default|settings|bypass_access"] = FALSE;
  $overrides["field_instance.node-person-field_assistant.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_assistant.display|person_card"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 29,
  );
  $overrides["field_instance.node-person-field_assistant.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'deny';
  $overrides["field_instance.node-person-field_email_single.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_email_single.display|person_card"] = array(
    'label' => 'hidden',
    'module' => 'email',
    'settings' => array(),
    'type' => 'email_default',
    'weight' => 6,
  );
  $overrides["field_instance.node-person-field_employee_title.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_employee_title.display|person_card"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 2,
  );
  $overrides["field_instance.node-person-field_fax_number.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_fax_number.display|person_card"] = array(
    'label' => 'inline',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 11,
  );
  $overrides["field_instance.node-person-field_first_name.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_first_name.display|person_card"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 39,
  );
  $overrides["field_instance.node-person-field_mobile_phone.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_mobile_phone.display|person_card"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 7,
  );
  $overrides["field_instance.node-person-field_mobile_phone_work.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_mobile_phone_work.display|person_card"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 9,
  );
  $overrides["field_instance.node-person-field_municipality.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_municipality.display|person_card"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 38,
  );
  $overrides["field_instance.node-person-field_office_tr.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_office_tr.display|person_card"] = array(
    'label' => 'hidden',
    'module' => 'i18n_taxonomy',
    'settings' => array(),
    'type' => 'i18n_taxonomy_term_reference_plain',
    'weight' => 4,
  );
  $overrides["field_instance.node-person-field_person_image.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_person_image.display|person_card"] = array(
    'label' => 'hidden',
    'module' => 'atom_reference',
    'settings' => array(
      'link' => 0,
      'override' => 0,
    ),
    'type' => 'person',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_person_type.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_person_type.display|person_card"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 37,
  );
  $overrides["field_instance.node-person-field_phone.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_phone.display|person_card"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 8,
  );
  $overrides["field_instance.node-person-field_phone_switch.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_phone_switch.display|person_card"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 10,
  );
  $overrides["field_instance.node-person-field_political_party.display|default|settings|bypass_access"] = FALSE;
  $overrides["field_instance.node-person-field_political_party.display|full|settings|bypass_access"] = FALSE;
  $overrides["field_instance.node-person-field_political_party.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_political_party.display|person_card"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 36,
  );
  $overrides["field_instance.node-person-field_political_party.display|teaser|settings|bypass_access"] = FALSE;
  $overrides["field_instance.node-person-field_political_party.widget|settings|content_taxonomy_opt_groups"] = FALSE;
  $overrides["field_instance.node-person-field_postal_code.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_postal_code.display|person_card"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 35,
  );
  $overrides["field_instance.node-person-field_profession.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_profession.display|person_card"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 3,
  );
  $overrides["field_instance.node-person-field_street_address.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_street_address.display|person_card"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 34,
  );
  $overrides["field_instance.node-person-field_superior.display|default|settings|bypass_access"] = FALSE;
  $overrides["field_instance.node-person-field_superior.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_superior.display|person_card"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 33,
  );
  $overrides["field_instance.node-person-field_superior.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'deny';
  $overrides["field_instance.node-person-field_surname.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_surname.display|person_card"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 32,
  );
  $overrides["field_instance.node-person-field_task_description.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_task_description.display|person_card"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 31,
  );
  $overrides["field_instance.node-person-field_visiting_address.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-field_visiting_address.display|person_card"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 5,
  );
  $overrides["field_instance.node-person-title_field.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-person-title_field.display|person_card"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 30,
  );
  $overrides["field_instance.node-place-field_accessibility.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_accessibility.display|teaser|weight"] = 28;
  $overrides["field_instance.node-place-field_accessibility.display|waste_map"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 29,
  );
  $overrides["field_instance.node-place-field_accessibility.display|waste_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 29,
  );
  $overrides["field_instance.node-place-field_address_postal.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_address_postal.display|teaser|weight"] = 24;
  $overrides["field_instance.node-place-field_address_postal.display|waste_map"] = array(
    'label' => 'inline',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 26,
  );
  $overrides["field_instance.node-place-field_address_postal.display|waste_search"] = array(
    'label' => 'inline',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 26,
  );
  $overrides["field_instance.node-place-field_address_street.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_address_street.display|teaser|weight"] = 27;
  $overrides["field_instance.node-place-field_address_street.display|waste_map"] = array(
    'label' => 'inline',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 27,
  );
  $overrides["field_instance.node-place-field_address_street.display|waste_search"] = array(
    'label' => 'inline',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 27,
  );
  $overrides["field_instance.node-place-field_address_visiting.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_address_visiting.display|waste_map"] = array(
    'label' => 'hidden',
    'module' => 'addressfield',
    'settings' => array(
      'format_handlers' => array(
        0 => 'address',
      ),
      'use_widget_handlers' => 1,
    ),
    'type' => 'addressfield_default',
    'weight' => 1,
  );
  $overrides["field_instance.node-place-field_address_visiting.display|waste_search"] = array(
    'label' => 'hidden',
    'module' => 'addressfield',
    'settings' => array(
      'format_handlers' => array(
        0 => 'address',
      ),
      'use_widget_handlers' => 1,
    ),
    'type' => 'addressfield_default',
    'weight' => 1,
  );
  $overrides["field_instance.node-place-field_availability.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_availability.display|waste_map"] = array(
    'label' => 'above',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 4,
  );
  $overrides["field_instance.node-place-field_availability.display|waste_search"] = array(
    'label' => 'above',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 4,
  );
  $overrides["field_instance.node-place-field_billing_address.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_billing_address.display|teaser|weight"] = 36;
  $overrides["field_instance.node-place-field_billing_address.display|waste_map"] = array(
    'label' => 'inline',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 28,
  );
  $overrides["field_instance.node-place-field_billing_address.display|waste_search"] = array(
    'label' => 'inline',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 28,
  );
  $overrides["field_instance.node-place-field_description.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_description.display|waste_map"] = array(
    'label' => 'hidden',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 19,
  );
  $overrides["field_instance.node-place-field_description.display|waste_search"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 5,
  );
  $overrides["field_instance.node-place-field_district.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_district.display|teaser|weight"] = 26;
  $overrides["field_instance.node-place-field_district.display|waste_map"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 35,
  );
  $overrides["field_instance.node-place-field_district.display|waste_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 35,
  );
  $overrides["field_instance.node-place-field_email.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_email.display|waste_map"] = array(
    'label' => 'hidden',
    'module' => 'email',
    'settings' => array(),
    'type' => 'email_default',
    'weight' => 3,
  );
  $overrides["field_instance.node-place-field_email.display|waste_search"] = array(
    'label' => 'hidden',
    'module' => 'email',
    'settings' => array(),
    'type' => 'email_default',
    'weight' => 3,
  );
  $overrides["field_instance.node-place-field_fax_number.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_fax_number.display|teaser|weight"] = 37;
  $overrides["field_instance.node-place-field_fax_number.display|waste_map"] = array(
    'label' => 'inline',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 24,
  );
  $overrides["field_instance.node-place-field_fax_number.display|waste_search"] = array(
    'label' => 'inline',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 25,
  );
  $overrides["field_instance.node-place-field_location.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_location.display|teaser|weight"] = 35;
  $overrides["field_instance.node-place-field_location.display|waste_map"] = array(
    'label' => 'hidden',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 30,
  );
  $overrides["field_instance.node-place-field_location.display|waste_search"] = array(
    'label' => 'hidden',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 30,
  );
  $overrides["field_instance.node-place-field_main_image.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_main_image.display|teaser|weight"] = 30;
  $overrides["field_instance.node-place-field_main_image.display|waste_map"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 33,
  );
  $overrides["field_instance.node-place-field_main_image.display|waste_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 33,
  );
  $overrides["field_instance.node-place-field_municipality_term.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_municipality_term.display|teaser|weight"] = 25;
  $overrides["field_instance.node-place-field_municipality_term.display|waste_map"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 34,
  );
  $overrides["field_instance.node-place-field_municipality_term.display|waste_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 34,
  );
  $overrides["field_instance.node-place-field_municipality_term.widget|settings|content_taxonomy_opt_groups"] = FALSE;
  $overrides["field_instance.node-place-field_person_responsible.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_person_responsible.display|teaser|weight"] = 32;
  $overrides["field_instance.node-place-field_person_responsible.display|waste_map"] = array(
    'label' => 'inline',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 22,
  );
  $overrides["field_instance.node-place-field_person_responsible.display|waste_search"] = array(
    'label' => 'inline',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 23,
  );
  $overrides["field_instance.node-place-field_phone.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_phone.display|waste_map"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 2,
  );
  $overrides["field_instance.node-place-field_phone.display|waste_search"] = array(
    'label' => 'hidden',
    'module' => 'title',
    'settings' => array(
      'title_class' => 'waste-unit-detail',
      'title_link' => '',
      'title_style' => 'div',
    ),
    'type' => 'title_linked',
    'weight' => 2,
  );
  $overrides["field_instance.node-place-field_phone_switch.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_phone_switch.display|teaser|weight"] = 29;
  $overrides["field_instance.node-place-field_phone_switch.display|waste_map"] = array(
    'label' => 'inline',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 23,
  );
  $overrides["field_instance.node-place-field_phone_switch.display|waste_search"] = array(
    'label' => 'inline',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 24,
  );
  $overrides["field_instance.node-place-field_read_more.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-place-field_read_more.display|default|type"] = 'hidden';
  $overrides["field_instance.node-place-field_read_more.display|waste_map"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 37,
  );
  $overrides["field_instance.node-place-field_read_more.display|waste_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 37,
  );
  $overrides["field_instance.node-place-field_responsibility.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-place-field_responsibility.display|default|type"] = 'hidden';
  $overrides["field_instance.node-place-field_responsibility.display|waste_map"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 36,
  );
  $overrides["field_instance.node-place-field_responsibility.display|waste_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 36,
  );
  $overrides["field_instance.node-place-field_service_offer.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_service_offer.display|teaser|weight"] = 34;
  $overrides["field_instance.node-place-field_service_offer.display|waste_map"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 32,
  );
  $overrides["field_instance.node-place-field_service_offer.display|waste_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 32,
  );
  $overrides["field_instance.node-place-field_sorting_point.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-place-field_sorting_point.display|default|type"] = 'hidden';
  $overrides["field_instance.node-place-field_sorting_point.display|waste_map"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 38,
  );
  $overrides["field_instance.node-place-field_sorting_point.display|waste_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 38,
  );
  $overrides["field_instance.node-place-field_website_et.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-field_website_et.display|teaser|weight"] = 31;
  $overrides["field_instance.node-place-field_website_et.display|waste_map"] = array(
    'label' => 'inline',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 25,
  );
  $overrides["field_instance.node-place-field_website_et.display|waste_search"] = array(
    'label' => 'hidden',
    'module' => 'link',
    'settings' => array(),
    'type' => 'link_default',
    'weight' => 6,
  );
  $overrides["field_instance.node-place-title_field.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-title_field.display|teaser|weight"] = 33;
  $overrides["field_instance.node-place-title_field.display|waste_map"] = array(
    'label' => 'hidden',
    'module' => 'title',
    'settings' => array(
      'title_class' => '',
      'title_link' => '',
      'title_style' => 'h3',
    ),
    'type' => 'title_linked',
    'weight' => 0,
  );
  $overrides["field_instance.node-place-title_field.display|waste_search"] = array(
    'label' => 'hidden',
    'module' => 'title',
    'settings' => array(
      'title_class' => '',
      'title_link' => '',
      'title_style' => 'h3',
    ),
    'type' => 'title_linked',
    'weight' => 0,
  );
  $overrides["field_instance.node-position_of_trust-field_deputy_member.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-position_of_trust-field_deputy_member.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'deny';
  $overrides["field_instance.node-section-field_contact_information.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-section-field_contact_information.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'deny';
  $overrides["field_instance.node-section-field_widget_before_content.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-section-field_widget_before_content.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'deny';
  $overrides["field_instance.node-service-field_described_by_er_et.display|default|settings|bypass_access"] = FALSE;
  $overrides["field_instance.node-service-field_described_by_er_et.display|live_results_search"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-service-field_described_by_er_et.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'deny';
  $overrides["field_instance.taxonomy_term-accessibility-description_field.description"] = 'Write here a really short description of the accessibility feature in question if you want. Please notice that there is very little space for the description so it needs to be just a few words.';
  $overrides["field_instance.taxonomy_term-accessibility-description_field.display|default|label"] = 'hidden';
  $overrides["field_instance.taxonomy_term-accessibility-description_field.display|default|weight"] = 1;
  $overrides["field_instance.taxonomy_term-accessibility-description_field.settings|context"] = 'title';
  $overrides["field_instance.taxonomy_term-accessibility-description_field.settings|linkit"] = array(
    'button_text' => 'Search',
    'enable' => 0,
    'profile' => '',
  );
  $overrides["field_instance.taxonomy_term-accessibility-description_field.settings|text_processing"] = 0;
  $overrides["field_instance.taxonomy_term-accessibility-description_field.widget|settings|maxlength_js"]["DELETED"] = TRUE;
  $overrides["field_instance.taxonomy_term-accessibility-description_field.widget|settings|maxlength_js_enforce"]["DELETED"] = TRUE;
  $overrides["field_instance.taxonomy_term-accessibility-description_field.widget|settings|maxlength_js_label"]["DELETED"] = TRUE;
  $overrides["field_instance.taxonomy_term-accessibility-description_field.widget|settings|maxlength_js_label_summary"]["DELETED"] = TRUE;
  $overrides["field_instance.taxonomy_term-accessibility-description_field.widget|settings|maxlength_js_summary"]["DELETED"] = TRUE;
  $overrides["field_instance.taxonomy_term-accessibility-description_field.widget|settings|maxlength_js_truncate_html"]["DELETED"] = TRUE;
  $overrides["field_instance.taxonomy_term-accessibility-description_field.widget|settings|rows"] = 4;
  $overrides["field_instance.taxonomy_term-accessibility-field_mds_code.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.taxonomy_term-accessibility-field_mds_code.display|default|settings|decimal_separator"]["DELETED"] = TRUE;
  $overrides["field_instance.taxonomy_term-accessibility-field_mds_code.display|default|settings|prefix_suffix"]["DELETED"] = TRUE;
  $overrides["field_instance.taxonomy_term-accessibility-field_mds_code.display|default|settings|scale"]["DELETED"] = TRUE;
  $overrides["field_instance.taxonomy_term-accessibility-field_mds_code.display|default|settings|thousand_separator"]["DELETED"] = TRUE;
  $overrides["field_instance.taxonomy_term-accessibility-field_mds_code.display|default|type"] = 'hidden';
  $overrides["field_instance.taxonomy_term-accessibility-field_mds_code.display|default|weight"] = 5;
  $overrides["field_instance.taxonomy_term-accessibility-name_field.display|default|module"] = 'title';
  $overrides["field_instance.taxonomy_term-accessibility-name_field.display|default|settings|title_class"] = '';
  $overrides["field_instance.taxonomy_term-accessibility-name_field.display|default|settings|title_link"] = '';
  $overrides["field_instance.taxonomy_term-accessibility-name_field.display|default|settings|title_style"] = '';
  $overrides["field_instance.taxonomy_term-accessibility-name_field.display|default|type"] = 'title_linked';
  $overrides["field_instance.widget-event_carousel-field_keywords_et.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'deny';
  $overrides["field_instance.widget-event_mosaic-field_keywords_et.widget|settings|content_taxonomy_autocomplete_new_terms"] = 'deny';

  // Exported overrides for: flexslider_optionset
  $overrides["flexslider_optionset.top_carousel.options|smoothHeight"] = 0;

  // Exported overrides for: image
  $overrides["image.site_logo.effects|0|data|height"] = 50;

  // Exported overrides for: language
  $overrides["language.sv.enabled"] = 1;

  // Exported overrides for: scald_context_config
  $overrides["scald_context_config.content_full.player|image|settings|caption"] = '';
  $overrides["scald_context_config.content_half.player|image|settings|caption"] = '';
  $overrides["scald_context_config.full.player|image|*"] = 'image_figure';
  $overrides["scald_context_config.full.player|image|settings|caption"] = '[atom:title], by [atom:author]';
  $overrides["scald_context_config.full.player|image|settings|classes"] = '';
  $overrides["scald_context_config.full.transcoder|image|*"] = 'group-responsive_content_full';

  // Exported overrides for: variable
  $overrides["variable.field_bundle_settings_node__liftup.value|extra_fields|display|domain|small_liftup_banner"] = array(
    'weight' => 30,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__liftup.value|extra_fields|display|language|small_liftup_banner"] = array(
    'weight' => 29,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__liftup.value|view_modes|attraction_card_mosaic_item"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__liftup.value|view_modes|event_search_result"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__liftup.value|view_modes|live_results_search"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__liftup.value|view_modes|person_card"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__liftup.value|view_modes|product"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__liftup.value|view_modes|small_liftup_banner"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__person.value|extra_fields|display|domain|person_card"] = array(
    'weight' => 40,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__person.value|view_modes|attraction_card_mosaic_item"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__person.value|view_modes|event_mosaic_item"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__person.value|view_modes|event_search_result"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__person.value|view_modes|live_results_search"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__person.value|view_modes|person_card"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__person.value|view_modes|product"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__place.value|extra_fields|display|domain|teaser|weight"] = 23;
  $overrides["variable.field_bundle_settings_node__place.value|extra_fields|display|domain|waste_map"] = array(
    'weight' => 31,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__place.value|extra_fields|display|domain|waste_search"] = array(
    'weight' => 31,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__place.value|view_modes|waste_map"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__place.value|view_modes|waste_search"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_scald_atom__image.value|extra_fields|display|atom|content_full|visible"] = TRUE;
  $overrides["variable.field_bundle_settings_scald_atom__image.value|extra_fields|display|atom|content_full|weight"] = 0;
  $overrides["variable.field_bundle_settings_scald_atom__image.value|extra_fields|display|atom|content_half|visible"] = TRUE;
  $overrides["variable.field_bundle_settings_scald_atom__image.value|extra_fields|display|atom|content_half|weight"] = 0;
  $overrides["variable.field_bundle_settings_scald_atom__image.value|extra_fields|display|atom|small_liftup_banner"] = array(
    'weight' => 0,
    'visible' => TRUE,
  );
  $overrides["variable.field_bundle_settings_scald_atom__image.value|view_modes|content_250_wide"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_scald_atom__image.value|view_modes|small_liftup_banner"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.menu_block_20_expanded.value"] = 1;
  $overrides["variable.menu_block_21_expanded.value"] = 1;
  $overrides["variable.menu_block_22_expanded.value"] = 1;
  $overrides["variable.menu_block_25_expanded.value"] = 1;
  $overrides["variable.menu_block_28_expanded.value"] = 1;
  $overrides["variable.menu_block_8_depth.value"] = 2;
  $overrides["variable.menu_block_ids.value|25"] = 23;
  $overrides["variable.menu_block_ids.value|26"] = 28;
  $overrides["variable.menu_block_ids.value|27"] = 29;
  $overrides["variable.menu_block_ids.value|28"] = 30;
  $overrides["variable.menu_block_ids.value|29"] = 31;
  $overrides["variable.menu_block_ids.value|30"] = 32;
  $overrides["variable.menu_block_ids.value|31"] = 33;
  $overrides["variable.menu_block_ids.value|32"] = 34;
  $overrides["variable.menu_block_ids.value|33"] = 35;
  $overrides["variable.menu_block_ids.value|34"] = 36;
  $overrides["variable.menu_block_ids.value|35"] = 37;
  $overrides["variable.node_options_attraction_card.value|1"] = 'revision';
  $overrides["variable.node_options_landing_page.value|1"] = 'revision';
  $overrides["variable.node_options_page.value|1"] = 'revision';
  $overrides["variable.scald_custom_contexts.value|content_250_wide"] = array(
    'name' => 'content_250_wide',
    'title' => 'Content 250 wide',
    'description' => '',
    'render_language' => 'XHTML',
    'parseable' => TRUE,
    'formats' => array(),
  );
  $overrides["variable.scald_custom_contexts.value|page_carousel"] = array(
    'name' => 'page_carousel',
    'title' => 'Page carousel',
    'description' => '',
    'render_language' => 'XHTML',
    'parseable' => TRUE,
    'formats' => array(),
  );
  $overrides["variable.scald_custom_contexts.value|small_liftup_banner"] = array(
    'name' => 'small_liftup_banner',
    'title' => 'Small liftup banner',
    'description' => '',
    'render_language' => 'XHTML',
    'parseable' => TRUE,
    'formats' => array(),
  );
  $overrides["variable.variable_realm_list_domain.value|0"] = 'googleanalytics_account';
  $overrides["variable.variable_realm_list_domain.value|1"] = 'piwik_site_id';
  $overrides["variable.variable_realm_list_domain.value|2"] = 'site_name';
  $overrides["variable.variable_realm_list_domain.value|3"] = 'site_frontpage';

 return $overrides;
}
