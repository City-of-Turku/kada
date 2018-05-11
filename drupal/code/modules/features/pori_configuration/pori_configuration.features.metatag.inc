<?php
/**
 * @file
 * pori_configuration.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function pori_configuration_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: global:pori_fi frontpage.
  $config['global:pori_fi frontpage'] = array(
    'instance' => 'global:pori_fi frontpage',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[site:name]',
      ),
      'description' => array(
        'value' => 'City of Pori web site has information on the city\'s services and current affairs.
PO Box 121, 28101 PORI
phone exchange 02 621 1100
kirjaamo@pori.fi, etunimi.sukunimi@pori.fi',
      ),
      'dcterms.description' => array(
        'value' => 'City of Pori web site has information on the city\'s services and current affairs. PO Box 121, 28101 PORI phone exchange 02 621 1100 kirjaamo@pori.fi, etunimi.sukunimi@pori.fi',
      ),
      'og:description' => array(
        'value' => 'City of Pori web site has information on the city\'s services and current affairs. PO Box 121, 28101 PORI phone exchange 02 621 1100 kirjaamo@pori.fi, etunimi.sukunimi@pori.fi',
      ),
      'twitter:description' => array(
        'value' => 'City of Pori web site has information on the city\'s services and current affairs. PO Box 121, 28101 PORI phone exchange 02 621 1100 kirjaamo@pori.fi, etunimi.sukunimi@pori.fi',
      ),
    ),
  );

  // Exported Metatag config instance: global:visitpori_fi frontpage.
  $config['global:visitpori_fi frontpage'] = array(
    'instance' => 'global:visitpori_fi frontpage',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[site:name]',
      ),
      'description' => array(
        'value' => 'Pori area travel information',
      ),
      'dcterms.description' => array(
        'value' => 'Pori area travel information',
      ),
      'og:description' => array(
        'value' => 'Pori area travel information',
      ),
      'twitter:description' => array(
        'value' => 'Pori area travel information',
      ),
    ),
  );

  return $config;
}
