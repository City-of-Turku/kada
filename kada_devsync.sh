# This file will sync local development environment with the dev server
# SQL from the server + rsync.

drush sql-sync @kada.develop @kada.local --structure-tables-key=custom --sanitize --create-db --db-su=root --db-su-pw=somepass
echo 'KADA SQL sync ready.';

# Uncomment lines below for file syncing if stage_file_proxy doesn't work as it should
# drush rsync @kada.develop:%files/ files/
# echo 'KADA RSync ready.';

# Download and enable Stage File Proxy for saving disk space on local environments
#drush @kada.local dl stage_file_proxy -y;
#drush @kada.local en stage_file_proxy -y;
#drush @kada.local variable-set stage_file_proxy_origin "http://www.kada.fi"

# Download Devel
drush @kada.local dl devel -y;

# Download maillog to prevent emails being sent
drush @kada.local dl maillog -y;

# Set maillog default development environment settings
drush @kada.local vset maillog_devel 1;
drush @kada.local vset maillog_log 1;
drush @kada.local vset maillog_send 0;

# Enable Devel and UI modules
drush @kada.local en field_ui admin_menu devel views_ui context_ui feeds_ui rules_admin dblog ds_ui field_ui openlayers_ui --yes;
echo 'Enabled Devel and Views+Context+Feeds+Rules UI modules.';

# Disable google analytics
# drush @kada.local dis googleanalytics --yes;
# echo 'Disabled Google Analytics.';

# Set site email address to admin@example.com
drush @kada.local vset site_mail "admin@example.com"

# Set imagemagick convert path
# drush @kada.local vset imagemagick_convert "/opt/local/bin/convert"

# Clear caches
drush @kada.local cache-clear all;
