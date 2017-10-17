This file describes the feature, from developer to developer. It should focus on why something has been implemented instead of how, but some tricky or special implementations should be mentioned here. Especially if they cannot be documented in code.

== PURPOSE ==
Social media updates, which are imported to the site as nodes and can be displayed among other content.
The updates are tagged to "Front page" theme by default and flagged to current during import, so they will appear automatically on the current feed in the front page. Web journalists have the permission to show or hide them with flags.

== FEEDS ==
Feeds configuration for the importers. Note that the periodic importing is off in the settings because there is a cron hook in this feature which is run periodically with Elysia cron and it will import the feeds.
The feeds which use OAuth authentication, require some additional code to the configuration, check the custom code section.

== FEEDS TAMPER ==
Feeds Tamper plugin configurations. Mostly normal stuff, but check the fb_bigger_image.inc custom plugin in the plugins folder of this feature.

== FIELD INSTANCES ==
- body: The update content.
- field_image: Image of the update.
- field_keywords: Not visible, but can be used to make the liftup visible in a landing page
- field_link: Link provided for the update.
- field_location: For storing coordinates.
- field_location_name: For storing location name (Instagram)
- field_object_id: Object ID. For example Facebook provides these for photos and videos.
- field_share_caption: Short caption for a (facebook) share item.
- field_share_description: Description of the (facebook) share item.
- field_share_title: Title of the (facebook) share item.
- field_share_type: Type of the (facebook) share item.
- field_some_id: ID of the social update itself. Uses a custom field formatter for linking to the update.
- field_theme: Same as for other content types. Default value is "Front page" so that they will appear there automatically after import because there is a rule which flags them to current.
- og_group_ref: Organic Group Section can be assigned to content to make it visible in the section front page.

== CONTENT TYPES ==
- social_media_update: Generic content type for all social media updates. Can be expanded with more fields when a new type is added.

== RULES CONFIGURATION ==
- rules_flag_some_updates_to_current: All new Social media updates are flagged to current.

== PERMISSIONS ==
Content editors don't need to usually edit or delete this content, but web journalists have this permission just in case. Anonymous users cannot see the nodes because they are linked to the source.
Sitewide flag permissions give Web journalists the power to hide/show the content by flagging them.

== CUSTOM CODE ==
- function kada_some_content_feature_ctools_plugin_directory($owner, $plugin):
Tells CTools to look for Feeds Tamper plugins from "plugins" folder.

- function kada_some_content_feature_settings()
Form for Social media update configuration. Currenly only Twiter Access token and secret for API access.

- function kada_some_content_feature_feeds_oauth_authenticator():
Returns an array of keys and names for Feeds OAuth module. The keys are function names which define custom authenticators.

- function kada_some_content_feature_get_tokens_twitter():
Returns OAuth token + secret for Twitter.

- function kada_some_content_feature_feeds_parser_sources_alter(&$sources, $content_type):
Support for OG Groups entity reference source.
Support for Feeds node language source.

- function kada_some_content_feature_feeds_get_og_source(FeedsSource $source, FeedsParserResult $result, $key)
Returns referenced OG Group ID.

- function kada_some_content_feature_feeds_get_language(FeedsSource $source, FeedsParserResult $result, $key)
Returns Feeds node importer language.

- function kada_some_content_feature_field_formatter_info()
Introduces a custom field formatter used by Some ID field.

- function kada_some_content_feature_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display)
Creates required variables for theming layer.

- function kada_some_content_feature_theme()
Tells Drupal to use kada_some_content_feature_some_link.tpl.php template for rendering.

= kada_some_content_feature_some_link.tpl.php =
Template for custom field formatter used by Some ID field.

= plugins/fb_bigger_image.inc =
Custom Feeds Tamper plugin for fetching big images from Facebook's GraphAPI. The image in Facebook's JSON "picture" field is very small. Make note that this will not help with the scraped images of link shares, because Facebook doesn't provide an Object ID for those images.

1. Map "picture" value from JSON feed to whatever image field your content type has.
2. Map the "object_id" value from JSON feed to another field or blank source.
3. Enable this plugin for the image field and provide the machine name of the object_id field in the plugin settings.

The plugin will try to fetch a bigger image and replace the thumbnail coming from "picture" JSON value. If the Object ID is empty or it doesn't have any images (like video objects) it will not touch the original thumbnail.

- $plugin-array: Basic definition for any custom Feeds Tamper plugin

- function kada_some_content_feature_fb_bigger_image_form($importer, $element_key, $settings):
The visible form in Feeds Tamper UI for this plugin. Developer can change the API address and define which mapped import field will hold the required Object ID value for fetching the image object.

- function kada_some_content_feature_fb_bigger_image_callback($result, $item_key, $element_key, &$field, $settings):
The callback function which will fetch the the image from Graph API using the value from given Object ID field.
