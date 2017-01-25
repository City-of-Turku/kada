This file describes the feature, from developer to developer. It should focus on why something has been implemented instead of how, but some tricky or special implementations should be mentioned here. Especially if they cannot be documented in code.

== PURPOSE ==
Sections provide a placeholder for pages and other content which are not supposed to be visible in the main domain navigation. Brands, visual sites, campaigns and such.

== CONTEXT ==
- section: Displays section specific menu blocks.
- section_front: Displays content which has been assigned to a section, such as liftups, news etc.

== FIELD INSTANCES ==
- field_contact_information: Entity reference to Place.
- field_site_logo: A logo for the whole section. Check page.preprocess.inc in theme folder for logo alter.
- group_group: Created automatically by Organic Groups when this content type was marked as a group type.

== CONTENT TYPES ==
- section: Each section will have one node which is used in similar fashion as taxonomy term for content which is part of this section. Section is a organic group type.

== PERMISSIONS ==
Web journalist can add, edit and delete. Content editors cannot do anything. Anonymous can view content in sections.

== OG PERMISSIONS ==
Organic Group permissions because Section content type is a group type.

== CUSTOM CODE ==
tkufi_sections_feature.module file:
- tkufi_sections_feature_entity_insert()
  - Creates a multilingual domain variable when creating a new section into a domain other than default domain. Assigning it through the UI is buggy and complext procedure for a web journalist.

== Changelog ==
* 2015-06-15 *
Contact information field and context for displaying it through views block.

* 2015-04-22 *
Teaser and Only title view mode configuration.

* 2015-03-05 *
Removed Top image view block because it will be displayed from Top carousel view display if that view is empty.

* 2015-02-04 *
Removed localized Section menus, related menu blocks and their variables. Replaced them with OG Menu which comes from og_menu_single.
Section is now a group type, added all permissions and configuration related to that.

* 2015-01-28 *
- New context for section front page. Placed views blocks to regions to display liftups like in theme main pages.

* 2015-01-26 *
Created this feature.
