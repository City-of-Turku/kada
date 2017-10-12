<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */

function _kada_news_front_block_space_on_row($content_row) {
  $space_per_row = 4;
  $width = 0;
  foreach ($content_row as $item) {
    $width += $item['width'];
  }
  return ($space_per_row - $width);
}

function _kada_news_front_block_add_item($content, $width, &$content_row, &$queue, $nid = NULL) {
  $space_on_row = _kada_news_front_block_space_on_row($content_row);

  // There's plenty of space for this!
  if ($space_on_row >= $width) {
    $content_row[] = array('width' => $width, 'content' => $content, 'nid' => $nid);
  }
  // We can't fit this here right now, let's put it to the queue
  else {
    $queue[] = array('width' => $width, 'content' => $content, 'nid' => $nid);
  }

  $space_on_row = _kada_news_front_block_space_on_row($content_row);

  return $space_on_row;
}

function _kada_news_front_block_check_queue(&$queue, &$content_row) {
  foreach ($queue as $i => $row) {
    _kada_news_front_block_add_item($row['content'], $row['width'], $content_row, $queue, $row['nid']);
    // The item was added again, either to queue or row, so let's remove the old one
    unset($queue[$i]);
  }
}

$smallest_width = 2;
$max_rows = 2;

$queue = array();
$content_rows = array(array());

?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php

$content_row = &$content_rows[0];

foreach ($rows as $id => $row) {
  $node = node_load($view->result[$id]->nid);
  $width = $node->field_liftup_width[LANGUAGE_NONE][0]['value'];

  // Add this to either the row or the queue
  $space_on_row = _kada_news_front_block_add_item($row, $width, $content_row, $queue, $node->nid);

  // We're full, start a new row
  if ($space_on_row == 0) {
    // All the rows are full, let's stop this.
    if (count($content_rows) >= $max_rows) {
      break;
    }

    $new_i = count($content_rows);
    $content_rows[$new_i] = array();
    $content_row = &$content_rows[$new_i];

    // We have more space now, so let's go through the queue!
    _kada_news_front_block_check_queue($queue, $content_row);
  }
}

// We still have rows to fill and queue to use
while (count($content_rows) < $max_rows && !empty($queue)) {
  // Create a new row
  $new_i = count($content_rows);
  $content_rows[$new_i] = array();
  $content_row = &$content_rows[$new_i];

  foreach ($queue as $id => $row) {
    // Add this either to the row or back to the queue
    $space_on_row = _kada_news_front_block_add_item($row['content'], $row['width'], $content_row, $queue, $row['nid']);
    // The item was added again, either to queue or row, so let's remove the old one
    unset($queue[$id]);

    // We're full, start a new row
    if ($space_on_row == 0) {
      // No more space, time to bail out (we'll continue with a new row
      // in the outer while loop if there's still room)
      break;
    }
  }
}

// We need to relay the information on shown nids to current view also.
$GLOBALS['main_news_nids'] = array();
foreach ($content_rows as $row) {
  print '<div class="main-liftup-row">';
  foreach ($row as $item) {
    $GLOBALS['main_news_nids'][] = $item['nid'];
    print $item['content'];
  }
  print '</div>';
}
