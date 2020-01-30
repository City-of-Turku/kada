#!/bin/sh
set -exu

# Build the themes.
cd /app/web/sites/all/themes/custom/kada
npm install
bower install
gulp build

cd /app/web/sites/all/themes/custom/businesspori
npm install
bower install
# @todo: gulp build is broken atm.
# gulp build

cd /app/web/sites/all/themes/custom/visitpori
npm install
bower install
# @todo: gulp build is broken atm.
# gulp build
