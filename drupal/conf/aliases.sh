#!/bin/bash
set -exu

# Symlink the aliases file.
rm -Rf $HOME/.drush
mkdir -p $HOME/.drush
ln -sfv /vagrant/drupal/drush/pori-kada.aliases.drushrc.php /home/vagrant/.drush/pori-kada.aliases.drushrc.php
drush cc drush
