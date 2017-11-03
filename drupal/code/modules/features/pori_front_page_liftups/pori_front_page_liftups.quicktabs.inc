<?php
/**
 * @file
 * pori_front_page_liftups.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function pori_front_page_liftups_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'feed_tabs_frontpage_promoted_con';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Feed tabs (frontpage promoted content)';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'kada_liftups_feature_delta_current_combined',
      'hide_title' => 1,
      'title' => 'All',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'vid' => 'kada_current_promoted_',
      'display' => 'tab_news',
      'args' => '',
      'use_title' => 0,
      'title' => 'News',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'kada_current_promoted_',
      'display' => 'tab_nearby',
      'args' => '',
      'use_title' => 0,
      'title' => 'Nearby',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'kada_current_promoted_',
      'display' => 'tab_facebook',
      'args' => '',
      'use_title' => 0,
      'title' => 'Facebook',
      'weight' => '-97',
      'type' => 'view',
    ),
    4 => array(
      'vid' => 'kada_current_promoted_',
      'display' => 'tab_twitter',
      'args' => '',
      'use_title' => 0,
      'title' => 'Twitter',
      'weight' => '-96',
      'type' => 'view',
    ),
    5 => array(
      'vid' => 'kada_current_promoted_',
      'display' => 'tab_instagram',
      'args' => '',
      'use_title' => 0,
      'title' => 'Instagram',
      'weight' => '-95',
      'type' => 'view',
    ),
    6 => array(
      'vid' => 'kada_current_promoted_',
      'display' => 'tab_linkedin',
      'args' => '',
      'use_title' => 0,
      'title' => 'LinkedIn',
      'weight' => '-94',
      'type' => 'view',
    ),
    7 => array(
      'vid' => 'kada_current_promoted_',
      'display' => 'tab_youtube',
      'args' => '',
      'use_title' => 0,
      'title' => 'Youtube',
      'weight' => '-93',
      'type' => 'view',
    ),
    8 => array(
      'vid' => 'kada_current_promoted_',
      'display' => 'tab_blogs',
      'args' => '',
      'use_title' => 0,
      'title' => 'Blogs',
      'weight' => '-92',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('All');
  t('Blogs');
  t('Facebook');
  t('Feed tabs (frontpage promoted content)');
  t('Instagram');
  t('LinkedIn');
  t('Nearby');
  t('News');
  t('Twitter');
  t('Youtube');

  $export['feed_tabs_frontpage_promoted_con'] = $quicktabs;

  return $export;
}
