<?php

/**
 * @file
 * Person card layout configuration.
 */

function ds_person_card_layout() {
  return array(
    'label' => t('Person card layout'),
    'regions' => array(
      'main_content' => t('Content'),
    ),
    // Uncomment if you want to include a CSS file for this layout (liftup_teaser_layout.css)
    // 'css' => TRUE,
    // Uncomment if you want to include a preview for this layout (liftup_teaser_layout.png)
    // 'image' => TRUE,
  );
}
