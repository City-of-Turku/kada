<?php

/**
 * @file
 * Expose request URI as a context condition.
 */

/**
 *  Needs Documentation (@TODO).
 */
class kada_active_menu_condition_context_condition_activemenu extends context_condition_path {

  /**
   *  Needs Documentation (@TODO).
   */
  public function execute() {
    // Get the menu name for the current content.
    $trail        = menu_get_active_trail();
    $lastInTrail  = end($trail);
    $menu_name    = $lastInTrail['menu_name'];

    foreach ($this->get_contexts() as $context) {
      $values = $this->fetch_from_context($context, 'values');

      // If the content is in a menu defined in the context condition,
      // activate this context.
      if (in_array($menu_name, $values)) {
        $this->condition_met($context);
      }
    }
  }

}
