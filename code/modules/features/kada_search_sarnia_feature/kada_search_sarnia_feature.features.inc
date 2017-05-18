<?php
/**
 * @file
 * kada_search_sarnia_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kada_search_sarnia_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "sarnia" && $api == "sarnia") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function kada_search_sarnia_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function kada_search_sarnia_feature_default_search_api_index() {
  $items = array();
  $items['sarnia_kada_sarnia_search'] = entity_import('search_api_index', '{
    "name" : "KADA Sarnia search (Sarnia index)",
    "machine_name" : "sarnia_kada_sarnia_search",
    "description" : "This index is managed by the Sarnia module.",
    "server" : "kada_sarnia_search",
    "item_type" : "sarnia_kada_sarnia_search",
    "options" : {
      "cron_limit" : 0,
      "fields" : {
        "_version_" : {
          "name" : "_version_",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "dm_individual_dates" : {
          "name" : "dm_individual_dates",
          "indexed" : true,
          "type" : "date",
          "boost" : "1.0"
        },
        "ds_changed" : {
          "name" : "ds_changed",
          "indexed" : true,
          "type" : "date",
          "boost" : "1.0"
        },
        "ds_created" : {
          "name" : "ds_created",
          "indexed" : true,
          "type" : "date",
          "boost" : "1.0"
        },
        "ds_field_event_date$value" : {
          "name" : "ds_field_event_date$value",
          "indexed" : true,
          "type" : "date",
          "boost" : "1.0"
        },
        "ds_field_event_date$value2" : {
          "name" : "ds_field_event_date$value2",
          "indexed" : true,
          "type" : "date",
          "boost" : "1.0"
        },
        "hash" : { "name" : "hash", "indexed" : true, "type" : "none", "boost" : "1.0" },
        "id" : { "name" : "id", "indexed" : true, "type" : "none", "boost" : "1.0" },
        "im_field_classification" : {
          "name" : "im_field_classification",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "im_field_district" : {
          "name" : "im_field_district",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "im_field_event_types" : {
          "name" : "im_field_event_types",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "im_field_event_types$parent" : {
          "name" : "im_field_event_types$parent",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "im_field_event_types$parents_all" : {
          "name" : "im_field_event_types$parents_all",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "im_field_event_types$tid" : {
          "name" : "im_field_event_types$tid",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "im_field_event_types$vocabulary" : {
          "name" : "im_field_event_types$vocabulary",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "im_field_keywords" : {
          "name" : "im_field_keywords",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "im_field_keywords_et" : {
          "name" : "im_field_keywords_et",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "im_field_office_tr" : {
          "name" : "im_field_office_tr",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "im_field_related_content" : {
          "name" : "im_field_related_content",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "im_field_target_audience" : {
          "name" : "im_field_target_audience",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "im_field_target_audience$tid" : {
          "name" : "im_field_target_audience$tid",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "im_field_theme" : {
          "name" : "im_field_theme",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "im_field_topic" : {
          "name" : "im_field_topic",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "im_og_group_ref" : {
          "name" : "im_og_group_ref",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "im_relation_place_service_node" : {
          "name" : "im_relation_place_service_node",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "im_relation_place_service_node$relation_service_offer_service_node$field_classification" : {
          "name" : "im_relation_place_service_node$relation_service_offer_service_node$field_classification",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "im_relation_place_service_node$relation_service_offer_service_node$field_target_audience" : {
          "name" : "im_relation_place_service_node$relation_service_offer_service_node$field_target_audience",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "im_relation_service_offer_service_node" : {
          "name" : "im_relation_service_offer_service_node",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "im_relation_trustee_person_node_reverse$field_trust_unit" : {
          "name" : "im_relation_trustee_person_node_reverse$field_trust_unit",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "im_relation_trustee_person_node_reverse$field_trustee_role" : {
          "name" : "im_relation_trustee_person_node_reverse$field_trustee_role",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "index_id" : {
          "name" : "index_id",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "is_field_event_date$duration" : {
          "name" : "is_field_event_date$duration",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "is_field_political_party" : {
          "name" : "is_field_political_party",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "is_nid" : { "name" : "is_nid", "indexed" : true, "type" : "none", "boost" : "1.0" },
        "is_status" : {
          "name" : "is_status",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "item_id" : { "name" : "item_id", "indexed" : true, "type" : "none", "boost" : "1.0" },
        "site" : { "name" : "site", "indexed" : true, "type" : "none", "boost" : "1.0" },
        "sm_field_person_type" : {
          "name" : "sm_field_person_type",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "sm_search_api_access_node" : {
          "name" : "sm_search_api_access_node",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "sort_field_location$geom" : {
          "name" : "sort_field_location$geom",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "sort_language" : {
          "name" : "sort_language",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "sort_search_api_et_id" : {
          "name" : "sort_search_api_et_id",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "sort_search_api_id" : {
          "name" : "sort_search_api_id",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "sort_search_api_language" : {
          "name" : "sort_search_api_language",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "sort_title_field" : {
          "name" : "sort_title_field",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "sort_kada_rendered_entity" : {
          "name" : "sort_kada_rendered_entity",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "sort_kada_translated_url" : {
          "name" : "sort_kada_translated_url",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "sort_type" : {
          "name" : "sort_type",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "spell" : { "name" : "spell", "indexed" : true, "type" : "text", "boost" : "1.0" },
        "ss_field_location$geom" : {
          "name" : "ss_field_location$geom",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "ss_language" : {
          "name" : "ss_language",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "ss_search_api_et_id" : {
          "name" : "ss_search_api_et_id",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "ss_search_api_language" : {
          "name" : "ss_search_api_language",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "ss_title_field" : {
          "name" : "ss_title_field",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "ss_kada_rendered_entity" : {
          "name" : "ss_kada_rendered_entity",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "ss_kada_translated_url" : {
          "name" : "ss_kada_translated_url",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "ss_type" : { "name" : "ss_type", "indexed" : true, "type" : "none", "boost" : "1.0" },
        "timestamp" : {
          "name" : "timestamp",
          "indexed" : true,
          "type" : "date",
          "boost" : "1.0"
        },
        "tm_body$value" : {
          "name" : "tm_body$value",
          "indexed" : true,
          "type" : "text",
          "boost" : "1.0"
        },
        "tm_field_address" : {
          "name" : "tm_field_address",
          "indexed" : true,
          "type" : "text",
          "boost" : "1.0"
        },
        "tm_field_alternative_name" : {
          "name" : "tm_field_alternative_name",
          "indexed" : true,
          "type" : "text",
          "boost" : "1.0"
        },
        "tm_field_availability$value" : {
          "name" : "tm_field_availability$value",
          "indexed" : true,
          "type" : "text",
          "boost" : "1.0"
        },
        "tm_field_contact_information$field_availability$value" : {
          "name" : "tm_field_contact_information$field_availability$value",
          "indexed" : true,
          "type" : "text",
          "boost" : "1.0"
        },
        "tm_field_employee_title" : {
          "name" : "tm_field_employee_title",
          "indexed" : true,
          "type" : "text",
          "boost" : "1.0"
        },
        "tm_field_event_address_extension" : {
          "name" : "tm_field_event_address_extension",
          "indexed" : true,
          "type" : "text",
          "boost" : "1.0"
        },
        "tm_field_event_organizer_et" : {
          "name" : "tm_field_event_organizer_et",
          "indexed" : true,
          "type" : "text",
          "boost" : "1.0"
        },
        "tm_field_event_types$field_url_keyword" : {
          "name" : "tm_field_event_types$field_url_keyword",
          "indexed" : true,
          "type" : "text",
          "boost" : "1.0"
        },
        "tm_field_event_types$name" : {
          "name" : "tm_field_event_types$name",
          "indexed" : true,
          "type" : "text",
          "boost" : "3.0"
        },
        "tm_field_first_name" : {
          "name" : "tm_field_first_name",
          "indexed" : true,
          "type" : "text",
          "boost" : "1.0"
        },
        "tm_field_info_box$value" : {
          "name" : "tm_field_info_box$value",
          "indexed" : true,
          "type" : "text",
          "boost" : "1.0"
        },
        "tm_field_lead_paragraph_long_text" : {
          "name" : "tm_field_lead_paragraph_long_text",
          "indexed" : true,
          "type" : "text",
          "boost" : "5.0"
        },
        "tm_field_municipality" : {
          "name" : "tm_field_municipality",
          "indexed" : true,
          "type" : "text",
          "boost" : "1.0"
        },
        "tm_field_office_tr$name" : {
          "name" : "tm_field_office_tr$name",
          "indexed" : true,
          "type" : "text",
          "boost" : "1.0"
        },
        "tm_field_political_party$name_field" : {
          "name" : "tm_field_political_party$name_field",
          "indexed" : true,
          "type" : "text",
          "boost" : "1.0"
        },
        "tm_field_postal_code" : {
          "name" : "tm_field_postal_code",
          "indexed" : true,
          "type" : "text",
          "boost" : "1.0"
        },
        "tm_field_precondition" : {
          "name" : "tm_field_precondition",
          "indexed" : true,
          "type" : "text",
          "boost" : "1.0"
        },
        "tm_field_quote" : {
          "name" : "tm_field_quote",
          "indexed" : true,
          "type" : "text",
          "boost" : "1.0"
        },
        "tm_field_street_address" : {
          "name" : "tm_field_street_address",
          "indexed" : true,
          "type" : "text",
          "boost" : "1.0"
        },
        "tm_field_surname" : {
          "name" : "tm_field_surname",
          "indexed" : true,
          "type" : "text",
          "boost" : "1.0"
        },
        "tm_field_target_audience$name" : {
          "name" : "tm_field_target_audience$name",
          "indexed" : true,
          "type" : "text",
          "boost" : "3.0"
        },
        "tm_field_task_description" : {
          "name" : "tm_field_task_description",
          "indexed" : true,
          "type" : "text",
          "boost" : "1.0"
        },
        "tm_field_vignette" : {
          "name" : "tm_field_vignette",
          "indexed" : true,
          "type" : "text",
          "boost" : "5.0"
        },
        "tm_relation_trustee_person_node_reverse$field_trust_unit$name_field" : {
          "name" : "tm_relation_trustee_person_node_reverse$field_trust_unit$name_field",
          "indexed" : true,
          "type" : "text",
          "boost" : "1.0"
        },
        "tm_relation_trustee_person_node_reverse$field_trustee_role$name" : {
          "name" : "tm_relation_trustee_person_node_reverse$field_trustee_role$name",
          "indexed" : true,
          "type" : "text",
          "boost" : "1.0"
        },
        "tm_search_api_aggregation_1" : {
          "name" : "tm_search_api_aggregation_1",
          "indexed" : true,
          "type" : "text",
          "boost" : "1.0"
        },
        "tm_title" : {
          "name" : "tm_title",
          "indexed" : true,
          "type" : "text",
          "boost" : "8.0"
        },
        "tm_title_field" : {
          "name" : "tm_title_field",
          "indexed" : true,
          "type" : "text",
          "boost" : "8.0"
        },
        "value_date" : {
          "name" : "value_date",
          "indexed" : true,
          "type" : "date",
          "boost" : "1.0"
        }
      }
    },
    "enabled" : "1",
    "read_only" : "1"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function kada_search_sarnia_feature_default_search_api_server() {
  $items = array();
  $items['kada_sarnia_search'] = entity_import('search_api_server', '{
    "name" : "KADA Sarnia search",
    "machine_name" : "kada_sarnia_search",
    "description" : "",
    "class" : "sarnia_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "localhost",
      "port" : "8983",
      "path" : "\\/solr\\/kada",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 1,
      "retrieve_data" : 1,
      "highlight_data" : 1,
      "skip_schema_check" : 0,
      "solr_version" : "",
      "http_method" : "AUTO",
      "sarnia_request_handler" : ""
    },
    "enabled" : "1"
  }');
  return $items;
}
