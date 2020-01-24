#!/bin/sh
set -exu

# copy custom adminer.php from conf folder
cp -f /app/.lando/adminer.php /var/www/html/adminer.php

# copy & rename versioned Adminer library file
cd /var/www/html
find . -type f -name 'adminer-*' -print0 | xargs -0 -I{} cp -f {} adminer_library.php

chown -R www-data:dialout /var/www/html
chmod -R +x /var/www/html
