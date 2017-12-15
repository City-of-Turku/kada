<?php
/**
 * @file
 * kada_configuration_feature.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function kada_configuration_feature_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: global.
  $config['global'] = array(
    'instance' => 'global',
    'config' => array(
      'title' => array(
        'value' => '[current-page:title] | [site:name]',
      ),
      'generator' => array(
        'value' => 'Drupal 7 (http://drupal.org)',
      ),
      'canonical' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
      ),
      'dcterms.format' => array(
        'value' => 'text/html',
      ),
      'dcterms.identifier' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'dcterms.title' => array(
        'value' => '[current-page:title]',
      ),
      'dcterms.type' => array(
        'value' => 'Text',
      ),
      'itemprop:name' => array(
        'value' => '[current-page:title]',
      ),
      'og:site_name' => array(
        'value' => '[site:name]',
      ),
      'og:title' => array(
        'value' => '[current-page:title]',
      ),
      'og:type' => array(
        'value' => 'article',
      ),
      'og:url' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'twitter:card' => array(
        'value' => 'summary',
      ),
      'twitter:title' => array(
        'value' => '[current-page:title]',
      ),
      'twitter:url' => array(
        'value' => '[current-page:url:absolute]',
      ),
    ),
  );

  // Exported Metatag config instance: global:403.
  $config['global:403'] = array(
    'instance' => 'global:403',
    'config' => array(
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'dcterms.identifier' => array(
        'value' => '[site:url]',
      ),
      'dcterms.title' => array(
        'value' => '[site:name]',
      ),
      'itemprop:name' => array(
        'value' => '[current-page:title]',
      ),
      'og:title' => array(
        'value' => '[site:name]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
      'twitter:title' => array(
        'value' => '[site:name]',
      ),
      'twitter:url' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: global:404.
  $config['global:404'] = array(
    'instance' => 'global:404',
    'config' => array(
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'dcterms.identifier' => array(
        'value' => '[site:url]',
      ),
      'dcterms.title' => array(
        'value' => '[site:name]',
      ),
      'itemprop:name' => array(
        'value' => '[current-page:title]',
      ),
      'og:title' => array(
        'value' => '[site:name]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
      'twitter:title' => array(
        'value' => '[site:name]',
      ),
      'twitter:url' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: global:frontpage.
  $config['global:frontpage'] = array(
    'instance' => 'global:frontpage',
    'config' => array(
      'title' => array(
        'value' => '[site:name]',
      ),
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'dcterms.title' => array(
        'value' => '[site:name]',
      ),
      'dcterms.description' => array(
        'value' => '[site:slogan]',
      ),
      'dcterms.identifier' => array(
        'value' => '[site:url]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
      'og:title' => array(
        'value' => '[site:name]',
      ),
      'og:description' => array(
        'value' => '[site:slogan]',
      ),
      'twitter:url' => array(
        'value' => '[site:url]',
      ),
      'twitter:title' => array(
        'value' => '[site:name]',
      ),
      'twitter:description' => array(
        'value' => '[site:slogan]',
      ),
    ),
  );

  // Exported Metatag config instance: node.
  $config['node'] = array(
    'instance' => 'node',
    'config' => array(
      'title' => array(
        'value' => '[node:title] | [site:name]',
      ),
      'description' => array(
        'value' => '[kada:metatag_description]',
      ),
      'abstract' => array(
        'value' => '[kada:metatag_description]',
      ),
      'keywords' => array(
        'value' => '[kada:metatag_keywords]',
      ),
      'news_keywords' => array(
        'value' => '[kada:metatag_keywords]',
      ),
      'image_src' => array(
        'value' => '[kada:metatag_image]',
      ),
      'content-language' => array(
        'value' => '[node:language]',
      ),
      'dcterms.title' => array(
        'value' => '[node:title]',
      ),
      'dcterms.creator' => array(
        'value' => '[node:author]',
      ),
      'dcterms.subject' => array(
        'value' => '[kada:metatag_keywords]',
      ),
      'dcterms.description' => array(
        'value' => '[kada:metatag_description]',
      ),
      'dcterms.date' => array(
        'value' => '[node:created:custom:Y-m-d\\TH:iP]',
      ),
      'dcterms.modified' => array(
        'value' => '[node:changed:custom:Y-m-d\\TH:iP]',
      ),
      'dcterms.language' => array(
        'value' => '[node:language]',
      ),
      'itemtype' => array(
        'value' => 'Article',
      ),
      'itemprop:description' => array(
        'value' => '[kada:metatag_description]',
      ),
      'itemprop:image' => array(
        'value' => '[kada:metatag_image]',
      ),
      'og:title' => array(
        'value' => '[node:title]',
      ),
      'og:description' => array(
        'value' => '[kada:metatag_short_description]',
      ),
      'og:updated_time' => array(
        'value' => '[node:changed:custom:c]',
      ),
      'og:see_also' => array(
        'value' => '[kada:metatag_related]',
      ),
      'og:image' => array(
        'value' => '[kada:metatag_image]',
      ),
      'og:locality' => array(
        'value' => '[node:field-district]',
      ),
      'og:locale' => array(
        'value' => '[node:language]',
      ),
      'article:tag' => array(
        'value' => '[kada:metatag_keywords]',
      ),
      'article:published_time' => array(
        'value' => '[node:created:custom:c]',
      ),
      'article:modified_time' => array(
        'value' => '[node:changed:custom:c]',
      ),
      'twitter:title' => array(
        'value' => '[node:title]',
      ),
      'twitter:description' => array(
        'value' => '[kada:metatag_description]',
      ),
      'twitter:image:src' => array(
        'value' => '[kada:metatag_image]',
      ),
    ),
  );

  // Exported Metatag config instance: node:blog.
  $config['node:blog'] = array(
    'instance' => 'node:blog',
    'config' => array(
      'description' => array(
        'value' => '[kada:metatag_description]',
      ),
      'abstract' => array(
        'value' => '[kada:metatag_description]',
      ),
      'keywords' => array(
        'value' => '[kada:metatag_keywords]',
      ),
      'news_keywords' => array(
        'value' => '[kada:metatag_keywords]',
      ),
      'image_src' => array(
        'value' => '[kada:metatag_image]',
      ),
      'dcterms.subject' => array(
        'value' => '[kada:metatag_keywords]',
      ),
      'dcterms.description' => array(
        'value' => '[kada:metatag_short_description]',
      ),
      'itemprop:description' => array(
        'value' => '[kada:metatag_description]',
      ),
      'itemprop:image' => array(
        'value' => '',
      ),
      'og:type' => array(
        'value' => 'blog',
      ),
      'og:description' => array(
        'value' => '[kada:metatag_short_description]',
      ),
      'og:see_also' => array(
        'value' => '',
      ),
      'og:image' => array(
        'value' => '[kada:metatag_image]',
      ),
      'og:street_address' => array(
        'value' => '',
      ),
      'og:locality' => array(
        'value' => '',
      ),
      'article:tag' => array(
        'value' => '[node:field-blog-tags]',
      ),
      'twitter:description' => array(
        'value' => '[kada:metatag_description]',
      ),
      'twitter:image:src' => array(
        'value' => '[kada:metatag_image]',
      ),
    ),
  );

  // Exported Metatag config instance: node:blog_post.
  $config['node:blog_post'] = array(
    'instance' => 'node:blog_post',
    'config' => array(
      'description' => array(
        'value' => '[kada:metatag_description]',
      ),
      'abstract' => array(
        'value' => '[kada:metatag_description]',
      ),
      'keywords' => array(
        'value' => '[kada:metatag_keywords]',
      ),
      'news_keywords' => array(
        'value' => '[kada:metatag_keywords]',
      ),
      'image_src' => array(
        'value' => '[kada:metatag_image]',
      ),
      'dcterms.subject' => array(
        'value' => '[kada:metatag_keywords]',
      ),
      'dcterms.description' => array(
        'value' => '[kada:metatag_description]',
      ),
      'itemprop:description' => array(
        'value' => '[kada:metatag_description]',
      ),
      'itemprop:image' => array(
        'value' => '[kada:metatag_image]',
      ),
      'og:description' => array(
        'value' => '[kada:metatag_short_description]',
      ),
      'og:see_also' => array(
        'value' => '[kada:metatag_related]',
      ),
      'og:image' => array(
        'value' => '[kada:metatag_image]',
      ),
      'og:street_address' => array(
        'value' => '',
      ),
      'og:locality' => array(
        'value' => '',
      ),
      'article:tag' => array(
        'value' => '[kada:metatag_keywords]',
      ),
      'twitter:description' => array(
        'value' => '[kada:metatag_description]',
      ),
      'twitter:image:src' => array(
        'value' => '[kada:metatag_image]',
      ),
    ),
  );

  // Exported Metatag config instance: node:event.
  $config['node:event'] = array(
    'instance' => 'node:event',
    'config' => array(
      'description' => array(
        'value' => '[kada:metatag_description]',
      ),
      'abstract' => array(
        'value' => '[kada:metatag_description]',
      ),
      'keywords' => array(
        'value' => '[kada:metatag_keywords]',
      ),
      'news_keywords' => array(
        'value' => '[kada:metatag_keywords]',
      ),
      'image_src' => array(
        'value' => '[kada:metatag_image]',
      ),
      'dcterms.subject' => array(
        'value' => '[kada:metatag_keywords]',
      ),
      'dcterms.description' => array(
        'value' => '[kada:metatag_description]',
      ),
      'dcterms.type' => array(
        'value' => 'Event',
      ),
      'itemprop:description' => array(
        'value' => '[kada:metatag_description]',
      ),
      'itemprop:image' => array(
        'value' => '[kada:metatag_image]',
      ),
      'og:type' => array(
        'value' => 'activity',
      ),
      'og:description' => array(
        'value' => '[kada:metatag_short_description]',
      ),
      'og:see_also' => array(
        'value' => '[kada:metatag_related]',
      ),
      'og:image' => array(
        'value' => '[kada:metatag_image]',
      ),
      'og:latitude' => array(
        'value' => '[node:field-location:lat]',
      ),
      'og:longitude' => array(
        'value' => '[node:field-location:lon]',
      ),
      'og:region' => array(
        'value' => 'Turku',
      ),
      'og:country_name' => array(
        'value' => 'Finland',
      ),
      'og:email' => array(
        'value' => '[node:field-contact-email]',
      ),
      'og:phone_number' => array(
        'value' => '[node:field-contact-phone-number]',
      ),
      'twitter:description' => array(
        'value' => '[kada:metatag_description]',
      ),
      'twitter:image:src' => array(
        'value' => '[kada:metatag_image]',
      ),
    ),
  );

  // Exported Metatag config instance: node:landing_page.
  $config['node:landing_page'] = array(
    'instance' => 'node:landing_page',
    'config' => array(
      'description' => array(
        'value' => '[kada:metatag_description]',
      ),
      'abstract' => array(
        'value' => '[kada:metatag_description]',
      ),
      'keywords' => array(
        'value' => '[kada:metatag_keywords]',
      ),
      'news_keywords' => array(
        'value' => '[kada:metatag_keywords]',
      ),
      'image_src' => array(
        'value' => '[kada:metatag_image]',
      ),
      'dcterms.subject' => array(
        'value' => '[kada:metatag_keywords]',
      ),
      'dcterms.description' => array(
        'value' => '[kada:metatag_description]',
      ),
      'itemprop:description' => array(
        'value' => '[kada:metatag_description]',
      ),
      'itemprop:image' => array(
        'value' => '[kada:metatag_image]',
      ),
      'og:description' => array(
        'value' => '[kada:metatag_short_description]',
      ),
      'og:see_also' => array(
        'value' => '[kada:metatag_related]',
      ),
      'og:image' => array(
        'value' => '[kada:metatag_image]',
      ),
      'og:street_address' => array(
        'value' => '',
      ),
      'article:tag' => array(
        'value' => '[node:field-keywords]',
      ),
      'twitter:description' => array(
        'value' => '[kada:metatag_description]',
      ),
      'twitter:image:src' => array(
        'value' => '[kada:metatag_image]',
      ),
    ),
  );

  // Exported Metatag config instance: node:news_item.
  $config['node:news_item'] = array(
    'instance' => 'node:news_item',
    'config' => array(
      'description' => array(
        'value' => '[kada:metatag_description]',
      ),
      'abstract' => array(
        'value' => '[kada:metatag_description]',
      ),
      'keywords' => array(
        'value' => '[kada:metatag_keywords]',
      ),
      'news_keywords' => array(
        'value' => '[kada:metatag_keywords]',
      ),
      'image_src' => array(
        'value' => '[kada:metatag_image]',
      ),
      'dcterms.subject' => array(
        'value' => '[kada:metatag_keywords]',
      ),
      'dcterms.description' => array(
        'value' => '[kada:metatag_description]',
      ),
      'itemprop:description' => array(
        'value' => '[kada:metatag_description]',
      ),
      'itemprop:image' => array(
        'value' => '[kada:metatag_image]',
      ),
      'og:description' => array(
        'value' => '[kada:metatag_short_description]',
      ),
      'og:see_also' => array(
        'value' => '[kada:metatag_related]',
      ),
      'og:image' => array(
        'value' => '[kada:metatag_image]',
      ),
      'og:latitude' => array(
        'value' => '[node:field-location:lat]',
      ),
      'og:longitude' => array(
        'value' => '[node:field-location:lon]',
      ),
      'og:region' => array(
        'value' => 'Turku',
      ),
      'og:country_name' => array(
        'value' => 'Finland',
      ),
      'article:tag' => array(
        'value' => '[kada:metatag_keywords]',
      ),
      'twitter:description' => array(
        'value' => '[kada:metatag_description]',
      ),
      'twitter:image:src' => array(
        'value' => '[kada:metatag_image]',
      ),
    ),
  );

  // Exported Metatag config instance: node:page.
  $config['node:page'] = array(
    'instance' => 'node:page',
    'config' => array(
      'description' => array(
        'value' => '[kada:metatag_description]',
      ),
      'abstract' => array(
        'value' => '[kada:metatag_description]',
      ),
      'keywords' => array(
        'value' => '[kada:metatag_keywords]',
      ),
      'news_keywords' => array(
        'value' => '[kada:metatag_keywords]',
      ),
      'image_src' => array(
        'value' => '[kada:metatag_image]',
      ),
      'dcterms.subject' => array(
        'value' => '[kada:metatag_keywords]',
      ),
      'dcterms.description' => array(
        'value' => '[kada:metatag_description]',
      ),
      'itemprop:description' => array(
        'value' => '[kada:metatag_description]',
      ),
      'itemprop:image' => array(
        'value' => '[kada:metatag_image]',
      ),
      'og:description' => array(
        'value' => '[kada:metatag_short_description]',
      ),
      'og:see_also' => array(
        'value' => '[kada:metatag_related]',
      ),
      'og:image' => array(
        'value' => '[kada:metatag_image]',
      ),
      'og:street_address' => array(
        'value' => '',
      ),
      'article:tag' => array(
        'value' => '[kada:metatag_keywords]',
      ),
      'twitter:description' => array(
        'value' => '[kada:metatag_description]',
      ),
      'twitter:image:src' => array(
        'value' => '[kada:metatag_image]',
      ),
    ),
  );

  // Exported Metatag config instance: node:person.
  $config['node:person'] = array(
    'instance' => 'node:person',
    'config' => array(
      'title' => array(
        'value' => '[node:field-first-name] [node:field-surname] | [site:name]',
      ),
      'description' => array(
        'value' => '',
      ),
      'abstract' => array(
        'value' => '',
      ),
      'keywords' => array(
        'value' => '',
      ),
      'news_keywords' => array(
        'value' => '',
      ),
      'image_src' => array(
        'value' => '[kada:metatag_image]',
      ),
      'dcterms.subject' => array(
        'value' => '',
      ),
      'dcterms.description' => array(
        'value' => '',
      ),
      'itemprop:description' => array(
        'value' => '',
      ),
      'itemprop:image' => array(
        'value' => '[kada:metatag_image]',
      ),
      'og:description' => array(
        'value' => '',
      ),
      'og:see_also' => array(
        'value' => '',
      ),
      'og:image' => array(
        'value' => '[kada:metatag_image]',
      ),
      'og:street_address' => array(
        'value' => '[node:field-visiting-address]',
      ),
      'og:locality' => array(
        'value' => '[node:field-municipality]',
      ),
      'og:postal_code' => array(
        'value' => '[node:field-postal-code]',
      ),
      'article:tag' => array(
        'value' => '',
      ),
      'twitter:description' => array(
        'value' => '',
      ),
      'twitter:image:src' => array(
        'value' => '[kada:metatag_image]',
      ),
    ),
  );

  // Exported Metatag config instance: taxonomy_term.
  $config['taxonomy_term'] = array(
    'instance' => 'taxonomy_term',
    'config' => array(
      'title' => array(
        'value' => '[term:name] | [site:name]',
      ),
      'description' => array(
        'value' => '[term:description]',
      ),
      'dcterms.description' => array(
        'value' => '[term:description]',
      ),
      'dcterms.title' => array(
        'value' => '[term:name]',
      ),
      'itemprop:description' => array(
        'value' => '[term:description]',
      ),
      'itemprop:name' => array(
        'value' => '[term:name]',
      ),
      'og:description' => array(
        'value' => '[term:description]',
      ),
      'og:title' => array(
        'value' => '[term:name]',
      ),
      'twitter:description' => array(
        'value' => '[term:description]',
      ),
      'twitter:title' => array(
        'value' => '[term:name]',
      ),
    ),
  );

  // Exported Metatag config instance: view.
  $config['view'] = array(
    'instance' => 'view',
    'config' => array(
      'title' => array(
        'value' => '[view:title] | [site:name]',
      ),
      'description' => array(
        'value' => '[view:description]',
      ),
      'canonical' => array(
        'value' => '[view:url]',
      ),
    ),
  );

  return $config;
}
