<?php
/**
 * @file
 * kada_configuration_feature.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function kada_configuration_feature_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer information EN';
  $fe_block_boxes->format = 'wysiwyg';
  $fe_block_boxes->machine_name = 'footer_information_en';
  $fe_block_boxes->body = '<p>&copy; City of Turku</p><p>PO&nbsp;355, 20101 TURKU<br/>phone (02) 330 000<br/>turun.kaupunki@turku.fi<br/>firstname.lastname@turku.fi</p>';

  $export['footer_information_en'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer information FI';
  $fe_block_boxes->format = 'wysiwyg';
  $fe_block_boxes->machine_name = 'footer_information_fi';
  $fe_block_boxes->body = '<p>&copy; Turun kaupunki</p><p>PL 355, 20101 TURKU<br />vaihde (02) 330 000<br />turun.kaupunki@turku.fi<br />etunimi.sukunimi@turku.fi</p>';

  $export['footer_information_fi'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer information SV';
  $fe_block_boxes->format = 'wysiwyg';
  $fe_block_boxes->machine_name = 'footer_information_sv';
  $fe_block_boxes->body = '<p>&copy; Åbo</p><p>PO&nbsp;355, 20101 ÅBO<br/>telefon (02) 330 000<br/>turun.kaupunki@turku.fi<br/>förnamn.efternamn@turku.fi</p>';

  $export['footer_information_sv'] = $fe_block_boxes;

  return $export;
}
