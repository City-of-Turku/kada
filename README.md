# Pori project

## Local environment

### [Setup](https://docs.lando.dev/basics/installation.html)

1. Install the [latest Lando](https://github.com/lando/lando/releases) and read the [documentation](https://docs.lando.dev/).
2. Check out the repo and go to the project root: `git clone git@github.com:wunderio/client-fi-pori.git pori && cd pori`
3. Run `lando start`.
4. Import data with `lando syncdb` (staging environment) or `lando syncdb prod` (production). Register your public key and connect to the required VPN first.
5. Run `lando update` to update database, revert the features and enable development modules.

### Local sites with drush site aliases

- <https://pori.lndo.site>, alias `@pori.local`,
- <https://businesspori.lndo.site>, alias `@pori.b.local`,
- <https://visitpori.lndo.site>, alias `@pori.v.local`.

### Production sites

- <https://www.pori.fi/>, `@pori.prod`,
- <https://www.businesspori.fi/>, `@pori.b.prod`,
- <https://www.visitpori.fi/>, `@pori.v.prod`.

### [Services](https://docs.lando.dev/config/services.html)

- <https://adminer-pori.lndo.site> - [Adminer](https://hub.docker.com/r/dehy/adminer/) for database management, log in **without** entering the credentials.
- <https://mail-pori.lndo.site> - [MailHog](https://docs.lando.dev/config/mailhog.html) for mail management.

### [Tools](https://docs.lando.dev/config/tooling.html)

Full commands/tools overview is available by running `lando`. Custom tools:

- `lando build` - build the local site.
- `lando npm` - run [npm](https://www.npmjs.com/) commands.
- `lando node` - run [Node.js](https://nodejs.org/) commands.
- `lando phpcs`, `lando phpcbf`- use PHP_CodeSniffer:
  - Use Drupal & DrupalPractice standard for selected extensions: `lando phpcs --standard=Drupal,DrupalPractice web/sites/all/modules/contrib --extensions=php,inc,module,install`
  - Check `web/sites/all/modules/custom` folder for PHP 7.2 compatibility using [PHPCompatibility](https://github.com/PHPCompatibility/PHPCompatibility) standard: `lando phpcs --standard=PHPCompatibility --extensions=php,inc,module,install --report-full=report_72.txt --runtime-set testVersion 7.2 -ps web/sites/all/modules/custom`.
- `lando syncdb <remote>` - synchronize local database with selected remote environment. Options: `stage` (default), `prod`.
- `lando update` - apply required (database) updates.
- `lando xdebug-on`, `lando xdebug-off` - enable / disable [Xdebug](https://xdebug.org/) for [nginx](https://nginx.org/en/).

## Local environment with Vagrant

Fire up the vagrant environment

```sh
vagrant up
```

Create a new build

Make sure drupal/files directory exists. If not create manually.

```sh
vagrant ssh
cd /vagrant/drupal
./build.sh new
```

Synchronise the database from production.

```sh
cd .. && ./syncdb.sh
```

```sh
ssh www-admin@pori.prod.wunder.io
cd /var/www/pori.prod.wunder.io/current/web
drush sql-dump > ../dump.sql
```

b) copy dumpfile to local webroot & import into database:

```sh
cd /vagrant/drupal/web
scp www-admin@pori.prod.wunder.io:/var/www/pori.prod.wunder.io/current/dump.sql dump.sql
drush sql-drop -y
drush sql-cli < dump.sql
drush updb -y
drush cc all // drush fra fails without it
drush fra -y // reverts all features, use when needed
drush uli --uri=https://local.pori.fi
```

```sh
./build.sh update
```

## Developer notes

### General information

Note: We use [Wunderflow](http://wunderflow.wunder.io/) as our git workflow.

All new features must be based on the `master` branch.
All hotfixes must be based on the `production` branch.
The `develop` branch is used only for testing and must never be merged back to master.

Tip: You can use drush aliases to execute drush commands without loggin into the servers or vagrant box. For example `drush @pori.local cc css-js`.

### Folder structure

```sh
├── ansible                 (Cloned) Ansible roles common for all environments.
├── ansible.cfg             Ansible configurations.
├── build.sh                Wundertools environment buildscript.
├── CHANGELOG               Wundertools environment changelog.
├── conf                    Different environment provisioning configs.
├── docs                    Developer documentation.
├── drupal  
│   ├── builds              Folder containing previous builds.
│   ├── build.sh            Main site build script.
│   ├── code                Custom code including custom modules, features and themes.
│   ├── conf                Different build configurations.
│   ├── files               Drupal files.
│   ├── files_private       Drupal private files.
│   ├── scripts             Scripts for handling integrations with 3rd party systems.
│   ├── translations        Exported translations.
│   ├── web                 Current build.
├── current                 Link to the latest build directory.
├── local_ansible_roles     Custom ansible roles.
├── provision.sh            Utility script for handling provision of different enviroments.
├── README.md               Generic readme file (this file)
├── DEPLOYMENTS.md          Instructions about deployments.  
├── secrets                 Encrypted passwords and API keys for ansible playbooks.  
├── syncdb_local.sh         Helper script included in the main sync script.
├── syncdb.sh               Database sync script.
├── tests                   Tests
├── Vagrantfile             Vagrant environt entry point.
└── VERSION                 File specifying the current Wundertools version in use.
```
