<?php
/**
 * @file
 * pori_contact_information_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pori_contact_information_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "elysia_cron" && $api == "default_elysia_cron_rules") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_views_api().
 */
function pori_contact_information_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function pori_contact_information_feature_default_search_api_index() {
  $items = array();
  $items['pori_person_index'] = entity_import('search_api_index', '{
    "name" : "Pori person index",
    "machine_name" : "pori_person_index",
    "description" : null,
    "server" : "pori_search_server",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [] },
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "field_activity_unit" : { "type" : "string" },
        "field_branch" : { "type" : "string" },
        "field_email_single" : { "type" : "text" },
        "field_employee_title" : { "type" : "text" },
        "field_first_name" : { "type" : "text" },
        "field_mobile_phone_work" : { "type" : "text" },
        "field_surname" : { "type" : "text" },
        "field_unit" : { "type" : "string" },
        "field_visiting_address" : { "type" : "text" },
        "nid" : { "type" : "integer" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text" },
        "title_field" : { "type" : "text" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "person" : "person" } }
        },
        "search_api_metatag_alter_callback" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "content_taxonomy_autocomplete_moderated_terms" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "title_field" : true,
              "field_email_single" : true,
              "field_first_name" : true,
              "field_mobile_phone_work" : true,
              "field_surname" : true,
              "field_employee_title" : true,
              "field_visiting_address" : true,
              "field_branch" : true,
              "field_unit" : true,
              "field_activity_unit" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "field_email_single" : true,
              "field_first_name" : true,
              "field_mobile_phone_work" : true,
              "field_surname" : true,
              "field_employee_title" : true,
              "field_visiting_address" : true,
              "field_branch" : true,
              "field_unit" : true,
              "field_activity_unit" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 0,
          "weight" : "15",
          "settings" : { "fields" : {
              "field_email_single" : true,
              "field_first_name" : true,
              "field_mobile_phone_work" : true,
              "field_surname" : true,
              "field_employee_title" : true,
              "field_visiting_address" : true,
              "field_branch" : true,
              "field_unit" : true,
              "field_activity_unit" : true
            }
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "field_email_single" : true,
              "field_first_name" : true,
              "field_mobile_phone_work" : true,
              "field_surname" : true,
              "field_employee_title" : true,
              "field_visiting_address" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "field_email_single" : true,
              "field_first_name" : true,
              "field_mobile_phone_work" : true,
              "field_surname" : true,
              "field_employee_title" : true,
              "field_visiting_address" : true,
              "field_branch" : true,
              "field_unit" : true,
              "field_activity_unit" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_porter_stemmer" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "fields" : {
              "field_email_single" : true,
              "field_first_name" : true,
              "field_mobile_phone_work" : true,
              "field_surname" : true,
              "field_employee_title" : true,
              "field_visiting_address" : true,
              "field_branch" : true,
              "field_unit" : true,
              "field_activity_unit" : true
            },
            "exceptions" : "texan=texa"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "40",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always",
            "highlight_partial" : 0
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}
