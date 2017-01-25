<?php
/**
 * @file
 * tkufi_blog_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tkufi_blog_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_page';
  $context->description = 'Context for main blog page';
  $context->tag = 'Blog';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-driveturku_pages-top_image' => array(
          'module' => 'views',
          'delta' => 'driveturku_pages-top_image',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-blog_posts-block' => array(
          'module' => 'views',
          'delta' => 'blog_posts-block',
          'region' => 'content',
          'weight' => '10',
        ),
        'views-572995f0239440197dacd182e3ad2ff5' => array(
          'module' => 'views',
          'delta' => '572995f0239440197dacd182e3ad2ff5',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blog');
  t('Context for main blog page');
  $export['blog_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_post';
  $context->description = 'Single blog post';
  $context->tag = 'Blog';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog_post' => 'blog_post',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-34c2f5f2b05884a593ae487ce4d038e7' => array(
          'module' => 'views',
          'delta' => '34c2f5f2b05884a593ae487ce4d038e7',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-00bbe9081a0cfc77a0e723be88aba8d3' => array(
          'module' => 'views',
          'delta' => '00bbe9081a0cfc77a0e723be88aba8d3',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blog');
  t('Single blog post');
  $export['blog_post'] = $context;

  return $export;
}
