This file describes the feature, from developer to developer. It should focus on why something has been implemented instead of how, but some tricky or special implementations should be mentioned here. Especially if they cannot be documented in code.

== PURPOSE ==
Landing pages will display content dynamically from certain vocabularies terms, such as target audience and district. They can also have some static content attached to them like topics and related content.

== FIELDS ==
- field_keywords: Not visible, but is used to display other content with same keyword
- field_main_image: Is displayed in the header as big banner image.
- field_district: Choosing this will make the landing page display other content tagged to the same district.
- field_target_audience: Choosing this will make the landing page display other content tagged for the same target audience.
- field_related_content: Liftups can be referenced here and they will appear in the sidebar. Entityreference view (driveturku_liftups) used in the field configuration is defined in tkufi_liftups_feature.
- field_topic: Will display in similar fashion as for normal pages.

== CONTEXT ==
- landing_page: Has dynamic views blocks which display content from the node and also from the chosen terms on the node. Main menu for different languages.

== CUSTOM CODE ==
None.

== Changelog ==
* 2015-04-09 *
Keywords field for displaying other content tagged with the same keyword.

* 2015-03-04 *
Separated landing page to a own feature from page content type.
