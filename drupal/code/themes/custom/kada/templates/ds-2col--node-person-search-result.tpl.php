<?php

/**
 * @file
 * Display Suite 2 column template.
 */
?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="person-map-item <?php print $classes;?>">

<?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
<?php endif; ?>

<<?php print $left_wrapper ?> class="person__image--wrapper <?php print $left_classes; ?>">
<?php print $left; ?>
</<?php print $left_wrapper ?>>

<<?php print $right_wrapper ?> class="person__content--wrapper <?php print $right_classes; ?>">
<div class="event-map-item__details">
  <?php print $right; ?>
</div>
</<?php print $right_wrapper ?>>

</<?php print $layout_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
