<?php
/**
 * @file
 * pori_front_page_liftups.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function pori_front_page_liftups_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: context
  $overrides["context.front_page.conditions|context"] = array(
    'values' => array(
      '~visitpori_domain' => '~visitpori_domain',
    ),
  );
  $overrides["context.front_page.reactions|block|blocks|kada_news_feature-news_archive_link"] = array(
    'module' => 'kada_news_feature',
    'delta' => 'news_archive_link',
    'region' => 'before_content',
    'weight' => -8,
  );
  $overrides["context.front_page.reactions|block|blocks|quicktabs-feed_tabs_frontpage_promoted_con"] = array(
    'module' => 'quicktabs',
    'delta' => 'feed_tabs_frontpage_promoted_con',
    'region' => 'before_content',
    'weight' => -9,
  );
  $overrides["context.front_page.reactions|block|blocks|views-kada_news-block_1"] = array(
    'module' => 'views',
    'delta' => 'kada_news-block_1',
    'region' => 'highlighted',
    'weight' => -10,
  );
  $overrides["context.front_page.reactions|block|blocks|views-kada_news-front_block"]["DELETED"] = TRUE;
  $overrides["context.front_page.reactions|block|blocks|views-kada_project_liftups-block_1"] = array(
    'module' => 'views',
    'delta' => 'kada_project_liftups-block_1',
    'region' => 'before_footer',
    'weight' => -10,
  );
  $overrides["context.front_page.reactions|block|blocks|views-kada_recommended-block"]["DELETED"] = TRUE;
  $overrides["context.front_page.reactions|block|blocks|views-kada_recommended-block_1"] = array(
    'module' => 'views',
    'delta' => 'kada_recommended-block_1',
    'region' => 'header',
    'weight' => -8,
  );
  $overrides["context.front_page.reactions|block|blocks|views-kada_top_carousel-block_1"] = array(
    'module' => 'views',
    'delta' => 'kada_top_carousel-block_1',
    'region' => 'header',
    'weight' => -10,
  );

  // Exported overrides for: quicktabs
  $overrides["quicktabs.feed_tabs.ajax"] = 1;
  $overrides["quicktabs.feed_tabs.renderer"] = 'ui_tabs';

 return $overrides;
}
