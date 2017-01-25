This file describes the feature, from developer to developer. It should focus on
why something has been implemented instead of how, but some tricky or special
implementations should be mentioned here - especially if they can't be
documented in code.

== Purpose ==
News are time-sensitive articles about current topics.

== Context ==
- news_item: For displaying main menu, top image and related content blocks.
- news_item_en: Empty.
- news_item_fi: Empty.
- news_item_se: Empty.
- news_list: For /news path for displaying main menu.
- news_rss_feed: News RSS feed icon block in theme main pages.

== Display Suite fields ==
- duplicate_title: A dynamic field which displays the node title. This is used to display news item titles below post date.

== Display Suite View Modes ==
- main_news: Display for bigger news lifted above the current listing.

== Field instances ==
- body: Basic formatted text area
- field_address: Address of the news item to allow location-sensitivity
- field_contact_information: Entity reference to Place.
- field_content_image: Main image in the article view
- field_district: Location of the news item in a pre-defined district set
- field_info_box: Typical small infobox next to body with WYSIWYG text format
- field_keywords: Keywords of the content to allow searching for similar content
  mainly via the news archive
- field_lead_paragraph_long_text: A separate lead paragraph that is used before
- field_liftup_width: If the news item is marked to appear in the "main news" list, this will define how much width it will take
  the main image in the article view.
- field_location: Location of the news item as a Geofield
- field_related_content: Liftups can be referenced here and they will appear in
  the sidebar. Entityreference view (driveturku_liftups) used in the field
  configuration is defined in tkufi_liftups_feature.
- field_target_audience: Target audience of the news item for future context
  awareness
- field_theme: Predefined list of themes which are part of the site structure.
  On the main menu 1st level is used for displaying liftups with same theme. See
  more information about the theme taxonomy in tkufi_configuration_module README
- og_group_ref: Organic Group entity reference to a section content type, which wraps all content per section together.

== Flag ==
- main_news: For choosing news to be displayed above the current listing

== Permissions ==
DESCRIBE WHO CAN DO WHAT AND POSSIBLY WHY

== Strongarm ==
ONLY SPECIAL VARIABLES NEED TO BE MENTIONED HERE

== Views ==
- News archive

== CUSTOM CODE ==
None.

== Changelog ==
* 2015-06-15 *
Contact information field and context for displaying it through views block.

* 2015-02-09 *
Entityreference Prepopulate configuration for og_group_ref field which makes adding liftups to group more straight-forward.
News list context from demo server to display main menu without sitewide context.

* 2015-02-04 *
#601: Section entity reference field -> group reference field.

* 2015-02-02 *
#708: Content full view mode now uses DS for layout.
      To improve readability, sidebars are page-preprocessed to be visible even when empty.

* 2015-01-29 *
#628: Section field for referencing sections. News will display in section front page when they have a section + domain access.
