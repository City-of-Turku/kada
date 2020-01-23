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
drush "$local" fr business_pori_configurations -y

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

# Override the httprl settings.
# If set to -1 httprl will use the host name
#instead of an IP address for self-server requests.
drush "$local" vset httprl_server_hostname "pori.lndo.site"
drush vset httprl_non_blocking_fclose_delay "5"
# drush vset doesn't work for negative values, use workaround.
# @see https://drupal.stackexchange.com/a/246301/90763
php -r "print json_encode("-1");" | drush vset --format=json httprl_server_addr - --y

# Clear caches.
drush "$local" cc drush
drush "$local" cc all

# Generate login URL.
drush "$local" uli
