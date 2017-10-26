<?php
/**
 * @file
 * pori_configuration.features.inc
 */

/**
 * Implements hook_strongarm_alter().
 */
function pori_configuration_strongarm_alter(&$data) {
  if (isset($data['responsive_menus_media_size'])) {
    $data['responsive_menus_media_size']->value = 1025; /* WAS: 59.94 */
  }
  if (isset($data['responsive_menus_media_unit'])) {
    $data['responsive_menus_media_unit']->value = 'px'; /* WAS: 'em' */
  }
}
