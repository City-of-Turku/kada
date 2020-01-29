<?php

/**
 * @file
 * kada_some_content_feature.default_elysia_cron_rules.inc
 */

/**
 * Implements hook_default_elysia_cron_rules().
 */
function kada_some_content_feature_default_elysia_cron_rules() {
  $cron_rules = array();

  $cron_rule = new stdClass;
  $cron_rule->disabled = FALSE; /* Edit this to true to make a default cron_rule disabled initially */
  $cron_rule->api_version = 1;
  $cron_rule->name = 'feeds_cron';
  $cron_rule->disable = NULL;
  $cron_rule->rule = '*/5 * * * *';
  $cron_rule->weight = NULL;
  $cron_rule->context = 'some';
  $cron_rules['feeds_cron'] = $cron_rule;

  $cron_rule = new stdClass;
  $cron_rule->disabled = FALSE; /* Edit this to true to make a default cron_rule disabled initially */
  $cron_rule->api_version = 1;
  $cron_rule->name = 'kada_some_content_feature_cron';
  $cron_rule->disable = TRUE;
  $cron_rule->rule = '*/5 * * * *';
  $cron_rule->weight = NULL;
  $cron_rule->context = 'some';
  $cron_rules['kada_some_content_feature_cron'] = $cron_rule;

  return $cron_rules;

}
