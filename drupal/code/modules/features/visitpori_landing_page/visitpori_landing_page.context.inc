<?php
/**
 * @file
 * visitpori_landing_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function visitpori_landing_page_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'visitpori_landing_page';
  $context->description = 'Liftups per landing page for visitpori';
  $context->tag = 'sections';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'visitpori_domain' => 'visitpori_domain',
      ),
    ),
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
        'views-kada_top_carousel-block_2' => array(
          'module' => 'views',
          'delta' => 'kada_top_carousel-block_2',
          'region' => 'header',
          'weight' => '-100',
        ),
        'views-kada_recommended-block' => array(
          'module' => 'views',
          'delta' => 'kada_recommended-block',
          'region' => 'header',
          'weight' => '-99',
        ),
        'views-kada_project_liftups-block' => array(
          'module' => 'views',
          'delta' => 'kada_project_liftups-block',
          'region' => 'after_content',
          'weight' => '0',
        ),
        'quicktabs-feed_tabs' => array(
          'module' => 'quicktabs',
          'delta' => 'feed_tabs',
          'region' => 'after_content',
          'weight' => '1',
        ),
        'kada_export_feature-kada_rss_feed_for_landing_page' => array(
          'module' => 'kada_export_feature',
          'delta' => 'kada_rss_feed_for_landing_page',
          'region' => 'after_content',
          'weight' => '2',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'landing-page landing-page__visitpori',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Liftups per landing page for visitpori');
  t('sections');
  $export['visitpori_landing_page'] = $context;

  return $export;
}
