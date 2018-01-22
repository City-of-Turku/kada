<?php

/**
 * @file
 * Page layout configuration.
 */

function ds_page_layout() {
  return array(
    'label' => t('Page layout'),
    'regions' => array(
      'main_content' => t('Content'),
      'sidebar' => t('Sidebar - Not used on front pages'),
      'additional_information' => t('Additional information'),
      'contact_information' => t('Contact information'),
      'after_content' => t('After content'),
    ),
  );
}
