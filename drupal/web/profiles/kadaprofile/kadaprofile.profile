<?php
/**
 * Implements hook_form_alter().
 *
 * Select the current install profile by default.
 */
if (!function_exists("system_form_install_select_profile_form_alter")) {
  function system_form_install_select_profile_form_alter(&$form, $form_state) {
    foreach ($form['profile'] as $key => $element) {
      $form['profile'][$key]['#value'] = 'kadaprofile';
    }
  }
}

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
function kadaprofile_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = "Kuntien avoin Drupal-alusta";
  $form['site_information']['site_mail']['#default_value'] = "admin@example.com";
  $form['admin_account']['account']['name']['#default_value'] = "kadmin";
  $form['admin_account']['account']['mail']['#default_value'] = $form['site_information']['site_mail']['#default_value'];
  $form['server_settings']['site_default_country']['#default_value'] = "FI";
  $form['server_settings']['date_default_timezone']['#default_value'] = "Europe/Helsinki";
}
