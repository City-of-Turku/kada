<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
// Store amount of news already shown.
$news_shown = 0;
// Get news nids to be matched.
$news_nids = drupal_static('current_news_nids');
if (!is_array($news_nids)) {
  $news_nids = array();
}
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <?php
    // Skip the ones already shown in the main news.
    if (isset($GLOBALS['main_news_nids']) && in_array($view->result[$id]->nid, $GLOBALS['main_news_nids'])) {
      continue;
    }
    // Check if current row is a news item.
    if (in_array($view->result[$id]->nid, $news_nids)) {
      // If we have already shown 4, skip this one.
      if ($news_shown == 4) {
        continue;
      }
      $news_shown++;
    }
  ?>
  <?php print $row; ?>
<?php endforeach; ?>
