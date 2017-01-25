<?php
/**
 * @file
 * tkufi_configuration_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function tkufi_configuration_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['locale-language'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'language',
    'i18n_block_language' => array(
      0 => 'fi',
    ),
    'i18n_mode' => 0,
    'module' => 'locale',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'driveturku' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'driveturku',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-footer-en'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-footer-en',
    'i18n_block_language' => array(
      0 => 'en',
    ),
    'i18n_mode' => 0,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'driveturku' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'driveturku',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-footer-fi'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-footer-fi',
    'i18n_block_language' => array(
      0 => 'fi',
    ),
    'i18n_mode' => 0,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'driveturku' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'driveturku',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-footer-sv'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-footer-sv',
    'i18n_block_language' => array(
      0 => 'sv',
    ),
    'i18n_mode' => 0,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'driveturku' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'driveturku',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-main-menu-en'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-main-menu-en',
    'i18n_block_language' => array(
      0 => 'en',
    ),
    'i18n_mode' => 0,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'driveturku' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'driveturku',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-main-menu-sv'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-main-menu-sv',
    'i18n_block_language' => array(
      0 => 'sv',
    ),
    'i18n_mode' => 0,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'driveturku' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'driveturku',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-top-menu-en'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-top-menu-en',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'driveturku' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'driveturku',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-top-menu-fi'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-top-menu-fi',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'driveturku' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'driveturku',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-top-menu-sv'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-top-menu-sv',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'driveturku' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'driveturku',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu_block-10'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 10,
    'i18n_block_language' => array(
      0 => 'en',
    ),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'driveturku' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'driveturku',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Footer menu - Expanded EN',
    'visibility' => 0,
  );

  $export['menu_block-11'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 11,
    'i18n_block_language' => array(
      0 => 'en',
    ),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'driveturku' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'driveturku',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Footer menu - 2nd and 3rd levels EN',
    'visibility' => 0,
  );

  $export['menu_block-12'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 12,
    'i18n_block_language' => array(
      0 => 'fi',
    ),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'driveturku' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'driveturku',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Footer menu - 2nd and 3rd levels FI',
    'visibility' => 0,
  );

  $export['menu_block-13'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 13,
    'i18n_block_language' => array(
      0 => 'sv',
    ),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'driveturku' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'driveturku',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Footer menu - 2nd and 3rd levels SV',
    'visibility' => 0,
  );

  $export['menu_block-14'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 14,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'driveturku' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'driveturku',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu_block-15'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 15,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'driveturku' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'driveturku',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu_block-2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 2,
    'i18n_block_language' => array(
      0 => 'fi',
    ),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'driveturku' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'driveturku',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Main menu - Expanded',
    'visibility' => 0,
  );

  $export['menu_block-20'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 20,
    'i18n_block_language' => array(
      0 => 'fi',
    ),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'driveturku' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'driveturku',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu_block-21'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 21,
    'i18n_block_language' => array(
      0 => 'en',
    ),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'driveturku' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'driveturku',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu_block-22'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 22,
    'i18n_block_language' => array(
      0 => 'sv',
    ),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'driveturku' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'driveturku',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu_block-3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 3,
    'i18n_block_language' => array(
      0 => 'fi',
    ),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'driveturku' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'driveturku',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Main menu - 2nd and 3rd levels',
    'visibility' => 0,
  );

  $export['menu_block-4'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 4,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'driveturku' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'driveturku',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu_block-5'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 5,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'driveturku' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'driveturku',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu_block-6'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 6,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'driveturku' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'driveturku',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu_block-7'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 7,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'driveturku' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'driveturku',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu_block-8'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 8,
    'i18n_block_language' => array(
      0 => 'fi',
    ),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'driveturku' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'driveturku',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Footer menu - Expanded FI',
    'visibility' => 0,
  );

  $export['menu_block-9'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 9,
    'i18n_block_language' => array(
      0 => 'sv',
    ),
    'i18n_mode' => 0,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'driveturku' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'driveturku',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Footer menu - Expanded SV',
    'visibility' => 0,
  );

  $export['og_extras-group_info'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'group_info',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'og_extras',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'driveturku' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'driveturku',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['og_extras-node_links'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'node_links',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'og_extras',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'driveturku' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'driveturku',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Add content to this section',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main-menu',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'driveturku' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'driveturku',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
