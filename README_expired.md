# pori.fi (based on KADA)

## Branches linked to Amazee.io

Env | Branch | Drush alias | URL
--- | ------ | ----------- | ---
development | * | - | http://pori.fi.docker.amazee.io/

## Requirements

You need to have these applications installed to operate on all environments:

- [Docker for Mac](https://github.com/druidfi/guidelines/blob/master/docs/docker_for_mac.md)
- [Pygmy](https://github.com/druidfi/guidelines/blob/master/docs/pygmy.md)

For the new person:

- Your SSH public key needs to be added to servers
- Inform your GitHub SSH keys link e.g.: `https://github.com/back-2-95.keys` to Amazee in the Slack OR ask Marko to do
that

## How to develop?

Clone this repository (default branch is `development`) and go to folder:

```
$ git clone git@github.com:City-of-Pori/pori-kada.git
$ cd pori-kada
```

Run composer:
```
$ composer install
```
Create a build:

```
$ bin/mana-dev
```

Start the Docker containers (Docker for Mac and Pygmy must be running):

```
$ docker-compose up -d
```

Connect to `drupal` container:

```
$ docker-compose exec --user drupal drupal bash
```
Now your site should be available on the following address:
http://pori.fi.docker.amazee.io/

Attention! If you are running something else on port 80 such as local apache things might not work. Stop the service and you should be good to go.

You need to create files folder to the root of the public_html folder on the docker container. At this point we don't have sync script or a real testing server for that matter so after this you might want to extract the files folder content included in the repository to that folder. Once inside the docker container run the following:

```
$ cd ~/public_html
$ tar xvzf files.tar.gz
```

Now you need to use the provided sql-file and import it to the site manually. Once you are inside the docker container you need to run
```
$ drush sqlc < ~/public_html/pori-kada_init.sql
```

(Currently not working) Sync database and filed from production:

```
$ drush sync-db
$ drush sync-files
```

Or you can use aliases provided by Amazee:

```
$ dsql @master
$ dfiles @master
```

Ready! Now go to [http://pori.fi.docker.amazee.io/](http://pori.fi.docker.amazee.io/) to see your site.

## FAQ

### How to access Amazee instances of this site?

First access your local container and from there use drush to connect:

```
$ docker-compose exec --user drupal drupal bash
$ drush @master ssh
```

### How to connect to local database?

Add your database to e.g. Sequel Pro with these instructions:

https://docs.amazee.io/local_docker_development/connect_to_mysql_from_external.html

# KADA old readme

## LICENSING

The project is licensed under the same license as Drupal itself, namely
GNU General Public License 2 or later.

KADA Drupal distribution.
		Copyright © 2017 City of Turku, http://www.turku.fi/, turun.kaupunki@turku.fi

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
MA 02110-1301, USA

### LISENSSI

Projekti on lisensoitu samalla lisenssisopimuksella kuin Drupal itsessään,
eli GNU Yleinen Lisenssi (GNU General Public License) 2 tai myöhempi.

KADA-Drupal-jakelu
Tekijänoikeus © 2017 Turun kaupunki, http://www.turku.fi/, turun.kaupunki@turku.fi

Tämä ohjelma on vapaa; tätä ohjelmaa on sallittu levittää edelleen
ja muuttaa GNU yleisen lisenssin (GPL-lisenssin) ehtojen mukaan
sellaisina kuin Free Software Foundation on ne julkaissut; joko
Lisenssin version 2, tai (valinnan mukaan) minkä tahansa myöhemmän
version mukaisesti.

Tätä ohjelmaa levitetään siinä toivossa, että se olisi hyödyllinen,
mutta ilman mitään takuuta; ilman edes hiljaista takuuta
kaupallisesti hyväksyttävästä laadusta tai soveltuvuudesta
tiettyyn tarkoitukseen. Katso GPL-lisenssistä lisää yksityiskohtia.

Tämän ohjelman mukana pitäisi tulla kopio GPL-lisenssistä; jos
näin ei ole, kirjoita osoitteeseen Free Software Foundation Inc.,
59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

## GET IN TOUCH

The platform developers use Slack as the primary communication method.
If you want to join the Slack channel, sign up at https://kada-slack.herokuapp.com/ or contact drupal@citrus.fi. The Slack
is free to join for all.

## REPORTING SECURITY ISSUES

We kindly ask you to report security issues in a responsible manner: Report your security concerns first to juha.niemi@wunder.io who will collaborate with you on reporting the issue to the KADA-project while also ensuring that the existing production systems are not compromised. 

## PROJECT README

### PROJECT STRUCTURE

```<root>
builds
	- Contains built codebases, preserves history
code
	modules
		- IMPORTANT: Use tkufi_ prefix with custom and feature modules
		custom
			- Custom modules directory
			- Symlinked from current codebase build when in development
		features
			- Features directory
			- Symlinked from current codebase build when in development
	profiles
		kadaprofile
			- KADA Drupal install profile
			- Symlinked from current codebase build when in development
	themes
		custom
			driveturku
				- DriveTurku theme
				- Symlinked from current codebase build when in development
conf
	_ping.php
		- Is copied to Drupal root during build
	dev.settings.php
		- Settings for develop environment
	kadaproject.make
		- Drush make file that defines what drupal core, contrib modules / themes and libraries are used in the project
	- Each additional dependency must be set into this file as contrib code is not in version control
	robots.txt
		- Prevents indexing of set paths
	site.yml
		- Configures custom build.sh behaviour for each environment
	vagrant.settings.php
		- Settings for local environment
current
	- Current build code
files
	- Actual location for sites/default/files
patches
	- Local patches that are not in any drupal.org issue queue
build.sh
	- Custom project build script
	- Use when checking out code that has new contrib dependencies
	- Behaviour of this script depends on conf/site.yml
kada.aliases.drushrc.php
	- Project drush aliases
kada_devsync.sh
	- Syncs sql and files from development
drush.sh
	- Is supposed to be used when running build outside vagrant box (not tested, better to login to vagrant and build there for now)
```

### INSTALLING

You need to have a Drupal-compatible development environment, such as the ones in https://github.com/CitrusSolutions/docker-php/tree/stable or
https://github.com/wunderkraut/WunderTools.

1. Build Drupal from the make file
   ```
   $ cd kada
   $ ./build.sh new
   ```
2. Do a site-install at http://local.kada.fi/install.php?profile=kadaprofile (try with port 8080 if varnish is preventing install).
  - Choose some features to enable during install
  - Events base feature is not yet working with the site-install
  - Domains will give notice during install, can be ignored
  - If you get timeouts, just refresh the page and batch process will continue
3. When install is finished, visit the site at http://local.kada.fi
  - The cache has to be rebuilt and features reverted, probably a couple of times before things start working
  - If some database error occurs due to missing module, add the module to correct feature's .info file.
4. Enable User feature and revert it
  - drush en tkufi_user_feature -y; drush fr tkufi_user_feature -y
  - You can login with editor:secretpass to see what a content editor has access to

### SYNCING FROM DEVELOPMENT/PRODUCTION

#### RUNNING SYNC SCRIPTS

There is a script for syncing database + files from development.

From the project root:
```
$ ./drupal/kada_devsync.sh
```

After syncing database and files, syncscript runs additional commands, like downloads+enables Devel module.

### DEVELOPMENT

#### BUILD / BRANCH CHECKOUT

Build is needed when there is changes (or vanilla project repo checkout) made in drush make file. And if in doubt after checking out some other people's code, there is no harm done if you run this command (unless you have done something not so cool like modified core / contrib code).

Also you should be syncing database from develop environment frequently to ensure that you have most up to date database. This way you should be able to avoid adding unnecessary changes into feature recreates.

```
$ cd <PROJECT_ROOT>
$ ./build.sh update
```

After build is done, it's advised to run bunch of drush commands to ensure that database is in the same state as in the feature code.

```
$ cd <PROJECT_ROOT>/current
$ drush fra -y && drush fra -y && drush cc all
```

Feature revert is ran twice as we have notices that for some reason features might not get reverted in first run.

#### INSTALL PROFILE

* Contains update hooks for feature / module enabling

#### CUSTOM MODULES

* Naming: kada_NAME
* Avoid creating custom modules or if you really have to, please consult other developers first

#### FEATURES

- Naming: kada_NAME_feature
- Should contain update hooks to enable additional modules related to feature change
- Feature specific custom code can be inserted into *.module instead of creating custom modules
- Fill out changes and other important notes into README.txt file in the feature directory (if you need template, look at tkufi_page_feature)
- ALWAYS RECREATE FEATURES AND SAVE VIEWS IN ENGLISH!!! (make sure there is /en prefix in the path, otherwise all views translations and such will be exported to code in Finnish)

