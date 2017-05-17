<?php
/**
 * @file
 * kada_events_base_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function kada_events_base_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'event';
  $context->description = 'Event content';
  $context->tag = 'content type';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Event content');
  t('content type');
  $export['event'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'event_delete';
  $context->description = 'Display a list of recurring events to be deleted';
  $context->tag = 'content type';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*node/*/delete' => '*node/*/delete',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-ad3d53b4b97c88c9aa4b6b0551bae730' => array(
          'module' => 'views',
          'delta' => 'ad3d53b4b97c88c9aa4b6b0551bae730',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Display a list of recurring events to be deleted');
  t('content type');
  $export['event_delete'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eventcalendar';
  $context->description = 'Triggered on the Event Calendar domain';
  $context->tag = 'domains';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        'calendar' => 'calendar',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'navigation_top',
          'weight' => '-10',
        ),
        'menu_block-7' => array(
          'module' => 'menu_block',
          'delta' => '7',
          'region' => 'navigation',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'eventcalendar',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Triggered on the Event Calendar domain');
  t('domains');
  $export['eventcalendar'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eventcalendar_default';
  $context->description = 'Content displayed in calendar domain';
  $context->tag = 'section_eventcalendar';
  $context->conditions = array(
    'context_all' => array(
      'values' => array(
        'eventcalendar' => 'eventcalendar',
      ),
    ),
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'kada_events_division-eventcalendar_switcher' => array(
          'module' => 'kada_events_division',
          'delta' => 'eventcalendar_switcher',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'views-0a0d9387bc0aa482d252922194524b92' => array(
          'module' => 'views',
          'delta' => '0a0d9387bc0aa482d252922194524b92',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
      'layout' => 'eventcalendar-default',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content displayed in calendar domain');
  t('section_eventcalendar');
  $export['eventcalendar_default'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eventcalendar_event_grid';
  $context->description = 'Displays events in a grid on the Event Calendar front page';
  $context->tag = 'section_eventcalendar';
  $context->conditions = array(
    'context_all' => array(
      'values' => array(
        'eventcalendar_front' => 'eventcalendar_front',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Displays events in a grid on the Event Calendar front page');
  t('section_eventcalendar');
  $export['eventcalendar_event_grid'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eventcalendar_event_list';
  $context->description = 'Displays events in a list on the Event Calendar front page';
  $context->tag = 'section_eventcalendar';
  $context->conditions = array(
    'context_all' => array(
      'values' => array(
        'eventcalendar_front' => 'eventcalendar_front',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Displays events in a list on the Event Calendar front page');
  t('section_eventcalendar');
  $export['eventcalendar_event_list'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eventcalendar_events';
  $context->description = 'Triggered in the Events section of the Event Calendar';
  $context->tag = 'section_eventcalendar';
  $context->conditions = array(
    'context_all' => array(
      'values' => array(
        'eventcalendar' => 'eventcalendar',
      ),
    ),
    'requesturi' => array(
      'values' => array(
        '*/events' => '*/events',
        '*/events/*' => '*/events/*',
        '*/tapahtumat' => '*/tapahtumat',
        '*/tapahtumat/*' => '*/tapahtumat/*',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'eventcalendar-events',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Triggered in the Events section of the Event Calendar');
  t('section_eventcalendar');
  $export['eventcalendar_events'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eventcalendar_free_word_search';
  $context->description = 'Eventcalendar free word search block';
  $context->tag = 'section_eventcalendar';
  $context->conditions = array(
    'context_all' => array(
      'values' => array(
        'eventcalendar' => 'eventcalendar',
      ),
    ),
    'path' => array(
      'values' => array(
        '~event-search' => '~event-search',
        '~event-search/*' => '~event-search/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'kada_events_base_feature-eventsearch' => array(
          'module' => 'kada_events_base_feature',
          'delta' => 'eventsearch',
          'region' => 'navigation_top',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Eventcalendar free word search block');
  t('section_eventcalendar');
  $export['eventcalendar_free_word_search'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eventcalendar_front';
  $context->description = 'Triggered on the Event Calendar front page';
  $context->tag = 'section_eventcalendar';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        'calendar' => 'calendar',
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
        '*calendar*' => '*calendar*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'kada_events_division-eventcalendar_switcher' => array(
          'module' => 'kada_events_division',
          'delta' => 'eventcalendar_switcher',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'quicktabs-eventcalendar_top_tabs' => array(
          'module' => 'quicktabs',
          'delta' => 'eventcalendar_top_tabs',
          'region' => 'top_tabs',
          'weight' => '-10',
        ),
        'views-855c1bad3d5c5ee15677eccee610e3bc' => array(
          'module' => 'views',
          'delta' => '855c1bad3d5c5ee15677eccee610e3bc',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'views-df485ba9325bf8f9ee84b94548d0d032' => array(
          'module' => 'views',
          'delta' => 'df485ba9325bf8f9ee84b94548d0d032',
          'region' => 'event_list',
          'weight' => '-10',
        ),
        'views-755466bc22e6a0798ee432f65fb54f97' => array(
          'module' => 'views',
          'delta' => '755466bc22e6a0798ee432f65fb54f97',
          'region' => 'event_map',
          'weight' => '-10',
        ),
        'facetapi-E7ldZFIeVv1Ub1Gc3juUsF7hagKOexgf' => array(
          'module' => 'facetapi',
          'delta' => 'E7ldZFIeVv1Ub1Gc3juUsF7hagKOexgf',
          'region' => 'filters',
          'weight' => '-88',
        ),
        'facetapi-YpWMqpO9gq7H1NpTx0H1Yqy6G2Z32O5I' => array(
          'module' => 'facetapi',
          'delta' => 'YpWMqpO9gq7H1NpTx0H1Yqy6G2Z32O5I',
          'region' => 'filters',
          'weight' => '-87',
        ),
        'facetapi-jLA0X0nAvfN2TSmyr5AbOSaJJAxgHBu7' => array(
          'module' => 'facetapi',
          'delta' => 'jLA0X0nAvfN2TSmyr5AbOSaJJAxgHBu7',
          'region' => 'filters',
          'weight' => '-86',
        ),
        'facetapi-eLvyvqnLMiBQK8hAXcdQDrRgH1TMljGY' => array(
          'module' => 'facetapi',
          'delta' => 'eLvyvqnLMiBQK8hAXcdQDrRgH1TMljGY',
          'region' => 'filters',
          'weight' => '-85',
        ),
      ),
      'layout' => 'eventcalendar-front',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Triggered on the Event Calendar front page');
  t('section_eventcalendar');
  $export['eventcalendar_front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eventcalendar_front_events';
  $context->description = 'Triggered on the Event Calendar Events front page';
  $context->tag = 'section_eventcalendar';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        'calendar' => 'calendar',
      ),
    ),
    'requesturi' => array(
      'values' => array(
        '*/events' => '*/events',
        '*/events/calendar*' => '*/events/calendar*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-kada_top_carousel-section' => array(
          'module' => 'views',
          'delta' => 'kada_top_carousel-section',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
      'layout' => 'eventcalendar-front',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Triggered on the Event Calendar Events front page');
  t('section_eventcalendar');
  $export['eventcalendar_front_events'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eventcalendar_front_events_en';
  $context->description = 'English event frontpage';
  $context->tag = 'section_eventcalendar';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        'calendar' => 'calendar',
      ),
    ),
    'language' => array(
      'values' => array(
        'en' => 'en',
      ),
    ),
    'requesturi' => array(
      'values' => array(
        '*/events' => '*/events',
        '*/events/calendar*' => '*/events/calendar*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-ed7c5328d70a35ebe374d7ead4e29921' => array(
          'module' => 'views',
          'delta' => 'ed7c5328d70a35ebe374d7ead4e29921',
          'region' => 'top_carousel',
          'weight' => '-10',
        ),
        'views-f5dc96a94931775165116c081ad3f343' => array(
          'module' => 'views',
          'delta' => 'f5dc96a94931775165116c081ad3f343',
          'region' => 'event_mosaic',
          'weight' => '-10',
        ),
      ),
      'layout' => 'eventcalendar-front',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('English event frontpage');
  t('section_eventcalendar');
  $export['eventcalendar_front_events_en'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eventcalendar_front_events_fi';
  $context->description = 'Finnish event frontpage';
  $context->tag = 'section_eventcalendar';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        'calendar' => 'calendar',
      ),
    ),
    'language' => array(
      'values' => array(
        'fi' => 'fi',
      ),
    ),
    'requesturi' => array(
      'values' => array(
        '*/events' => '*/events',
        '*/events/calendar*' => '*/events/calendar*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-b23677cc742580029c5ba81fd68cfa8e' => array(
          'module' => 'views',
          'delta' => 'b23677cc742580029c5ba81fd68cfa8e',
          'region' => 'top_carousel',
          'weight' => '-10',
        ),
        'views-464eea9ac2fe610dc3592f80641828a5' => array(
          'module' => 'views',
          'delta' => '464eea9ac2fe610dc3592f80641828a5',
          'region' => 'event_mosaic',
          'weight' => '-10',
        ),
      ),
      'layout' => 'eventcalendar-front',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Finnish event frontpage');
  t('section_eventcalendar');
  $export['eventcalendar_front_events_fi'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eventcalendar_front_events_ru';
  $context->description = 'Russian event frontpage';
  $context->tag = 'section_eventcalendar';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        'calendar' => 'calendar',
      ),
    ),
    'language' => array(
      'values' => array(
        'ru' => 'ru',
      ),
    ),
    'requesturi' => array(
      'values' => array(
        '*/events' => '*/events',
        '*/events/calendar*' => '*/events/calendar*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-daa371b73c95270311db3c5124072ee9' => array(
          'module' => 'views',
          'delta' => 'daa371b73c95270311db3c5124072ee9',
          'region' => 'top_carousel',
          'weight' => '-10',
        ),
        'views-3a826694cdaca4a4206c3205dcf85574' => array(
          'module' => 'views',
          'delta' => '3a826694cdaca4a4206c3205dcf85574',
          'region' => 'event_mosaic',
          'weight' => '-10',
        ),
      ),
      'layout' => 'eventcalendar-front',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Russian event frontpage');
  t('section_eventcalendar');
  $export['eventcalendar_front_events_ru'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eventcalendar_front_events_sv';
  $context->description = 'Swedish event frontpage';
  $context->tag = 'section_eventcalendar';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        'calendar' => 'calendar',
      ),
    ),
    'language' => array(
      'values' => array(
        'sv' => 'sv',
      ),
    ),
    'requesturi' => array(
      'values' => array(
        '*/events' => '*/events',
        '*/events/calendar*' => '*/events/calendar*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-c455f978383b84f68d0c3e95627e1ca6' => array(
          'module' => 'views',
          'delta' => 'c455f978383b84f68d0c3e95627e1ca6',
          'region' => 'top_carousel',
          'weight' => '-10',
        ),
        'views-55704b776b70c7fc287954ce82e2eefd' => array(
          'module' => 'views',
          'delta' => '55704b776b70c7fc287954ce82e2eefd',
          'region' => 'event_mosaic',
          'weight' => '-10',
        ),
      ),
      'layout' => 'eventcalendar-front',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Swedish event frontpage');
  t('section_eventcalendar');
  $export['eventcalendar_front_events_sv'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eventcalendar_front_hobbies';
  $context->description = 'Triggered on the Event Calendar Hobbies front page';
  $context->tag = 'section_eventcalendar';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        'calendar' => 'calendar',
      ),
    ),
    'requesturi' => array(
      'values' => array(
        '*/hobbies' => '*/hobbies',
        '*/hobbies/calendar*' => '*/hobbies/calendar*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-edbc1cb287c9ce16b634bfd74dfa9bdf' => array(
          'module' => 'views',
          'delta' => 'edbc1cb287c9ce16b634bfd74dfa9bdf',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
      'layout' => 'eventcalendar-front',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Triggered on the Event Calendar Hobbies front page');
  t('section_eventcalendar');
  $export['eventcalendar_front_hobbies'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eventcalendar_front_hobbies_en';
  $context->description = 'Triggered on the Event Calendar Hobbies front page english';
  $context->tag = 'section_eventcalendar';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        'calendar' => 'calendar',
      ),
    ),
    'language' => array(
      'values' => array(
        'en' => 'en',
      ),
    ),
    'requesturi' => array(
      'values' => array(
        '*/hobbies' => '*/hobbies',
        '*/hobbies/calendar*' => '*/hobbies/calendar*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-edbc1cb287c9ce16b634bfd74dfa9bdf' => array(
          'module' => 'views',
          'delta' => 'edbc1cb287c9ce16b634bfd74dfa9bdf',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-23fe5d3656233abaf50c47d0082830ba' => array(
          'module' => 'views',
          'delta' => '23fe5d3656233abaf50c47d0082830ba',
          'region' => 'top_carousel',
          'weight' => '-9',
        ),
        'views-59e986c2e6658ad95fc6cd1de28bbeb3' => array(
          'module' => 'views',
          'delta' => '59e986c2e6658ad95fc6cd1de28bbeb3',
          'region' => 'event_mosaic',
          'weight' => '-9',
        ),
      ),
      'layout' => 'eventcalendar-front',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Triggered on the Event Calendar Hobbies front page english');
  t('section_eventcalendar');
  $export['eventcalendar_front_hobbies_en'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eventcalendar_front_hobbies_fi';
  $context->description = 'Triggered on the Event Calendar Hobbies front page finnish';
  $context->tag = 'section_eventcalendar';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        'calendar' => 'calendar',
      ),
    ),
    'language' => array(
      'values' => array(
        'fi' => 'fi',
      ),
    ),
    'requesturi' => array(
      'values' => array(
        '*/hobbies' => '*/hobbies',
        '*/hobbies/calendar*' => '*/hobbies/calendar*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-edbc1cb287c9ce16b634bfd74dfa9bdf' => array(
          'module' => 'views',
          'delta' => 'edbc1cb287c9ce16b634bfd74dfa9bdf',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-677210aee22535b8c810779404f4d632' => array(
          'module' => 'views',
          'delta' => '677210aee22535b8c810779404f4d632',
          'region' => 'top_carousel',
          'weight' => '-10',
        ),
        'views-54e3e1bd7c4fdbbeadc86c4ff7f09483' => array(
          'module' => 'views',
          'delta' => '54e3e1bd7c4fdbbeadc86c4ff7f09483',
          'region' => 'event_mosaic',
          'weight' => '-10',
        ),
      ),
      'layout' => 'eventcalendar-front',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Triggered on the Event Calendar Hobbies front page finnish');
  t('section_eventcalendar');
  $export['eventcalendar_front_hobbies_fi'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eventcalendar_front_hobbies_ru';
  $context->description = 'Triggered on the Event Calendar Hobbies front page russian';
  $context->tag = 'section_eventcalendar';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        'calendar' => 'calendar',
      ),
    ),
    'language' => array(
      'values' => array(
        'ru' => 'ru',
      ),
    ),
    'requesturi' => array(
      'values' => array(
        '*/hobbies' => '*/hobbies',
        '*/hobbies/calendar*' => '*/hobbies/calendar*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-edbc1cb287c9ce16b634bfd74dfa9bdf' => array(
          'module' => 'views',
          'delta' => 'edbc1cb287c9ce16b634bfd74dfa9bdf',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-22cf6d9a730f4c3d1fa097600709293c' => array(
          'module' => 'views',
          'delta' => '22cf6d9a730f4c3d1fa097600709293c',
          'region' => 'top_carousel',
          'weight' => '-9',
        ),
        'views-eb4d4af740fb28a68d0a9c9886a39cfe' => array(
          'module' => 'views',
          'delta' => 'eb4d4af740fb28a68d0a9c9886a39cfe',
          'region' => 'event_mosaic',
          'weight' => '-9',
        ),
      ),
      'layout' => 'eventcalendar-front',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Triggered on the Event Calendar Hobbies front page russian');
  t('section_eventcalendar');
  $export['eventcalendar_front_hobbies_ru'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eventcalendar_front_hobbies_sv';
  $context->description = 'Triggered on the Event Calendar Hobbies front page swedish';
  $context->tag = 'section_eventcalendar';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        'calendar' => 'calendar',
      ),
    ),
    'language' => array(
      'values' => array(
        'sv' => 'sv',
      ),
    ),
    'requesturi' => array(
      'values' => array(
        '*/hobbies' => '*/hobbies',
        '*/hobbies/calendar*' => '*/hobbies/calendar*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-edbc1cb287c9ce16b634bfd74dfa9bdf' => array(
          'module' => 'views',
          'delta' => 'edbc1cb287c9ce16b634bfd74dfa9bdf',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-9bd31838df270d33313afb09c4f78dec' => array(
          'module' => 'views',
          'delta' => '9bd31838df270d33313afb09c4f78dec',
          'region' => 'top_carousel',
          'weight' => '-9',
        ),
        'views-b60a7711a807a9f8d64b5966e422cfa8' => array(
          'module' => 'views',
          'delta' => 'b60a7711a807a9f8d64b5966e422cfa8',
          'region' => 'event_mosaic',
          'weight' => '-9',
        ),
      ),
      'layout' => 'eventcalendar-front',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Triggered on the Event Calendar Hobbies front page swedish');
  t('section_eventcalendar');
  $export['eventcalendar_front_hobbies_sv'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eventcalendar_hobbies';
  $context->description = 'Triggered in the Hobbies section of the Event Calendar';
  $context->tag = 'section_eventcalendar';
  $context->conditions = array(
    'context_all' => array(
      'values' => array(
        'eventcalendar' => 'eventcalendar',
      ),
    ),
    'requesturi' => array(
      'values' => array(
        '*/hobbies' => '*/hobbies',
        '*/hobbies/*' => '*/hobbies/*',
        '*/harrasteet' => '*/harrasteet',
        '*/harrasteet/*' => '*/harrasteet/*',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'eventcalendar-hobbies',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Triggered in the Hobbies section of the Event Calendar');
  t('section_eventcalendar');
  $export['eventcalendar_hobbies'] = $context;

  return $export;
}
