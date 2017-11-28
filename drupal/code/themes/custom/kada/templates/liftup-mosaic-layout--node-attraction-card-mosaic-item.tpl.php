<?php

/**
 * @file
 * Turku Attraction card mosaic item.
 */
?>
<a href="<?php echo url('node/' . $nid); ?>">
  <?php if ($right_content_top): ?>
    <div class="attraction-card-mosaic__keyword">
      <?php print $right_content_top; ?>
    </div>
  <?php endif; ?>

  <div class="liftup-2x4__bottom ellipsis">
    <?php print $bottom_content; ?>
  </div>

  <?php if (!empty($drupal_render_children)): ?>
    <?php print $drupal_render_children; ?>
  <?php endif; ?>

  <div class="transparent-gradient__liftup"></div>
  <?php if ($top_content): ?>
    <?php print $top_content; ?>
  <?php endif; ?>
</a>
