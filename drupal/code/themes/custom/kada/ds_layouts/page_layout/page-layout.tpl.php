<?php

/**
 * @file
 * Page layout template
 */
?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes;?>">

<?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
<?php endif; ?>

<<?php print $main_content_wrapper ?> class="page__content <?php print $main_content_classes; ?>">
<?php print $main_content; ?>
</<?php print $main_content_wrapper ?>>

<<?php print $sidebar_wrapper ?> class="page__sidebar <?php print $sidebar_classes; ?>">
<?php print $sidebar; ?>
</<?php print $sidebar_wrapper ?>>

</<?php print $layout_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
