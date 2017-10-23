<?php

/**
 * @file
 * Display Suite Liftup layout configuration.
 */

function ds_liftup_teaser_layout() {
  return array(
    'label' => t('Liftup teaser layout'),
    'regions' => array(
      'header' => t('Header'),
      'main' => t('Main'),
    ),
    // Uncomment if you want to include a CSS file for this layout (liftup_teaser_layout.css)
    // 'css' => TRUE,
    // Uncomment if you want to include a preview for this layout (liftup_teaser_layout.png)
    // 'image' => TRUE,
  );
}
