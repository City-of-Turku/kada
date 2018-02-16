<?php
/**
 * @file
 * kada_search_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kada_search_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function kada_search_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function kada_search_feature_default_search_api_index() {
  $items = array();
  $items['default_node_index'] = entity_import('search_api_index', '{
    "name" : "KADA node translated",
    "machine_name" : "default_node_index",
    "description" : null,
    "server" : "kada",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "0",
            "bundles" : {
              "blog" : "blog",
              "blog_post" : "blog_post",
              "landing_page" : "landing_page",
              "liftup" : "liftup",
              "page" : "page",
              "section" : "section",
              "news_item" : "news_item"
            }
          }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_aggregation_1" : {
                "name" : "rendered_entity",
                "type" : "fulltext",
                "fields" : [ "kada_rendered_entity" ],
                "description" : "A Fulltext aggregation of the following fields: Rendered entity."
              }
            }
          }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_visible_title" : true,
              "field_vignette" : true,
              "field_address" : true,
              "field_lead_paragraph_long_text" : true,
              "body:value" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_visible_title" : true,
              "field_vignette" : true,
              "field_address" : true,
              "field_lead_paragraph_long_text" : true,
              "field_quote" : true,
              "search_api_aggregation_1" : true,
              "body:value" : true,
              "field_info_box:value" : true,
              "field_contact_information:field_availability:value" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 8\\r\\nh2 = 5\\r\\nh3 = 3\\r\\nstrong = 3\\r\\nb = 3\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 0,
          "weight" : "15",
          "settings" : { "fields" : {
              "title" : true,
              "field_visible_title" : true,
              "field_vignette" : true,
              "field_address" : true,
              "field_lead_paragraph_long_text" : true,
              "body:value" : true
            }
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "field_visible_title" : true,
              "field_vignette" : true,
              "field_address" : true,
              "field_lead_paragraph_long_text" : true,
              "body:value" : true
            },
            "spaces" : "[^\\\\p{L}\\\\p{N}]",
            "ignorable" : "[-]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_visible_title" : true,
              "field_vignette" : true,
              "field_address" : true,
              "field_lead_paragraph_long_text" : true,
              "body:value" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      },
      "fields" : {
        "body:value" : { "type" : "text", "boost" : "2.0" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "domain_domain_id" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_address" : { "type" : "text", "boost" : "3.0" },
        "field_contact_information:field_availability:value" : { "type" : "list\\u003Ctext\\u003E", "boost" : "2.0" },
        "field_district" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_info_box:value" : { "type" : "text", "boost" : "3.0" },
        "field_keywords" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_keywords_et:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_lead_paragraph_long_text" : { "type" : "text", "boost" : "3.0" },
        "field_link_to_content:url" : { "type" : "uri" },
        "field_quote" : { "type" : "text", "boost" : "3.0" },
        "field_related_content" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_target_audience" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_target_audience:name" : { "type" : "list\\u003Ctext\\u003E", "boost" : "2.0" },
        "field_target_audience:tid" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_theme" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_topic" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_vignette" : { "type" : "text", "boost" : "5.0" },
        "field_visible_title" : { "type" : "text", "boost" : "5.0" },
        "language" : { "type" : "string" },
        "nid" : { "type" : "integer" },
        "og_group_ref" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" },
        "search_api_aggregation_1" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "integer" },
        "title" : { "type" : "text", "boost" : "8.0" },
        "kada_rendered_entity" : { "type" : "string" },
        "kada_translated_url" : { "type" : "uri" },
        "type" : { "type" : "string" }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "base_type" : "search_api_index"
  }');
  $items['kada_content'] = entity_import('search_api_index', '{
    "name" : "KADA entity translated",
    "machine_name" : "kada_content",
    "description" : null,
    "server" : "kada",
    "item_type" : "search_api_et_node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "search_api_et" : { "include" : "incomplete", "fallback language" : "" },
      "fields" : {
        "body:value" : { "type" : "text", "boost" : "2.0" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "domain_domain_id" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_address" : { "type" : "text", "boost" : "3.0" },
        "field_alternative_name" : { "type" : "list\\u003Ctext\\u003E", "boost" : "5.0" },
        "field_attraction_category" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_availability:value" : { "type" : "text", "boost" : "2.0" },
        "field_classification" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_district" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_employee_title" : { "type" : "text", "boost" : "5.0" },
        "field_event_address_extension" : { "type" : "text", "boost" : "3.0" },
        "field_event_date:duration" : { "type" : "duration" },
        "field_event_date:value" : { "type" : "date" },
        "field_event_date:value2" : { "type" : "date" },
        "field_event_organizer_et" : { "type" : "text", "boost" : "5.0" },
        "field_event_types" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_event_types:field_url_keyword" : { "type" : "list\\u003Ctext\\u003E", "boost" : "2.0" },
        "field_event_types:name" : { "type" : "list\\u003Ctext\\u003E", "boost" : "2.0" },
        "field_event_types:name_field" : { "type" : "list\\u003Ctext\\u003E", "boost" : "2.0" },
        "field_event_types:parent" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_event_types:parents_all" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_event_types:tid" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_event_types:vocabulary" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "taxonomy_vocabulary"
        },
        "field_first_name" : { "type" : "text", "boost" : "5.0" },
        "field_keywords" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_keywords:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_keywords_et" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_lead_paragraph_et" : { "type" : "text", "boost" : "2.0" },
        "field_location:geom" : { "type" : "string" },
        "field_location_name" : { "type" : "text", "boost" : "3.0" },
        "field_municipality" : { "type" : "text", "boost" : "3.0" },
        "field_office_tr" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_office_tr:name" : { "type" : "list\\u003Ctext\\u003E", "boost" : "2.0" },
        "field_person_type" : { "type" : "list\\u003Cstring\\u003E" },
        "field_political_party" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_political_party:name_field" : { "type" : "text", "boost" : "2.0" },
        "field_postal_code" : { "type" : "text", "boost" : "3.0" },
        "field_precondition" : { "type" : "list\\u003Ctext\\u003E", "boost" : "3.0" },
        "field_street_address" : { "type" : "text", "boost" : "3.0" },
        "field_surname" : { "type" : "text", "boost" : "3.0" },
        "field_target_audience" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_task_description" : { "type" : "text", "boost" : "3.0" },
        "field_theme" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "individual_dates" : { "type" : "list\\u003Cdate\\u003E" },
        "language" : { "type" : "string" },
        "og_group_ref" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "relation_place_service_node" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "relation_place_service_node:relation_service_offer_service_node:field_classification" : {
          "type" : "list\\u003Clist\\u003Clist\\u003Cinteger\\u003E\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "relation_place_service_node:relation_service_offer_service_node:field_target_audience" : {
          "type" : "list\\u003Clist\\u003Clist\\u003Cinteger\\u003E\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "relation_service_offer_service_node" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "relation_trustee_person_node_reverse:field_trust_unit" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "relation_trustee_person_node_reverse:field_trust_unit:name_field" : { "type" : "list\\u003Ctext\\u003E", "boost" : "2.0" },
        "relation_trustee_person_node_reverse:field_trustee_role" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "relation_trustee_person_node_reverse:field_trustee_role:name" : { "type" : "list\\u003Ctext\\u003E", "boost" : "3.0" },
        "search_api_aggregation_1" : { "type" : "text" },
        "search_api_et_id" : { "type" : "string" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "integer" },
        "title_field" : { "type" : "string" },
        "kada_rendered_entity" : { "type" : "string" },
        "kada_translated_url" : { "type" : "string" },
        "type" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "0",
            "bundles" : {
              "attraction_card" : "attraction_card",
              "person" : "person",
              "service" : "service",
              "event" : "event",
              "place" : "place"
            }
          }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_aggregation_1" : {
                "name" : "rendered_entity",
                "type" : "fulltext",
                "fields" : [ "kada_rendered_entity", "title_field" ],
                "description" : "A Fulltext aggregation of the following fields: Rendered entity, Event title."
              }
            }
          }
        },
        "search_api_alter_add_hierarchy" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "field_classification:parents_all" : "field_classification:parents_all" } }
        }
      },
      "processors" : {
        "search_api_case_ignore" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "field_location_name" : true,
              "field_event_address_extension" : true,
              "field_precondition" : true,
              "search_api_aggregation_1" : true,
              "body:value" : true,
              "field_availability:value" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 8\\r\\nh2 = 5\\r\\nh3 = 3\\r\\nstrong = 3\\r\\nb = 3\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : { "status" : 0, "weight" : "15", "settings" : { "fields" : [] } },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : { "fields" : [], "spaces" : "[^[:alnum:]]", "ignorable" : "[\\u0027]" }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : [],
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "base_type" : "search_api_index"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function kada_search_feature_default_search_api_server() {
  $items = array();
  $items['kada'] = entity_import('search_api_server', '{
    "name" : "KADA",
    "machine_name" : "kada",
    "description" : "",
    "class" : "search_api_solr_service",
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
      "http_method" : "AUTO"
    },
    "enabled" : "1",
    "base_type" : "search_api_server"
  }');
  return $items;
}
