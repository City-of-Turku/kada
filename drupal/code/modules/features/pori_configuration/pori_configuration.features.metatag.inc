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
        'value' => 'Porin kaupungin verkkosivuilta saa tietoa kaupungin palveluista ja ajankohtaisista asioista.
PL 121, 28101 PORI
vaihde 02 621 1100
kirjaamo@pori.fi, etunimi.sukunimi@pori.fi',
      ),
      'dcterms.description' => array(
        'value' => 'Porin kaupungin verkkosivuilta saa tietoa kaupungin palveluista ja ajankohtaisista asioista. PL 121, 28101 PORI vaihde 02 621 1100 kirjaamo@pori.fi, etunimi.sukunimi@pori.fi',
      ),
      'og:description' => array(
        'value' => 'Porin kaupungin verkkosivuilta saa tietoa kaupungin palveluista ja ajankohtaisista asioista. PL 121, 28101 PORI vaihde 02 621 1100 kirjaamo@pori.fi, etunimi.sukunimi@pori.fi',
      ),
      'twitter:description' => array(
        'value' => 'Porin kaupungin verkkosivuilta saa tietoa kaupungin palveluista ja ajankohtaisista asioista. PL 121, 28101 PORI vaihde 02 621 1100 kirjaamo@pori.fi, etunimi.sukunimi@pori.fi',
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
        'value' => 'Porin matkailuneuvonta',
      ),
      'dcterms.description' => array(
        'value' => 'Porin matkailuneuvonta',
      ),
      'og:description' => array(
        'value' => 'Porin matkailuneuvonta',
      ),
      'twitter:description' => array(
        'value' => 'Porin matkailuneuvonta',
      ),
    ),
  );

  return $config;
}
