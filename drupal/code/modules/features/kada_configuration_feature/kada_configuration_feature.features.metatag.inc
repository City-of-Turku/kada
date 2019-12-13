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
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '',
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
      'robots' => array(
        'value' => array(
          'index' => 0,
          'follow' => 0,
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
      'news_keywords' => array(
        'value' => '',
      ),
      'standout' => array(
        'value' => '',
      ),
      'rating' => array(
        'value' => '',
      ),
      'referrer' => array(
        'value' => '',
      ),
      'generator' => array(
        'value' => 'Drupal 7 (http://drupal.org)',
      ),
      'rights' => array(
        'value' => '',
      ),
      'image_src' => array(
        'value' => '',
      ),
      'canonical' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'set_cookie' => array(
        'value' => '',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
      ),
      'original-source' => array(
        'value' => '',
      ),
      'prev' => array(
        'value' => '',
      ),
      'next' => array(
        'value' => '',
      ),
      'content-language' => array(
        'value' => '',
      ),
      'geo.position' => array(
        'value' => '',
      ),
      'geo.placename' => array(
        'value' => '',
      ),
      'geo.region' => array(
        'value' => '',
      ),
      'icbm' => array(
        'value' => '',
      ),
      'refresh' => array(
        'value' => '',
      ),
      'revisit-after' => array(
        'value' => '',
        'period' => '',
      ),
      'pragma' => array(
        'value' => '',
      ),
      'cache-control' => array(
        'value' => '',
      ),
      'expires' => array(
        'value' => '',
      ),
      'dcterms.title' => array(
        'value' => '[current-page:title]',
      ),
      'dcterms.creator' => array(
        'value' => '',
      ),
      'dcterms.subject' => array(
        'value' => '',
      ),
      'dcterms.description' => array(
        'value' => '',
      ),
      'dcterms.publisher' => array(
        'value' => '',
      ),
      'dcterms.contributor' => array(
        'value' => '',
      ),
      'dcterms.date' => array(
        'value' => '',
      ),
      'dcterms.type' => array(
        'value' => 'Text',
      ),
      'dcterms.format' => array(
        'value' => 'text/html',
      ),
      'dcterms.identifier' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'dcterms.source' => array(
        'value' => '',
      ),
      'dcterms.language' => array(
        'value' => '',
      ),
      'dcterms.relation' => array(
        'value' => '',
      ),
      'dcterms.coverage' => array(
        'value' => '',
      ),
      'dcterms.rights' => array(
        'value' => '',
      ),
      'fb:admins' => array(
        'value' => '',
      ),
      'fb:app_id' => array(
        'value' => '',
      ),
      'fb:pages' => array(
        'value' => '',
      ),
      'itemtype' => array(
        'value' => '',
      ),
      'itemprop:name' => array(
        'value' => '[current-page:title]',
      ),
      'itemprop:description' => array(
        'value' => '',
      ),
      'itemprop:image' => array(
        'value' => '',
      ),
      'author' => array(
        'value' => '',
      ),
      'publisher' => array(
        'value' => '',
      ),
      'og:site_name' => array(
        'value' => '[site:name]',
      ),
      'og:type' => array(
        'value' => 'article',
      ),
      'og:url' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'og:title' => array(
        'value' => '[current-page:title]',
      ),
      'og:determiner' => array(
        'value' => '',
      ),
      'og:description' => array(
        'value' => '',
      ),
      'og:updated_time' => array(
        'value' => '',
      ),
      'og:see_also' => array(
        'value' => '',
      ),
      'og:image' => array(
        'value' => '',
      ),
      'og:image:url' => array(
        'value' => '',
      ),
      'og:image:secure_url' => array(
        'value' => '',
      ),
      'og:image:type' => array(
        'value' => '',
      ),
      'og:image:width' => array(
        'value' => '',
      ),
      'og:image:height' => array(
        'value' => '',
      ),
      'og:latitude' => array(
        'value' => '',
      ),
      'og:longitude' => array(
        'value' => '',
      ),
      'og:street_address' => array(
        'value' => '',
      ),
      'og:locality' => array(
        'value' => '',
      ),
      'og:region' => array(
        'value' => '',
      ),
      'og:postal_code' => array(
        'value' => '',
      ),
      'og:country_name' => array(
        'value' => '',
      ),
      'og:email' => array(
        'value' => '',
      ),
      'og:phone_number' => array(
        'value' => '',
      ),
      'og:fax_number' => array(
        'value' => '',
      ),
      'og:locale' => array(
        'value' => '',
      ),
      'og:locale:alternate' => array(
        'value' => '',
      ),
      'article:author' => array(
        'value' => '',
      ),
      'article:publisher' => array(
        'value' => '',
      ),
      'article:section' => array(
        'value' => '',
      ),
      'article:tag' => array(
        'value' => '',
      ),
      'article:published_time' => array(
        'value' => '',
      ),
      'article:modified_time' => array(
        'value' => '',
      ),
      'article:expiration_time' => array(
        'value' => '',
      ),
      'profile:first_name' => array(
        'value' => '',
      ),
      'profile:last_name' => array(
        'value' => '',
      ),
      'profile:username' => array(
        'value' => '',
      ),
      'profile:gender' => array(
        'value' => '',
      ),
      'og:audio' => array(
        'value' => '',
      ),
      'og:audio:secure_url' => array(
        'value' => '',
      ),
      'og:audio:type' => array(
        'value' => '',
      ),
      'book:author' => array(
        'value' => '',
      ),
      'book:isbn' => array(
        'value' => '',
      ),
      'book:release_date' => array(
        'value' => '',
      ),
      'book:tag' => array(
        'value' => '',
      ),
      'og:video:url' => array(
        'value' => '',
      ),
      'og:video:secure_url' => array(
        'value' => '',
      ),
      'og:video:width' => array(
        'value' => '',
      ),
      'og:video:height' => array(
        'value' => '',
      ),
      'og:video:type' => array(
        'value' => '',
      ),
      'video:actor' => array(
        'value' => '',
      ),
      'video:actor:role' => array(
        'value' => '',
      ),
      'video:director' => array(
        'value' => '',
      ),
      'video:writer' => array(
        'value' => '',
      ),
      'video:duration' => array(
        'value' => '',
      ),
      'video:release_date' => array(
        'value' => '',
      ),
      'video:tag' => array(
        'value' => '',
      ),
      'video:series' => array(
        'value' => '',
      ),
      'twitter:card' => array(
        'value' => 'summary',
      ),
      'twitter:site' => array(
        'value' => '',
      ),
      'twitter:site:id' => array(
        'value' => '',
      ),
      'twitter:creator' => array(
        'value' => '',
      ),
      'twitter:creator:id' => array(
        'value' => '',
      ),
      'twitter:url' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'twitter:title' => array(
        'value' => '[current-page:title]',
      ),
      'twitter:description' => array(
        'value' => '',
      ),
      'twitter:dnt' => array(
        'value' => '',
      ),
      'twitter:image' => array(
        'value' => '',
      ),
      'twitter:image:width' => array(
        'value' => '',
      ),
      'twitter:image:height' => array(
        'value' => '',
      ),
      'twitter:image:alt' => array(
        'value' => '',
      ),
      'twitter:image0' => array(
        'value' => '',
      ),
      'twitter:image1' => array(
        'value' => '',
      ),
      'twitter:image2' => array(
        'value' => '',
      ),
      'twitter:image3' => array(
        'value' => '',
      ),
      'twitter:player' => array(
        'value' => '',
      ),
      'twitter:player:width' => array(
        'value' => '',
      ),
      'twitter:player:height' => array(
        'value' => '',
      ),
      'twitter:player:stream' => array(
        'value' => '',
      ),
      'twitter:player:stream:content_type' => array(
        'value' => '',
      ),
      'twitter:app:country' => array(
        'value' => '',
      ),
      'twitter:app:name:iphone' => array(
        'value' => '',
      ),
      'twitter:app:id:iphone' => array(
        'value' => '',
      ),
      'twitter:app:url:iphone' => array(
        'value' => '',
      ),
      'twitter:app:name:ipad' => array(
        'value' => '',
      ),
      'twitter:app:id:ipad' => array(
        'value' => '',
      ),
      'twitter:app:url:ipad' => array(
        'value' => '',
      ),
      'twitter:app:name:googleplay' => array(
        'value' => '',
      ),
      'twitter:app:id:googleplay' => array(
        'value' => '',
      ),
      'twitter:app:url:googleplay' => array(
        'value' => '',
      ),
      'twitter:label1' => array(
        'value' => '',
      ),
      'twitter:data1' => array(
        'value' => '',
      ),
      'twitter:label2' => array(
        'value' => '',
      ),
      'twitter:data2' => array(
        'value' => '',
      ),
    ),
  );

  // Exported Metatag config instance: global:403.
  $config['global:403'] = array(
    'instance' => 'global:403',
    'disabled' => FALSE,
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
    'disabled' => FALSE,
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
    'disabled' => TRUE,
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
    'disabled' => FALSE,
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
      'twitter:image' => array(
        'value' => '[kada:metatag_image]',
      ),
    ),
  );

  // Exported Metatag config instance: node:blog.
  $config['node:blog'] = array(
    'instance' => 'node:blog',
    'disabled' => FALSE,
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
      'twitter:image' => array(
        'value' => '[kada:metatag_image]',
      ),
    ),
  );

  // Exported Metatag config instance: node:blog_post.
  $config['node:blog_post'] = array(
    'instance' => 'node:blog_post',
    'disabled' => FALSE,
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
      'twitter:image' => array(
        'value' => '[kada:metatag_image]',
      ),
    ),
  );

  // Exported Metatag config instance: node:event.
  $config['node:event'] = array(
    'instance' => 'node:event',
    'disabled' => FALSE,
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
      'twitter:image' => array(
        'value' => '[kada:metatag_image]',
      ),
    ),
  );

  // Exported Metatag config instance: node:landing_page.
  $config['node:landing_page'] = array(
    'instance' => 'node:landing_page',
    'disabled' => FALSE,
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
      'twitter:image' => array(
        'value' => '[kada:metatag_image]',
      ),
    ),
  );

  // Exported Metatag config instance: node:news_item.
  $config['node:news_item'] = array(
    'instance' => 'node:news_item',
    'disabled' => FALSE,
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
      'twitter:image' => array(
        'value' => '[kada:metatag_image]',
      ),
    ),
  );

  // Exported Metatag config instance: node:page.
  $config['node:page'] = array(
    'instance' => 'node:page',
    'disabled' => FALSE,
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
      'twitter:image' => array(
        'value' => '[kada:metatag_image]',
      ),
    ),
  );

  // Exported Metatag config instance: node:person.
  $config['node:person'] = array(
    'instance' => 'node:person',
    'disabled' => FALSE,
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
      'twitter:image' => array(
        'value' => '[kada:metatag_image]',
      ),
    ),
  );

  // Exported Metatag config instance: taxonomy_term.
  $config['taxonomy_term'] = array(
    'instance' => 'taxonomy_term',
    'disabled' => FALSE,
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
    'disabled' => FALSE,
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
