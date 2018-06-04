<?php

function kada_preprocess_taxonomy_term(&$variables) {
  if (
    $variables['vocabulary_machine_name'] !== 'waste_type' &&
    $variables['view_mode'] !== 'full'
  ) {
    return;
  }

  global $language;
  $link_text = t('Back to waste search');
  $path = drupal_get_path_alias('waste/search', $language->language);
  $attributes = [
    'attributes' => [
      'class' => [
        'button',
        'button--waste'
      ],
    ],
  ];

  $variables['link_waste_search'] = l($link_text, $path, $attributes);
}
