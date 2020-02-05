<?php

/**
 * @file
 * Place teaser layout configuration.
 */

function ds_place_teaser_layout() {
  return array(
    'label' => t('Place teaser layout'),
    'regions' => array(
      'header' => t('Header'),
      'main_content' => t('Content'),
    ),
  );
}
