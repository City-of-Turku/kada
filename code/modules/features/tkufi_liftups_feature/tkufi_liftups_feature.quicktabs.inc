<?php
/**
 * @file
 * tkufi_liftups_feature.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function tkufi_liftups_feature_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'feed_tabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Feed tabs';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'tkufi_liftups_feature_delta_current_combined',
      'hide_title' => 1,
      'title' => 'All',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'vid' => 'driveturku_current',
      'display' => 'tab_news',
      'args' => '',
      'title' => 'News',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'driveturku_current',
      'display' => 'tab_nearby',
      'args' => '',
      'title' => 'Nearby',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'driveturku_current',
      'display' => 'tab_facebook',
      'args' => '',
      'title' => 'Facebook',
      'weight' => '-97',
      'type' => 'view',
    ),
    4 => array(
      'vid' => 'driveturku_current',
      'display' => 'tab_twitter',
      'args' => '',
      'title' => 'Twitter',
      'weight' => '-96',
      'type' => 'view',
    ),
    5 => array(
      'vid' => 'driveturku_current',
      'display' => 'tab_instagram',
      'args' => '',
      'title' => 'Instagram',
      'weight' => '-95',
      'type' => 'view',
    ),
    6 => array(
      'vid' => 'driveturku_current',
      'display' => 'tab_linkedin',
      'args' => '',
      'title' => 'LinkedIn',
      'weight' => '-94',
      'type' => 'view',
    ),
    7 => array(
      'vid' => 'driveturku_current',
      'display' => 'tab_youtube',
      'args' => '',
      'title' => 'Youtube',
      'weight' => '-93',
      'type' => 'view',
    ),
    8 => array(
      'vid' => 'driveturku_current',
      'display' => 'tab_blogs',
      'args' => '',
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
  t('Feed tabs');
  t('Instagram');
  t('LinkedIn');
  t('Nearby');
  t('News');
  t('Twitter');
  t('Youtube');

  $export['feed_tabs'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'feed_tabs_section';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Feed tabs for section';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'tkufi_liftups_feature_delta_current_combined_section',
      'hide_title' => 1,
      'title' => 'All',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'vid' => 'driveturku_current',
      'display' => 'tab_section_news',
      'args' => '',
      'title' => 'News',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'driveturku_current',
      'display' => 'tab_section_nearby',
      'args' => '',
      'title' => 'Nearby',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'driveturku_current',
      'display' => 'tab_section_facebook',
      'args' => '',
      'title' => 'Facebook',
      'weight' => '-97',
      'type' => 'view',
    ),
    4 => array(
      'vid' => 'driveturku_current',
      'display' => 'tab_section_twitter',
      'args' => '',
      'title' => 'Twitter',
      'weight' => '-96',
      'type' => 'view',
    ),
    5 => array(
      'vid' => 'driveturku_current',
      'display' => 'tab_section_instagram',
      'args' => '',
      'title' => 'Instagram',
      'weight' => '-95',
      'type' => 'view',
    ),
    6 => array(
      'vid' => 'driveturku_current',
      'display' => 'tab_section_linkedin',
      'args' => '',
      'title' => 'LinkedIn',
      'weight' => '-94',
      'type' => 'view',
    ),
    7 => array(
      'vid' => 'driveturku_current',
      'display' => 'tab_section_youtube',
      'args' => '',
      'title' => 'Youtube',
      'weight' => '-93',
      'type' => 'view',
    ),
    8 => array(
      'vid' => 'driveturku_current',
      'display' => 'tab_section_blogs',
      'args' => '',
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
  t('Feed tabs for section');
  t('Instagram');
  t('LinkedIn');
  t('Nearby');
  t('News');
  t('Twitter');
  t('Youtube');

  $export['feed_tabs_section'] = $quicktabs;

  return $export;
}
