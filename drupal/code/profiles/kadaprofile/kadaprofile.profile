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

/**
 * Implements hook_update().
 *
 * Enables Pori features
 */
function kadaprofile_update_7101() {
  $modules = array('pori_configuration', 'pori_front_page_liftups', 'pori_user_permissions');
  $enable_dependencies = TRUE;

  module_enable($modules, $enable_dependencies);
}

/**
 * Implements hook_update().
 *
 * Enables Hotjar module
 */
function kadaprofile_update_7102() {
  $modules = array('hotjar');
  $enable_dependencies = TRUE;

  module_enable($modules, $enable_dependencies);

}

/**
 * Implements hook_update().
 *
 * Enables more Pori features
 */
function kadaprofile_update_7103() {
  $modules = array('pori_media');
  $enable_dependencies = TRUE;

  module_enable($modules, $enable_dependencies);
}

/**
 * Implements hook_update().
 *
 * Enables more Pori features
 */
function kadaprofile_update_7104() {
  $modules = array('pori_domains');
  $enable_dependencies = TRUE;

  module_enable($modules, $enable_dependencies);
}

/**
 * Implements hook_update().
 *
 * Enables more Pori features
 */
function kadaprofile_update_7105() {
  $modules = array('pori_pages');
  $enable_dependencies = TRUE;

  module_enable($modules, $enable_dependencies);
}

/**
 * Implements hook_update().
 *
 * Disables pori domains
 */
function kadaprofile_update_7106() {
  $modules = array('pori_domains');
  $enable_dependencies = TRUE;

  module_disable($modules, $enable_dependencies);
  drupal_uninstall_modules($modules);
}

/**
 * Implements hook_update().
 *
 * Enables more Pori features
 */
function kadaprofile_update_7107() {
  $modules = array('pori_liftups');
  $enable_dependencies = TRUE;

  module_enable($modules, $enable_dependencies);
}

/**
 * Implements hook_update().
 *
 * Enables more Pori features
 */
function kadaprofile_update_7108()
{
  $modules = array('pori_news');
  $enable_dependencies = TRUE;

  module_enable($modules, $enable_dependencies);
}

/**
 * Implements hook_update().
 *
 * Enables more Pori features
 */
function kadaprofile_update_7109()
{
  $modules = array('pori_blog');
  $enable_dependencies = TRUE;

  module_enable($modules, $enable_dependencies);
}

/**
 * Implements hook_update().
 *
 * Enables more Pori features
 */
function kadaprofile_update_7110()
{
  $modules = array('pori_some_content');
  $enable_dependencies = TRUE;

  module_enable($modules, $enable_dependencies);
}

/**
 * Implements hook_update().
 *
 * Disables Pori pages feature
 */
function kadaprofile_update_7111() {
  $modules = array('pori_pages');
  $enable_dependencies = TRUE;

  module_disable($modules, $enable_dependencies);
  drupal_uninstall_modules($modules);
}

/**
 * Implements hook_update().
 *
 * Disables pori domains
 */
function kadaprofile_update_7112() {
  $modules = array('pori_media');
  $enable_dependencies = TRUE;

  module_disable($modules, $enable_dependencies);
  drupal_uninstall_modules($modules);
}
