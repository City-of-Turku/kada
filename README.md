# Pori project

## Quick start
-----------

Fire up the vagrant environment

    $ vagrant up

If all goes well you can proceed to creating a new build.

Make sure drupal/files directory exists. If not, create manually:

    $ vagrant ssh
    $ cd /vagrant/drupal
    $ ./build.sh new

Synchronise the database from production.

    $ cd .. && ./syncdb.sh

If you run into issues during this step, import database manually (get from server, auth from LastPass) and run

    $ ./build.sh update

When you're done, navigate to <https://local.pori.fi>


## Developer notes

### General information
-------------------

Note: We use [Wunderflow](http://wunderflow.wunder.io/) as our git workflow.

All new features must be based on the `master` branch.
All hotfixes must be based on the `production` branch.
The `develop` branch is used only for testing and must never be merged back to master.

Tip: You can use drush aliases to execute drush commands without loggin into the servers or vagrant box. For example `drush @pori.local cc css-js`

Folder structure
----------------
```
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

