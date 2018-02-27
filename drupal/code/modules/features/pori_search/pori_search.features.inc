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
        "field_alternative_name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_lead_paragraph" : { "type" : "text" },
        "field_lead_paragraph_et" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text", "boost" : "5.0" },
        "title_field" : { "type" : "text" }
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
