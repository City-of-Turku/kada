If you only change the theme colors and fonts, but not layout related items, modify this kada base theme. If bigger changes need to happen, the Kada subhteme needs to be used!

# Theme Setup

## 1. Theme

### 1.1 Intro

The theme used is Theme D7 (theme_d7). A [Sass][idSass] and [Gulp][idGulp] based Drupal 7 theme.

### 1.2 Requirements

To make sure your Theme D7 is fully functional, you will need to install a few items.

- Download the latest [node.js][idNode] version from the website or run its update `npm update -g npm` to make sure you have the latest version
- Install [Gulp][idGulp] with `npm install gulp-cli -g` and `npm install gulp -D`
- Install [Bower][idBower] by typing `npm install -g bower` in your terminal

### 1.3 Setup project

To setup your project, you should find these files in your theme root (any changes should be commited):

* package.json
* bower.json
* gulpfile.js

All commands should be run in your theme root

#### 1.3.1 package.json - installing dependencies

Run `npm install` in the same folder as the package.json file. This will install the correct version of each dependency listed in that file.

Run `npm help` for more information

#### 1.3.2 gulpfile.js

For information about the gulpfile.js configuration, check [Gulp - Getting strated][idGulp2]

#### 1.3.3 Bower

The web is built from various frameworks, libraries and plugins. Bower makes it easier to manages these packages.

Run `bower install` to install the packages defined in the bower.json file ([Susy][idSusy] (grid system) and [Font Awesome][idFontawesome])

#### 1.3.4 Browsersync

To use browsersync / live reload go to the gulpfile.js and find `gulp.task('browserSync', function() {}`.
- Enable `proxy: 'localhost:8080/<website>'` (change *<website>* to the correct name of your project)
- Enable `browser: '<browser>'` to your prefered browser (eg. browser: 'firefox'). This will open your project with the browser and use this browser to reload.

#### 1.3.5 Theme name

Change the name of your theme folder and .info file to the project name and rename the functions in your template.php.

### 1.4 Start theming

#### 1.4.1 Compile with Gulp

After completing the setup, you are ready to start coding.
**Optional:** Run `gulp` to create the .css and .min.js files

Run `gulp watch` to keep gulp checking for changes to the scss files, js files, and html.tpl files.
**Note:** when adding new files to the scss, js or templates folder, you  have to restart gulp watch.

You can also run (and should when deploying to live) `gulp --production` for production tasks (css minify, uglify and imagemin)

#### 1.4.2 Theme structure

Below you will find the general theme structure

  dist/
  src/
  templates/
  .gitignore
  .scss-lint.yml
  bower.json
  gulpfile.js
  businesspori.info
  package.json
  README.md
  template.php

[idSass]: http://sass-lang.com
[idGulp]: http://gulpjs.com
[idNode]: http://nodejs.org
[idBower]: https://bower.io
[idFontawesome]: https://fortawesome.github.io/Font-Awesome/
[idSusy]: http://susy.oddbird.net
[idGulp2]: https://github.com/gulpjs/gulp/blob/master/docs/getting-started.md
