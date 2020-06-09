<?php
/**
 * Implements hook_drush_command().
 */
function kada_password_changer_drush_command() {
  $commands['mass-change-passwords'] = [
    'description' => 'Mass-change passwords to random ones for emails provided in a file.',
    'aliases' => ['mcp'],
    'arguments' => [
      'arg1' => 'Path to email list.',
    ],
    'options' => [
      'dry-run' => 'Do a dry-run, only output counts.',
    ],
    'examples' => [
      'drush mass-change-passwords email-list.txt' => 'Change passwords for all emails in the provided file.',
      'drush mass-change-passwords email-list.txt --dry-run=true' => 'Do a dry-run, output the count of affected accounts only',
    ],
  ];

  return $commands;
}

/**
 * Drush command logic
 * drush_[COMMAND_NAME]().
 */
function drush_kada_password_changer_mass_change_passwords($arg1 = NULL) {
  $dry_run = drush_get_option('dry-run', FALSE);
  $email_lines = file($arg1, FILE_IGNORE_NEW_LINES);
  $count = 0;
  if (!empty($email_lines)) {
    $query = new EntityFieldQuery;
    $query->entityCondition('entity_type', 'user')
          ->propertyCondition('mail', $email_lines, 'IN');
    $result = $query->execute();

    $uids = $result['user'];

    foreach ($uids as $uid) {
      if ($uid->uid == 0) {
        continue;
      }
      if ($dry_run == FALSE) {
        drush_print(dt('Changing password for UID @uid to a random one.', ['@uid' => $uid->uid]));
        $user = user_load($uid->uid);
        if ($user) {
          $user->pass = bin2hex(random_bytes(15));
          user_save($user);
        }
      }
      $count++;
    }
    if ($dry_run == FALSE) {
      drush_print(dt('Changed passwords for @count accounts', ['@count' => $count]));
    }
    else {
      drush_print(dt('DRY - Affected accounts: @count', ['@count' => $count]));
    }
  }
  else {
    drush_print(dt('There was an issue with the file provided.'));
  }
}
