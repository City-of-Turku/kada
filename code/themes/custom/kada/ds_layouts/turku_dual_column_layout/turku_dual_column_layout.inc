<?php

/**
 * @file
 * Display Suite Grid item layout configuration.
 */

function ds_turku_dual_column_layout() {
  return array(
    'label' => t('Turku dual column layout'),
    'regions' => array(
      'left_content' => t('Left content'),
      'right_content' => t('Right content'),
    ),
    // Uncomment if you want to include a CSS file for this layout (grid_item_layout.css)
    // 'css' => TRUE,
    // Uncomment if you want to include a preview for this layout (grid_item_layout.png)
    // 'image' => TRUE,
  );
}
