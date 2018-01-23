<?php

/**
 * @file
 * Person card layout template.
 */
?>
<?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
<?php endif; ?>

<div class="person-card">
  <div class="person-card__inner">
    <?php print $main_content; ?>
  </div>
</div>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
