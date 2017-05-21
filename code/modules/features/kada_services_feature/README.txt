This file describes the feature, from developer to developer. It should focus on why something has been implemented instead of how, but some tricky or special implementations should be mentioned here. Especially if they cannot be documented in code.

== PURPOSE ==
Service (description) describes a service and holds information about the target audience.

== CONTENT TYPES ==
- service: Service description describes a service and its target audience.

== CONTEXT ==
- service_description: Displays Places where the Service is provided.

== FEEDS ==
- nc_service_descriptions: Imports Services from CSV files which are exported from Excel files which are exported from NetCommunity (turku.fi old cms system). Requires a csv file upload on the server.
- nc_place_translations_se: Import Service translations in Swedish. Check the related rule configurations for more information.
- nc_place_translations_en: Import Service translations in English. Check the related rule configurations for more information.

== FIELD INSTANCES ==
- field_description: Describes the Service description or Service offer, field translation enabled.
- field_classification: Taxonomy term reference to Service classification vocabulary.
- field_target_audience: Target audience for the Service description.
- field_described_by_er_et: Entity reference field using entity translation to connect a different page to service description per translation.
- field_nc_id: NetCommunity ID, used for connecting content together.

== RULES CONFIGURATION ==
- rules_import_service_from_nc: Set default language to Finnish
- rules_update_translation_service_en: Fetches the source translation for Service using NC ID and updates the field translations in Swedish with actions from the custom tkufi_rules_et module.
- rules_update_translation_service_se: Fetches the source translation for Service using NC ID and updates the field translations in English with actions from the custom tkufi_rules_et module.

== VIEWS ==
kada_service_descriptions: Displays a link from the referenced page to the service description. Displays Service description text on the referenced Page.

== CUSTOM CODE ==
Service hierarchy custom code:
  - Block for service hierarchy
  - Functionality to fetch and build renderable array for service hierarchy
  - Template file to render service hierarchy

== Changelog ==
* 2015-06-03 *
Service classification field.

* 2015-04-21 *
New views display for displaying description field on referenced Page.

* 2015-04-09 *
Custom service hierarchy block and code.

* 2015-03-30 *
Feeds importers for Service translations and related rules for updating translations to source Service.

* 2015-03-27 *
Feeds importer for NC data, one import related rule.

* 2015-03-19 *
Page field for referencing pages per entity translation. Relation doesn't work here, because relation always has the same entity endpoint, but chaning the page nid updates the same relation. Entity translation simply stores the nid per translation to the field value.

* 2015-03-12 *
Replaced core's title with title field.
Context for Service description content type, for displaying Places where the Service is offered.

* 2015-03-11 *
Created a skeleton feature which doesn't have localized fields yet except for the description. No connection to places yet.
