<?php

/**
 * @file
 * kada_blog_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function kada_blog_feature_context_default_contexts() {
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
        'views-kada_pages-top_image' => array(
          'module' => 'views',
          'delta' => 'kada_pages-top_image',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-blog_posts-block' => array(
          'module' => 'views',
          'delta' => 'blog_posts-block',
          'region' => 'content',
          'weight' => '10',
        ),
        'views-5ebc5b1ecdea9e3e5eaa6110ae155417' => array(
          'module' => 'views',
          'delta' => '5ebc5b1ecdea9e3e5eaa6110ae155417',
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
        'views-kada_blog_image-blog_image' => array(
          'module' => 'views',
          'delta' => 'kada_blog_image-blog_image',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-kada_posts_from_same_blog-block' => array(
          'module' => 'views',
          'delta' => 'kada_posts_from_same_blog-block',
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
