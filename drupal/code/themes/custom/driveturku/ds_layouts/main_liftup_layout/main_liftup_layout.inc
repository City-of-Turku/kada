<?php

/**
 * @file
 * Display Suite Liftup layout configuration.
 */

function ds_main_liftup_layout() {
  return array(
    'label' => t('Main liftup layout'),
    'regions' => array(
      'media' => t('Media'),
      'main' => t('Main'),
    ),
    // Uncomment if you want to include a CSS file for this layout (liftup_current_layout.css)
    // 'css' => TRUE,
    // Uncomment if you want to include a preview for this layout (liftup_current_layout.png)
    // 'image' => TRUE,
  );
}
