This file describes the feature, from developer to developer. It should focus on why something has been implemented instead of how, but some tricky or special implementations should be mentioned here. Especially if they cannot be documented in code.

== PURPOSE ==
Page content type configuration, including permissions, contexts and strongarm variables.

Because the client wants to keep the main navigation simple (max. 3 levels in the dropdown), the topic and subpage references are used to link content between themselves thus creating a way for the user to navigate. Nevertheless, all the pages should be in the localized main menu so that breadcrumb and URL can be displayed correctly and correct sub-menu is visible in the first sidebar. It's up to the client to disable those menu items which they do not want to display and they will use the topics and subpages references for displaying content as they wish.

== DISPLAY SUITE FIELDS ==
- description_page: Uses views display for showing description from referencing Service description.
- duplicate_info_box_bottom:

== DISPLAY SUITE VIEW MODES ==
- only_title: Displays only title when a Page has been marked as a subpage of another page.

== FIELDS ==
- field_contact_information: Entity reference to Place.
- field_main_image: Is displayed in the header as big banner image. Is also displayed on "service package pages" if the page has been referenced. See Topic-field for more info.
- field_theme: Predefined list of themes which are part of the site structure. On the main menu 1st level is used for displaying liftups with same theme. See more information about the theme taxonomy in kada_configuration_module README.
- field_keyword: Has been added only for content editors to provide metadata about content. Can be used later for "similar content" etc.
- field_district: Has been added only for content editors to provide metadata about content. Can be used later for "location aware" content etc.
- field_target_audience: Has been added only for content editors to provide metadata about content. Can be used later for "context aware" content etc.
- body: Textarea with WYSIWYG text format (see configuration module for more info about the text format).
- field_info_box: Typical small gray infobox next to body with WYSIWYG text format.
- field_related_content: Liftups can be referenced here and they will appear in the sidebar. Entityreference view (driveturku_liftups) used in the field configuration is defined in tkufi_liftups_feature.
- field_topic: Page in the 2nd level of the main navigation is called a "service package" (Palvelukokonaisuus), which consists of 0 or more Topics (Aihekokonaisuus) referenced in this field. The Topics are displayed on the Service package page with a title and image linked to the page.
- field_subpage: Page in the 3rd level of the main navigation (more or less) is called a Topic (Aihekokonaisuus) and it will have 0 or more subpages (alasivu) referenced here. These subpages are displayed on the Topic page with titles linked to the subpages themselves.
- og_group_ref: Section (organic group) can be assigned to a page, which will make it possible to assign it to a Group menu, which will display a group specific menu.
- field_theme_main_page: Boolean field for marking a page as theme main page. This is a condition in a context.

== VIEWS ==
driveturku_pages:
- Titles ER (page_er): Entityreference view which is used for field_topic and field_subpage.
- Top image (top_image): Block which displays the main image of the page and it is placed to the header region in page context. Contextual filter is used to get the page user is viewing. Three relationships use the entityreferences of field_topic and field_subpage in such fashion that a main image from "top-down" is displayed. Subpage gets main image from either Topic or Service package if it does not have an image of its own. Topic gets main image from Service package if it does not have a main image. Worst case scenario is if a page is referenced as both a topic and subpage, then it will have two images. But this should not happen.

== CONTEXT ==
Only the page context is in use at the moment, the localized versions are not required yet.
- page: Displays the navigation (menu blocks in navigation and first sidebar) and content attached to a page with views blocks which have a contextual filter.

== CUSTOM CODE ==
tkufi_page_feature.module file:
- tkufi_page_feature_views_post_execute():
  - NEEDS DESCRIPTION

== FEATURE DEPENDENCIES ==
tkufi_field_bases_feature:
Has all the field base configuration for fields which have instances in this feature.

kada_configuration_feature:
Check the text format and taxonomy documentations which relate to other content types also.

== Changelog ==
* 2015-06-15 *
Contact information field.

* 2015-04-22 *
Section added to content types for referencing topics and subpages.

* 2015-03-21 *
Display suite block field for displaying description from referencing Service.

* 2015-03-04 *
Moved landing page related stuff to separate feature

* 2015-02-25 *
Checkbox for landing page, which is used as a condition in a context. Client wants to be able to create landing pages for certain audiences. Removed theme field requirement.

* 2015-02-13 *
#842: Theme main page checkbox
- New field for marking a page as theme main page.
- Updated context conditions to check the field value instead of hard coded paths which are prone to change.

* 2015-02-09 *
Entityreference Prepopulate configuration for og_group_ref field which makes adding liftups to group more straight-forward

* 2015-02-04 *
#601: Section entity reference field -> group reference field.

* 2014-12-18 *
First version of this document
