<?php
/**
 * @file
 * tkufi_media_feature.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function tkufi_media_feature_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'scald_atom|file|default';
  $ds_fieldsetting->entity_type = 'scald_atom';
  $ds_fieldsetting->bundle = 'file';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title_file_link' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['scald_atom|file|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'scald_atom|image|carousel';
  $ds_fieldsetting->entity_type = 'scald_atom';
  $ds_fieldsetting->bundle = 'image';
  $ds_fieldsetting->view_mode = 'carousel';
  $ds_fieldsetting->settings = array(
    'scald_thumbnail' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['scald_atom|image|carousel'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'scald_atom|image|content_full';
  $ds_fieldsetting->entity_type = 'scald_atom';
  $ds_fieldsetting->bundle = 'image';
  $ds_fieldsetting->view_mode = 'content_full';
  $ds_fieldsetting->settings = array(
    'scald_thumbnail' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['scald_atom|image|content_full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'scald_atom|image|content_half';
  $ds_fieldsetting->entity_type = 'scald_atom';
  $ds_fieldsetting->bundle = 'image';
  $ds_fieldsetting->view_mode = 'content_half';
  $ds_fieldsetting->settings = array(
    'scald_thumbnail' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['scald_atom|image|content_half'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'scald_atom|image|current';
  $ds_fieldsetting->entity_type = 'scald_atom';
  $ds_fieldsetting->bundle = 'image';
  $ds_fieldsetting->view_mode = 'current';
  $ds_fieldsetting->settings = array(
    'scald_thumbnail' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['scald_atom|image|current'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'scald_atom|image|event_list';
  $ds_fieldsetting->entity_type = 'scald_atom';
  $ds_fieldsetting->bundle = 'image';
  $ds_fieldsetting->view_mode = 'event_list';
  $ds_fieldsetting->settings = array(
    'scald_thumbnail' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['scald_atom|image|event_list'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'scald_atom|image|event_tab_item';
  $ds_fieldsetting->entity_type = 'scald_atom';
  $ds_fieldsetting->bundle = 'image';
  $ds_fieldsetting->view_mode = 'event_tab_item';
  $ds_fieldsetting->settings = array(
    'scald_thumbnail' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['scald_atom|image|event_tab_item'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'scald_atom|image|event_top_carousel';
  $ds_fieldsetting->entity_type = 'scald_atom';
  $ds_fieldsetting->bundle = 'image';
  $ds_fieldsetting->view_mode = 'event_top_carousel';
  $ds_fieldsetting->settings = array(
    'scald_thumbnail' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['scald_atom|image|event_top_carousel'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'scald_atom|image|full_modal';
  $ds_fieldsetting->entity_type = 'scald_atom';
  $ds_fieldsetting->bundle = 'image';
  $ds_fieldsetting->view_mode = 'full_modal';
  $ds_fieldsetting->settings = array(
    'scald_thumbnail' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['scald_atom|image|full_modal'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'scald_atom|image|grid_item';
  $ds_fieldsetting->entity_type = 'scald_atom';
  $ds_fieldsetting->bundle = 'image';
  $ds_fieldsetting->view_mode = 'grid_item';
  $ds_fieldsetting->settings = array(
    'scald_thumbnail' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['scald_atom|image|grid_item'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'scald_atom|image|main_content';
  $ds_fieldsetting->entity_type = 'scald_atom';
  $ds_fieldsetting->bundle = 'image';
  $ds_fieldsetting->view_mode = 'main_content';
  $ds_fieldsetting->settings = array(
    'scald_thumbnail' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['scald_atom|image|main_content'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'scald_atom|image|main_liftup';
  $ds_fieldsetting->entity_type = 'scald_atom';
  $ds_fieldsetting->bundle = 'image';
  $ds_fieldsetting->view_mode = 'main_liftup';
  $ds_fieldsetting->settings = array(
    'scald_thumbnail' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['scald_atom|image|main_liftup'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'scald_atom|image|main_liftup_wide';
  $ds_fieldsetting->entity_type = 'scald_atom';
  $ds_fieldsetting->bundle = 'image';
  $ds_fieldsetting->view_mode = 'main_liftup_wide';
  $ds_fieldsetting->settings = array(
    'scald_thumbnail' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['scald_atom|image|main_liftup_wide'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'scald_atom|image|project';
  $ds_fieldsetting->entity_type = 'scald_atom';
  $ds_fieldsetting->bundle = 'image';
  $ds_fieldsetting->view_mode = 'project';
  $ds_fieldsetting->settings = array(
    'scald_thumbnail' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['scald_atom|image|project'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'scald_atom|image|topics';
  $ds_fieldsetting->entity_type = 'scald_atom';
  $ds_fieldsetting->bundle = 'image';
  $ds_fieldsetting->view_mode = 'topics';
  $ds_fieldsetting->settings = array(
    'scald_thumbnail' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['scald_atom|image|topics'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function tkufi_media_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|file|default';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'file';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'media_atom_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'main' => array(
        0 => 'title_file_link',
      ),
    ),
    'fields' => array(
      'title_file_link' => 'main',
    ),
    'classes' => array(),
    'wrappers' => array(
      'main' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => 'class="scald_atom--file"',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['scald_atom|file|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|image|carousel';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'carousel';
  $ds_layout->layout = 'media_atom_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'main' => array(
        0 => 'scald_thumbnail',
      ),
    ),
    'fields' => array(
      'scald_thumbnail' => 'main',
    ),
    'classes' => array(),
    'wrappers' => array(
      'main' => 'div',
    ),
    'layout_wrapper' => 'figure',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['scald_atom|image|carousel'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|image|content_full';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'content_full';
  $ds_layout->layout = 'media_atom_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'main' => array(
        0 => 'scald_thumbnail',
      ),
    ),
    'fields' => array(
      'scald_thumbnail' => 'main',
    ),
    'classes' => array(),
    'wrappers' => array(
      'main' => 'div',
    ),
    'layout_wrapper' => 'figure',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['scald_atom|image|content_full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|image|content_half';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'content_half';
  $ds_layout->layout = 'media_atom_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'main' => array(
        0 => 'scald_thumbnail',
      ),
    ),
    'fields' => array(
      'scald_thumbnail' => 'main',
    ),
    'classes' => array(),
    'wrappers' => array(
      'main' => 'div',
    ),
    'layout_wrapper' => 'figure',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['scald_atom|image|content_half'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|image|current';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'current';
  $ds_layout->layout = 'media_atom_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'main' => array(
        0 => 'scald_thumbnail',
      ),
    ),
    'fields' => array(
      'scald_thumbnail' => 'main',
    ),
    'classes' => array(),
    'wrappers' => array(
      'main' => 'div',
    ),
    'layout_wrapper' => 'figure',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['scald_atom|image|current'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|image|event_list';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'event_list';
  $ds_layout->layout = 'media_atom_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'main' => array(
        0 => 'scald_thumbnail',
      ),
    ),
    'fields' => array(
      'scald_thumbnail' => 'main',
    ),
    'classes' => array(),
    'wrappers' => array(
      'main' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['scald_atom|image|event_list'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|image|event_node';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'event_node';
  $ds_layout->layout = 'media_atom_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'main' => array(
        0 => 'scald_thumbnail',
      ),
    ),
    'fields' => array(
      'scald_thumbnail' => 'main',
    ),
    'classes' => array(),
    'wrappers' => array(
      'main' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['scald_atom|image|event_node'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|image|event_tab_item';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'event_tab_item';
  $ds_layout->layout = 'media_atom_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'main' => array(
        0 => 'scald_thumbnail',
      ),
    ),
    'fields' => array(
      'scald_thumbnail' => 'main',
    ),
    'classes' => array(),
    'wrappers' => array(
      'main' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['scald_atom|image|event_tab_item'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|image|event_top_carousel';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'event_top_carousel';
  $ds_layout->layout = 'media_atom_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'main' => array(
        0 => 'scald_thumbnail',
      ),
    ),
    'fields' => array(
      'scald_thumbnail' => 'main',
    ),
    'classes' => array(),
    'wrappers' => array(
      'main' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['scald_atom|image|event_top_carousel'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|image|full_modal';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'full_modal';
  $ds_layout->layout = 'media_atom_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'main' => array(
        0 => 'scald_thumbnail',
      ),
    ),
    'fields' => array(
      'scald_thumbnail' => 'main',
    ),
    'classes' => array(),
    'wrappers' => array(
      'main' => 'div',
    ),
    'layout_wrapper' => 'figure',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['scald_atom|image|full_modal'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|image|grid_item';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'grid_item';
  $ds_layout->layout = 'media_atom_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'main' => array(
        0 => 'scald_thumbnail',
      ),
    ),
    'fields' => array(
      'scald_thumbnail' => 'main',
    ),
    'classes' => array(),
    'wrappers' => array(
      'main' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['scald_atom|image|grid_item'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|image|main_content';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'main_content';
  $ds_layout->layout = 'media_atom_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'main' => array(
        0 => 'scald_thumbnail',
      ),
    ),
    'fields' => array(
      'scald_thumbnail' => 'main',
    ),
    'classes' => array(),
    'wrappers' => array(
      'main' => 'div',
    ),
    'layout_wrapper' => 'figure',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['scald_atom|image|main_content'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|image|main_liftup';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'main_liftup';
  $ds_layout->layout = 'media_atom_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'main' => array(
        0 => 'scald_thumbnail',
      ),
    ),
    'fields' => array(
      'scald_thumbnail' => 'main',
    ),
    'classes' => array(),
    'wrappers' => array(
      'main' => 'div',
    ),
    'layout_wrapper' => 'figure',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['scald_atom|image|main_liftup'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|image|main_liftup_wide';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'main_liftup_wide';
  $ds_layout->layout = 'media_atom_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'main' => array(
        0 => 'scald_thumbnail',
      ),
    ),
    'fields' => array(
      'scald_thumbnail' => 'main',
    ),
    'classes' => array(),
    'wrappers' => array(
      'main' => 'div',
    ),
    'layout_wrapper' => 'figure',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['scald_atom|image|main_liftup_wide'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|image|project';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'project';
  $ds_layout->layout = 'media_atom_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'main' => array(
        0 => 'scald_thumbnail',
      ),
    ),
    'fields' => array(
      'scald_thumbnail' => 'main',
    ),
    'classes' => array(),
    'wrappers' => array(
      'main' => 'div',
    ),
    'layout_wrapper' => 'figure',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['scald_atom|image|project'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|image|topics';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'topics';
  $ds_layout->layout = 'media_atom_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'main' => array(
        0 => 'scald_thumbnail',
      ),
    ),
    'fields' => array(
      'scald_thumbnail' => 'main',
    ),
    'classes' => array(),
    'wrappers' => array(
      'main' => 'div',
    ),
    'layout_wrapper' => 'figure',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['scald_atom|image|topics'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|video|content_full';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'video';
  $ds_layout->view_mode = 'content_full';
  $ds_layout->layout = 'media_atom_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'main' => array(
        0 => 'atom',
        1 => 'scald_thumbnail',
      ),
    ),
    'fields' => array(
      'atom' => 'main',
      'scald_thumbnail' => 'main',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['scald_atom|video|content_full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'scald_atom|video|content_half';
  $ds_layout->entity_type = 'scald_atom';
  $ds_layout->bundle = 'video';
  $ds_layout->view_mode = 'content_half';
  $ds_layout->layout = 'media_atom_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'main' => array(
        0 => 'atom',
        1 => 'scald_thumbnail',
      ),
    ),
    'fields' => array(
      'atom' => 'main',
      'scald_thumbnail' => 'main',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['scald_atom|video|content_half'] = $ds_layout;

  return $export;
}
