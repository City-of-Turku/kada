<?php

/**
 * @file
 * Display Suite minimal layout configuration.
 */

function ds_page_layout() {
  return array(
    'label' => t('Page layout'),
    'regions' => array(
      'main_content' => t('Content'),
      'sidebar' => t('Sidebar'),
      'additional_information' => t('Additional information'),
      'after_content' => t('After content'),
    ),
  );
}
