; Drush Make file for KADA project.
; ----------------

; Core version
; ------------
; Each makefile should begin by declaring the core version of Drupal that all
; projects should be compatible with.

core = 7.x


; API version
; ------------
; Every makefile needs to declare its Drush Make API version. This version of
; drush make uses API version `2`.

api = 2


; Core project
; ------------
projects[drupal][type] = core
projects[drupal][version] = "7.56"

; Use vocabulary machine name for permissions (https://www.drupal.org/node/995156)
projects[drupal][patch][995156] = https://www.drupal.org/files/issues/995156-5_portable_taxonomy_permissions.patch

; Get rid or Undefined variable: localized_options from logs
projects[drupal][patch][1018614] = https://www.drupal.org/files/drupal-menu_navigation_links-1018614-83.patch


; Libraries
; ------------

; Solr PHP client
; libraries[SolrPhpClient][download][type] = get
; libraries[SolrPhpClient][download][url] = http://solr-php-client.googlecode.com/files/SolrPhpClient.r60.2011-05-04.tgz

; CKEditor for WYSIWYG
libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.4.5/ckeditor_4.4.5_full.zip"

; CSS3Pie
;libraries[PIE][download][type] = get
;libraries[PIE][download][url] = https://github.com/downloads/lojjic/PIE/PIE-1.0.0.zip

; FitVids
libraries[fitvids][download][type] = get
libraries[fitvids][download][url] = https://raw.github.com/davatron5000/FitVids.js/master/jquery.fitvids.js

; FlexSlider
libraries[flexslider][download][type] = get
libraries[flexslider][download][url] = https://github.com/woothemes/FlexSlider/archive/version/2.2.2.zip
libraries[flexslider][patch][] = "../patches/flexslider_ie_vertical_pan_support.patch"

; jsonpath library added locally as part of project because not anymore available from Google Code.
libraries[jsonpath][download][type] = file
libraries[jsonpath][download][url] = code/libraries/jsonpath/jsonpath.php

; Feeds OAuth seems to have a make file for this
; php-proauth (forked)
;libraries[php-proauth][download][type] = git
;libraries[php-proauth][download][url] = https://github.com/infojunkie/php-proauth.git

; Plupload
projects[plupload_lib][type] = library
projects[plupload_lib][download][type] = get
projects[plupload_lib][download][url] =  https://github.com/moxiecode/plupload/archive/v1.5.8.zip
projects[plupload_lib][directory_name] = plupload
; Security issue: remove examples folder
projects[plupload_lib][patch][] = https://www.drupal.org/files/issues/plupload-1_5_8-rm_examples-1903850-21.patch

; Predis library
libraries[predis][download][type] = get
libraries[predis][download][url] = https://github.com/nrk/predis/archive/v1.0.0.zip

; Colorbox library
libraries[colorbox][download][type] = get
libraries[colorbox][download][url] = https://github.com/jackmoore/colorbox/archive/1.5.14.zip

; Openlayers library
libraries[openlayers][download][type] = get
libraries[openlayers][download][url] = https://github.com/openlayers/openlayers/releases/download/release-2.13.1/OpenLayers-2.13.1.zip

; Contrib modules
; ------------

projects[addressfield][subdir] = contrib
projects[addressfield][version] = 1.2

projects[admin_notification][subdir] = contrib
projects[admin_notification][version] = 1.0-rc3

projects[admin_menu][version] = 3.0-rc5
projects[admin_menu][subdir] = contrib

projects[admin_theme][version] = 1.0
projects[admin_theme][subdir] = contrib
; Fix for disabling admin theme in content edit paths, such as user/*/edit
projects[admin_theme][patch][] = "https://www.drupal.org/files/disable_admin_theme.patch"

projects[advagg][version] = 2.13
projects[advagg][subdir] = contrib

;projects[autocache][version] = 1.4
;projects[autocache][subdir] = contrib

projects[auto_entitylabel][version] = 1.4
projects[auto_entitylabel][subdir] = contrib
; Support for entity translation and title_field
projects[auto_entitylabel][patch][] = "https://www.drupal.org/files/issues/auto_entitylabel_translation_placeholder_2427539_1.patch"

projects[better_exposed_filters][version] = 3.4
projects[better_exposed_filters][subdir] = "contrib"

projects[better_formats][version] = 1.0-beta2
projects[better_formats][subdir] = contrib

; Dev-version doesn't duplicate "Show row weights" link in JS
projects[bigmenu][type] = "module"
projects[bigmenu][subdir] = "contrib"
projects[bigmenu][download][type] = "git"
projects[bigmenu][download][url] = "http://git.drupal.org/project/bigmenu.git"
projects[bigmenu][download][revision] = "ab3bc0592234a36df4a36746909e54350565785a"

; 1.3. may have caused some trouble when enabling/disabling theme,
; updated to 1.4.
projects[breakpoints][version] = 1.4
projects[breakpoints][subdir] = contrib

projects[cache_actions][version] = 2.0-alpha5
projects[cache_actions][subdir] = contrib

projects[coffee][version] = 2.2
projects[coffee][subdir] = contrib

projects[ckeditor_link][version] = 2.4
projects[ckeditor_link][subdir] = contrib

projects[colorbox][version] = 2.13
projects[colorbox][subdir] = contrib

projects[conditional_fields][version] = 3.0-alpha2
projects[conditional_fields][subdir] = contrib

projects[context][version] = 3.7
projects[context][subdir] = contrib
; Fixes context ui performance issues
projects[context][patch][] = "https://www.drupal.org/files/issues/context-node-taxonomy-performance-autocomplete-873936-47.patch"
; Set $conf['menu_override_parent_selector'] = false; in settings.php, it will disable
; menu links condition in context, but we don't want content related configuration to our features anyway
;projects[context][patch][] = "https://www.drupal.org/files/context_0001-Issue-873936-by-wojtha-Fabianx-Massively-increase-pe.patch"

; Dev-version supports field "not empty" condition. NOTE: if new view modes are
; added, all contexts which use conditions from this module have to be resaved!
projects[context_entity_field][type] = "module"
projects[context_entity_field][subdir] = "contrib"
projects[context_entity_field][download][type] = "git"
projects[context_entity_field][download][url] = "http://git.drupal.org/project/context_entity_field.git"
projects[context_entity_field][download][revision] = "3e60e94f8541a4c72b2ef207a9c073d45c7b9c14"
; Patch makes the view mode work better when there might be multiple entities
projects[context_entity_field][patch][] = "https://www.drupal.org/files/issues/context_entity_field-view_mode-2022197-4.patch"

projects[context_omega][version] = 1.1
projects[context_omega][subdir] = contrib
projects[context_omega][patch][] = "https://www.drupal.org/files/i2115997-3.patch"

;projects[css3pie][version] = 2.1
;projects[css3pie][subdir] = contrib

projects[ctools][version] = 1.12
projects[ctools][subdir] = contrib

projects[date][version] = 2.10
projects[date][subdir] = contrib

;Dev version fixes "Missing argument" 1 bug https://www.drupal.org/node/2125599
projects[date_facets][type] = "module"
projects[date_facets][subdir] = "contrib"
projects[date_facets][download][type] = "git"
projects[date_facets][download][url] = "http://git.drupal.org/project/date_facets.git"
projects[date_facets][download][revision] = "9037608bc2736096b9e30d94e843958aab27e584"
; Patch that makes the date facets translatable
projects[date_facets][patch][] = "https://www.drupal.org/files/issues/2226429-date_facets_not_translatable-4.patch"
; Patch to fix a flood of notices
projects[date_facets][patch][] = "https://www.drupal.org/files/issues/date_facets-undefined-index-2220227-2.patch"

projects[diff][version] = 3.3
projects[diff][subdir] = contrib

projects[domain][version] = 3.13
projects[domain][subdir] = contrib

projects[domaincontext][version] = 1.0-alpha1
projects[domaincontext][subdir] = contrib
; Fix to use machine names instead of ids
projects[domaincontext][patch][] = "https://www.drupal.org/files/1542406-5-domain-machine-names.patch"

; Provides some additional rules / views options
projects[domain_integration][version] = 1.1
projects[domain_integration][subdir] = contrib

projects[domain_variable][version] = 1.1
projects[domain_variable][subdir] = contrib
; Fix for the UI of domain_variable + i18n
projects[domain_variable][patch][] = "https://www.drupal.org/files/issues/domain_variable_i18n_fixes-2308283-4.patch"

projects[domain_feeds][version] = 1.4

projects[ds][version] = 2.14
projects[ds][subdir] = contrib

; Dev-version which includes entity_translation support.
projects[eck][version] = 2.0-rc9
projects[eck][subdir] = contrib
projects[eck][patch][] = "https://www.drupal.org/files/issues/entity_translation-2490530-1.patch"

projects[elysia_cron][version] = 2.4
projects[elysia_cron][subdir] = contrib

projects[email][version] = 1.3
projects[email][subdir] = contrib

projects[entity][version] = 1.8
projects[entity][subdir] = contrib

projects[entityreference][version] = 1.5
projects[entityreference][subdir] = "contrib"

projects[entityreference_prepopulate][version] = 1.5
projects[entityreference_prepopulate][subdir] = contrib

projects[entityqueue][version] = 1.1
projects[entityqueue][subdir] = contrib
; Adds export for entityqueue subqueues
projects[entityqueue][patch][] = "../patches/entityqueue_subqueue_export.patch"

; Only dev version is available for entity_base_type module.
projects[entity_base_type][type] = module
projects[entity_base_type][subdir] = contrib
projects[entity_base_type][download][type] = git
projects[entity_base_type][download][url] = http://git.drupal.org/project/entity_base_type.git
projects[entity_base_type][download][revision] = 011b7f2b9221ca87846ee5dc0f22dc5c8507807d

projects[entity_translation][version] = 1.0-beta6
projects[entity_translation][subdir] = contrib

projects[expire][version] = 2.0-rc4
projects[expire][subdir] = contrib

projects[facetapi][version] = 1.5
projects[facetapi][subdir] = contrib

projects[facetapi_bonus][version] = 1.1
projects[facetapi_bonus][subdir] = contrib

projects[facetapi_collapsible][type] = "module"
projects[facetapi_collapsible][subdir] = "contrib"
projects[facetapi_collapsible][download][type] = "git"
projects[facetapi_collapsible][download][url] = "http://git.drupal.org/project/facetapi_collapsible.git"
projects[facetapi_collapsible][download][revision] = 88d15496926e1f9aa599e6b09afe09377a413482

projects[facetapi_pretty_paths][version] = 1.4
projects[facetapi_pretty_paths][subdir] = contrib

; Specific dev-version since there is no release available
projects[facetapi_select][type] = "module"
projects[facetapi_select][subdir] = "contrib"
projects[facetapi_select][download][type] = "git"
projects[facetapi_select][download][url] = "http://git.drupal.org/project/facetapi_select.git"
projects[facetapi_select][download][revision] = c960e188fd9ce1cbc21d63cec0e331b0ab70ff5f

projects[features][version] = 2.10
projects[features][subdir] = contrib

projects[features_extra][version] = 1.0
projects[features_extra][subdir] = contrib

projects[field_collection][version] = 1.0-beta12
projects[field_collection][subdir] = contrib

projects[field_group][version] = 1.5
projects[field_group][subdir] = contrib

; Latest 2.0-beta2 has new functions we need, such as:
; - https://www.drupal.org/node/1183440 / Multilingual Feeds - Make field import language-aware
;   (it was previously added here as a patch)
; - https://www.drupal.org/node/1470530 / Unpublish/Delete nodes not included in feed
;   This recently added feature is required at least by Lippupiste integration,
;   as removed/cancelled events are are not available in CSV, and thus we have
;   to remove all events that are missing. A bit scary though: what happens if CSV
;   returns empty because of some outside problem orbug? Ok, it would be
;   autogenerated when its fixed.
; - The memory issue patch doesnt apply anymore, had to be recreated
;   (400 lines difference)
projects[feeds][version] = "2.0-beta3"
projects[feeds][subdir] = "contrib"
projects[feeds][patch][] = "../patches/feeds-2246755-var-export-memory-issue_for_2.0-beta-2.patch"

; Dev-version two commits after alpha8 release, required by patch below
projects[feeds][type] = "module"
;projects[feeds][download][type] = "git"
;projects[feeds][download][url] = "http://git.drupal.org/project/feeds.git"
;projects[feeds][download][revision] = "7e6679d20b989cfb36ba86c3cc1e6670db9d7398"
; Exposes Drupal core field language selection for Feeds, required for importing to content types which has entity translation enabled
;projects[feeds][patch][] = "https://www.drupal.org/files/feeds-field_translation_imports-1183440-80.patch"

projects[feeds_ex][version] = 1.0-beta2
projects[feeds_ex][subdir] = contrib

projects[feeds_oauth][version] = 1.0-beta3
projects[feeds_oauth][subdir] = contrib
projects[feeds_oauth][patch][] = "../patches/feeds_oauth_library_404_fix.patch"

projects[feeds_tamper][version] = 1.1
projects[feeds_tamper][subdir] = contrib
projects[feeds_tamper][patch][] = "https://www.drupal.org/files/issues/easyconfigimport_1946222_0.patch"

projects[feeds_tamper_conditional][version] = 1.0-beta2
projects[feeds_tamper_conditional][subdir] = contrib

projects[fitvids][version] = 1.17
projects[fitvids][subdir] = contrib

projects[flag][version] = 3.9
projects[flag][subdir] = contrib

projects[flexslider][version] = 2.0-alpha3
projects[flexslider][subdir] = contrib
; Fix for initial height of 0px
projects[flexslider][patch][] = "https://www.drupal.org/files/issues/0001-Issue-2086525-by-alvar0hurtad0-Johnny-vd-Laar-Flexsl_0.patch"

projects[geocoder][version] = 1.3
projects[geocoder][subdir] = contrib

; Only dev-version is available
projects[geocoder_rules][type] = "module"
projects[geocoder_rules][subdir] = "contrib"
projects[geocoder_rules][download][type] = "git"
projects[geocoder_rules][download][url] = "http://git.drupal.org/project/geocoder_rules.git"
projects[geocoder_rules][download][revision] = "4d6910d6d2ec80aedd9078ee68cdb844d0934a3c"

projects[geofield][version] = 2.3
projects[geofield][subdir] = contrib
; Makes it possible to delete Openlayers features from a map widget
projects[geofield][patch][] = "https://www.drupal.org/files/issues/geofield-delete_feature_fix-1350320-20.patch"
; Geofield handles ET fields language in a wrong way
projects[geofield][patch][] = "../patches/geofield-entity-translation-field-lang.patch"

projects[geophp][version] = 1.7
projects[geophp][subdir] = contrib

projects[google_analytics][version] = 2.0
projects[google_analytics][subdir] = contrib

projects[hierarchical_select][version] = 3.0-beta8
projects[hierarchical_select][subdir] = contrib

projects[honeypot][version] = 1.22
projects[honeypot][subdir] = contrib

projects[httprl][version] = 1.14
projects[httprl][subdir] = contrib

projects[i18n][version] = 1.18
projects[i18n][subdir] = contrib

projects[imageapi_optimize][version] = 1.2
projects[imageapi_optimize][subdir] = contrib

projects[imagecache_token][version] = 1.0-rc2
projects[imagecache_token][subdir] = "contrib"
; Scald atom support
projects[imagecache_token][patch][] = "https://www.drupal.org/files/issues/imagecache_token-scald_compatibility-2528180-16.patch"

projects[ip_geoloc][version] = 1.30
projects[ip_geoloc][subdir] = contrib

projects[job_scheduler][version] = 2.0-alpha3
projects[job_scheduler][subdir] = contrib

projects[jquery_update][version] = 2.7
projects[jquery_update][subdir] = contrib

projects[language_access][version] = 1.01
projects[language_access][subdir] = contrib

projects[libraries][version] = 2.3
projects[libraries][subdir] = contrib

projects[link][version] = 1.4
projects[link][subdir] = contrib

projects[linkchecker][version] = 1.3
projects[linkchecker][subdir] = contrib

; Dev version includes a fix for wysiwyg and the patch applies to dev version
projects[linkit][version] = 3.5
projects[linkit][subdir] = "contrib"
; Entity translation support
projects[linkit][patch][] = "https://www.drupal.org/files/issues/entity_translation-2280441-31.patch"

projects[maxlength][version] = 3.2
projects[maxlength][subdir] = contrib

projects[memcache][version] = 1.5
projects[memcache][subdir] = contrib

projects[menu_attributes][version] = 1.0
projects[menu_attributes][subdir] = contrib

projects[menu_block][version] = 2.7
projects[menu_block][subdir] = contrib

projects[metatag][version] = 1.22
projects[metatag][subdir] = contrib

projects[module_filter][version] = 2.1
projects[module_filter][subdir] = contrib

projects[multiple_entity_form][version] = 1.3
projects[multiple_entity_form][subdir] = contrib

projects[multiple_selects][version] = 1.2
projects[multiple_selects][subdir] = contrib

projects[node_clone][version] = 1.0
projects[node_clone][subdir] = "contrib"

projects[openlayers][version] = 2.0-beta11
projects[openlayers][subdir] = contrib
; Patch for internal original variant for 2.0-beta11 version, should be fixed in -dev version already
projects[openlayers][patch][] = "../patches/openlayers_internal_variant.patch"

projects[openlayers_geolocate_button][version] = 1.0
projects[openlayers_geolocate_button][subdir] = contrib
; Patch for showing located position indicator
projects[openlayers_geolocate_button][patch][] = "../patches/openlayers_geolocate_button-show-location.patch"

projects[options_element][version] = 1.12
projects[options_element][subdir] = contrib

projects[og][version] = 2.7
projects[og][subdir] = contrib
; Fixes broken entity reference relationship
projects[og][patch][] = "https://www.drupal.org/files/issues/add-gid-to-relationship-field-1890370-34.patch"

projects[og_extras][version] = 1.2
projects[og_extras][subdir] = "contrib"

projects[og_menu_single][version] = 1.0-beta2
projects[og_menu_single][subdir] = contrib
; Patch which makes the "manage menu" per group permission work for users who
; do not have the general "administer menus" permission.
projects[og_menu_single][patch][] = "https://www.drupal.org/files/issues/og_menu_single-check-menu-access-2027109-14.patch"

projects[og_webform][version] = 1.0-beta1
projects[og_webform][subdir] = "contrib"
; The following 2 patches are to fix issue https://www.drupal.org/node/1946432
projects[og_webform][patch][] = "http://cgit.drupalcode.org/og_webform/patch/?id=b60f03ae4de8050bb2499106484df085b9884b25"
projects[og_webform][patch][] = "https://www.drupal.org/files/og_webform_api2-1946432_0.patch"

projects[pathauto][version] = 1.3
projects[pathauto][subdir] = contrib

projects[picture][version] = 2.13
projects[picture][subdir] = contrib

projects[plupload][version] = 1.7
projects[plupload][subdir] = contrib

projects[prepopulate][version] = 2.1
projects[prepopulate][subdir] = contrib

projects[proj4js][version] = 1.2
projects[proj4js][subdir] = contrib

projects[publishcontent][version] = 1.4
projects[publishcontent][subdir] = contrib

projects[quicktabs][version] = 3.8
projects[quicktabs][subdir] = contrib

projects[radioactivity][version] = 2.9
projects[radioactivity][subdir] = contrib
; Fixes radiactivity javascript history bug
projects[radioactivity][patch][] = "../patches/radioactivity_javascript_history_fix_e3705c6c.patch"
projects[radioactivity][patch][] = "https://www.drupal.org/files/issues/radioactivity-predis-support-1284228-12_0.patch"
projects[radioactivity][patch][] = "../patches/radioactivity-config-location.patch"

projects[redirect][version] = 1.0-rc3
projects[redirect][subdir] = contrib

projects[redis][version] = 2.12
projects[redis][subdir] = contrib
; Patch to support Predis 1.0
projects[redis][patch][] = "https://www.drupal.org/files/issues/redis-predis-path-183934-19.patch"

projects[relation][version] = 1.1
projects[relation][subdir] = contrib
projects[relation][patch][better_rules] = "https://www.drupal.org/files/issues/relation-query_endpoints-1302788-33.patch"

projects[relation_add][version] = 1.6
projects[relation_add][subdir] = contrib

projects[responsive_menus][version] = 1.6
projects[responsive_menus][subdir] = "contrib"

projects[restrict_node_page_view][version] = 1.2
projects[restrict_node_page_view][subdir] = contrib

projects[rules][version] = 2.10
projects[rules][subdir] = contrib
; Fixes a "Class name must be a valid object or a string" error message when enabling a feature
projects[rules][patch][] = "https://www.drupal.org/files/issues/rules-rules_i18n_fatal-2495599-2.patch"

projects[rules_batch][version] = 1.0-beta1
projects[rules_batch][subdir] = contrib

projects[rules_conditional][version] = 1.0-beta2
projects[rules_conditional][subdir] = contrib

projects[sarnia][subdir] = contrib
projects[sarnia][download][type] = "git"
projects[sarnia][download][url] = "http://git.drupal.org/project/sarnia.git"
projects[sarnia][download][revision] = "f266c3e84c744a28b61418987baee32fe22a473b"
; Patch for Date field support
projects[sarnia][patch][] = "https://www.drupal.org/files/issues/2513444-sarnia-date-facets-1.patch"
; Patch for excerpt support
projects[sarnia][patch][] = "https://www.drupal.org/files/issues/displayHighlight-2507513-10032369.patch"

projects[scald][version] = 1.8
projects[scald][subdir] = contrib

projects[scald_vimeo][version] = 1.5
projects[scald_vimeo][subdir] = contrib

projects[scald_youtube][version] = 1.5
projects[scald_youtube][subdir] = contrib

projects[scald_file][version] = 1.3
projects[scald_file][subdir] = "contrib"

projects[scheduler][version] = 1.3
projects[scheduler][subdir] = contrib

projects[search_api][version] = 1.14
projects[search_api][subdir] = contrib
projects[search_api][patch][] = "https://www.drupal.org/files/issues/2190627-16--views_abort_build_on_errors.patch"

; Use dev version which has latest bug fixes
projects[search_api_ajax][type] = "module"
projects[search_api_ajax][subdir] = "contrib"
projects[search_api_ajax][download][type] = "git"
projects[search_api_ajax][download][url] = "http://git.drupal.org/project/search_api_ajax.git"
projects[search_api_ajax][download][revision] = "fd00bd6d865fff8ff7913bdb5bbc1e398e097ee9"
; Patch that refactors the module in a major way
projects[search_api_ajax][patch][] = "https://www.drupal.org/files/issues/search_api_ajax-refactor-2469225-5.patch"
; Patch that adds language prefix support
projects[search_api_ajax][patch][] = "https://www.drupal.org/files/issues/2497129-search_api_ajax_path_prefix_support-3.patch"

; Only dev-version is available
projects[search_api_et][type] = "module"
projects[search_api_et][subdir] = "contrib"
projects[search_api_et][download][type] = "git"
projects[search_api_et][download][url] = "http://git.drupal.org/project/search_api_et.git"
projects[search_api_et][download][revision] = "a56f5273bc4cef18ebac797a9f04410224601d2f"

projects[search_api_override][version] = 1.0-rc1
projects[search_api_override][subdir] = contrib

projects[search_api_solr][version] = 1.6
projects[search_api_solr][subdir] = contrib

projects[service_links][version] = 2.2
projects[service_links][subdir] = contrib
; Patch for Facebook Like button visibility
projects[service_links][patch][] = "https://www.drupal.org/files/service_links-2039431.patch"

projects[shortcutperrole][version] = 1.2
projects[shortcutperrole][subdir] = contrib

projects[shorten][version] = 1.4
projects[shorten][subdir] = contrib

projects[smtp][version] = 1.2
projects[smtp][subdir] = contrib

projects[stage_file_proxy][version] = 1.7
projects[stage_file_proxy][subdir] = contrib

projects[stringoverrides][version] = 1.8
projects[stringoverrides][subdir] = contrib

projects[strongarm][version] = 2.0
projects[strongarm][subdir] = contrib

projects[styleguide][version] = 1.1
projects[styleguide][subdir] = contrib
; Group elements in style guide
projects[styleguide][patch][] = "../patches/styleguide-group.patch"

projects[taxonomy_display][version] = 1.1
projects[taxonomy_display][subdir] = contrib

projects[taxonomy_manager][version] = 1.0
projects[taxonomy_manager][subdir] = contrib

projects[title][version] = 1.0-alpha7
projects[title][subdir] = contrib

projects[token][version] = 1.6
projects[token][subdir] = contrib

projects[transliteration][version] = 3.2
projects[transliteration][subdir] = contrib

projects[uuid][version] = 1.0-alpha6
projects[uuid][subdir] = contrib

projects[uuid_features][version] = 1.0-alpha4
projects[uuid_features][subdir] = contrib

projects[variable][version] = 2.5
projects[variable][subdir] = contrib

projects[varnish][version] = 1.1
projects[varnish][subdir] = contrib
; Varnish banning with expire + domain_access + no static base_url in settings.php
; leads to problems which can show up as most of bans (flushes) not being applied,
; or only applied on specific domains, when we usually want all domains to be affected.
; This can be tested with with "drush vp 'url'", which may show up in varnishlog as:
;  Rd ban req.http.host ~ default && req.url ~ ^path$
: The "default"-part of the domain should be the base_url, or if none is specified
; the "eq.http.host" should be skipped.
; https://www.drupal.org/node/2558729 / Varnish 3 normal ban remove http host with base path
projects[varnish][patch][2558729] = "https://www.drupal.org/files/issues/varnish-remove-host-with-base-path-2558729-3.patch"

projects[view_unpublished][version] = 1.2
projects[view_unpublished][subdir] = contrib

; The simplest way of setting views caches
projects[views_content_cache][version] = 3.0-alpha3
projects[views_content_cache][subdir] = contrib
; Fixing og compatibility: https://www.drupal.org/node/2054811#comment-9945729
projects[views_content_cache][patch][og] = "https://www.drupal.org/files/issues/views_content_cache-og-2054811-9.patch"

projects[views][version] = 3.8
projects[views][subdir] = contrib

projects[views_accordion][version] = 1.1
projects[views_accordion][subdir] = contrib

projects[views_data_export][version] = 3.0-beta9
projects[views_data_export][subdir] = contrib

projects[views_bulk_operations][version] = 3.2
projects[views_bulk_operations][subdir] = contrib

projects[views_default_view_override][version] = 2.0
projects[views_default_view_override][subdir] = contrib

projects[views_rss][version] = 2.0-rc4
projects[views_rss][subdir] = contrib

projects[views_ajax_get][version] = 1.2
projects[views_ajax_get][subdir] = contrib

projects[webform][version] = 4.11
projects[webform][subdir] = contrib

projects[wysiwyg][type] = "module"
projects[wysiwyg][subdir] = "contrib"
projects[wysiwyg][download][type] = "git"
projects[wysiwyg][download][url] = "http://git.drupal.org/project/wysiwyg.git"
projects[wysiwyg][download][revision] = "898d022cf7d0b6c6a6e7d813199d561b4ad39f8b"

; Contrib themes
; ------------

projects[omega][version] = 4.3
projects[omega][subdir] = contrib
