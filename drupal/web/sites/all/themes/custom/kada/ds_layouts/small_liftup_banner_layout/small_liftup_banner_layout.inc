<?php

/**
 * @file
 * Display Suite Small banner liftup layout configuration.
 */

function ds_small_liftup_banner_layout() {
  return array(
    'label' => t('Small banner liftup layout'),
    'regions' => array(
      'main' => t('Main'),
    ),
    // Uncomment if you want to include a CSS file for this layout (liftup_current_layout.css)
    // 'css' => TRUE,
    // Uncomment if you want to include a preview for this layout (liftup_current_layout.png)
    // 'image' => TRUE,
  );
}
