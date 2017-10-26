<?php

function kada_telephone_numbers_feature_drush_command() {
  return array(
    'tkufi-telephone-numbers-feature-migrate-numbers' => array(
      'description' => 'Migrate old phonenumber fields to new telephone numbers.',
    ),
  );
}

function drush_kada_telephone_numbers_feature_migrate_numbers() {
  db_query('ALTER TABLE field_data_field_tn_number MODIFY COLUMN field_tn_number_value BIGINT');
  db_query('ALTER TABLE field_revision_field_tn_number MODIFY COLUMN field_tn_number_value BIGINT');
  // Load the controller class file.
  module_load_include('inc', 'entity', 'includes/entity.controller');
  // Phonenumber field mapping
  $phonenumber_fields = array(
    'field_phone' => array(
      'type' => 'phone',
    ),
    'field_phone_switch' => array(
      'type' => 'phone',
    ),
    'field_fax_number' => array(
      'type' => 'fax',
    ),
  );
  // Look for nodes that contains migrable fields.
  $nodes = db_query('SELECT nid from {node} WHERE type IN (:types)', array(':types' => array('place')));
  $nodes = $nodes->fetchAll();
  $count = count($nodes);
  for ($i = 0; $i < $count; $i++) {
    $node = node_load($nodes[$i]->nid);
    // Go through phonenumber fields and create field_collection entries.
    foreach ($phonenumber_fields as $field_name => $field_settings) {
      if (empty($node->{$field_name}[LANGUAGE_NONE][0]['value'])) {
        continue;
      }
      // Get number that needs to be migrated.
      $numbers = preg_split('/[\/,]/', $node->{$field_name}[LANGUAGE_NONE][0]['value']);
      foreach ($numbers as $number) {
        $number = preg_replace('/[^0-9]/', '', $number);
        if (!$number || $number == '3582') {
          // Skip empty and broken numbers
          continue;
        }
        $number = intval(str_replace('358', '', $number));
        if ($number > 2147483647) {
          print 'SKIP: ' . $node->nid . ' ' . $number . "\n";
          continue;
        }
        // Setup the values in the structure expected by the field_collection entity.
        $fc = entity_create('field_collection_item', array('field_name' => 'field_telephone_numbers'));
        $fc->setHostEntity('node', $node);
        $fc_wrapper = entity_metadata_wrapper('field_collection_item', $fc);
        $fc_wrapper->field_tn_code->set(358);
        $fc_wrapper->field_tn_number->set($number);
        $fc_wrapper->field_tn_type->set($field_settings['type']);
        $fc_wrapper->save(TRUE);
        node_save($node);
      }
    }
  }
}