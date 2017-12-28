<?php

/**
 * @file
 * Display Suite attraction layout configuration.
 */

function ds_attraction_layout() {
  return array(
    'label' => t('Attraction layout'),
    'regions' => array(
      'image_container' => t('Image container'),
      'main_content' => t('Content'),
      'sidebar' => t('Sidebar'),
      'contact_details' => t('Contact details'),
      'after_content' => t('After content'),
    ),
  );
}
