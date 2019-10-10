#!/bin/bash
set -exu

# Symlink the aliases file.
rm -Rf $HOME/.drush
mkdir -p $HOME/.drush
ln -sfv /app/.lando/pori.aliases.drushrc.php $HOME/.drush/pori.aliases.drushrc.php
drush cc drush
