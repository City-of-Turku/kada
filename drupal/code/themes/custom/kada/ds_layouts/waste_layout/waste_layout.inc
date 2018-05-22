<?php

/**
 * @file
 * Display Suite Waste layout configuration.
 */

function ds_waste_layout() {
  return array(
    'label' => t('Waste layout'),
    'regions' => array(
      'main_content' => t('Content'),
    ),
    // Uncomment if you want to include a CSS file for this layout (liftup_teaser_layout.css)
    // 'css' => TRUE,
    // Uncomment if you want to include a preview for this layout (liftup_teaser_layout.png)
    // 'image' => TRUE,
  );
}
