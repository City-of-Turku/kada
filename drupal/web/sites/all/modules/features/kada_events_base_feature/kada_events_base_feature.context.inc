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
        'views-bae7ddd4c1b987e362b055aa9b225bae' => array(
          'module' => 'views',
          'delta' => 'bae7ddd4c1b987e362b055aa9b225bae',
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
        'views-kada_section_footer-block_1' => array(
          'module' => 'views',
          'delta' => 'kada_section_footer-block_1',
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
        'views-kada_section_footer-block_2' => array(
          'module' => 'views',
          'delta' => 'kada_section_footer-block_2',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'views-e7af9740b175ac8f449ae4e7d545add5' => array(
          'module' => 'views',
          'delta' => 'e7af9740b175ac8f449ae4e7d545add5',
          'region' => 'event_list',
          'weight' => '-10',
        ),
        'views-3f4afdac568f462e6c3c03c3fad675ee' => array(
          'module' => 'views',
          'delta' => '3f4afdac568f462e6c3c03c3fad675ee',
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
        'views-kada_top_carousel-turkukalenteri_en' => array(
          'module' => 'views',
          'delta' => 'kada_top_carousel-turkukalenteri_en',
          'region' => 'top_carousel',
          'weight' => '-10',
        ),
        'views-kada_event_list-event_grid_en' => array(
          'module' => 'views',
          'delta' => 'kada_event_list-event_grid_en',
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
        'views-kada_top_carousel-kadacalendar' => array(
          'module' => 'views',
          'delta' => 'kada_top_carousel-kadacalendar',
          'region' => 'top_carousel',
          'weight' => '-10',
        ),
        'views-kada_event_list-event_grid' => array(
          'module' => 'views',
          'delta' => 'kada_event_list-event_grid',
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
        'views-kada_top_carousel-kadacalendar_ru' => array(
          'module' => 'views',
          'delta' => 'kada_top_carousel-kadacalendar_ru',
          'region' => 'top_carousel',
          'weight' => '-10',
        ),
        'views-kada_event_list-event_grid_ru' => array(
          'module' => 'views',
          'delta' => 'kada_event_list-event_grid_ru',
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
        'views-kada_top_carousel-kadacalendar_sv' => array(
          'module' => 'views',
          'delta' => 'kada_top_carousel-kadacalendar_sv',
          'region' => 'top_carousel',
          'weight' => '-10',
        ),
        'views-kada_event_list-event_grid_sv' => array(
          'module' => 'views',
          'delta' => 'kada_event_list-event_grid_sv',
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
        'views-e2b74bbc24740379f9f28979bd0d8a5f' => array(
          'module' => 'views',
          'delta' => 'e2b74bbc24740379f9f28979bd0d8a5f',
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
        'views-e2b74bbc24740379f9f28979bd0d8a5f' => array(
          'module' => 'views',
          'delta' => 'e2b74bbc24740379f9f28979bd0d8a5f',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-198ee601399648f605a5a54c648fd563' => array(
          'module' => 'views',
          'delta' => '198ee601399648f605a5a54c648fd563',
          'region' => 'top_carousel',
          'weight' => '-9',
        ),
        'views-kada_event_list-hobby_grid_en' => array(
          'module' => 'views',
          'delta' => 'kada_event_list-hobby_grid_en',
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
        'views-e2b74bbc24740379f9f28979bd0d8a5f' => array(
          'module' => 'views',
          'delta' => 'e2b74bbc24740379f9f28979bd0d8a5f',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-2b3acf5844aef9bdb37a05bc773d9660' => array(
          'module' => 'views',
          'delta' => '2b3acf5844aef9bdb37a05bc773d9660',
          'region' => 'top_carousel',
          'weight' => '-10',
        ),
        'views-kada_event_list-hobby_grid' => array(
          'module' => 'views',
          'delta' => 'kada_event_list-hobby_grid',
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
        'views-e2b74bbc24740379f9f28979bd0d8a5f' => array(
          'module' => 'views',
          'delta' => 'e2b74bbc24740379f9f28979bd0d8a5f',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-6a8ac8b4141c6664f393f1da668139e7' => array(
          'module' => 'views',
          'delta' => '6a8ac8b4141c6664f393f1da668139e7',
          'region' => 'top_carousel',
          'weight' => '-9',
        ),
        'views-kada_event_list-hobby_grid_ru' => array(
          'module' => 'views',
          'delta' => 'kada_event_list-hobby_grid_ru',
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
        'views-e2b74bbc24740379f9f28979bd0d8a5f' => array(
          'module' => 'views',
          'delta' => 'e2b74bbc24740379f9f28979bd0d8a5f',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-5c137c0ff008956a166e78a126416ec5' => array(
          'module' => 'views',
          'delta' => '5c137c0ff008956a166e78a126416ec5',
          'region' => 'top_carousel',
          'weight' => '-9',
        ),
        'views-kada_event_list-hobby_grid_sv' => array(
          'module' => 'views',
          'delta' => 'kada_event_list-hobby_grid_sv',
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
