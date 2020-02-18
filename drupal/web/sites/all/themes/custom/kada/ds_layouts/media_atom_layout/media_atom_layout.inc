<?php

/**
 * @file
 * Display Suite Media atom layout configuration.
 */

function ds_media_atom_layout() {
  return array(
    'label' => t('Media atom layout'),
    'regions' => array(
      'main' => t('Main'),
    ),
    // Uncomment if you want to include a CSS file for this layout (media_atom_layout.css)
    // 'css' => TRUE,
    // Uncomment if you want to include a preview for this layout (media_atom_layout.png)
    // 'image' => TRUE,
  );
}
