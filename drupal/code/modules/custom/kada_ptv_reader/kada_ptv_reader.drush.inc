<?php
define('KADA_PTV_PORI_URL', 'https://api.palvelutietovaranto.suomi.fi/api/v7/Organization/0fa3a2d7-3de7-4986-9295-d3c75e272d74');
define('NODE_TYPE_SERVICE', 'service');
define('NODE_TYPE_SERVICE_CHANNEL', 'place');

/**
 * @file
 * Drush commands for PTV Reader module.
 */

/**
 * Implements hook_drush_command().
 */
function kada_ptv_reader_drush_command() {
  $items = array();

  $items['kada-ptv-reader-import-service-data'] = array(
    'description' => 'Import all generic services from the PTV API',
    'aliases' => array('ptv-import'),
  );
  $items['kada-ptv-reader-import-organizations-service-offers'] = array(
    'description' => 'Import an organization from the PTV API',
    'aliases' => array('ptv-import-organization'),
  );

  return $items;
}

/**
 * Implements hook_drush_help().
 */
function kada_ptv_reader_drush_help($section) {
  switch ($section) {
    case 'drush:ptv-reader-import-service-data':
      return dt('Import and update all new items from the PTV API');
  }
}

/**
 * Import general service descriptions.
 *
 * @param int $max
 *  Limit the maximum amount of items to retrieve.
 */
function drush_kada_ptv_reader_import_service_data($max = 9999999) {
  $source_url = 'https://api.palvelutietovaranto.suomi.fi/api/v7/GeneralDescription';
  print "Read from $source_url\n";
  $json = file_get_contents($source_url);
  $data = json_decode($json);

  $count = 0;
  foreach ($data->itemList as $service) {
    kada_ptv_reader_import_service($service->id);
    if (++$count == $max) {
      return;
    }
  }
}

/**
 * @param $guid
 *  The organization GUID (such as 0fa3a2d7-3de7-4986-9295-d3c75e272d74 for City of Pori)
 * @param int $max
 *  Limit the maximum amount of items to retrieve.
 */
function drush_kada_ptv_reader_import_organizations_service_offers($guid, $max = 9999999) {
  if (empty($source_url)) {
    dt('The organization identifier is needed.');
  }

  $source_url = 'https://api.palvelutietovaranto.suomi.fi/api/v7/Organization/' . $guid;
  print "Read from $source_url\n";
  $json = file_get_contents($source_url);
  $data = json_decode($json);

  $count = 0;
  foreach ($data->services as $service_offer) {
    kada_ptv_reader_import_service_offer($service_offer->service->id);
    if (++$count == $max) {
      return;
    }
  }
}

/**
 * Generic helper to retrieve the value from an array of items based on the given filter.
 *
 * @param $items
 *  The list of items to search from.
 * @param $filters
 *  The filters, for instance ['language' => 'fi', 'type' => 'Description']
 * @param $returned_attr
 *  The name of the attribute to be returned from the result item
 * @return array|mixed|null
 */
function kada_ptv_reader_get_value_from($items, $filters, $returned_attr) {
  if (empty($items)) {
    return NULL;
  }
  $ret = [];
  foreach ($items as $item) {
    $ok = TRUE;
    foreach ($filters as $attribute_name => $attribute_value) {
      if (!isset($item->{$attribute_name}) || $item->{$attribute_name} != $attribute_value) {
        $ok = FALSE;
      }
    }
    if ($ok && isset($item->{$returned_attr})) {
      $ret[] = $item->{$returned_attr};
    }
  }

  return (count($ret) == 1)? $ret[0] : $ret;
}

function kada_ptv_reader_create_term_if_not_exist($vocabulary_name, $term_name, $langcode) {
  // Search for an existing term:
  $terms = taxonomy_get_term_by_name($term_name, $vocabulary_name);
  if (count($terms) > 0) {
    return (int) array_pop($terms)->tid;
  }

  // Create term to the given vocabulary:
  $vocabulary = taxonomy_vocabulary_machine_name_load($vocabulary_name);
  if ($vocabulary !== FALSE && is_string($term_name)) {
    $term = new stdClass();
    $term->name = $term_name;
    $term->vid = $vocabulary->vid;
    $term->language = $langcode;
    taxonomy_term_save($term);
    return (int) $term->tid;
  }

  return NULL;
}

