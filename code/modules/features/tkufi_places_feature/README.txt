This file describes the feature, from developer to developer. It should focus on why something has been implemented instead of how, but some tricky or special implementations should be mentioned here. Especially if they cannot be documented in code.

== PURPOSE ==
Places are physical locations which offer for example services.

== CONTEXT ==
- place: Displays Services of the Place. Displays links for managing service offers per place.

== CUSTOM CODE ==
- tkufi_places_features.module:
  - tkufi_places_feature_form_alter(): Changes to the place node form.

== FIELD INSTANCES ==
- field_description: Describes the place, field translation enabled.
- field_location: Stores coordinates for a place and provides a map widget for inputting the coordinates. No connection to address fields yet, because we need to figure out which are required by the JHS183 and make them translatable.
- field_service_offer: Relation to a service offer for easier editing of relations from place edit form.
- field_accessibility: Field collection with term reference and description.
- field_availability: Opening hours.
- field_address_billing: Text area
- field_address_postal: Address field
- field_address_street: Address field
- field_address_visiting: Address field
- field_description
- field_email
- field_fax_number
- field_person_responsible
- field_phone
- field_phone_switch
- field_website_et

== Changelog ==
* 2015-04-28 *
Accessibility importing and fields

* 2015-03-30 *
Feeds importers for Place translations and related Rules for updating translations to source Place.

* 2015-03-27 *
Feeds importer for NC data, two rules.

* 2015-03-26 *
Plenty of new fields. Pathauto strongarm variables.

* 2015-03-16 *
Field for service offers. Block to tools region for adding service offers to places.

* 2015-03-12 *
Replaced core's title with title field.
Context for content type, displays Services per Place now.

* 2015-03-11 *
Created a skeleton feature which doesn't have localized fields yet except for the description. No connection to services yet.
