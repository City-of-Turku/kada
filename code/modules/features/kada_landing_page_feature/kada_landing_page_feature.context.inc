<?php
/**
 * @file
 * kada_landing_page_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function kada_landing_page_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'landing_page';
  $context->description = 'Liftups per landing page';
  $context->tag = 'sections';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'landing_page' => 'landing_page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-driveturku_recommended-block' => array(
          'module' => 'views',
          'delta' => 'driveturku_recommended-block',
          'region' => 'header',
          'weight' => '-89',
        ),
        'views-kada_pages-top_image' => array(
          'module' => 'views',
          'delta' => 'kada_pages-top_image',
          'region' => 'header',
          'weight' => '-88',
        ),
        'kada_widget_feature-widget_before_content' => array(
          'module' => 'kada_widget_feature',
          'delta' => 'widget_before_content',
          'region' => 'before_content',
          'weight' => '-10',
        ),
        'quicktabs-feed_tabs' => array(
          'module' => 'quicktabs',
          'delta' => 'feed_tabs',
          'region' => 'before_content',
          'weight' => '-9',
        ),
        'tkufi_export_feature-kada_rss_feed_for_landing_page' => array(
          'module' => 'tkufi_export_feature',
          'delta' => 'kada_rss_feed_for_landing_page',
          'region' => 'before_content',
          'weight' => '-8',
        ),
        'views-5f19412c456ca29977366d02fe15c93e' => array(
          'module' => 'views',
          'delta' => '5f19412c456ca29977366d02fe15c93e',
          'region' => 'before_footer',
          'weight' => '-10',
        ),
      ),
      'layout' => 'driveturku-front',
    ),
    'theme_html' => array(
      'class' => 'landing-page',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Liftups per landing page');
  t('sections');
  $export['landing_page'] = $context;

  return $export;
}
