<?php
/**
 * @file
 * pori_section_override_feature.features.inc
 */

/**
 * Implements hook_context_default_contexts_alter().
 */
function pori_section_override_feature_context_default_contexts_alter(&$data) {
  if (isset($data['default_section'])) {
    $data['default_section']->conditions['context']['values']['~visitpori_domain'] = '~visitpori_domain'; /* WAS: '' */
  }
  if (isset($data['section_menus'])) {
    $data['section_menus']->condition_mode = 1; /* WAS: 0 */
    $data['section_menus']->conditions['context_all'] = array(
      'values' => array(
        'default_section' => 'default_section',
      ),
    ); /* WAS: '' */
  }
}
