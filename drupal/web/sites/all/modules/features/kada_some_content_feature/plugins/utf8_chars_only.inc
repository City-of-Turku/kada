<?php

/**
 * @file
 * Strip non utf8 characters.
 */

$plugin = array(
  'form' => 'kada_some_content_feature_utf8_chars_only_form',
  'callback' => 'kada_some_content_feature_utf8_chars_only_callback',
  'name' => 'Strip non utf8 characters',
  'multi' => 'loop',
  'category' => 'Text',
);

function kada_some_content_feature_utf8_chars_only_form($importer, $element_key, $settings) {
  $form = array();
  $form['info'] = array(
    '#markup' => t('This plugin will remove invalid utf8 characters.'),
  );
  return $form;
}

function kada_some_content_feature_utf8_chars_only_callback($result, $item_key, $element_key, &$field, $settings) {
  $field = preg_replace('/([0-9|#][\x{20E3}])|[\x{00ae}|\x{00a9}|\x{203C}|\x{2047}|\x{2048}|\x{2049}|\x{3030}|\x{303D}|\x{2139}|\x{2122}|\x{3297}|\x{3299}][\x{FE00}-\x{FEFF}]?|[\x{2190}-\x{21FF}][\x{FE00}-\x{FEFF}]?|[\x{2300}-\x{23FF}][\x{FE00}-\x{FEFF}]?|[\x{2460}-\x{24FF}][\x{FE00}-\x{FEFF}]?|[\x{25A0}-\x{25FF}][\x{FE00}-\x{FEFF}]?|[\x{2600}-\x{27BF}][\x{FE00}-\x{FEFF}]?|[\x{2600}-\x{27BF}][\x{1F000}-\x{1FEFF}]?|[\x{2900}-\x{297F}][\x{FE00}-\x{FEFF}]?|[\x{2B00}-\x{2BF0}][\x{FE00}-\x{FEFF}]?|[\x{1F000}-\x{1F9FF}][\x{FE00}-\x{FEFF}]?|[\x{1F000}-\x{1F9FF}][\x{1F000}-\x{1FEFF}]?/u', '', $field);
}
