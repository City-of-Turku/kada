<?php

/**
 * @file
 * visitpori_configurations.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function visitpori_configurations_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Visitpori footer information EN';
  $fe_block_boxes->format = 'wysiwyg';
  $fe_block_boxes->machine_name = 'visitpori_footer_information_en';
  $fe_block_boxes->body = '<p>&copy; Visit Pori Oy</p>
<p>Postal address:<br>
Itäpuisto 7, 28100 Pori<br>
Switchboard:<br>
+358 2 621 7900<br>
Email:<br><a href="mailto:info@visitpori.fi">info@visitpori.fi</a>,<br><a href="mailto:firstname.lastname@visitpori.fi">firstname.lastname@visitpori.fi</a><br>
Business ID: 1519270-3</p>';

  $export['visitpori_footer_information_en'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Visitpori footer information';
  $fe_block_boxes->format = 'wysiwyg';
  $fe_block_boxes->machine_name = 'visitpori_footer_information_fi';
  $fe_block_boxes->body = '<p>&copy; Visit Pori Oy</p>
<p>Postiosoite:<br/>
Itäpuisto 7, 28100 Pori<br/>
Puhelinvaihde:<br/>
(02) 621 7900<br/>
Sähköposti:<br/>
info@visitpori.fi,<br/>
etunimi.sukunimi@visitpori.fi<br/>
Y-tunnus: 1519270-3</p>';

  $export['visitpori_footer_information_fi'] = $fe_block_boxes;

  return $export;
}
