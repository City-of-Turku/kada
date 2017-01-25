<?php
/**
 * @file
 * kada_some_content_feature.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function kada_some_content_feature_default_rules_configuration() {
  $items = array();
  $items['rules_flag_some_updates_to_current'] = entity_import('rules_config', '{ "rules_flag_some_updates_to_current" : {
      "LABEL" : "Flag SoMe updates to current",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "flag", "rules" ],
      "ON" : { "node_insert--social_media_update" : { "bundle" : "social_media_update" } },
      "DO" : [
        { "flag_flagnode" : {
            "flag" : "current",
            "node" : [ "node" ],
            "flagging_user" : "1",
            "permission_check" : 0
          }
        }
      ]
    }
  }');
  return $items;
}
