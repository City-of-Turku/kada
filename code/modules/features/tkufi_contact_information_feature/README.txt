This file describes the feature, from developer to developer. It should focus on why something has been implemented instead of how, but some tricky or special implementations should be mentioned here. Especially if they cannot be documented in code.

== PURPOSE ==
Holds configuration for Persons and Positions of trust. Person can have Positions of trust which can have Person as deputy member.

== CONTENT TYPES ==
- person: Holds information per person, displayed in two tabs, employee and trustee.
- position_of_trust: Each position of trust is linked to a trust unit and defines a role and periodic duty time. Position may also have a Person as deputy member.

== DISPLAY SUITE FIELDS ==
- add_position_link: A preprocess field which output is defined in custom code.
- positions_of_trust: Displays a views block with Positions of trust in an accordion per Person.

== DISPLAY SUITE LAYOUTS ==
- node|person|default
- node|position_of_trust|accordion: Displays content in accordion in a view
- node|position_of_trust|only_title: Displays trust unit and role in views as accordion title
- node|person|search_result: For search result listing
- taxonomy_term|office|term_name: Displays only term name when indexing search result rendered entity. For some reason the term name doesn't appear there in correct language with the default display.
- taxonomy_term|political_party|default: Hasn't been changed, only DS template has been applied.
- taxonomy_term|trust_unit|default: Hasn't been changed, only DS template has been applied.

== FEEDS ==
See custom code section for setting term language during import.
- ad_company_csv: Imports companies to Office vocabulary in Finnish without parents
- ad_department_csv: Imports departments to Office vocabulary in Finnish with company as parent
- ad_offices_csv: Imports offices to Office vocabulary in Finnish with department as parent
- ad_person_csv: Imports city employee information and maps them to terms in Office vocabulary
- nc_parties_csv: Imports parties in Finnish to Political party vocabulary
- nc_position_csv: Imports Positions of trust with a trust unit and trustee role and attaches Persons as trustees and substitutes in a rule.
- nc_trust_units_csv: Imports trust units in Finnish to Trust unit vocabulary
- nc_trustee_csv: Imports trustee information to Person entities and stores a NC ID value which is used for attaching Person to a Position of trust either as a trustee or substitute.
- nc_trustee_roles_csv: Imports trustee roles in Finnish to Trustee role vocabulary.

== FIELD INSTANCES ==
Person
- field_account_name: AD user name used for linking Person to other Person
- field_assistant: Entity reference to Person
- field_assistant_id: AD user account of assistant Person if a Person has assistant
- field_email_single
- field_employee_title
- field_fax_number
- field_first_name
- field_mobile_phone
- field_mobile_phone_work
- field_office_tr: Term reference to Office vocabulary
- field_person_image: Scald atom reference
- person_type: Person can have employee or trustee role, or both
- field_phone
- field_phone_switch
- field_political_party: Entity reference to a taxonomy term
- field_profession
- field_surname
- field_task_description
- field_visiting_address
- title_field
Position of trust
- field_deputy_member: Entity reference to a Person
- field_periodic_duty_time: Datetime field
- field_municipality
- field_postal_code
- field_superior: Entity reference to another Person
- field_trust_unit: Entity reference to a taxonomy term
- field_trustee: Relation add field to a Person
- field_trustee_role: Entity reference to a taxonomy term
- title_field
- relation-trustee_person-endpoints: Endpoint fields for relation
Taxonomies
- taxonomy_term-trust_unit-name_field: Created by Title module
- taxonomy_term-trustee_role-name_field: Created by Title module

== PERMISSIONS ==
Web journalist can add/edit/delete Persons and Positions of trust. Anonymous cannot view full Positions of trust, because they are only displayed in accordion.

== RELATION ==
- trustee_person: From Position of trust to a Person

== RULES ==
- rules_trustee_position_substitute: Creates a relation between Person and Position of trust for trustee and sets the substitute entity reference value. Also tries to set the title for the Position of trust during import but entity_autolabel most probably overrides it.
- rules_link_assistant_person: Rule for fetching a Person entity when saving another Person. If there exists any other Persons which have the current Person to be saved as assistant ID, then create an entity reference between them. Required for the CSV import because there can be situtation where the assistant Person doesn't yet exist in Drupal when the assisted Person is being imported.

== TAXONOMY ==
- office: City employee has an office
- political_party: Person may have a political party as a trustee
- trust_unit: Person as trustee has a trust unit
- trustee_role: Person as a trustee has a role (in trust unit)

== TAXONOMY DISPLAY==
- trust_unit: Uses a block from driveturku_trust_units view for displaying terms on the taxonomy term page instead of core listing.
- office: Term name display mode

== VIEWS ==
- driveturku_positions_of_trust: Fetches Positions of trust per Person through trustee member relation.
- driveturku_trust_units: Overrides default taxonomy listing for Trust unit vocabulary.
- driveturku_persons: A small tool for checking imported person values.

== CUSTOM CODE ==
- tkufi_contact_information_feature_preprocess_node(): Provides markup for a link to create a Position of trust per person. Link which has parameters to prepopulate a relation field when creating a Position of trust.
- tkufi_contact_information_feature_feeds_after_save(): Feeds doesn't support setting a language for per term when using entity translation, so it is handled in custom code. Also saving translations of contact information in Swedish and English to make sure they appear in Solr index.
- tkufi_contact_information_feature_ds_fields_info(): Custom DS fields for rendering.
- _tkufi_contact_information_feature_ds_person_full_name(): Combines full name for widgets.
- _tkufi_contact_information_feature_ds_positions_trust_search(): Uses a view to get positions of trust for search result view mode.
- tkufi_contact_information_feature_cron(): For running AD related importers in right order and stopping importing for a certain time period when they are finished.

== Changelog ==
* 2015-10-08 *
Improved saving of translations so that they will be indexed to Solr during person importing.

* 2015-09-14 *
Importing assistants.

* 2015-08-27 *
Office vocabulary uses now a term name display mode which is used in Person search result display mode, because term names wouldn't render correctly in the item language.
Custom DS field for getting positions of trust for search result.

* 2015-08-25 *
New Views display for positions of trust for search results, displaying just trust unit and role.
Indexing of role per person to Solr.

* 2015-08-05 *
Modified importers to use separate files per company, department and office.
Added a script for sftp-transfer.

* 2015-06-17 *
Admin view for checking imported person values.

* 2015-06-11 *
Field for person type. Trustee importer sets default value for trustee.

* 2015-06-05 *
Superior field for employee.

* 2015-06-04 *
Changed Entity reference field_office to Term reference field field_office_tr.
Importer now imports parents per office also (data is still not in perfect condition without duplicate names).

* 2015-05-25 *
Changed view display from page to block to be used with taxonomy_display module.

* 2015-05-22 *
Search result DS view mode added. Added "Add new position of trust" link permission check.
View for overriding taxonomy list for Trust unit vocabulary

* 2015-05-20 *
Trustee importing.

* 2015-05-11 *
Created the feature.

