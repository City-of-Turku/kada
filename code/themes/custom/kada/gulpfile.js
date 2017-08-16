/**
 * Created by lisette on 28/07/16.
 */
// General plugins
var gulp = require('gulp');
var browserSync = require('browser-sync').create();
var chalk = require('chalk');
var gutil = require('gulp-util');
var rename = require('gulp-rename');
var gulpif = require('gulp-if');

// Sass plugins
var sass = require('gulp-sass');
var sassGlob = require('gulp-sass-glob');
var sourcemaps = require('gulp-sourcemaps');
var autoprefix = require('gulp-autoprefixer');
var cleanCss = require('gulp-clean-css');

// Javascript plugins
var uglify = require('gulp-uglify');

// Image plugins
var imagemin = require('gulp-imagemin');

// Config
var basePath = {
  src: './src/',
  dist: './dist/',
  templates: './templates/'
};
var path = {
  styles: {
    src: basePath.src + 'scss/',
    dist: basePath.dist + 'css/'
  },
  scripts: {
    src: basePath.src + 'js/',
    dist: basePath.dist + 'js/'
  },
  images: {
    src: basePath.dist + 'image/',
    dist: basePath.dist + 'image/'
  },
  templates: {
    dist: basePath.templates
  },
  env : {
    dev: !!gutil.env.development,
    prod: !!gutil.env.production
  },
  sourcemaps: {
    dev: !!gutil.env.development,
    prod: !gutil.env.production
  },
  bower: 'bower_components/',
  fontAwesome: 'font-awesome/scss/'
}

var changeEvent = function(evt) {
    gutil.log('File', gutil.colors.cyan(evt.path.replace(new RegExp('/.*(?=/' + basePath.src + ')/'), '')), 'was', gutil.colors.magenta(evt.type));
};

console.log(gutil.env.production);

// BrowserSync task
gulp.task('browserSync', function() {
  browserSync.init({
    //files: path.styles.dist + '*.css', // Does not work when stylesheets have @import
    files: path.styles.src + '**/*.scss',
    // proxy: 'localhost:8080/pori-web/',
    // browser: '<browser>'
  })
});

// Sass task
gulp.task('sass', function(minify) {
  console.log('sass');
  return gulp.src(path.styles.src + '**/*.scss')
    .pipe(gulpif(path.sourcemaps.prod, sourcemaps.init()))
    .pipe(sassGlob())
    .pipe(sass({
      includePaths: [
        path.bower + path.fontAwesome,
        './'
      ],
      outputStyle: 'expanded'
    }))
    .on("error", function (err) {
      gutil.log(gutil.colors.black.bgRed(" SASS ERROR", gutil.colors.white.bgBlack(" " + (err.message.split("  ")[2]))));
      gutil.log(gutil.colors.black.bgRed(" FILE:", gutil.colors.white.bgBlack(" " + (err.message.split("\n")[0]))));
      gutil.log(gutil.colors.black.bgRed(" LINE:", gutil.colors.white.bgBlack(" " + err.line)));
      gutil.log(gutil.colors.black.bgRed(" COLUMN:", gutil.colors.white.bgBlack(" " + err.column)));
      gutil.log(gutil.colors.black.bgRed(" ERROR:", gutil.colors.white.bgBlack(" " + err.formatted.split("\n")[0])));
      return this.emit("end");
    })
    .pipe(autoprefix({
      browsers: ['last 2 versions']
    }))
    .pipe(path.env.prod === true ? cleanCss() : gutil.noop())
    .pipe(gulpif(path.sourcemaps.prod, sourcemaps.write()))
    .pipe(gulp.dest(path.styles.dist));
});

// Watch task
gulp.task('watch', ['sass', 'browserSync'], function() {
  gulp.watch(path.styles.src + '**/*.scss', ['sass']);
  gulp.watch(path.templates.dist + '**/*.html.twig', browserSync.reload);
  gulp.watch(path.scripts.src + '*.js', ['scripts']).on('change', browserSync.reload);
});

// Uglify task
gulp.task('scripts', function() {
  gulp.src(path.scripts.src + '/*.js')
    .pipe(path.env.prod === true ? uglify() : gutil.noop())
    .pipe(rename({
      suffix: '.min'
    }))
    .pipe(gulp.dest(path.scripts.dist));
});

// Image task
gulp.task('imagemin', function() {
  gulp.src(path.images.src + '*')
    .pipe(path.env.prod === true ? imagemin() : gutil.noop())
    .pipe(gulp.dest(path.images.dist));
});

// Default tasks
gulp.task('default', ['sass', 'watch', 'scripts'], function() {
  // console.log('Running default tasks');
});

gulp.task('build', ['sass', 'scripts', 'imagemin'], function() {
  console.log('Running build tasks');
});
