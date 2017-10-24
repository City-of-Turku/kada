<?php

/**
 * @file
 * Custom facets for KADA.
 */

/**
 * Needs documentation (@TODO).
 */
function kada_facets_facetapi_widgets() {
  return array(
    'facetapi_calendar_links' => array(
      'handler' => array(
        'label' => t('Calendar Links'),
        'class' => 'FacetapiWidgetCalendarLinks',
        'query types' => array('term', 'date'),
      ),
    ),
  );
}
