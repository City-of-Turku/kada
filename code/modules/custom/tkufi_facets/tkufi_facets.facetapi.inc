<?php

/**
 * @file
 * Custom facets for Turku.
 */

/**
 * Needs documentation (@TODO).
 */
function tkufi_facets_facetapi_widgets() {
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
