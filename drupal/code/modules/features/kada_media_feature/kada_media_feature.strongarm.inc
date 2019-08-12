<?php

/**
 * @file
 * kada_media_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function kada_media_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_caption_trim';
  $strongarm->value = '0';
  $export['colorbox_caption_trim'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_caption_trim_length';
  $strongarm->value = '75';
  $export['colorbox_caption_trim_length'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_compression_type';
  $strongarm->value = 'minified';
  $export['colorbox_compression_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_custom_settings_activate';
  $strongarm->value = '1';
  $export['colorbox_custom_settings_activate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_fixed';
  $strongarm->value = 1;
  $export['colorbox_fixed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_initialheight';
  $strongarm->value = '250';
  $export['colorbox_initialheight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_initialwidth';
  $strongarm->value = '300';
  $export['colorbox_initialwidth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_inline';
  $strongarm->value = 0;
  $export['colorbox_inline'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_load';
  $strongarm->value = 0;
  $export['colorbox_load'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_maxheight';
  $strongarm->value = '90%';
  $export['colorbox_maxheight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_maxwidth';
  $strongarm->value = '90%';
  $export['colorbox_maxwidth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_mobile_detect';
  $strongarm->value = '1';
  $export['colorbox_mobile_detect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_mobile_device_width';
  $strongarm->value = '480px';
  $export['colorbox_mobile_device_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_opacity';
  $strongarm->value = '0.85';
  $export['colorbox_opacity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_overlayclose';
  $strongarm->value = 1;
  $export['colorbox_overlayclose'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_pages';
  $strongarm->value = 'admin*
imagebrowser*
img_assist*
imce*
node/add/*
node/*/edit
print/*
printpdf/*
system/ajax
system/ajax/*';
  $export['colorbox_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_scrolling';
  $strongarm->value = '0';
  $export['colorbox_scrolling'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_slideshow';
  $strongarm->value = '0';
  $export['colorbox_slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_slideshowauto';
  $strongarm->value = 1;
  $export['colorbox_slideshowauto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_slideshowspeed';
  $strongarm->value = '2500';
  $export['colorbox_slideshowspeed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_style';
  $strongarm->value = 'sites/all/libraries/colorbox/example5';
  $export['colorbox_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_text_close';
  $strongarm->value = 'Close';
  $export['colorbox_text_close'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_text_current';
  $strongarm->value = '{current} of {total}';
  $export['colorbox_text_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_text_next';
  $strongarm->value = 'Next »';
  $export['colorbox_text_next'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_text_previous';
  $strongarm->value = '« Prev';
  $export['colorbox_text_previous'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_text_start';
  $strongarm->value = 'start slideshow';
  $export['colorbox_text_start'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_text_stop';
  $strongarm->value = 'stop slideshow';
  $export['colorbox_text_stop'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_transition_speed';
  $strongarm->value = '350';
  $export['colorbox_transition_speed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_transition_type';
  $strongarm->value = 'elastic';
  $export['colorbox_transition_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_visibility';
  $strongarm->value = '0';
  $export['colorbox_visibility'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dnd_modal_height';
  $strongarm->value = '0.75';
  $export['dnd_modal_height'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dnd_modal_width';
  $strongarm->value = '0.75';
  $export['dnd_modal_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_scald_atom__file';
  $strongarm->value = array(
    'default_language' => 'xx-et-current',
    'hide_language_selector' => 0,
    'exclude_language_none' => 1,
    'lock_language' => 0,
    'shared_fields_original_only' => 0,
  );
  $export['entity_translation_settings_scald_atom__file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_scald_atom__image';
  $strongarm->value = array(
    'default_language' => 'xx-et-current',
    'hide_language_selector' => 0,
    'exclude_language_none' => 1,
    'lock_language' => 0,
    'shared_fields_original_only' => 0,
  );
  $export['entity_translation_settings_scald_atom__image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_scald_atom__video';
  $strongarm->value = array(
    'default_language' => 'xx-et-current',
    'hide_language_selector' => 0,
    'exclude_language_none' => 1,
    'lock_language' => 0,
    'shared_fields_original_only' => 0,
  );
  $export['entity_translation_settings_scald_atom__video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_taxonomy_term__scald_authors';
  $strongarm->value = array(
    'default_language' => 'xx-et-default',
    'hide_language_selector' => 1,
    'exclude_language_none' => 0,
    'lock_language' => 0,
    'shared_fields_original_only' => 0,
  );
  $export['entity_translation_settings_taxonomy_term__scald_authors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_taxonomy_term__scald_tags';
  $strongarm->value = array(
    'default_language' => 'xx-et-default',
    'hide_language_selector' => 1,
    'exclude_language_none' => 0,
    'lock_language' => 0,
    'shared_fields_original_only' => 0,
  );
  $export['entity_translation_settings_taxonomy_term__scald_tags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_scald_atom__file';
  $strongarm->value = array(
    'view_modes' => array(
      'title' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'content_full' => array(
        'custom_settings' => FALSE,
      ),
      'content_half' => array(
        'custom_settings' => FALSE,
      ),
      'carousel' => array(
        'custom_settings' => FALSE,
      ),
      'current' => array(
        'custom_settings' => FALSE,
      ),
      'project' => array(
        'custom_settings' => FALSE,
      ),
      'topics' => array(
        'custom_settings' => FALSE,
      ),
      'main_liftup_wide' => array(
        'custom_settings' => FALSE,
      ),
      'main_liftup' => array(
        'custom_settings' => FALSE,
      ),
      'main_content' => array(
        'custom_settings' => FALSE,
      ),
      'full_modal' => array(
        'custom_settings' => FALSE,
      ),
      'event_list' => array(
        'custom_settings' => FALSE,
      ),
      'grid_item' => array(
        'custom_settings' => FALSE,
      ),
      'event_node' => array(
        'custom_settings' => FALSE,
      ),
      'event_tab_item' => array(
        'custom_settings' => FALSE,
      ),
      'event_top_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'person' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'sdl_editor_representation' => array(
        'custom_settings' => FALSE,
      ),
      'file_linked_title' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'redirect' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(
        'atom' => array(
          'default' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'file_linked_title' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_scald_atom__file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_scald_atom__image';
  $strongarm->value = array(
    'view_modes' => array(
      'title' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'content_full' => array(
        'custom_settings' => TRUE,
      ),
      'content_half' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'carousel' => array(
        'custom_settings' => TRUE,
      ),
      'current' => array(
        'custom_settings' => TRUE,
      ),
      'project' => array(
        'custom_settings' => TRUE,
      ),
      'topics' => array(
        'custom_settings' => TRUE,
      ),
      'main_liftup_wide' => array(
        'custom_settings' => TRUE,
      ),
      'main_liftup' => array(
        'custom_settings' => TRUE,
      ),
      'main_content' => array(
        'custom_settings' => TRUE,
      ),
      'full_modal' => array(
        'custom_settings' => TRUE,
      ),
      'event_node' => array(
        'custom_settings' => TRUE,
      ),
      'event_list' => array(
        'custom_settings' => TRUE,
      ),
      'grid_item' => array(
        'custom_settings' => TRUE,
      ),
      'event_tab_item' => array(
        'custom_settings' => TRUE,
      ),
      'event_top_carousel' => array(
        'custom_settings' => TRUE,
      ),
      'person' => array(
        'custom_settings' => FALSE,
      ),
      'file_linked_title' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'opengraph' => array(
        'custom_settings' => FALSE,
      ),
      'content_250_wide' => array(
        'custom_settings' => FALSE,
      ),
      'small_liftup_banner' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'redirect' => array(
          'weight' => '7',
        ),
        'language' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(
        'atom' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'content_full' => array(
            'weight' => 0,
            'visible' => TRUE,
          ),
          'content_half' => array(
            'weight' => 0,
            'visible' => TRUE,
          ),
          'carousel' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'current' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'project' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'topics' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'main_liftup_wide' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'main_liftup' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'main_content' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'full_modal' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'event_node' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'event_list' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'grid_item' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'event_tab_item' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'event_top_carousel' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'small_liftup_banner' => array(
            'weight' => 0,
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_scald_atom__image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_scald_atom__video';
  $strongarm->value = array(
    'view_modes' => array(
      'content_full' => array(
        'custom_settings' => TRUE,
      ),
      'content_half' => array(
        'custom_settings' => TRUE,
      ),
      'title' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'carousel' => array(
        'custom_settings' => FALSE,
      ),
      'current' => array(
        'custom_settings' => FALSE,
      ),
      'project' => array(
        'custom_settings' => FALSE,
      ),
      'topics' => array(
        'custom_settings' => FALSE,
      ),
      'main_liftup_wide' => array(
        'custom_settings' => FALSE,
      ),
      'main_liftup' => array(
        'custom_settings' => FALSE,
      ),
      'main_content' => array(
        'custom_settings' => FALSE,
      ),
      'full_modal' => array(
        'custom_settings' => FALSE,
      ),
      'event_list' => array(
        'custom_settings' => FALSE,
      ),
      'grid_item' => array(
        'custom_settings' => FALSE,
      ),
      'event_node' => array(
        'custom_settings' => FALSE,
      ),
      'event_tab_item' => array(
        'custom_settings' => FALSE,
      ),
      'event_top_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'person' => array(
        'custom_settings' => FALSE,
      ),
      'file_linked_title' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'opengraph' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'redirect' => array(
          'weight' => '3',
        ),
        'language' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(
        'atom' => array(
          'default' => array(
            'weight' => '-2',
            'visible' => TRUE,
          ),
          'content_full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'content_half' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_scald_atom__video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_actions_powers';
  $strongarm->value = array(
    'fetch' => 0,
    'edit' => 1,
    'view' => 2,
    'delete' => 3,
  );
  $export['scald_actions_powers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_atom_defaults';
  $strongarm->value = array(
    'image' => (object) array(
      'thumbnail_source' => 'public://atoms/image.png',
      'description' => '',
      'upload_type' => 'plupload',
      'actions' => 15,
    ),
    'file' => (object) array(
      'thumbnail_source' => 'public://atoms/thumbnail_default.png',
      'description' => '',
      'upload_type' => 'plupload',
      'actions' => 15,
    ),
    'video' => (object) array(
      'thumbnail_source' => 'public://atoms/video.png',
      'description' => '',
      'upload_type' => 'managed_file',
      'actions' => 15,
    ),
  );
  $export['scald_atom_defaults'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_author_vocabulary';
  $strongarm->value = 'scald_authors';
  $export['scald_author_vocabulary'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_context_fallbacks';
  $strongarm->value = array(
    '@default' => array(
      0 => 'title',
    ),
  );
  $export['scald_context_fallbacks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_custom_contexts';
  $strongarm->value = array(
    'content_full' => array(
      'name' => 'content_full',
      'title' => 'Content full',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'content_half' => array(
      'name' => 'content_half',
      'title' => 'Content half',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'carousel' => array(
      'name' => 'carousel',
      'title' => 'Carousel',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => FALSE,
      'formats' => array(),
      'provider' => 'scald',
      'type_format' => array(
        'image' => array(
          'file_format' => '*',
          'transcoder' => 'group-responsive_top_carousel',
        ),
        'video' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
        'file' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
      ),
      'transcoder' => array(
        'image' => array(
          '*' => 'group-responsive_top_carousel',
        ),
        'video' => array(
          '*' => 'passthrough',
        ),
        'file' => array(
          '*' => 'passthrough',
        ),
      ),
      'player' => array(
        'image' => array(
          '*' => 'image_figure',
          'settings' => array(
            'classes' => 'top-carousel',
            'caption' => '',
          ),
        ),
        'video' => array(
          '*' => 'default',
        ),
        'file' => array(
          '*' => 'default',
        ),
      ),
    ),
    'current' => array(
      'name' => 'current',
      'title' => 'Current',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => FALSE,
      'formats' => array(),
      'provider' => 'scald',
      'type_format' => array(
        'image' => array(
          'file_format' => '*',
          'transcoder' => 'style-current',
        ),
        'video' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
        'file' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
      ),
      'transcoder' => array(
        'image' => array(
          '*' => 'style-current',
        ),
        'video' => array(
          '*' => 'passthrough',
        ),
        'file' => array(
          '*' => 'passthrough',
        ),
      ),
      'player' => array(
        'image' => array(
          '*' => 'image_figure',
          'settings' => array(
            'classes' => 'current',
            'caption' => '',
          ),
        ),
        'video' => array(
          '*' => 'default',
        ),
        'file' => array(
          '*' => 'default',
        ),
      ),
    ),
    'project' => array(
      'name' => 'project',
      'title' => 'Project',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => FALSE,
      'formats' => array(),
      'provider' => 'scald',
      'type_format' => array(
        'image' => array(
          'file_format' => '*',
          'transcoder' => 'group-responsive_project',
        ),
        'video' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
        'file' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
      ),
      'transcoder' => array(
        'image' => array(
          '*' => 'group-responsive_project',
        ),
        'video' => array(
          '*' => 'passthrough',
        ),
        'file' => array(
          '*' => 'passthrough',
        ),
      ),
      'player' => array(
        'image' => array(
          '*' => 'image_figure',
          'settings' => array(
            'classes' => 'project',
            'caption' => '',
          ),
        ),
        'video' => array(
          '*' => 'default',
        ),
        'file' => array(
          '*' => 'default',
        ),
      ),
    ),
    'topics' => array(
      'name' => 'topics',
      'title' => 'Topics',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => FALSE,
      'formats' => array(),
      'provider' => 'scald',
      'type_format' => array(
        'file' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
        'image' => array(
          'file_format' => '*',
          'transcoder' => 'group-responsive_topics',
        ),
        'video' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
      ),
      'transcoder' => array(
        'file' => array(
          '*' => 'passthrough',
        ),
        'image' => array(
          '*' => 'group-responsive_topics',
        ),
        'video' => array(
          '*' => 'passthrough',
        ),
      ),
      'player' => array(
        'file' => array(
          '*' => 'default',
        ),
        'image' => array(
          '*' => 'image_figure',
          'settings' => array(
            'classes' => '',
            'caption' => '',
          ),
        ),
        'video' => array(
          '*' => 'default',
        ),
      ),
    ),
    'main_liftup_wide' => array(
      'name' => 'main_liftup_wide',
      'title' => 'Main liftup, wide',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => FALSE,
      'formats' => array(),
      'provider' => 'scald',
      'type_format' => array(
        'file' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
        'image' => array(
          'file_format' => '*',
          'transcoder' => 'group-responsive_main_liftup_wide',
        ),
        'video' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
      ),
      'transcoder' => array(
        'file' => array(
          '*' => 'passthrough',
        ),
        'image' => array(
          '*' => 'group-responsive_main_liftup_wide',
        ),
        'video' => array(
          '*' => 'passthrough',
        ),
      ),
      'player' => array(
        'file' => array(
          '*' => 'default',
        ),
        'image' => array(
          '*' => 'image_figure',
          'settings' => array(
            'classes' => '',
            'caption' => '',
          ),
        ),
        'video' => array(
          '*' => 'default',
        ),
      ),
    ),
    'main_liftup' => array(
      'name' => 'main_liftup',
      'title' => 'Main liftup',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => FALSE,
      'formats' => array(),
      'provider' => 'scald',
      'type_format' => array(
        'file' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
        'image' => array(
          'file_format' => '*',
          'transcoder' => 'group-responsive_main_liftup_narrow',
        ),
        'video' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
      ),
      'transcoder' => array(
        'file' => array(
          '*' => 'passthrough',
        ),
        'image' => array(
          '*' => 'group-responsive_main_liftup_narrow',
        ),
        'video' => array(
          '*' => 'passthrough',
        ),
      ),
      'player' => array(
        'file' => array(
          '*' => 'default',
        ),
        'image' => array(
          '*' => 'image_figure',
          'settings' => array(
            'classes' => '',
            'caption' => '',
          ),
        ),
        'video' => array(
          '*' => 'default',
        ),
      ),
    ),
    'main_content' => array(
      'name' => 'main_content',
      'title' => 'Main content',
      'description' => 'Used for main content images, such as the main image in news articles.',
      'render_language' => 'XHTML',
      'parseable' => FALSE,
      'formats' => array(),
      'provider' => 'scald',
      'type_format' => array(
        'file' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
        'image' => array(
          'file_format' => '*',
          'transcoder' => 'group-responsive_main_content',
        ),
        'video' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
      ),
      'transcoder' => array(
        'file' => array(
          '*' => 'passthrough',
        ),
        'image' => array(
          '*' => 'group-responsive_main_content',
        ),
        'video' => array(
          '*' => 'passthrough',
        ),
      ),
      'player' => array(
        'file' => array(
          '*' => 'default',
        ),
        'image' => array(
          '*' => 'image_figure',
          'settings' => array(
            'classes' => '',
            'caption' => '[atom:title_text]',
          ),
        ),
        'video' => array(
          '*' => 'default',
        ),
      ),
    ),
    'full_modal' => array(
      'name' => 'full_modal',
      'title' => 'Full modal',
      'description' => 'Used for lightbox images.',
      'render_language' => 'XHTML',
      'parseable' => FALSE,
      'formats' => array(),
      'provider' => 'scald',
      'type_format' => array(
        'file' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
        'image' => array(
          'file_format' => '*',
          'transcoder' => 'group-responsive_full_modal',
        ),
        'video' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
      ),
      'transcoder' => array(
        'file' => array(
          '*' => 'passthrough',
        ),
        'image' => array(
          '*' => 'group-responsive_full_modal',
        ),
        'video' => array(
          '*' => 'passthrough',
        ),
      ),
      'player' => array(
        'file' => array(
          '*' => 'default',
        ),
        'image' => array(
          '*' => 'image_figure',
          'settings' => array(
            'classes' => '',
            'caption' => '',
          ),
        ),
        'video' => array(
          '*' => 'default',
        ),
      ),
    ),
    'event_list' => array(
      'name' => 'event_list',
      'title' => 'Event list',
      'description' => 'Used for event list item images',
      'render_language' => 'XHTML',
      'parseable' => FALSE,
      'formats' => array(),
      'provider' => 'scald',
    ),
    'grid_item' => array(
      'name' => 'grid_item',
      'title' => 'Grid item',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => FALSE,
      'formats' => array(),
    ),
    'event_node' => array(
      'name' => 'event_node',
      'title' => 'Event node',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => FALSE,
      'formats' => array(),
    ),
    'event_tab_item' => array(
      'name' => 'event_tab_item',
      'title' => 'Event tab item',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => FALSE,
      'formats' => array(),
    ),
    'event_top_carousel' => array(
      'name' => 'event_top_carousel',
      'title' => 'Event top carousel',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => FALSE,
      'formats' => array(),
    ),
    'person' => array(
      'name' => 'person',
      'title' => 'Person',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => FALSE,
      'formats' => array(),
    ),
    'file_linked_title' => array(
      'name' => 'file_linked_title',
      'title' => 'File linked title',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
      'provider' => 'scald',
    ),
    'search_result' => array(
      'name' => 'search_result',
      'title' => 'Search result',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => FALSE,
      'formats' => array(),
    ),
    'opengraph' => array(
      'name' => 'opengraph',
      'title' => 'OpenGraph',
      'description' => 'Context for social media sharing',
      'render_language' => 'XHTML',
      'parseable' => FALSE,
      'formats' => array(),
    ),
    'content_250_wide' => array(
      'name' => 'content_250_wide',
      'title' => 'Content 250 wide',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'page_carousel' => array(
      'name' => 'page_carousel',
      'title' => 'Page carousel',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'small_liftup_banner' => array(
      'name' => 'small_liftup_banner',
      'title' => 'Small liftup banner',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
  );
  $export['scald_custom_contexts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_tags_vocabulary';
  $strongarm->value = 'scald_tags';
  $export['scald_tags_vocabulary'] = $strongarm;

  return $export;
}
