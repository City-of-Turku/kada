<?php

/**
 * @file
 * kada_geo_feature.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function kada_geo_feature_default_rules_configuration() {
  $items = array();
  $items['rules_district_location_to_content'] = entity_import('rules_config', '{ "rules_district_location_to_content" : {
      "LABEL" : "District location to content",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "geo" ],
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "ON" : { "node_presave" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_district" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_location" } },
        { "NOT data_is_empty" : { "data" : [ "node:field-district" ] } },
        { "data_is_empty" : { "data" : [ "node:field-location" ] } }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "taxonomy_term", "id" : [ "node:field-district:0:tid" ] },
            "PROVIDE" : { "entity_fetched" : { "district" : "District" } }
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "entity_has_field" : { "entity" : [ "district" ], "field" : "field_location" } },
              "DO" : [
                { "data_set" : {
                    "data" : [ "node:field-location" ],
                    "value" : [ "district:field-location" ]
                  }
                }
              ]
            }
          ]
        }
      ]
    }
  }');
  return $items;
}
