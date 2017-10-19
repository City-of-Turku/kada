<?php

/**
 * @file
 * Display Suite Grid item layout configuration.
 */

function ds_grid_item_layout() {
  return array(
    'label' => t('Grid item layout'),
    'regions' => array(
      'image' => t('Image'),
      'content_top' => t('Content top'),
      'content_bottom' => t('Content bottom'),
    ),
    // Uncomment if you want to include a CSS file for this layout (grid_item_layout.css)
    // 'css' => TRUE,
    // Uncomment if you want to include a preview for this layout (grid_item_layout.png)
    // 'image' => TRUE,
  );
}
