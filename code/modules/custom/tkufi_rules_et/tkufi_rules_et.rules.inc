<?php

/**
 * @file
 * Entity translation support for Rules module.
 */

/**
 * Implements hook_rules_action_info().
 */
function tkufi_rules_et_rules_action_info() {
  return array(
    'tkufi_rules_et_get_translated_field_value' => array(
      'label' => t('Get translated field value'),
      'group' => t('Custom'),
      'parameter' => array(
        'entity' => array(
          'type' => 'entity',
          'label' => t('Entity'),
          'description' => t('Choose the source entity for the translated value.'),
          'restriction' => 'selector',
          'wrapped' => FALSE,
          'allow null' => TRUE,
        ),
        'language_code' => array(
          'type' => 'text',
          'label' => t('Language'),
          'options list' => 'tkufi_rules_et_list_languages',
        ),
        'field_machine_name' => array(
          'type' => 'text',
          'label' => t('Field machine name'),
        ),
      ),
      'provides' => array(
        'translated_value' => array(
          'type' => 'text',
          'label' => t('Translated value'),
        ),
      ),
    ),
    'tkufi_rules_et_get_translated_formatted_field_value' => array(
      'label' => t('Get translated formatted field value'),
      'group' => t('Custom'),
      'parameter' => array(
        'entity' => array(
          'type' => 'entity',
          'label' => t('Entity'),
          'description' => t('Choose the source entity for the translated value.'),
          'restriction' => 'selector',
          'wrapped' => FALSE,
          'allow null' => TRUE,
        ),
        'language_code' => array(
          'type' => 'text',
          'label' => t('Language'),
          'options list' => 'tkufi_rules_et_list_languages',
        ),
        'field_machine_name' => array(
          'type' => 'text',
          'label' => t('Field machine name'),
        ),
      ),
      'provides' => array(
        'translated_value' => array(
          'type' => 'text_formatted',
          'label' => t('Translated value'),
        ),
      ),
    ),
    'tkufi_rules_et_set_translated_field_value' => array(
      'label' => t('Set translated field value'),
      'group' => t('Custom'),
      'parameter' => array(
        'entity' => array(
          'type' => 'entity',
          'label' => t('Entity'),
          'restriction' => 'selector',
          'description' => t('Choose the target entity for the translated value.'),
          'wrapped' => TRUE,
          'allow null' => TRUE,
        ),
        'language_code' => array(
          'type' => 'text',
          'label' => t('Language'),
          'options list' => 'tkufi_rules_et_list_languages',
        ),
        'field_machine_name' => array(
          'type' => 'text',
          'label' => t('Field machine name'),
        ),
        'translated_value' => array(
          'type' => 'text',
          'label' => t('Translated value'),
          'restriction' => 'selector',
        ),
      ),
    ),
    'tkufi_rules_et_set_translated_formatted_field_value' => array(
      'label' => t('Set translated formatted field value'),
      'group' => t('Custom'),
      'parameter' => array(
        'entity' => array(
          'type' => 'entity',
          'label' => t('Entity'),
          'restriction' => 'selector',
          'description' => t('Choose the target entity for the translated value.'),
          'wrapped' => TRUE,
          'allow null' => TRUE,
        ),
        'language_code' => array(
          'type' => 'text',
          'label' => t('Language'),
          'options list' => 'tkufi_rules_et_list_languages',
        ),
        'field_machine_name' => array(
          'type' => 'text',
          'label' => t('Field machine name'),
        ),
        'translated_value' => array(
          'type' => 'text_formatted',
          'label' => t('Translated value'),
          'restriction' => 'selector',
        ),
      ),
    ),
    'tkufi_rules_et_add_translation' => array(
      'label' => t('Add translation to entity'),
      'group' => t('Custom'),
      'parameter' => array(
        'entity' => array(
          'type' => 'entity',
          'label' => t('Entity'),
          'restriction' => 'selector',
          'description' => t('Choose the source entity to add translation to.'),
          'wrapped' => FALSE,
        ),
        'target_language_code' => array(
          'type' => 'text',
          'label' => t('Language'),
          'options list' => 'tkufi_rules_et_list_languages',
        ),
      ),
    ),
    'tkufi_rules_et_get_translation_languages' => array(
      'label' => t('Get source language and translated languages'),
      'group' => t('Custom'),
      'parameter' => array(
        'entity' => array(
          'type' => 'entity',
          'label' => t('Entity'),
          'description' => t('Choose the source entity for the languages to fetch.'),
          'restriction' => 'selector',
          'wrapped' => FALSE,
        ),
      ),
      'provides' => array(
        'source_lang_code' => array(
          'type' => 'text',
          'label' => t('Source language code'),
        ),
        'translated_lang_codes' => array(
          'type' => 'list<text>',
          'label' => t('Translated language codes'),
        ),
      ),
    ),
  );
}

