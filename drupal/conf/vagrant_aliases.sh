#!/bin/bash
set -exu

# Symlink the aliases file.
rm -Rf /home/vagrant/.drush
mkdir -p /home/vagrant/.drush
ln -sfv /vagrant/drupal/drush/pori-kada.aliases.drushrc.php /home/vagrant/.drush/pori-kada.aliases.drushrc.php
drush cc drush
