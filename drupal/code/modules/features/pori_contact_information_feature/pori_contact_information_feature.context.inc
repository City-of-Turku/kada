<?php
/**
 * @file
 * pori_contact_information_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pori_contact_information_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'person_list';
  $context->description = 'Phone book of people';
  $context->tag = 'views';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'pori_phone_book:page' => 'pori_phone_book:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-cIe1ii4J1UAtqVemZV00yM9RFOt0vovl' => array(
          'module' => 'facetapi',
          'delta' => 'cIe1ii4J1UAtqVemZV00yM9RFOt0vovl',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-rE0DEkspoEoPRA4nwBbnkSjc5ld7P5yJ' => array(
          'module' => 'facetapi',
          'delta' => 'rE0DEkspoEoPRA4nwBbnkSjc5ld7P5yJ',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Phone book of people');
  t('views');
  $export['person_list'] = $context;

  return $export;
}
