#!/bin/bash
set -exu

# Symlink the aliases file.
rm -Rf $HOME/.drush
mkdir -p $HOME/.drush
ln -sfv /app/.lando/pori.aliases.drushrc.php $HOME/.drush/pori.aliases.drushrc.php
drush cc drush

# Create the required folders.
mkdir -vp /app/files
chmod -R a+w /app/files
mkdir -vp /app/files_private
chmod -R a+w /app/files_private

# Run makefile.
rm -rf /app/web
cd /app
drush @pori.local make conf/kadaproject.make web

# Add remaining symlinks. 
chmod -R a+w /app/web
ln -sfv /app/files web/sites/default
ln -sfv /app/.lando/settings.php web/sites/default/settings.php 
ln -sfv /app/.lando/lando.radioactivity-bootstrap.cfg.inc web/sites/default/radioactivity-bootstrap.cfg.inc
ln -sfv /app/code/modules/custom web/sites/all/modules
ln -sfv /app/code/modules/features web/sites/all/modules
ln -sfv /app/code/themes/custom web/sites/all/themes
ln -sfv /app/code/profiles/kadaprofile web/profiles