/**
 * Return an array of enabled languages.
 */
function tkufi_rules_et_list_languages() {
  return locale_language_list('name');
}

/**
 * Missing short description. (@TODO)
 *
 * Return the translated value from the given entity's given field in the
 * selected language.
 */
function tkufi_rules_et_get_translated_field_value($entity, $language_code, $field_machine_name) {
  // If the entity is new, for example imported data, then we cannot use
  // Entity Metadata wrapper.
  if ($entity->is_new) {
    $items = field_get_items('node', $entity, $field_machine_name, $language_code);
    // Get the first item.
    // @TODO: Maybe this should handle multiple values?
    $item = reset($items);
    $translated_value = $item['value'];
  }
  else {
    $wrapper = entity_metadata_wrapper('node', $entity);
    $translated_value = $wrapper->language($language_code)->$field_machine_name->value();
  }
  return array(
    'translated_value' => $translated_value,
  );
}

/**
 * Missing short description. (@TODO)
 *
 * Return the translated value from the given entity's given field in the
 * selected language.
 */
function tkufi_rules_et_get_translated_formatted_field_value($entity, $language_code, $field_machine_name) {
  // If the entity is new, for example imported data, then we cannot use
  // Entity Metadata wrapper.
  if ($entity->is_new) {
    $items = field_get_items('node', $entity, $field_machine_name, $language_code);
    // Get the first item.
    // @TODO: Maybe this should handle multiple values?
    $item = reset($items);
    $translated_value = $item['value'];
    $format = $item['format'];
  }
  else {
    $wrapper = entity_metadata_wrapper('node', $entity);
    $translated_value = $wrapper->language($language_code)->$field_machine_name->value();
    $format = $wrapper->language($language_code)->$field_machine_name->format();
  }
  return array(
    'translated_value' => array(
      'value' => $translated_value,
      'format' => $format,
    ),
  );
}

/**
 * Missing short description. (@TODO)
 *
 * Save the translated value to the given entity's given field in the selected
 * language.
 */
function tkufi_rules_et_set_translated_field_value($entity, $language_code, $field_machine_name, $translated_value) {
  $field_info = field_info_field($field_machine_name);
  // Checking if the field is a single value field or not.
  if ($field_info['cardinality'] == 1) {
    $entity->language($language_code)->$field_machine_name->set($translated_value);
  }
  else {
    $entity->language($language_code)->$field_machine_name->set(array($translated_value));
  }
}

/**
 * Missing short description. (@TODO)
 *
 * Save the translated value to the given entity's given field in the selected
 * language.
 */
function tkufi_rules_et_set_translated_formatted_field_value($entity, $language_code, $field_machine_name, $translated_value) {
  $field_info = field_info_field($field_machine_name);
  // Checking if the field is a single value field or not.
  if ($field_info['cardinality'] == 1) {
    $entity->language($language_code)->$field_machine_name->set($translated_value);
  }
  else {
    $entity->language($language_code)->$field_machine_name->set(array($translated_value));
  }
}

/**
 * Return an array of enabled languages.
 */
function tkufi_rules_et_add_translation($entity, $target_language_code) {
  $translation = array(
    'translate' => 0,
    'status' => 1,
  // Here is the target language.
    'language' => $target_language_code,
  // Here is the source language.
    'source' => $entity->language,
  );

  // Make sure we are not trying to add translation when updating source.
  if ($entity->language != $target_language_code) {
    // Get the translation handler in place.
    $handler = entity_translation_get_handler('node', $entity);
    $handler->setTranslation($translation);

    // Create url alias for translation
    // This is necessary in order for the translated node get a correct alias.
    pathauto_node_update_alias($entity, 'update', array('language' => $target_language_code));
  }
}

/**
 * Return source language and translated languages of given entity.
 */
function tkufi_rules_et_get_translation_languages($entity) {
  $translated_lang_codes = array();
  $source_lang_code = '';
  if (isset($entity->translations->original)) {
    // Original language of the entity.
    $source_lang_code = $entity->translations->original;

    // Get language codes for of translations.
    foreach ($entity->translations->data as $langcode => $translation_info) {
      // Only translations have source value.
      if (!empty($translation_info['source'])) {
        $translated_lang_codes[] = $langcode;
      }
    }
  }
  return array(
    'source_lang_code' => $source_lang_code,
    'translated_lang_codes' => $translated_lang_codes,
  );
}
