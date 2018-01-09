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
  print "Read from $source_url" . PHP_EOL;
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
  print "Organization $source_url" . PHP_EOL;
  $json = file_get_contents($source_url);
  $data = json_decode($json);

  $count = 0;
  foreach ($data->services as $service_offer) {
    $service_name = $service_offer->service->name;
    if (kada_ptv_reader_service_offer_exists($service_name)) {
      continue;
    }
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
  print "General service description $source_url" . PHP_EOL;
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
  print "Service offer $source_url" . PHP_EOL;
  $json = file_get_contents($source_url);
  $data = json_decode($json);
  $general_description_text = '';

  // Service offer refers to a generic service which we can use to pull in some additional information
  if (!empty($data->statutoryServiceGeneralDescriptionId)) {
    $general_service_description_url = 'https://api.palvelutietovaranto.suomi.fi/api/v7/GeneralDescription/' . $data->statutoryServiceGeneralDescriptionId;
    $general_service_description_data = json_decode(file_get_contents($general_service_description_url));
    if (!empty($general_service_description_data->descriptions)) {
      $generic_description = kada_ptv_reader_get_value_from($general_service_description_data->descriptions, ['language' => 'fi', 'type' => 'Description'], 'value');
      $short_generic_description = kada_ptv_reader_get_value_from($general_service_description_data->descriptions, ['language' => 'fi', 'type' => 'ShortDescription'], 'value');
      $background_generic_description = kada_ptv_reader_get_value_from($general_service_description_data->descriptions, ['language' => 'fi', 'type' => 'BackgroundDescription'], 'value');

      // Default to the lengthiest description and fallback to the shortest:
      if (!empty($background_generic_description)) {
        $general_description_text = $background_generic_description;
      }
      elseif (!empty($generic_description)) {
        $general_description_text = $generic_description;
      }
      elseif (!empty($short_generic_description)) {
        $general_description_text = $short_generic_description;
      }
    }
  }

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
  // Add the generic description from the general service offering data:
  if (!empty($general_description_text)) {
    $desc = $desc . PHP_EOL . PHP_EOL . $general_description_text;
  }
  $ewrapper->field_description->set(['value' => $desc]);

  $ewrapper->save();
  $my_nid = $ewrapper->getIdentifier();

  $service_channels = [];
  foreach ($data->serviceChannels as $service_channel) {
    $service_channels[] = kada_ptv_reader_import_service_channel($service_channel->serviceChannel->id);
  }

  foreach ($service_channels as $service_channel_nid) {
    $endpoints = [
      ['entity_type' => 'node', 'entity_id' => $service_channel_nid],
      ['entity_type' => 'node', 'entity_id' => $my_nid],
    ];
    $rid = relation_insert('place_service', $endpoints);
  }

}

