This file describes the feature, from developer to developer. It should focus on why something has been implemented instead of how, but some tricky or special implementations should be mentioned here. Especially if they cannot be documented in code.

== PURPOSE ==
Service offer connects Service description with relevant metadata to Places where they are offered.

== CONTENT TYPES ==
- service_offer: Service offer connects services to places where they are offered and holds additional information about the service in that particular context, such as pricing (to be implemented).

== DISPLAY SUITE LAYOUT SETTINGS ==
- Accordion: Used together with Views Accordion for displaying content together with a grouping title

== FEEDS ==
- nc_service_offers: Imports service offers from CSV files which are exported from Excel files which are exported from NetCommunity (turku.fi old cms system). Requires a csv file upload on the server. Is far from perfect due to shortfalls in the source data, but technically does what it should.
- nc_service_offers_en: Import Service offer translations in English. Check the related rule configurations for more information.
- nc_service_offers_sv: Import Service offer translations in Swedish. Check the related rule configurations for more information.

== FEEDS TAMPER ==
The following plugins all do the same thing, combine a unique ID from Service and Place NC ID values for Feeds GUID value, probably not necessary but here just in case.
- nc_service_offers-ns2_id-combined_id
- nc_service_offers_en-ns2_id-combined_id
- nc_service_offers_sv-ns2_id-combined_id

These plugins merge several columns from CSV to Description field
- nc_service_offers-ns2_saatavuusaika-combine_fields
- nc_service_offers_sv-ns2_saatavuusaika-combine_fields
- nc_service_offers_en-ns2_saatavuusaika-combine_fields

== FIELD BASES ==
Placed these field bases in this feature because they are unlikely to be used anywhere else.
- field_place_nc_id: See the field instance for description.
- field_service_nc_id: See the field instance for description.

== FIELD INSTANCES ==
*-endpoint fields are created by Relation module

- field_description: Describes the Service offer, field translation enabled.
- field_offered_service: Relation field from Service offer -> Service description.
- field_provided_at: Relation field from Service offer -> Place.
- field_fee: Text field about fee.
- field_precondition: Text field about preconditions.
- field_place_nc_id: Place NetCommunity ID for creating a relation in the rule.
- field_service_nc_id: Service NetCommunity ID for creating a relation in the rule.

== RELATION ==
- place_service: Directional relation labeled "provides". Place "provides" Service offer.
- service_offer_service: Directional relation labeled "offered service". Service offer has "offered service" Service description.

== RULES CONFIGURATION ==
- rules_service_service_offer_place: Reacts after creating new service offer, because reacting before saving content or reacting before importing feed item doesn't seem to work with creating relations. Checks that the NC ID values for Service and Place are not empty, then fetches the matching entities, creates a list of entities for Relation modules, where the first item is the source for the related relation. Then creates new relation entities from these lists for both Service offer -> Service and Service offer <- Place relations. Also sets Service offer language to Finnish.
- rules_update_service_offer_en: Fetches the source translation for Service offer using NC ID and updates the field translations in English with actions from the custom kada_rules_et module. Fetches first all Service offers which share the same Service NC ID, and then loops through them to find the one which has the same Place NC ID.
- rules_update_service_offer_sv: Fetches the source translation for Service using NC ID and updates the field translations in Swedish with actions from the custom kada_rules_et module. Fetches first all Service offers which share the same Service NC ID, and then loops through them to find the one which has the same Place NC ID.

== VIEWS ==
- kada_services: Provides lists of content through relations. For example "Places per Service" and "Services per Place". Uses Views Accordion.

== CUSTOM CODE ==
kada_service_offer_feature.module file:
- kada_service_offer_feature_form_alter():
  - Custom code for prepopulating a place value for field_provided_at relation field.
- kada_service_offer_feature_block_info():
  - Block for adding service offer to place with a prepopulated value from place.
- kada_service_offer_feature_block_view():
  - Rendering links for adding a new service offer with a prepopulated place value and editing a place.

== Changelog ==
* 2015-04-20 *
Mapped field_fee to CSV import. Combined several columns from CSV to Description field.

* 2015-03-27 *
NC ID fields for Service and Place, Feeds importer and rule for connecting Places and Service with Service offers.
Added relation-place_service-endpoints field instance which was missing from earlier commits.

* 2015-03-23 *
New field for Fee and Precondition. Listing now uses Views Accordion for displaying service offers. Accrodion DS display mode.

* 2015-03-16 *
Custom code for adding a new service offer to place with a prepopulated place.

* 2015-03-12 *
Service offer content type and configuration related to connecting Places and Services together.
