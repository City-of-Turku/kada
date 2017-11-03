This file describes the feature, from developer to developer. It should focus on why something has been implemented instead of how, but some tricky or special implementations should be mentioned here. Especially if they cannot be documented in code.

== PURPOSE ==
Liftups give content editors a tool to make visually catching shortcuts in the site or promote content outside the site.

== ENABLING ==
Create the following entity queues after enabling the feature, as otherwise related views don't work.
- kadacalendar_event_front_carousel_sub_fi
- kadacalendar_event_front_carousel_sub_sv
- kadacalendar_event_front_carousel_sub_en
- kadacalendar_event_front_carousel_sub_ru
- kadacalendar_hobby_front_carousel_sub_fi
- kadacalendar_hobby_front_carousel_sub_sv
- kadacalendar_hobby_front_carousel_sub_en
- kadacalendar_hobby_front_carousel_sub_ru

== CONTEXT ==
- theme_liftups: Will display the view blocks for top carousel, current and project liftups. The paths are "hard-coded" in conditions, there could be a better way to activate this context for first level menu items only.

== DISPLAY SUITE FIELDS ==
- duplicate_vignette: A dynamic field which display the value from field_vignette. Project liftup displays the vignette twice.

== FIELD INSTANCES ==
- body: Basic formatted text area
- field_address: Address of the liftup to allow location-sensitivity
- field_district: Location of the liftup in a pre-defined district set
- field_keywords: Not visible, but can be used to make the liftup visible in a landing page
- field_link_to_content: A link where this liftup is linked to. Linkit module (https://drupal.org/project/linkit) is used for easier internal linking.
- field_location: Location of the liftup geocoded from the address field
- field_main_image: One image per liftup. Will look different depending where the liftup is visible. On top carousel it will be huge image in the header, on current small image with optional vignette etc.
- field_target_audience: Not used for displaying yet.
- field_theme: Theme can make liftup visible in theme pages if the liftup is flagged. It will also give color to the liftup, check the hook_preprocess_node in template.php.
- field_vignette: Is a short vignette about the liftup. Displayed over an image for example.
- field_visible_title: Optional visible title. Some liftups do not need a title, and because Drupal kind of requires a title, this optional field was added.
- og_group_ref: Section (organic group) can be assigned to content to make it visible in the section front page.

== PERMISSIONS ==
Content editors can add and edit, Web journalist can also delete and flag content to different places. Anonymous cannot view full liftups, because liftups are linked to other content.

== QUICKTABS ==
- feeds_tabs: Display different views displays per page and landing page. The visibility is controlled by field_feeds_tabs + custom code.
- feeds_tabs_section: Display different views displays per section. The visibility is controlled by field_feeds_tabs + custom code.

== VIEWS ==
Some of these views don't show only liftups, maybe they could be moved to another feature

- kada_current: Content flagged to current. Will take the (landing) page theme, district, target audience, keywords or section and display similar content.
- kada_liftups: Entityreference listing for field_related_content in Page.
- kada_project_liftups: Content flagged to project. Will take the (landing) page theme, district, target audience, keywords or section and display similar content.
- kada_related_content: Displays liftups per Page through field_related_content entityreference.
- kada_top_carousel: Content flagged to carousel. Will take the page theme or section and display content from same theme section. If section doesn't have any liftups in the carousel, it will display Top image view block from page feature.

== CUSTOM CODE ==
- kada_liftups_feature_quicktabs_alter: Checks which values are selected in field_feeds_tabs field and renders only those tabs.
- kada_liftups_feature_block_info, kada_liftups_feature_block_view & kada_liftups_feature_current_combined_output: Custom blocks to show combined recent items from different kada_recent view displays.

== Changelog ==
* 2015-09-22 *
Landing pages will display content with any term which the landing page has.

* 2015-04-16 *
One LinkedIn item added to combined view.

* 2015-04-15 *
LinkedIn view displays which are used with the quicktabs. New quicktabs to show the displays.

* 2015-04-13 *
Added custom code and blocks to handle view display result combining in view kada_current. Displays affected: tab_all & tab_section_all.

* 2015-04-10 *
Instagram view displays which are used with the quicktabs. New quicktabs to show the displays.

* 2015-04-09 *
Keywords field for displaying liftups in landing pages.
Keywords vocabulary added to the contextual filter in related views.

* 2015-03-05 *
Displaying Top image view if there are no liftups in the carousel view.

* 2015-02-10 *
Distric, address and location per liftup, so that they can be location aware. For example content linked outside of the site and be still displayed in location aware listings.

* 2015-02-09 *
Entityreference Prepopulate configuration for og_group_ref field which makes adding liftups to group more straight-forward

* 2015-02-04 *
#601: Section entity reference field -> group reference field. Updated views displays to match.

* 2015-01-28 *
Section field for assigning section for a liftup.

* 2015-01-21 *
Modified current views content: type filter. Added news-item content type to the filter

* 2015-01-16 *
Changed page layout from default to front page so that the sidebars are not visible on theme main pages

* 2014-12-19 *
First version of this document. Just to be clear, this is not a changelog for this document, but for the whole feature.
