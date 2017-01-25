<?php

/**
 * @file
 * Adds a Request URI condition to Context.
 */

/**
 * Documentation (@TODO).
 *
 * This should probably be request_uri?
 */
class tkufi_context_request_uri_condition_context_condition_requesturi extends context_condition_path {

  /**
   * Documentation (@TODO).
   */
  public function execute() {
    if ($this->condition_used()) {
      $current_query_string = $_SERVER["REQUEST_URI"];
      foreach ($this->get_contexts() as $context) {
        $query_strings = $this->fetch_from_context($context, 'values');
        if ($this->match($current_query_string, $query_strings, TRUE)) {
          $this->condition_met($context);
        }
      }
    }
  }

}
