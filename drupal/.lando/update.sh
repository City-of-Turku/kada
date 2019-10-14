#!/bin/bash
set -exu

# Update local site with development settings.

# Set paths.
webroot=/app/web

# Set Drush aliases.
local=@pori.local

chmod -R a+w "$webroot"
cd "$webroot"

# Enable development and UI modules
drush "$local" en stage_file_proxy devel update -y
drush "$local" variable-set stage_file_proxy_origin "https://www.pori.fi"

# Apply any database updates required.
drush "$local" updatedb -y
drush "$local" cc drush

# Revert only selected features for now.
# drush "$local" fra -y
drush "$local" fr kada_domains_feature -y

# # Download maillog to prevent emails being sent
# drush "$local" dl maillog -y

# # Set maillog default development environment settings
# drush "$local" vset maillog_devel 1
# drush "$local" vset maillog_log 1
# drush "$local" vset maillog_send 0

# Enable UI modules
# drush "$local" en field_ui admin_menu devel views_ui context_ui feeds_ui rules_admin dblog field_ui -y

# Disable google analytics
# drush "$local" dis googleanalytics -y
# echo 'Disabled Google Analytics.'

# Set site email address to admin@example.com
drush "$local" vset site_mail "admin@example.com"

# Set imagemagick convert path
# drush "$local" vset imagemagick_convert "/opt/local/bin/convert"

# Clear caches.
drush "$local" cc drush
drush "$local" cc all

# Generate login URL.
drush "$local" uli