function kada_ptv_reader_import_service($guid, $langcode = 'fi') {
  $source_url = 'https://api.palvelutietovaranto.suomi.fi/api/v7/GeneralDescription/' . $guid;
  print "Read from $source_url\n";
  $json = file_get_contents($source_url);
  $data = json_decode($json);

  $values = [
    'type' => NODE_TYPE_SERVICE,
    'language' => $langcode,
    'uid' => 1,
    'status' => 1,
    'promote' => 0,
    'comment' => 0,
  ];
  $entity = entity_create('node', $values);

  $ewrapper = entity_metadata_wrapper('node', $entity);
  $ewrapper->title->set(kada_ptv_reader_get_value_from($data->names, ['language' => $langcode, 'type' => 'Name'], 'value'));

  $desc = kada_ptv_reader_get_value_from($data->descriptions, ['language' => $langcode, 'type' => 'BackgroundDescription'], 'value');
  $ewrapper->field_description->set(['value' => $desc]);

  $class_tids = [];
  foreach ($data->serviceClasses as $class) {
    $class_value = kada_ptv_reader_get_value_from($class->name, ['language' => $langcode], 'value');
    $class_tids[] = kada_ptv_reader_create_term_if_not_exist('service_classification', $class_value, $langcode);
  }
  $ewrapper->field_classification->set($class_tids);

  $audience_tids = [];
  foreach ($data->targetGroups as $audience) {
    $audience_value = kada_ptv_reader_get_value_from($audience->name, ['language' => $langcode], 'value');
    $audience_tids[] = kada_ptv_reader_create_term_if_not_exist('target_audience', $audience_value, $langcode);
  }
  $ewrapper->field_target_audience->set($audience_tids);

  $ewrapper->save();
}

function kada_ptv_reader_import_service_offer($guid, $langcode = 'fi') {
  $source_url = 'https://api.palvelutietovaranto.suomi.fi/api/v7/Service/' . $guid;
  print "Read from $source_url\n";
  $json = file_get_contents($source_url);
  $data = json_decode($json);

  $values = [
    'type' => 'service_offer',
    'language' => $langcode,
    'uid' => 1,
    'status' => 1,
    'promote' => 0,
    'comment' => 0,
  ];
  $entity = entity_create('node', $values);

  $ewrapper = entity_metadata_wrapper('node', $entity);
  $ewrapper->title->set(kada_ptv_reader_get_value_from($data->serviceNames, ['language' => $langcode, 'type' => 'Name'], 'value'));

  $desc = kada_ptv_reader_get_value_from($data->serviceDescriptions, ['language' => $langcode, 'type' => 'Description'], 'value');
  $ewrapper->field_description->set(['value' => $desc]);

  $ewrapper->save();
  $my_nid = $ewrapper->getIdentifier();
  $node = node_load($my_nid);

  $service_channels = [];
  foreach ($data->serviceChannels as $service_channel) {
    $service_channels[] = kada_ptv_reader_import_service_channel($service_channel->serviceChannel->id);
  }

  foreach ($service_channels as $service_channel_nid) {
    $node->field_provided_at[LANGUAGE_NONE][] = [
      'other_entity_type' => 'node',
      'other_entity_id' => $service_channel_nid,
    ];
  }
  node_save($node);

}

