<?php

/**
 * Provides autologin mode for the Adminer database tool
 * @see https://www.adminer.org/en/extension/
 */
$_GET['username'] = '';
function adminer_object() {
  class AutoLogin extends Adminer {
    function credentials() {
      // server, username and password
      return array('database', 'drupal7', 'drupal7');
    }
    function login($login, $password) {
      return true;
    }
  }
  return new AutoLogin;
}
include ('./adminer_library.php');
