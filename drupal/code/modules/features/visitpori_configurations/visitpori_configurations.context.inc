<?php
/**
 * @file
 * visitpori_configurations.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function visitpori_configurations_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'visitpori_domain';
  $context->description = 'Triggered on domains that don\'t have a domain context defined.';
  $context->tag = 'domains';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        'visitpori_fi' => 'visitpori_fi',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Triggered on domains that don\'t have a domain context defined.');
  t('domains');
  $export['visitpori_domain'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'visitpori_footer_menu';
  $context->description = 'Displays the footer menu';
  $context->tag = 'menus';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'visitpori_domain' => 'visitpori_domain',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-visitpori-footer-menu-fi' => array(
          'module' => 'menu',
          'delta' => 'menu-visitpori-footer-menu-fi',
          'region' => 'footer',
          'weight' => '3',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Displays the footer menu');
  t('menus');
  $export['visitpori_footer_menu'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'visitpori_top_menu';
  $context->description = 'Displays the top menu';
  $context->tag = 'menus';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'visitpori_domain' => 'visitpori_domain',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-visitpori-top-menu-fi' => array(
          'module' => 'menu',
          'delta' => 'menu-visitpori-top-menu-fi',
          'region' => 'navigation_top',
          'weight' => '-7',
        ),
        'menu-menu-visitpori-main-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-visitpori-main-menu',
          'region' => 'navigation',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Displays the top menu');
  t('menus');
  $export['visitpori_top_menu'] = $context;

  return $export;
}
