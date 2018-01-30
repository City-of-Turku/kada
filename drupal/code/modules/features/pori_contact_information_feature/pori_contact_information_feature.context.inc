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
    'path' => array(
      'values' => array(
        'phone-book' => 'phone-book',
        'phone-book/*' => 'phone-book/*',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Phone book of people');
  t('views');
  $export['person_list'] = $context;

  return $export;
}
