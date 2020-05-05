<?php

/**
 * @file
 * pori_configuration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pori_configuration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_lock_admin_cancelbutton';
  $strongarm->value = 1;
  $export['content_lock_admin_cancelbutton'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_lock_admin_verbose';
  $strongarm->value = 1;
  $export['content_lock_admin_verbose'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_lock_allowed_formats';
  $strongarm->value = array(
    'wysiwyg' => 0,
    'full_html' => 0,
    'plain_text' => 0,
    'ds_code' => 0,
  );
  $export['content_lock_allowed_formats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_lock_allowed_node_types';
  $strongarm->value = array(
    'section' => 0,
    'blog' => 0,
    'blog_post' => 0,
    'webform' => 0,
    'event' => 0,
    'landing_page' => 0,
    'liftup' => 0,
    'news_item' => 0,
    'page' => 0,
    'place' => 0,
    'service' => 0,
    'service_offer' => 0,
    'feed_import_facebook' => 0,
    'feed_import_instagram' => 0,
    'feed_import_twitter' => 0,
    'feed_import_youtube_channel' => 0,
    'social_media_update' => 0,
    'attraction_card' => 0,
    'person' => 0,
    'position_of_trust' => 0,
  );
  $export['content_lock_allowed_node_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_lock_unload_js';
  $strongarm->value = 1;
  $export['content_lock_unload_js'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_lock_unload_js_message';
  $strongarm->value = 'If you proceed, ALL of your changes will be lost.';
  $export['content_lock_unload_js_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_lock_unload_js_message_enable';
  $strongarm->value = 1;
  $export['content_lock_unload_js_message_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'method' => 'opt_in',
    'info_template' => 'new',
    'cookie_categories' => 'facebook|Facebook Pixel|My description',
    'enable_save_preferences_button' => 1,
    'save_preferences_button_label' => 'Save preferences',
    'accept_all_categories_button_label' => 'Accept all cookies',
    'fix_first_cookie_category' => 0,
    'select_all_categories_by_default' => 1,
    'disabled_javascripts' => '',
    'whitelisted_cookies' => '',
    'consent_storage_method' => 'do_not_store',
    'popup_clicking_confirmation' => FALSE,
    'popup_info' => array(
      'value' => '<h2>Keksejä</h2><p>Voit hyväksyä keksit&nbsp;painamalla &quot;Hyväksy&quot;</p>',
      'format' => 'wysiwyg',
    ),
    'use_mobile_message' => 1,
    'mobile_popup_info' => array(
      'value' => '<h2>Keksejä kännyllä</h2><p>Hyväksy kännykeksit&nbsp;painamalla &quot;Hyväksy&quot;.</p>',
      'format' => 'wysiwyg',
    ),
    'mobile_breakpoint' => '600',
    'popup_agree_button_message' => 'OK, I agree',
    'show_disagree_button' => TRUE,
    'popup_disagree_button_message' => 'Lisätietoja',
    'disagree_button_label' => 'Ei, kiitos',
    'withdraw_enabled' => 0,
    'withdraw_button_on_info_popup' => 0,
    'withdraw_message' => array(
      'value' => '<h2>We use cookies on this site to enhance your user experience</h2><p>You have given your consent for us to set cookies.</p>',
      'format' => 'wysiwyg',
    ),
    'withdraw_tab_button_label' => 'Evästeet',
    'withdraw_action_button_label' => 'Peruuta päätös',
    'popup_agreed_enabled' => 0,
    'popup_hide_agreed' => 0,
    'popup_agreed' => array(
      'value' => '<h2>Kiitos kun otit keksejä</h2><p>Voit piilottaa tämän viestin tai lukea kekseistä lisää</p>',
      'format' => 'wysiwyg',
    ),
    'popup_find_more_button_message' => 'Lisää tietoa',
    'popup_hide_button_message' => 'Piilota',
    'popup_link' => 'https://pori.fi/tietosuoja',
    'popup_link_new_window' => 1,
    'popup_position' => TRUE,
    'use_bare_css' => 0,
    'popup_text_hex' => 'fff',
    'popup_bg_hex' => '000',
    'popup_height' => '',
    'popup_width' => '100%',
    'fixed_top_position' => 1,
    'popup_delay' => '500',
    'disagree_do_not_show_popup' => 0,
    'reload_page' => 0,
    'popup_scrolling_confirmation' => FALSE,
    'cookie_name' => '',
    'domains_option' => '0',
    'domains_list' => 'https://visitpori.fi
https://visitpori.lndo.site
https://visitpori.dev.wunder.io
https://visitpori.stage.wunder.io',
    'exclude_paths' => '',
    'exclude_admin_pages' => 1,
    'exclude_uid_1' => 0,
    'script_scope' => 'header',
    'better_support_for_screen_readers' => 1,
    'cookie_session' => 0,
  );
  $export['eu_cookie_compliance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_cookie_lifetime';
  $strongarm->value = '100';
  $export['eu_cookie_compliance_cookie_lifetime'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_domain';
  $strongarm->value = '';
  $export['eu_cookie_compliance_domain'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_domain_all_sites';
  $strongarm->value = 0;
  $export['eu_cookie_compliance_domain_all_sites'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_account';
  $strongarm->value = 'UA-76043723-2';
  $export['googleanalytics_account'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_cache';
  $strongarm->value = 0;
  $export['googleanalytics_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_codesnippet_after';
  $strongarm->value = '';
  $export['googleanalytics_codesnippet_after'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_codesnippet_before';
  $strongarm->value = '';
  $export['googleanalytics_codesnippet_before'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_codesnippet_create';
  $strongarm->value = array();
  $export['googleanalytics_codesnippet_create'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_cross_domains';
  $strongarm->value = '';
  $export['googleanalytics_cross_domains'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_custom';
  $strongarm->value = '0';
  $export['googleanalytics_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_custom_dimension';
  $strongarm->value = array(
    'indexes' => array(
      1 => array(
        'index' => 1,
        'value' => '',
      ),
      2 => array(
        'index' => 2,
        'value' => '',
      ),
      3 => array(
        'index' => 3,
        'value' => '',
      ),
      4 => array(
        'index' => 4,
        'value' => '',
      ),
      5 => array(
        'index' => 5,
        'value' => '',
      ),
      6 => array(
        'index' => 6,
        'value' => '',
      ),
      7 => array(
        'index' => 7,
        'value' => '',
      ),
      8 => array(
        'index' => 8,
        'value' => '',
      ),
      9 => array(
        'index' => 9,
        'value' => '',
      ),
      10 => array(
        'index' => 10,
        'value' => '',
      ),
      11 => array(
        'index' => 11,
        'value' => '',
      ),
      12 => array(
        'index' => 12,
        'value' => '',
      ),
      13 => array(
        'index' => 13,
        'value' => '',
      ),
      14 => array(
        'index' => 14,
        'value' => '',
      ),
      15 => array(
        'index' => 15,
        'value' => '',
      ),
      16 => array(
        'index' => 16,
        'value' => '',
      ),
      17 => array(
        'index' => 17,
        'value' => '',
      ),
      18 => array(
        'index' => 18,
        'value' => '',
      ),
      19 => array(
        'index' => 19,
        'value' => '',
      ),
      20 => array(
        'index' => 20,
        'value' => '',
      ),
    ),
  );
  $export['googleanalytics_custom_dimension'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_custom_metric';
  $strongarm->value = array(
    'indexes' => array(
      1 => array(
        'index' => 1,
        'value' => '',
      ),
      2 => array(
        'index' => 2,
        'value' => '',
      ),
      3 => array(
        'index' => 3,
        'value' => '',
      ),
      4 => array(
        'index' => 4,
        'value' => '',
      ),
      5 => array(
        'index' => 5,
        'value' => '',
      ),
      6 => array(
        'index' => 6,
        'value' => '',
      ),
      7 => array(
        'index' => 7,
        'value' => '',
      ),
      8 => array(
        'index' => 8,
        'value' => '',
      ),
      9 => array(
        'index' => 9,
        'value' => '',
      ),
      10 => array(
        'index' => 10,
        'value' => '',
      ),
      11 => array(
        'index' => 11,
        'value' => '',
      ),
      12 => array(
        'index' => 12,
        'value' => '',
      ),
      13 => array(
        'index' => 13,
        'value' => '',
      ),
      14 => array(
        'index' => 14,
        'value' => '',
      ),
      15 => array(
        'index' => 15,
        'value' => '',
      ),
      16 => array(
        'index' => 16,
        'value' => '',
      ),
      17 => array(
        'index' => 17,
        'value' => '',
      ),
      18 => array(
        'index' => 18,
        'value' => '',
      ),
      19 => array(
        'index' => 19,
        'value' => '',
      ),
      20 => array(
        'index' => 20,
        'value' => '',
      ),
    ),
  );
  $export['googleanalytics_custom_metric'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_debug';
  $strongarm->value = 0;
  $export['googleanalytics_debug'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_domain_mode';
  $strongarm->value = '0';
  $export['googleanalytics_domain_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_pages';
  $strongarm->value = 'admin
admin/*
batch
node/add*
node/*/*
user/*/*';
  $export['googleanalytics_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_privacy_donottrack';
  $strongarm->value = 1;
  $export['googleanalytics_privacy_donottrack'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_roles';
  $strongarm->value = array(
    1 => 0,
    2 => 0,
    4 => 0,
    8 => 0,
    3 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
  );
  $export['googleanalytics_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_site_search';
  $strongarm->value = FALSE;
  $export['googleanalytics_site_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_trackadsense';
  $strongarm->value = 0;
  $export['googleanalytics_trackadsense'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_trackdoubleclick';
  $strongarm->value = 0;
  $export['googleanalytics_trackdoubleclick'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_tracker_anonymizeip';
  $strongarm->value = 1;
  $export['googleanalytics_tracker_anonymizeip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_trackfiles';
  $strongarm->value = 1;
  $export['googleanalytics_trackfiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_trackfiles_extensions';
  $strongarm->value = '7z|aac|arc|arj|asf|asx|avi|bin|csv|doc|exe|flv|gif|gz|gzip|hqx|jar|jpe?g|js|mp(2|3|4|e?g)|mov(ie)?|msi|msp|pdf|phps|png|ppt|qtm?|ra(m|r)?|sea|sit|tar|tgz|torrent|txt|wav|wma|wmv|wpd|xls|xml|z|zip';
  $export['googleanalytics_trackfiles_extensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_tracklinkid';
  $strongarm->value = 0;
  $export['googleanalytics_tracklinkid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_trackmailto';
  $strongarm->value = 1;
  $export['googleanalytics_trackmailto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_trackmessages';
  $strongarm->value = array(
    'status' => 0,
    'warning' => 0,
    'error' => 0,
  );
  $export['googleanalytics_trackmessages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_trackoutbound';
  $strongarm->value = 1;
  $export['googleanalytics_trackoutbound'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_trackurlfragments';
  $strongarm->value = 0;
  $export['googleanalytics_trackurlfragments'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_trackuserid';
  $strongarm->value = 0;
  $export['googleanalytics_trackuserid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_translation_set';
  $strongarm->value = 0;
  $export['googleanalytics_translation_set'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_visibility_pages';
  $strongarm->value = '0';
  $export['googleanalytics_visibility_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_visibility_roles';
  $strongarm->value = '0';
  $export['googleanalytics_visibility_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hotjar_settings';
  $strongarm->value = array(
    'hotjar_account' => '673332',
    'hotjar_visibility_pages' => '0',
    'hotjar_pages' => 'admin
admin/*
batch
node/add*
node/*/*
user/*/*',
    'hotjar_visibility_roles' => '0',
    'hotjar_roles' => array(
      1 => 0,
      2 => 0,
      4 => 0,
      8 => 0,
      3 => 0,
      7 => 0,
      5 => 0,
      6 => 0,
    ),
  );
  $export['hotjar_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_jpeg_quality';
  $strongarm->value = '95';
  $export['image_jpeg_quality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_news_item_de_pattern';
  $strongarm->value = '';
  $export['pathauto_node_news_item_de_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_de_pattern';
  $strongarm->value = '';
  $export['pathauto_node_page_de_pattern'] = $strongarm;

  return $export;
}
