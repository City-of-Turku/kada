<?php
/**
 * @file
 * pori_domains.features.inc
 */

/**
 * Implements hook_context_default_contexts_alter().
 */
function pori_domains_context_default_contexts_alter(&$data) {
  if (isset($data['default_domain'])) {
    $data['default_domain']->conditions['domain']['values']['pori_kada_testing_druid_fi'] = 'pori_kada_testing_druid_fi'; /* WAS: '' */
    unset($data['default_domain']->conditions['domain']['values']['local_kada_fi']);
  }
}
