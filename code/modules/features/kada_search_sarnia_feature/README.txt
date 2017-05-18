This file describes the feature, from developer to developer. It should focus on
why something has been implemented instead of how, but some tricky or special
implementations should be mentioned here. Especially if they cannot be documented
in code.

== PURPOSE ==
This feature holds the Sarnia search functionality. It's separate from the Search
feature because if a Sarnia index is chosen to a feature with other Search API
indexes, all the other indexes are removed.

Sarnia is a way to use any Solr data, including non-Drupal results, in a Drupal
search functionality.

On the Drupal end we have two different Search API indexes for Drupal content in the Search feature (kada_search_feature):
- default_node_index (Node translated content): Indexes all content which is using Drupal core node translation. This includes Page, News item, Blog and Blog post.
- kada_content (Entity translated content): All the rest is using entity translation and this index is using Multilingual node as index type from search_api_et module.

The Sarnia server and index included in this feature are configured to handle the data which appears in the index from the two indexes mentioned previously. And any content index from external sources. They need to use the same fields as the indexes in Drupal are using.

== CONTEXT ==
- sarnia_search: Displays facets and the main view for search results.

== FACET API ==
- Configuration for all facets.

== BLOCK SETTINGS ==
Facet block titles and block translatability.

== USING ==
The feature requires its dependencies installed, and after enabling it might require
multiple reverts to take full effect.

The Sarnia entity type is also exported as a part of the feature, but the current
version of Feature doesn't seem to be able to import it; thus, it's added in
a kada_search_feature.install update hook.

== SARNIA ==
- sarnia_kada_sarnia_search: Basic Sarnia configuration, doesn't work that well with Features, so check the .install file for update hook which sets some configuration.

== SEARCH INDEX ==
- sarnia_kada_sarnia_search: Sarnia index for mapping field and facet configuration to Drupal which are available in the Search server.

== SEARCH SERVER ==
- kada_sarnia_search: Checks the Solr index and makes different types of field available for the Sarnia indexer.

== VIEWS ==
- kada_sarnia_search: Sarnia index view, which is displaying required content from Solr index.

== QUIRKS ==
About nothing other than the Data field in Views works, so use that to access any
result fields necessary.

The Sarnia module has some pretty odd quirks regarding to its UI and functionality,
so test all changes more carefully than usual. Let's hope it stabilises in due time.

== TROUBLESHOOTING ==

A few pointers on already-experienced problems.

Q: The Sarnia entity type is exported to a feature but doesn't apply / changes
   made to it don't apply?

A: Yep, so it seems. Apparently Ctools / Feature / something doesn't work quite as
   expected. There is a script in conf/scripts/sarnia-magic-fix which can be run
   with drush scr. This should help if the feature won't revert.

Q: In Views, I'm not seeing the Data field but only separate fields for each value?
   Should I use those?

A: No. For Sarnia to work properly you need to use the Data field and select the
   required value from its settings. If the data field doesn't work, it might be
   that the solr_document field hasn't been added – that happens for example
   when you insert the sarnia entity type directly to the database without running
   sarnia_entity_type_save(). Might happen if you use the feature import also, if
   it worked even that much?

Q: Should I use the only Views base table added by Search API or should Sarnia
   define a separate one?

A: You use the one added by Search API, so the Data field should be seen there. See
   the previous question.

== POSSIBLE BUGS ==
It might be that running sarnia_entity_type_save() adds the Search API index already,
and that the index in the feature might not be applied at all or properly. If this
happens, see about replacing the kada_search_feature.install update hook call to
sarnia_entity_type_save() with Something Else(TM).

== CUSTOM CODE ==
- kada_search_sarnia_feature_entity_property_info_alter(): Provides a "Rendered entity" property, which can be indexed to Solr in different languages. Search API (especially with Sarnia) works poorly with Display Suite display modes, so we can instead index the html and display it "blindly". Also better for other services using the same Solr index.
Provides also "Translated URL" property for correctly indexing url's in different languages.
- kada_search_sarnia_feature_rendered_entity_callback(): Rendering of the entities in "Search result" display mode.
- kada_search_sarnia_feature_translated_url_callback(): Indexing of item url correctly in different languages.
- kada_search_sarnia_feature_facet_items_alter(): Custom altering of facet items which have only tid in the Solr index.

== CHANGELOG ==
* 2015-08-27 *
Updated custom code when building rendered entity for indexing. Global language variables are now forced to the item language so that field labels and referenced items will be rendered in correct language.
