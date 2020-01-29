#!/bin/sh
set -exu

# Symlink the site aliases file.
mkdir -p ~/.drush
ln -sf /app/drush/pori.aliases.drushrc.php ~/.drush/pori.aliases.drushrc.php

# Create the required folders & symbolic links.
mkdir -vp /app/files
chmod -R a+w /app/files
mkdir -vp /app/files_private
chmod -R a+w /app/files_private
chmod -R a+w /app/web/sites/default
ln -sfv /app/files web/sites/default
