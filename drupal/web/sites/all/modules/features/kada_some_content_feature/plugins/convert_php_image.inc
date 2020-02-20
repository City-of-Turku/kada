<?php

/**
 * @file
 * Convert Facebook Safeimage PHP to images.
 */

$plugin = array(
  'form' => 'kada_some_content_feature_convert_php_image_form',
  'callback' => 'kada_some_content_feature_convert_php_image_callback',
  'name' => 'Convert Facebook Safeimage PHP to images',
  'multi' => 'loop',
  'category' => 'Text',
);


function kada_some_content_feature_convert_php_image_form($importer, $element_key, $settings) {
  $form = array(
    'info' => array(
      '#markup' => t('Convert Facebook Safeimage PHP to images'),
    ),
  );
  return $form;
}

function kada_some_content_feature_convert_php_image_callback($result, $item_key, $element_key, &$field, $settings) {
  $parsed_url = parse_url($field);

  $path = pathinfo($parsed_url['path']);

  $allow_types = array(
    IMAGETYPE_PNG,
    IMAGETYPE_GIF,
    IMAGETYPE_JPEG,
  );

  $fragment = explode('.', $parsed_url['host']);

  // Validate Facebook safe image url.
  if (
    array_slice($fragment, -2, 2) == array('fbcdn', 'net') &&
    $path['basename'] == 'safe_image.php'
  ) {
    // Use getimagesize to get image property if any.
    $img = getimagesize($field);

    // Check if the image type is allowed, or if we have a valid image.
    if ($img === FALSE || in_array($img[2], $allow_types)) {
      // Generate random filename.
      $filename = 'fb_safe_' . uniqid(rand(), TRUE) . image_type_to_extension($img[2]);
      // Set the destination where the image will be saved.
      $destination = file_default_scheme() . '://images/twitter/' . $filename;
      // Save the file and set it as the field url.
      if ($file = file_save_data(file_get_contents($field), $destination)) {
        $field = $file->uri;
      }
    }
  }
}
