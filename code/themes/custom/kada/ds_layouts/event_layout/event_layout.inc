<?php

/**
 * @file
 * Display Suite Grid item layout configuration.
 */

function ds_event_layout() {
  return array(
    'label' => t('Event layout'),
    'regions' => array(
      'image' => t('Image'),
      'image_content_top' => t('Image content top'),
      'image_content_bottom' => t('Image content bottom'),
      'event_content_top' => t('Event content top'),
      'event_content_bottom' => t('Event content bottom'),
      'sidebar_content_top' => t('Sidebar content top'),
      'sidebar_content_bottom' => t('Sidebar content bottom'),
    ),
    // Uncomment if you want to include a CSS file for this layout (grid_item_layout.css)
    // 'css' => TRUE,
    // Uncomment if you want to include a preview for this layout (grid_item_layout.png)
    // 'image' => TRUE,
  );
}
