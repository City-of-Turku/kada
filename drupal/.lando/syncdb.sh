#!/bin/bash
set -exu

# Synchronise local database with selected environment.

# Construct local drush site alias.
LOCAL=@"$LANDO_APP_NAME".local

# Define the default remote environment.
REMOTE=stage

function usage {
  echo "Usage: $0 [prod]"
  exit 1
}

if [ "$#" -gt 1 ]; then
  usage
fi

if [ "$#" -eq 1 ]; then
  if [ "$1" != "prod" ]; then
    usage
  fi
  REMOTE=prod
fi

# Synchronize & sanitize database from selected environment.
rm -rf /app/dump.sql
drush @"$LANDO_APP_NAME"."$REMOTE" sql-dump --structure-tables-list=cache,cache_*,history,sessions,watchdog > /app/dump.sql
drush "$LOCAL" sql-drop -y
# drush sql-sync @"$LANDO_APP_NAME"."$REMOTE" "$LOCAL" -y
drush "$LOCAL" sql-query --file=/app/dump.sql -y
drush "$LOCAL" sqlsan -y
drush "$LOCAL" updb -y
drush "$LOCAL" cc drush
drush "$LOCAL" cc all
rm -rf /app/dump.sql
drush "$LOCAL" uli
