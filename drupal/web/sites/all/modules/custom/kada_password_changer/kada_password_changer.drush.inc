<?php
/**
 * Implements hook_drush_command().
 */
function kada_password_changer_drush_command() {
  $commands['mass-change-passwords'] = [
    'description' => 'Mass-change passwords to random ones for emails provided in a file.',
    'arguments' => [
      'arg1' => 'Path to email list.',
    ],
  ];

  return $commands;
}

/**
 * Drush command logic
 * drush_[COMMAND_NAME]().
 */
function drush_kada_password_changer_mass_change_passwords($arg1 = NULL) {
  $email_lines = file($arg1);
  $count = 0;
  if (!empty($email_lines)) {
    $query = new EntityFieldQuery;
    $query->entityCondition('entity_type', 'user')
          ->entityCondition('mail', $email_lines, 'IN');
    $result = $query->execute();
    $uids = $result['user'];

    foreach ($uids as $uid) {
      if ($uid->uid == 0) {
        continue;
      }
      drush_print(dt('Changing password for UID @uid to a random one.', ['@uid' => $uid->uid]));
      $user = user_load($uid->uid);
      if ($user) {
        $user->pass = bin2hex(random_bytes(15));
        user_save($user);
      }
      $count++;
    }
    drush_print(dt('Changed passwords for @count accounts', ['@count' => $count]));
  }
  else {
    drush_print(dt('There was an issue with the file provided.'));
  }
}
