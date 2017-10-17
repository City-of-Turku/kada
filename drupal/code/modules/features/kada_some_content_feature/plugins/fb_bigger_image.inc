<?php
/**
* @file
* This plugin will fetch the biggest image available in Graph API for object.
* Images in the feed are thumbnails by default.
*/

$plugin = array(
  'form' => 'kada_some_content_feature_fb_bigger_image_form',
  'callback' => 'kada_some_content_feature_fb_bigger_image_callback',
  'name' => 'Facebook BIG image',
  'multi' => 'loop',
  'category' => 'Other',
);

function kada_some_content_feature_fb_bigger_image_form($importer, $element_key, $settings) {
  $form = array();
  $form['help']['#markup'] = t('Fetches biggest image available from Facebook Graph API. Requires Object ID field machine name.');
  $form['graph_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Graph API URL'),
    '#default_value' => isset($settings['graph_url']) ? $settings['graph_url'] : 'https://graph.facebook.com/',
    '#description' => t('With closing "/"'),
  );
  $form['object_id_field'] = array(
    '#type' => 'textfield',
    '#title' => t('Object ID field machine name'),
    '#default_value' => isset($settings['object_id_field']) ? $settings['object_id_field'] : 'object_id',
    '#description' => t('The plugin needs to see if Object ID exists for the imported item. If it does, the picture URL in the feed will be replaced with a bigger image.'),
  );
  return $form;
}

function kada_some_content_feature_fb_bigger_image_callback($result, $item_key, $element_key, &$field, $settings) {
  $object_id = $result->current_item[$settings['object_id_field']];
  $type = $result->current_item['type'];
  // Replace thumbnail URL with biggest image URL if there is an object ID
  // and the share type is photo.
  if (!empty($object_id) && $type == 'photo') {
    // We need the access token from the query of the url we are fetching from.
    $fetch_url = $result->link;
    $parts = parse_url($fetch_url);
    parse_str($parts['query'], $query);
    $access_token = $query['access_token'];
    // We need the list of image sources in different sizes.
    $fields = 'images';
    // Form a url for fetching a single object from the Graph API.
    $url = $settings['graph_url'] . $object_id . "?access_token=$access_token&fields=$fields";

    // Fetch the JSON value from Graph API.
    $json = file_get_contents($url);
    $image_object = json_decode($json);
    // Make sure there is images array, some object might not have it
    // (like video).
    if (isset($image_object->images)) {
      // Save URL for the biggest (first) image for field processing.
      $field = $image_object->images[0]->source;
    } else {
      // Setting field to NULL if there is no content, so Feeds won't try to
      // process it.
      $field = NULL;
    }
  }
}
