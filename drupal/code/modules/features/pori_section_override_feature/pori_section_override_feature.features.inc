<?php

/**
 * @file
 * pori_section_override_feature.features.inc
 */

/**
 * Implements hook_views_default_views_alter().
 */
function pori_section_override_feature_views_default_views_alter(&$data) {
  if (isset($data['og_extras_members'])) {
    $data['og_extras_members']->display['default']->display_options['arguments']['gid']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['og_extras_members']->display['default']->display_options['arguments']['gid']['title_enable'] = TRUE; /* WAS: 1 */
    $data['og_extras_members']->display['page_1']->display_options['access'] = array(
      'type' => 'role',
      'role' => array(
        2 => 2,
      ),
    ); /* WAS: '' */
    $data['og_extras_members']->display['page_1']->display_options['defaults'] = array(
      'access' => FALSE,
    ); /* WAS: '' */
    unset($data['og_extras_members']->display['block_1']->display_options['fields']['name']['alter']);
    unset($data['og_extras_members']->display['block_1']->display_options['fields']['name']['empty_zero']);
    unset($data['og_extras_members']->display['block_1']->display_options['fields']['name']['hide_empty']);
    unset($data['og_extras_members']->display['block_1']->display_options['fields']['name']['link_to_user']);
    unset($data['og_extras_members']->display['block_1']->display_options['fields']['name']['overwrite_anonymous']);
    unset($data['og_extras_members']->display['block_1']->display_options['use_more_always']);
    unset($data['og_extras_members']->display['default']->display_options['arguments']['gid']['break_phrase']);
    unset($data['og_extras_members']->display['default']->display_options['arguments']['gid']['default_argument_skip_url']);
    unset($data['og_extras_members']->display['default']->display_options['arguments']['gid']['not']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['name']['alter']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['name']['empty_zero']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['name']['hide_empty']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['name']['link_to_user']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['name']['overwrite_anonymous']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['picture']['alter']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['picture']['element_default_classes']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['picture']['empty_zero']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['picture']['hide_alter_empty']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['picture']['hide_empty']);
    unset($data['og_extras_members']->display['default']->display_options['fields']['picture']['link_photo_to_profile']);
    unset($data['og_extras_members']->display['default']->display_options['pager']['options']['expose']);
    unset($data['og_extras_members']->display['default']->display_options['relationships']['og_membership_rel']['required']);
    unset($data['og_extras_members']->display['default']->display_options['style_options']);
  }
}
