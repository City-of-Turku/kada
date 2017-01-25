This file describes the feature, from developer to developer. It should focus on why something has been implemented instead of how, but some tricky or special implementations should be mentioned here. Especially if they cannot be documented in code.

== Purpose ==
For exporting all configuration possible related to media into a feature. In this project mostly SCALD related stuff.

== Display Suite ==
Scald atoms are now rendered through Display Suite for better control.

We export DS field & layout settings.

== Fields ==
All scald related field instances and bases.

== Flexslider ==
Big top carousel flexslider configs.

== Image styles ==
All image styles that site uses.
- current
- project
- top-carousel
- main_liftup_narrow & wide

== Scald ==
Scald context settings.
Custom contexts:
  - carousel
  - content_full
  - content_half
  - current
  - full_modal
  - main_content
  - project
  - main_liftup
    (& _wide, but it should be unnecessary once a better scald player materializes)
  - grid_item

== Taxonomy ==
Scald taxonomies:
- scald_authors
- scald_tags

== Permissions ==
Scald related permissions.

== Strongarm ==
- Scald entity bundle settings
- General scald settings

== Views ==
Custom scald views that overwrites default views.
- Atom admin page
- Atom library

== Custom code ==
tkufi_media_feature.module file:
- tkufi_media_feature_menu()
  - Add menu links to point into atom create pages
- tkufi_media_feature_views_default_view_override_views_to_override()
  - Overrides scald default views
- tkufi_media_feature_entity_presave($entity, $type)
  - Inserts file / source id into default title field
- tkufi_media_feature_mee_form_alter
  - Adds default context selector for DND
- tkufi_media_feature_field_attach_preprocess_alter
  - Corrects alt & title attributes for scald atom images  

== Other notes ==

auto_gallery.js is a JS file making all links to images show in a Colorbox
modal. It's included in colorbox_colorbox_settings_alter() only for news
items.

== Changelog ==
* 2015-03-27 *
#1237 Fixed scald legend to use correct title text field.

* 2015-03-16 *
#1069 & Some other tickets: Scald atoms are rendered now through Display Suite.
Alt & title attribute corrections.

* 2015-02-05
#693: Show all news item images in a modal gallery

* 2015-01-29 *
#385: Create multiple atoms at once and add menu items to point into atom create pages.

* 2014-12-18 *
#376: Project liftup width adjustment
Project liftups now stick to content width.
Updated image style for better quality images on tablet width.

* 2015-02-03 *
#509: Front page news liftups
Added image styles & scald contexts for main liftup images.

* 2015-03-24 * 
#1294: Added responsive styles for grid items
