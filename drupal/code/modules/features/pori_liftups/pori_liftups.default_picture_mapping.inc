<?php
/**
 * @file
 * pori_liftups.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function pori_liftups_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Responsive small liftup banner';
  $picture_mapping->machine_name = 'responsive_small_liftup_banner';
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
        'image_style' => 'small_liftup_banner_theme_kada_mbl_1x',
      ),
    ),
    'breakpoints.theme.kada.mbl_nrw' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'small_liftup_banner_theme_kada_mbl_nrw_1x',
      ),
    ),
    'breakpoints.theme.kada.mbl_wide' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'small_liftup_banner_theme_kada_mbl_wide_1x',
      ),
    ),
    'breakpoints.theme.kada.tbl' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.kada.dsktp_nrw' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.kada.dsktp_wide' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'small_liftup_banner_theme_kada_dsktp_wide_1x',
      ),
    ),
  );
  $export['responsive_small_liftup_banner'] = $picture_mapping;

  return $export;
}