function kada_ptv_reader_import_service_channel($guid, $langcode = 'fi') {
  $source_url = 'https://api.palvelutietovaranto.suomi.fi/api/v7/ServiceChannel/' . $guid;
  print "Service channel $source_url" . PHP_EOL;
  $json = file_get_contents($source_url);
  $data = json_decode($json);

  $title = kada_ptv_reader_get_value_from($data->serviceChannelNames, ['language' => $langcode, 'type' => 'Name'], 'value');
  // Let's see if existing place node (imported by an another service offering already) exists.
  $existing_place_nid = kada_ptv_reader_get_place_nid($title);

  if (!empty($existing_place_nid)) {
    print "Existing place found with nid $existing_place_nid" . PHP_EOL;
    return $existing_place_nid;
  }

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
  $ewrapper->title->set($title);

  $desc = kada_ptv_reader_get_value_from($data->serviceChannelDescriptions, ['language' => $langcode, 'type' => 'Description'], 'value');
  $ewrapper->field_description->set(['value' => $desc]);

  // $ewrapper->field_person_responsible->set($person_responsible);
  // $ewrapper->field_main_image->set(['value' => $desc]);

  if (!empty($data->emails)) {
    $emails = [];
    // Collect emails in an array before saving
    for ($i = 0; $i < count($data->emails); $i++) {
      $emails[] = $data->emails[$i]->value;
    }
    $ewrapper->field_email->set($emails);
  }
  
  if (!empty($data->webPages)) {
    // Use the first web site address from the list. Attraction card website field is single-value field.
    $link = array(
      'url' => $data->webPages[0]->url,
      'title' => $data->webPages[0]->value,
    );
    if (is_null($link['title']) || is_array($link['title'])) {
      $link['title'] = $link['url'];
    }
    $ewrapper->field_website_et->set($link);
  }

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
      $st_municipality_name = kada_ptv_reader_get_value_from($visit_address->municipality->name, ['language' => $langcode], 'value');
      $st_address = $st_address_name . ' ' . $visit_address->streetNumber;
      $st_postal_code = $visit_address->postalCode;

      $ewrapper->field_address_street->thoroughfare = $st_address;
      $ewrapper->field_address_street->postal_code = $st_postal_code;
      $ewrapper->field_address_street->locality = $st_municipality_name;
      $ewrapper->field_address_street->country = 'FI';

      $ewrapper->field_address_visiting->thoroughfare = $st_address;
      $ewrapper->field_address_visiting->postal_code = $st_postal_code;
      $ewrapper->field_address_visiting->locality = $st_municipality_name;
      $ewrapper->field_address_visiting->country = 'FI';
    }

    /** Postal address: **/
    $post_address = kada_ptv_reader_get_value_from($data->addresses, ['type' => 'Postal'], 'postOfficeBoxAddress');
    if (!empty($post_address)) {
      $postal_box = kada_ptv_reader_get_value_from($post_address->postOfficeBox, ['language' => $langcode], 'value');
      //$postal_office = kada_ptv_reader_get_value_from($post_address->postOffice, ['language' => $langcode], 'value');
      $post_municipality_name = kada_ptv_reader_get_value_from($post_address->municipality->name, ['language' => $langcode], 'value');
      $postal_code = $post_address->postalCode;

      $ewrapper->field_address_postal->thoroughfare = $postal_box;
      $ewrapper->field_address_postal->postal_code = $postal_code;
      $ewrapper->field_address_postal->locality = $post_municipality_name;
      $ewrapper->field_address_postal->country = 'FI';
    }
  }

  foreach ($data->serviceHours as $serviceHour) {
    if ($serviceHour->serviceHourType != 'Standard') {
      // We want to read the 'standard' service hours
      continue;
    }
    $availability_text = '';
    foreach ($serviceHour->openingHour as $openingHour) {
      $from = substr($openingHour->from, 0, 5);
      $to = substr($openingHour->to, 0, 5);
      $availability_text .= dt($openingHour->dayFrom) ." $from - $to\n";
    }
    $ewrapper->field_availability->set(['value' => $availability_text, 'format' => 'plain_text']);
  }

  try {
    $ewrapper->save();
  }
  catch (\Exception $e) {
    print $e->getMessage();
  }
  // Return the node id:
  return $ewrapper->getIdentifier();
}

/**
 * Check is service offering with the given name already exists.
 *
 * @param string $service_name
 * @return bool
 */
function kada_ptv_reader_service_offer_exists($service_name) {
  return (bool) db_query('SELECT COUNT(*) FROM {node} WHERE type = :type AND title = :title', [':type' => 'service_offer', ':title' => $service_name])->fetchField();
}

/**
 * Return the node ID of the place node with the given name.
 *
 * @param string $place_name
 * @return int
 */
function kada_ptv_reader_get_place_nid($place_name) {
  return db_query('SELECT nid FROM {node} WHERE type = :type AND title = :title', [':type' => 'place', ':title' => $place_name])->fetchField();
}