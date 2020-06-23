<?php

/**
 * @file
 * kada_events_base_feature.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function kada_events_base_feature_default_rules_configuration() {
  $items = array();
  $items['kada_events_base_feature_publish_repeated_events'] = entity_import('rules_config', '{ "kada_events_base_feature_publish_repeated_events" : {
      "LABEL" : "Publish repeated events",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "event" ],
      "REQUIRES" : [ "rules", "rules_batch", "rules_conditional" ],
      "ON" : { "node_update--event" : { "bundle" : "event" } },
      "IF" : [
        { "node_is_published" : { "node" : [ "node" ] } },
        { "NOT node_is_published" : { "node" : [ "node-unchanged" ] } },
        { "data_is" : { "data" : [ "node:field-date-type" ], "value" : "super" } }
      ],
      "DO" : [
        { "BATCH LOOP" : {
            "USING" : { "list" : [ "node:relation-super-event-node" ] },
            "ITEM" : { "relation_event" : "Relation event" },
            "BATCH_NAME" : null,
            "PROGRESSIVE" : null,
            "REDIRECT_PATH" : null,
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "NOT data_is" : { "data" : [ "relation-event:nid" ], "value" : [ "node:nid" ] } },
                    "DO" : [
                      { "entity_fetch" : {
                          "USING" : { "type" : "node", "id" : [ "relation-event:nid" ] },
                          "PROVIDE" : { "entity_fetched" : { "repeated_event" : "Repeated event" } }
                        }
                      },
                      { "data_set" : { "data" : [ "repeated-event:status" ], "value" : "1" } }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_add_repeated_event_translations'] = entity_import('rules_config', '{ "rules_add_repeated_event_translations" : {
      "LABEL" : "Add repeated event translations",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "kada_rules_et", "rules_conditional", "rules" ],
      "USES VARIABLES" : {
        "original_event" : { "label" : "Original event", "type" : "node" },
        "repeated_event" : { "label" : "Repeated event", "type" : "node" }
      },
      "ACTION SET" : [
        { "kada_rules_et_get_translation_languages" : {
            "USING" : { "entity" : [ "original-event" ] },
            "PROVIDE" : {
              "source_lang_code" : { "source_lang_code" : "Source language code" },
              "translated_lang_codes" : { "lang_codes" : "Translated language codes" }
            }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "lang-codes" ] },
            "ITEM" : { "lang_code" : "Language code" },
            "DO" : [
              { "kada_rules_et_get_translated_field_value" : {
                  "USING" : {
                    "entity" : [ "original-event" ],
                    "language_code" : [ "lang-code" ],
                    "field_machine_name" : "title_field"
                  },
                  "PROVIDE" : { "translated_value" : { "translated_title" : "translated_title" } }
                }
              },
              { "CONDITIONAL" : [
                  {
                    "IF" : { "NOT data_is_empty" : { "data" : [ "translated-title" ] } },
                    "DO" : [
                      { "kada_rules_et_set_translated_field_value" : {
                          "entity" : [ "repeated-event" ],
                          "language_code" : [ "lang-code" ],
                          "field_machine_name" : "title_field",
                          "translated_value" : [ "translated-title" ]
                        }
                      },
                      { "kada_rules_et_add_translation" : {
                          "entity" : [ "repeated-event" ],
                          "target_language_code" : [ "lang-code" ]
                        }
                      }
                    ]
                  }
                ]
              }
            ]
          }
        },
        { "data_set" : {
            "data" : [ "repeated-event:title" ],
            "value" : [ "original-event:title" ]
          }
        }
      ]
    }
  }');
  $items['rules_create_repeating_event_skeleton'] = entity_import('rules_config', '{ "rules_create_repeating_event_skeleton" : {
      "LABEL" : "Create repeating event skeleton",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional", "kada_rules_et", "kada_domains_feature" ],
      "USES VARIABLES" : {
        "original_event" : { "label" : "Original event", "type" : "node" },
        "start_date" : { "label" : "Start date", "type" : "date" },
        "end_date" : { "label" : "End date", "type" : "date" }
      },
      "ACTION SET" : [
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "event",
              "param_title" : [ "original-event:title" ],
              "param_author" : [ "original-event:author" ]
            },
            "PROVIDE" : { "entity_created" : { "repeated_event" : "Repeated event" } }
          }
        },
        { "data_set" : {
            "data" : [ "repeated-event:status" ],
            "value" : [ "original-event:status" ]
          }
        },
        { "data_set" : {
            "data" : [ "repeated-event:language" ],
            "value" : [ "original-event:language" ]
          }
        },
        { "data_set" : {
            "data" : [ "repeated-event:field-event-date:value" ],
            "value" : [ "start-date" ]
          }
        },
        { "data_set" : {
            "data" : [ "repeated-event:field-event-date:value2" ],
            "value" : [ "end-date" ]
          }
        },
        { "data_set" : { "data" : [ "repeated-event:field-date-type" ], "value" : "sub" } },
        { "CONDITIONAL" : [
            {
              "IF" : { "entity_is_of_bundle" : {
                  "entity" : [ "original-event" ],
                  "type" : "node",
                  "bundle" : { "value" : { "event" : "event" } }
                }
              },
              "DO" : [
                { "data_set" : {
                    "data" : [ "repeated-event:field-phone" ],
                    "value" : [ "original-event:field-phone" ]
                  }
                },
                { "data_set" : {
                    "data" : [ "repeated-event:field-person-in-charge" ],
                    "value" : [ "original-event:field-person-in-charge" ]
                  }
                },
                { "data_set" : {
                    "data" : [ "repeated-event:field-event-organizer-et" ],
                    "value" : [ "original-event:field-event-organizer-et" ]
                  }
                },
                { "data_set" : {
                    "data" : [ "repeated-event:og-group-ref" ],
                    "value" : [ "original-event:og-group-ref" ]
                  }
                },
                { "kada_rules_et_set_translated_field_value" : {
                    "entity" : [ "repeated-event" ],
                    "language_code" : [ "original-event:language" ],
                    "field_machine_name" : "field_event_organizer_et",
                    "translated_value" : [ "original-event:field-event-organizer-et" ]
                  }
                },
                { "LOOP" : {
                    "USING" : { "list" : [ "original-event:field-event-types" ] },
                    "ITEM" : { "event_type" : "Event type" },
                    "DO" : [
                      { "list_add" : {
                          "list" : [ "repeated-event:field-event-types" ],
                          "item" : [ "event-type" ],
                          "unique" : 1
                        }
                      }
                    ]
                  }
                },
                { "kada_domains_feature_rules_action_node_domain_copy" : {
                    "source_node" : [ "original-event" ],
                    "target_node" : [ "repeated-event" ]
                  }
                }
              ]
            }
          ]
        },
        { "component_rules_add_repeated_event_translations" : {
            "original_event" : [ "original_event" ],
            "repeated_event" : [ "repeated_event" ]
          }
        },
        { "entity_save" : { "data" : [ "repeated-event" ], "immediate" : 1 } },
        { "LOOP" : {
            "USING" : { "list" : [ "original-event:relation-place-service-node-reverse" ] },
            "ITEM" : { "current_place" : "Current place" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "NOT data_is" : { "data" : [ "current-place:nid" ], "value" : [ "original-event:nid" ] } },
                    "DO" : [
                      { "entity_fetch" : {
                          "USING" : { "type" : "node", "id" : [ "current-place:nid" ] },
                          "PROVIDE" : { "entity_fetched" : { "place" : "Place" } }
                        }
                      },
                      { "variable_add" : {
                          "USING" : { "type" : "list\\u003Centity\\u003E", "value" : [ "" ] },
                          "PROVIDE" : { "variable_added" : { "place_relation_endpoints" : "Place relation endpoints" } }
                        }
                      },
                      { "list_add" : { "list" : [ "place-relation-endpoints" ], "item" : [ "place" ] } },
                      { "list_add" : { "list" : [ "place-relation-endpoints" ], "item" : [ "repeated-event" ] } },
                      { "entity_create" : {
                          "USING" : {
                            "type" : "relation",
                            "param_relation_type" : "place_service",
                            "param_endpoints" : [ "place-relation-endpoints" ]
                          },
                          "PROVIDE" : { "entity_created" : { "place_relation" : "Place relation" } }
                        }
                      },
                      { "entity_save" : { "data" : [ "place-relation" ], "immediate" : 1 } }
                    ]
                  }
                ]
              }
            ]
          }
        },
        { "variable_add" : {
            "USING" : { "type" : "list\\u003Centity\\u003E", "value" : [ "" ] },
            "PROVIDE" : { "variable_added" : { "event_relation_endpoints" : "Event relation endpoints" } }
          }
        },
        { "list_add" : { "list" : [ "event-relation-endpoints" ], "item" : [ "repeated-event" ] } },
        { "list_add" : { "list" : [ "event-relation-endpoints" ], "item" : [ "original-event" ] } },
        { "entity_create" : {
            "USING" : {
              "type" : "relation",
              "param_relation_type" : "super_event",
              "param_endpoints" : [ "event-relation-endpoints" ]
            },
            "PROVIDE" : { "entity_created" : { "super_event_relation" : "Super event relation" } }
          }
        },
        { "entity_save" : { "data" : [ "super-event-relation" ], "immediate" : 1 } }
      ]
    }
  }');
  $items['rules_create_repeating_events'] = entity_import('rules_config', '{ "rules_create_repeating_events" : {
      "LABEL" : "Create repeating events",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "event" ],
      "REQUIRES" : [ "rules", "rules_conditional", "rules_batch" ],
      "ON" : { "node_insert--event" : { "bundle" : "event" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-date-type" ], "value" : "super" } }
      ],
      "DO" : [
        { "CONDITIONAL" : [
            {
              "IF" : { "NOT user_has_role" : {
                  "account" : [ "site:current-user" ],
                  "roles" : { "value" : { "1" : "1" } }
                }
              },
              "DO" : [
                { "BATCH LOOP" : {
                    "USING" : { "list" : [ "node:field-date-repeat" ] },
                    "ITEM" : { "repeate_date" : "Repeate date" },
                    "BATCH_NAME" : null,
                    "PROGRESSIVE" : null,
                    "REDIRECT_PATH" : null,
                    "DO" : [
                      { "component_rules_create_repeating_event_skeleton" : {
                          "original_event" : [ "node" ],
                          "start_date" : [ "repeate-date:value" ],
                          "end_date" : [ "repeate-date:value2" ]
                        }
                      }
                    ]
                  }
                },
                { "BATCH LOOP" : {
                    "USING" : { "list" : [ "node:field-date-repeat-extra" ] },
                    "ITEM" : { "extra_repeat_date" : "Extra repeat date" },
                    "BATCH_NAME" : null,
                    "PROGRESSIVE" : null,
                    "REDIRECT_PATH" : null,
                    "DO" : [
                      { "component_rules_create_repeating_event_skeleton" : {
                          "original_event" : [ "node" ],
                          "start_date" : [ "extra-repeat-date:value" ],
                          "end_date" : [ "extra-repeat-date:value2" ]
                        }
                      }
                    ]
                  }
                }
              ]
            },
            { "ELSE" : [
                { "LOOP" : {
                    "USING" : { "list" : [ "node:field-date-repeat" ] },
                    "ITEM" : { "repeate_date_anon" : "Repeat date (anon)" },
                    "DO" : [
                      { "component_rules_create_repeating_event_skeleton" : {
                          "original_event" : [ "node" ],
                          "start_date" : [ "repeate-date-anon:value" ],
                          "end_date" : [ "repeate-date-anon:value2" ]
                        }
                      }
                    ]
                  }
                },
                { "LOOP" : {
                    "USING" : { "list" : [ "node:field-date-repeat-extra" ] },
                    "ITEM" : { "extra_repeat_date_anon" : "Extra repeat date (anon)" },
                    "DO" : [
                      { "component_rules_create_repeating_event_skeleton" : {
                          "original_event" : [ "node" ],
                          "start_date" : [ "extra-repeat-date-anon:value" ],
                          "end_date" : [ "extra-repeat-date-anon:value2" ]
                        }
                      }
                    ]
                  }
                }
              ]
            }
          ]
        }
      ]
    }
  }');
  $items['rules_geocode_event_address'] = entity_import('rules_config', '{ "rules_geocode_event_address" : {
      "LABEL" : "Geocode event address",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional", "geocoder_rules", "geofield" ],
      "ON" : { "node_presave--event" : { "bundle" : "event" } },
      "IF" : [ { "NOT data_is_empty" : { "data" : [ "node:field-address" ] } } ],
      "DO" : [
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is_empty" : { "data" : [ "node:field-location" ] } },
              "DO" : [
                { "geocoder_rules_geocode" : {
                    "USING" : { "handler" : "google", "address" : [ "node:field-address" ] },
                    "PROVIDE" : {
                      "longitude" : { "longitude" : "Longitude" },
                      "latitude" : { "latitude" : "Latitude" },
                      "accuracy" : { "accuracy" : "Accuracy" }
                    }
                  }
                },
                { "geofield_create_values" : {
                    "USING" : { "lat" : [ "latitude" ], "lon" : [ "longitude" ] },
                    "PROVIDE" : { "geofield" : { "geofield" : "Geofield value" } }
                  }
                },
                { "data_set" : { "data" : [ "node:field-location" ], "value" : [ "geofield" ] } }
              ]
            }
          ]
        }
      ]
    }
  }');
  $items['rules_notify_admins_of_an_event_waiting_for_moderation'] = entity_import('rules_config', '{ "rules_notify_admins_of_an_event_waiting_for_moderation" : {
      "LABEL" : "Notify admins of an event waiting for moderation",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "event" ],
      "REQUIRES" : [ "rules", "rules_i18n" ],
      "ON" : { "node_insert--event" : { "bundle" : "event" } },
      "IF" : [
        { "NOT node_is_published" : { "node" : [ "node" ] } },
        { "data_is" : { "data" : [ "node:author:uid" ], "value" : "0" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "tapahtumat@turku.fi",
            "subject" : "New DriveTurku event waiting for moderation",
            "message" : "Hi,\\r\\n\\r\\nThere\\u0027s a new event waiting for publishing at DriveTurku. You can review and publish the event at https:\\/\\/kalenteri.turku.fi\\/node\\/[node:nid].\\r\\n\\r\\nBest regards,\\r\\n-- \\r\\nDriveTurku",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_notify_author_of_the_publication_of_event'] = entity_import('rules_config', '{ "rules_notify_author_of_the_publication_of_event" : {
      "LABEL" : "Notify author of the publication of event",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "event" ],
      "REQUIRES" : [ "rules", "rules_i18n" ],
      "ON" : { "node_update--event" : { "bundle" : "event" } },
      "IF" : [
        { "node_is_published" : { "node" : [ "node" ] } },
        { "NOT node_is_published" : { "node" : [ "node-unchanged" ] } },
        { "data_is" : { "data" : [ "node:author:uid" ], "value" : "0" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[node:field-email]",
            "subject" : "Your event in DriveTurku has been published",
            "message" : "Hi,\\r\\n\\r\\nThe event you submitted to DriveTurku has been approved and published by an admin.\\r\\n\\r\\nBest regards,\\r\\nDriveTurku",
            "language" : [ "node:language" ]
          }
        }
      ]
    }
  }');
  $items['rules_unpublish_past_event'] = entity_import('rules_config', '{ "rules_unpublish_past_event" : {
      "LABEL" : "Unpublish past event",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "event" ],
      "REQUIRES" : [ "rules", "scheduler" ],
      "ON" : {
        "node_update--event" : { "bundle" : "event" },
        "node_insert--event" : { "bundle" : "event" }
      },
      "IF" : [
        { "NOT data_is_empty" : { "data" : [ "node:field-event-date:value2" ] } },
        { "node_is_published" : { "node" : [ "node" ] } }
      ],
      "DO" : [
        { "scheduler_set_unpublish_date_action" : { "node" : [ "node" ], "date" : [ "node:field-event-date:value2" ] } }
      ]
    }
  }');
  return $items;
}
