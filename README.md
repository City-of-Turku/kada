# Pori project

## Local environment

### [Setup](https://docs.lando.dev/basics/installation.html)

1. Install the [latest Lando](https://github.com/lando/lando/releases) and read the [documentation](https://docs.lando.dev/).
2. Check out the repo and go to the project root: `git clone git@github.com:City-of-Pori/pori-kada.git pori && cd pori`
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
- `lando npm`, `lando bower`, `lando gulp` - run frontend commands.
- `lando phpcs`, `lando phpcbf`- use PHP_CodeSniffer:
  - Use Drupal & DrupalPractice standard for selected extensions: `lando phpcs --standard=Drupal,DrupalPractice web/sites/all/modules/contrib --extensions=php,inc,module,install`
  - Check `web/sites/all/modules/custom` folder for PHP 7.2 compatibility using [PHPCompatibility](https://github.com/PHPCompatibility/PHPCompatibility) standard: `lando phpcs --standard=PHPCompatibility --extensions=php,inc,module,install --report-full=report_72.txt --runtime-set testVersion 7.2 -ps web/sites/all/modules/custom`.
- `lando syncdb <remote>` - synchronize local database with selected remote environment. Options: `stage` (default), `prod`.
- `lando update` - apply required (database) updates.
- `lando xdebug-on`, `lando xdebug-off` - enable / disable [Xdebug](https://xdebug.org/) for [nginx](https://nginx.org/en/).

### Theming

Themes are compiled during build time using `drupal/.lando/node.sh`. See also [drupal/web/sites/all/themes/custom/kada/README.md](drupal/web/sites/all/themes/custom/kada/README.md).

### Workflow

Note: We use [Wunderflow](http://wunderflow.wunder.io/) as our git workflow.

All new features must be based on the `master` branch.
All hotfixes must be based on the `production` branch.
The `develop` branch is used only for testing and must never be merged back to master.