function kada_ptv_reader_import_service_channel($guid, $langcode = 'fi') {
  $source_url = 'https://api.palvelutietovaranto.suomi.fi/api/v7/ServiceChannel/' . $guid;
  print "Read from $source_url\n";
  $json = file_get_contents($source_url);
  $data = json_decode($json);

  $values = [
    'type' => NODE_TYPE_SERVICE_CHANNEL,
    'language' => $langcode,
    'uid' => 1,
    'status' => 1,
    'promote' => 0,
    'comment' => 0,
  ];
  $entity = entity_create('node', $values);

  $ewrapper = entity_metadata_wrapper('node', $entity);
  $title = kada_ptv_reader_get_value_from($data->serviceChannelNames, ['language' => $langcode, 'type' => 'Name'], 'value');
  $ewrapper->title->set($title);

  $desc = kada_ptv_reader_get_value_from($data->serviceChannelDescriptions, ['language' => $langcode, 'type' => 'Description'], 'value');
  $ewrapper->field_description->set(['value' => $desc]);

  // $ewrapper->field_person_responsible->set($person_responsible);
  // $ewrapper->field_main_image->set(['value' => $desc]);

  $email = kada_ptv_reader_get_value_from($data->emails, ['language' => $langcode], 'value');
  $ewrapper->field_email->set([$email]);

  $link = array(
    'url' => kada_ptv_reader_get_value_from($data->webPages, ['language' => $langcode], 'url'),
    'title' => kada_ptv_reader_get_value_from($data->webPages, ['language' => $langcode], 'value'),
    'attributes' => []
  );
  // $ewrapper->field_website_et->set($link);

  $phone_prefix = kada_ptv_reader_get_value_from($data->phoneNumbers, ['language' => $langcode], 'prefixNumber');
  $phone_number = kada_ptv_reader_get_value_from($data->phoneNumbers, ['language' => $langcode], 'number');
  $ewrapper->field_phone->set($phone_prefix . $phone_number);

  $municipality_name = kada_ptv_reader_get_value_from($data->municipality->name, ['language' => $langcode], 'value');
  $municipality_tid = kada_ptv_reader_create_term_if_not_exist('municipality', $municipality_name, $langcode);
  if (!empty($municipality_tid)) {
    $ewrapper->field_municipality_term->set($municipality_tid);
  }

  // $ewrapper->field_phone_switch->set(['value' => $desc]);
  // $ewrapper->field_fax_number->set(['value' => $desc]);
  // $ewrapper->field_billing_address->set(['value' => $desc]);
  // $ewrapper->field_district->set(['value' => $desc]);
  // $ewrapper->field_service_offer->set(['value' => $desc]);

  if (!empty($data->addresses)) {
    /** Street address: **/
    $visit_address = kada_ptv_reader_get_value_from($data->addresses, ['type' => 'Location'], 'streetAddress');
    if (!empty($visit_address)) {
      $st_address_name = kada_ptv_reader_get_value_from($visit_address->street, ['language' => $langcode], 'value');
      $st_address = $st_address_name . ' ' . $visit_address->streetNumber;
      print_r($st_address);
      $ewrapper->field_address_street->set([$st_address]);
      $ewrapper->field_address_visiting->set([$st_address]);
    }

    /** Postal address: **/
    $post_address = kada_ptv_reader_get_value_from($data->addresses, ['type' => 'Postal'], 'postOfficeBoxAddress');
    if (!empty($post_address)) {
      $box = kada_ptv_reader_get_value_from($post_address->postOfficeBox, ['language' => $langcode], 'value');
      $office = kada_ptv_reader_get_value_from($post_address->postOffice, ['language' => $langcode], 'value');
      $code = $post_address->postalCode;
      $postal_code = "$box $code $office";
      print_r($postal_code);
      $ewrapper->field_address_postal->set([$postal_code]);
    }
  }

  foreach ($data->serviceHours as $serviceHour) {
    if ($serviceHour->serviceHourType != 'Standard') {
      // We want to read the 'standard' service hours
      continue;
    }
    $availability_text = '';
    foreach ($serviceHour->openingHour as $openingHour) {
      $availability_text .= $hours = dt($openingHour->dayFrom) .' '. $openingHour->from .' - '. $openingHour->to ."\n";
      $ewrapper->field_availability->set(['value' => $availability_text, 'format' => 'plain_text']);
    }
  }

  $ewrapper->save();
  // Return the node id:
  return $ewrapper->getIdentifier();
}
