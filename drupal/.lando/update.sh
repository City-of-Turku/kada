#!/bin/bash
set -exu

LOCAL=@"$LANDO_APP_NAME".local

# Update local database.
drush "$LOCAL" updb -y
drush "$LOCAL" cc drush

# Revert features.
drush "$LOCAL" fra -y
# Revert only selected features for now.
# drush "$LOCAL" fr kada_domains_feature -y
# drush "$LOCAL" fr business_pori_configurations -y

# Enable composer_autoloader module
# @see: https://github.com/drupal-composer/drupal-project/blob/7.x/README.md#how-to-enable-the-composer-autoloader-in-your-drupal-7-website
# drush "$LOCAL" en composer_autoloader -y

# Enable development modules
drush "$LOCAL" en -y stage_file_proxy update devel
drush "$LOCAL" vset stage_file_proxy_origin 'https://www.pori.fi'

# Set site email address to admin@example.com
drush "$LOCAL" vset site_mail "admin@example.com"


drush "$LOCAL" vset simplesamlphp_auth_installdir "/app/web/simplesaml"

# drush "$LOCAL" cron
drush "$LOCAL" cc drush
drush "$LOCAL" cc all -y

# Generate login URL's.
drush "$LOCAL" uli
drush @pori.v.local uli
drush @pori.b.local uli
