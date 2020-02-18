<?php

/**
 * @file
 * pori_user_permissions.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pori_user_permissions_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesamlphp_auth_activate';
  $strongarm->value = 1;
  $export['simplesamlphp_auth_activate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesamlphp_auth_allowdefaultlogin';
  $strongarm->value = 1;
  $export['simplesamlphp_auth_allowdefaultlogin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesamlphp_auth_allowdefaultloginroles';
  $strongarm->value = array();
  $export['simplesamlphp_auth_allowdefaultloginroles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesamlphp_auth_allowdefaultloginusers';
  $strongarm->value = '';
  $export['simplesamlphp_auth_allowdefaultloginusers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesamlphp_auth_allowsetdrupalpwd';
  $strongarm->value = 0;
  $export['simplesamlphp_auth_allowsetdrupalpwd'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesamlphp_auth_authsource';
  $strongarm->value = 'default-sp';
  $export['simplesamlphp_auth_authsource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesamlphp_auth_autoenablesaml';
  $strongarm->value = 1;
  $export['simplesamlphp_auth_autoenablesaml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesamlphp_auth_debug';
  $strongarm->value = 1;
  $export['simplesamlphp_auth_debug'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesamlphp_auth_forcehttps';
  $strongarm->value = 1;
  $export['simplesamlphp_auth_forcehttps'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesamlphp_auth_installdir';
  $strongarm->value = '/var/www/pori.dev.wunder.io/current/conf/simplesaml';
  $export['simplesamlphp_auth_installdir'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesamlphp_auth_login_link_display_name';
  $strongarm->value = 'Federated Log In';
  $export['simplesamlphp_auth_login_link_display_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesamlphp_auth_login_path';
  $strongarm->value = 'login_ad';
  $export['simplesamlphp_auth_login_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesamlphp_auth_logoutgotourl';
  $strongarm->value = '';
  $export['simplesamlphp_auth_logoutgotourl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesamlphp_auth_mailattr';
  $strongarm->value = 'http://schemas.xmlsoap.org/ws/2005/05/identity/claims/emailaddress';
  $export['simplesamlphp_auth_mailattr'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesamlphp_auth_registerusers';
  $strongarm->value = 1;
  $export['simplesamlphp_auth_registerusers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesamlphp_auth_roleevaleverytime';
  $strongarm->value = 1;
  $export['simplesamlphp_auth_roleevaleverytime'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesamlphp_auth_rolepopulation';
  $strongarm->value = '3:http://schemas.xmlsoap.org/claims/Group,=,GG_Drupal_Pori_Admin|8:http://schemas.xmlsoap.org/claims/Group,=,GG_Drupal_Pori_WebJournalist|3:http://schemas.xmlsoap.org/claims/Group,=,GG_Drupal_Visit_Admin|8:http://schemas.xmlsoap.org/claims/Group,=,GG_Drupal_Visit_WebJournalist|3:http://schemas.xmlsoap.org/claims/Group,=,GG_Drupal_Business_Admin|8:http://schemas.xmlsoap.org/claims/Group,=,GG_Drupal_Business_WebJournalist';
  $export['simplesamlphp_auth_rolepopulation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesamlphp_auth_unique_id';
  $strongarm->value = 'http://schemas.xmlsoap.org/ws/2005/05/identity/claims/emailaddress';
  $export['simplesamlphp_auth_unique_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesamlphp_auth_user_name';
  $strongarm->value = 'http://schemas.xmlsoap.org/ws/2005/05/identity/claims/emailaddress';
  $export['simplesamlphp_auth_user_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesamlphp_auth_user_register_original';
  $strongarm->value = '0';
  $export['simplesamlphp_auth_user_register_original'] = $strongarm;

  return $export;
}
