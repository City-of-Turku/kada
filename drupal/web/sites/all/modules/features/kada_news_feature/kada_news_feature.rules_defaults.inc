<?php

/**
 * @file
 * kada_news_feature.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function kada_news_feature_default_rules_configuration() {
  $items = array();
  $items['rules_set_order_time'] = entity_import('rules_config', '{ "rules_set_order_time" : {
      "LABEL" : "Set order time",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "News item" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : { "flag_flagged_main_news" : [], "flag_unflagged_main_news" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_order_time" } },
        { "data_is_empty" : { "data" : [ "flagged-node:field-order-time" ] } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "flagged-node:field-order-time" ],
            "value" : [ "flagged-node:created" ]
          }
        }
      ]
    }
  }');
  return $items;
}
