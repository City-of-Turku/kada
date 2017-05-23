This file describes the feature, from developer to developer. It should focus on why something has been implemented instead of how, but some tricky or special implementations should be mentioned here. Especially if they cannot be documented in code.

== PURPOSE ==
The mother of all features, contains all sitewide configuration etc. If a exportable configuration is shared between different content types or entities, or doesn't relate to any of them, then it should be placed here.

== CONTEXT ==
- footer_navigation: Displays the footer page navigation on the first sidebar, when a page is placed in any of the footer menus.
- sitewide: Main menu, footer menu, language switcher etc.
- front_page: For front page. Only changes the omega layout at the moment.
- sitewide_fi, sitewide_sv, sitewide_en: Localized sitewide contexts. Only for placing the localized footer info blocks at the moment.

== DISPLAY SUITE VIEW MODES ==
- current: For displaying flagged content in the main region for theme front pages
- carousel: For displaying flagged content in the main slideshow in header region.
- project: For displaying flagged content in the before_footer region

== BLOCK CONTENT ==
- Footer blocks: Contact information in different languages. WYSIWYG editing is disabled in custom code in kada_media_feature because SCALD seems to break CKEditor in block body.

== BLOCK SETTINGS ==
- For different modules which have configuration
- Menu Block block depths etc.

== FEEDS ==
The importers below are used for importing Service classifications for now. Requires custom code.
The terms have to be in Finnish and no duplicates should exist in the source data.
- term_importer_level1: Imports terms as root terms
- term_importer_level2: Imports terms and finds parent imported from with the previous importer
- term_importer_level3: Imports terms and finds parent imported from with the previous importer

== FIELDS ==
- Base fields which depend on a taxonomy (term reference)
- Base fields + instances  of fields which are attached to a taxonomy term

== TEXT FORMATS ==
- plain_text: The basic plain text format
- full_html: Typical Full HTML format without much restrictions or filters
- ds_code: Display Suite code format for custom DS fields. Only admin access.
- wysiwyg: The default formatter for content. Has CKEditor enabled. Embedding of SCALD atoms into text.

== FLAG ==
See the kada_liftups_feature for the logic how flagged content is displayed.
- carousel: "Web journalist"-role can flag liftups on and off the carousel.
- current: "Web journalist"-role can flag liftups on and off the current content grid.
- project: "Web journalist"-role can flag liftups on and off the project liftups list.

== HIERARCHICAL SELECT CONFIGS ==
- taxonomy-field_classification: Widget configuration for field_classification.

== LINKIT ==
Linkit-module (https://drupal.org/project/linkit) configuration
- editor: Used with wysiwyg editor, provides a button in wysiwyg profile configuration.
- fields: For linking content together in link fields.

== MENUS ==
Menu configuration, basically i18n settings.
Configuration for OG Menu which is created by og_menu_single.

== TAXONOMY ==
- district: Web journalist can manage districts, which can be attached to content. Currently not displayed, but later will possibly have coordinates and could be used to display location aware content.
- keywords: aka. "Free tagging", all content editors can add these and provide metadata about content. Can be used later for "similar content" etc.
NOTE: Terms are not translated because it makes it complicated to select correct terms for content translations. So each translation will need a different keyword. In short "school", "skola" and "koulu" will be different terms.
- target_audience: Predefined list of target audience, can be used later for context aware content display.
- theme: The beef of the site structure at the moment. All content can have a theme. Theme has a color which is used for coloring content. Liftups are displayed on the main theme pages (Teemasivut) + front page if they have the same theme. "City" theme is reserved for footer content which activates the footer sidebar navigation. Social media updates are tagged to "Front page" theme by default.
- service_classification: To be used for classifying Services which are connected to Service offers and Places.

== STRONGARM ==
All sorts of sitewide variables exported to code. Other features have more variables if they fit better there.

== VIEWS ==
- kada_accessibilities: Accessiblities per Place from referenced accessibility field collections.
- kada_contact_information: Contact information in teaser display mode per content from referenced Place.

== WYSIWYG PROFILES ==
Exported WYSIWYG module configuration for wysiwyg and full_html text formats.

== CUSTOM CODE ==
function kada_configuration_feature_date_formats():
Defines custom date formats which can be used with custom date format types. These do not appear in the UI at /admin/config/regional/date-time/formats, but they are mapped directly to a date format type.

function kada_configuration_feature_date_format_types():
Defines custom date format types and their date format. These appear in the UI at /admin/config/regional/date-time but the format cannot be changed.

Custom block to show tweet embeds - also tweet_embed field validation functionality.

== FEATURE DEPENDENCIES ==
None. More or less all other features depend on this feature.

== Changelog ==
* 2017-05-23 *
Moved DS view mode "search_result" to search feature.
Moved context "quick_search" to search feature.

* 2015-08-27 *
New display mode for taxonomies: Term name.

* 2015-06-15 *
Contact information view.

* 2015-06-03 *
Service classification vocabulary and Feeds importers.

* 2015-05-26 *
Linkit editor profile.

* 2015-05-22 *
Search result DS view mode.

* 2015-04-29 *
Added Tweet embed block and tweet_embed field validation.

* 2015-02-09 *
Two OG Extra block configurations. "Group details", which is not used at all, and "Node links" block which provides links for adding content to the currently active group. Eases adding pages to the group menu a lot easier.

* 2015-02-04 *
#601: Changed some menu block configurations to work with active menu item.
Exported Menu block configuration which makes menus work with the dynamic menu blocks.

* 2015-01-28 *
Moved field_section_er to field bases feature

* 2014-12-18 *
First version of this document
