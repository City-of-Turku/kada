<?php
/**
 * @file
 * pori_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pori_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function pori_search_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function pori_search_default_search_api_index() {
  $items = array();
  $items['pori_search_index'] = entity_import('search_api_index', '{
    "name" : "Pori search index",
    "machine_name" : "pori_search_index",
    "description" : null,
    "server" : "pori_search_server",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [
          "blog",
          "blog_post",
          "attraction_card",
          "landing_page",
          "service",
          "service_offer",
          "page",
          "event",
          "place",
          "news_item",
          "webform"
        ]
      },
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "body:summary" : { "type" : "text" },
        "body:value" : { "type" : "text" },
        "created" : { "type" : "date" },
        "domain_domain_id" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_additional_info_link:title" : { "type" : "list\\u003Ctext\\u003E" },
        "field_alternative_name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_keywords" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_lead_paragraph" : { "type" : "text" },
        "field_lead_paragraph_et" : { "type" : "text" },
        "og_group_ref" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text", "boost" : "5.0" },
        "title_field" : { "type" : "text" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "1",
            "bundles" : { "place" : "place", "news_item" : "news_item" }
          }
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
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_lead_paragraph_et" : true,
              "field_lead_paragraph" : true,
              "title_field" : true,
              "field_alternative_name" : true,
              "body:value" : true,
              "body:summary" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_lead_paragraph_et" : true,
              "field_lead_paragraph" : true,
              "title_field" : true,
              "field_alternative_name" : true,
              "body:value" : true,
              "body:summary" : true
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
              "title" : true,
              "field_lead_paragraph_et" : true,
              "field_lead_paragraph" : true,
              "title_field" : true,
              "field_alternative_name" : true,
              "body:value" : true,
              "body:summary" : true
            }
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_lead_paragraph_et" : true,
              "field_lead_paragraph" : true,
              "title_field" : true,
              "field_alternative_name" : true,
              "body:value" : true,
              "body:summary" : true
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
              "title" : true,
              "field_lead_paragraph_et" : true,
              "field_lead_paragraph" : true,
              "title_field" : true,
              "field_alternative_name" : true,
              "body:value" : true,
              "body:summary" : true
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
              "title" : true,
              "field_lead_paragraph_et" : true,
              "field_lead_paragraph" : true,
              "title_field" : true,
              "field_alternative_name" : true,
              "body:value" : true,
              "body:summary" : true
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

/**
 * Implements hook_default_search_api_live_results_search().
 */
function pori_search_default_search_api_live_results_search() {
  $items = array();
  $items['search_api_views_main_search'] = entity_import('search_api_live_results_search', '{
    "machine_name" : "search_api_views_main_search",
    "name" : "Main search",
    "index_id" : "pori_search_index",
    "type" : "search_api_views",
    "enabled" : "1",
    "options" : { "result count" : true }
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function pori_search_default_search_api_server() {
  $items = array();
  $items['pori_search_server'] = entity_import('search_api_server', '{
    "name" : "Pori search server",
    "machine_name" : "pori_search_server",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "10.1.13.65",
      "port" : "8983",
      "path" : "\\/solr",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "",
      "http_method" : "AUTO",
      "log_query" : 0,
      "log_response" : 0,
      "commits_disabled" : 0
    },
    "enabled" : "1"
  }');
  return $items;
}
