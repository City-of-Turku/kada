<?php
/**
 * @file
 * kada_search_sarnia_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function kada_search_sarnia_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sarnia_search';
  $context->description = '';
  $context->tag = 'search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search' => 'search',
        'search/*' => 'search/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'facetapi-2AmdxOeSX0L5N16qTKENjaTbN0ySOZuv' => array(
          'module' => 'facetapi',
          'delta' => '2AmdxOeSX0L5N16qTKENjaTbN0ySOZuv',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-1YHXhyAe9rKVCiO0P7ylsfaockMgfL6A' => array(
          'module' => 'facetapi',
          'delta' => '1YHXhyAe9rKVCiO0P7ylsfaockMgfL6A',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-OuCL4ccSIk7lHpstP6zp1Vtxj1A1uEDX' => array(
          'module' => 'facetapi',
          'delta' => 'OuCL4ccSIk7lHpstP6zp1Vtxj1A1uEDX',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-xQRvOUXBEEVXc3KpSNceDfMoo00PGDgZ' => array(
          'module' => 'facetapi',
          'delta' => 'xQRvOUXBEEVXc3KpSNceDfMoo00PGDgZ',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-cMwsPXznsAZ7VDZZpoaIr9vsWZizbGQr' => array(
          'module' => 'facetapi',
          'delta' => 'cMwsPXznsAZ7VDZZpoaIr9vsWZizbGQr',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-bpnqf31FRfM0esndl5eXGgEDO7s0rWmH' => array(
          'module' => 'facetapi',
          'delta' => 'bpnqf31FRfM0esndl5eXGgEDO7s0rWmH',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-epXmZsYsgIG9bD71dFoJJ9oawhJuy0DO' => array(
          'module' => 'facetapi',
          'delta' => 'epXmZsYsgIG9bD71dFoJJ9oawhJuy0DO',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'facetapi-0t0SuUKYizFIfts1wXrfb6KqmIlp0M0M' => array(
          'module' => 'facetapi',
          'delta' => '0t0SuUKYizFIfts1wXrfb6KqmIlp0M0M',
          'region' => 'sidebar_first',
          'weight' => '-3',
        ),
        'facetapi-t84YRB8UFR7abmT4tr9D99hD3xtR48d7' => array(
          'module' => 'facetapi',
          'delta' => 't84YRB8UFR7abmT4tr9D99hD3xtR48d7',
          'region' => 'sidebar_first',
          'weight' => '-2',
        ),
        'facetapi-UpCC8TVrmAOs2e6sNmpTxPNZ5bzi1jH0' => array(
          'module' => 'facetapi',
          'delta' => 'UpCC8TVrmAOs2e6sNmpTxPNZ5bzi1jH0',
          'region' => 'sidebar_first',
          'weight' => '-1',
        ),
        'facetapi-cop7LpTV281IEUEE0NELoolZFPYyVt1z' => array(
          'module' => 'facetapi',
          'delta' => 'cop7LpTV281IEUEE0NELoolZFPYyVt1z',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
        'facetapi-4NAghk57O0P66Ye2hIHX2SJLyb6tQIGc' => array(
          'module' => 'facetapi',
          'delta' => '4NAghk57O0P66Ye2hIHX2SJLyb6tQIGc',
          'region' => 'sidebar_first',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('search');
  $export['sarnia_search'] = $context;

  return $export;
}
