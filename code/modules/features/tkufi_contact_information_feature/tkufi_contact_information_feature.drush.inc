<?php

function tkufi_contact_information_feature_drush_command() {
  $items['tkufi-person-translation-sync'] = array(
    'description' => 'Syncs person field values from finnish to other languages. IMPORTANT! Use base url in drush command in order to get content indexed properly.',
    'aliases' => array('tpts'),
  );
  $items['tkufi-person-employee-title-sync'] = array(
    'description' => 'Syncs person field_employee_title values from und to other languages. IMPORTANT! Use base url in drush command in order to get content indexed properly.',
    'aliases' => array('tpets'),
  );

  return $items;
}

function drush_tkufi_contact_information_feature_tkufi_person_translation_sync() {
  module_load_include('inc', 'node', 'node.pages');
  $languages = array('en', 'sv');
  $persons_query = new EntityFieldQuery;
  $persons = $persons_query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'person')
    ->execute();
  if (isset($persons['node'])) {
    $persons = $persons['node'];
    $total = count($persons);
    $n = 0;
    foreach ($persons as $nid => $obj) {
      $node = node_load($nid);
      $translation_node = $node;
      $handler  = entity_translation_get_handler('node', $node);
      foreach ($languages as $lang) {
        $values = array();
        // Change translatable fields languages to trasnlation language.
        foreach(field_info_instances('node', $node->type) as $instance) {
          $field_name = $instance['field_name'];
          $field = field_info_field($field_name);
          if ($field['translatable'] && isset($translation_node->$field_name)) {
            foreach ($translation_node->$field_name as $lang_key => $field) {
              if ($lang_key == $node->language) {
                $values[$field_name][$lang] = $field;
              }
            }
          }
        }
        // Create a translation.
        $translation = array(
          'translate' => 0,
          'status' => 1,
          'language' => $lang,
          'source' => $node->language,
        );
        $handler->setTranslation($translation, $values);
        node_save($translation_node);
      }
      $n++;
      drush_log('Processed (' . $n . '/' . $total . '): ' . $nid . ' ' . $node->title, 'ok');
    }
  }
}

function drush_tkufi_contact_information_feature_tkufi_person_employee_title_sync() {
  $persons_query = new EntityFieldQuery;
  $persons = $persons_query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'person')
    ->execute();
  if (isset($persons['node'])) {
    $persons = $persons['node'];
    $total = count($persons);
    $n = 0;
    foreach ($persons as $nid => $obj) {
      $node = node_load($nid);
      if(empty($node->field_employee_title['und'])) {
        $n++;
        drush_log('Processed (' . $n . '/' . $total . '): ' . $nid . ' ' . $node->title, 'ok');
        continue;
      }
      $node->field_employee_title = array('fi' => $node->field_employee_title['und'], 'und' => NULL);
      node_save($node);
      $n++;
      drush_log('Processed (' . $n . '/' . $total . '): ' . $nid . ' ' . $node->title, 'ok');
    }
  }
}
