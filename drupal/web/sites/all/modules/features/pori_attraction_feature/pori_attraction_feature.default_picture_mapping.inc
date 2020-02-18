<?php

/**
 * @file
 * pori_attraction_feature.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function pori_attraction_feature_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Responsive page carousel';
  $picture_mapping->machine_name = 'responsive_page_carousel';
  $picture_mapping->breakpoint_group = 'kada';
  $picture_mapping->mapping = array(
    'breakpoints.theme.kada.mbl_prtrt' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.kada.mbl' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'page_carousel_breakpoints_theme_pori_mobile_1x',
      ),
    ),
    'breakpoints.theme.kada.mbl_nrw' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.kada.mbl_wide' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'page_carousel_breakpoints_theme_pori_phablet_1x',
      ),
    ),
    'breakpoints.theme.kada.tbl' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'page_carousel_breakpoints_theme_pori_tablet_1x',
      ),
    ),
    'breakpoints.theme.kada.dsktp_nrw' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'page_carousel_breakpoints_theme_pori_smalldesktop_1x',
      ),
    ),
    'breakpoints.theme.kada.dsktp_wide' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'page_carousel_breakpoints_theme_pori_desktop_1x',
      ),
    ),
  );
  $export['responsive_page_carousel'] = $picture_mapping;

  return $export;
}
