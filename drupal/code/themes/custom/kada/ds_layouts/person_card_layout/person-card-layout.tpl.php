<?php

/**
 * @file
 * Person card layout template.
 */

if (!empty($field_person_image)) {
  $has_image = true;
}
?>
<?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
<?php endif; ?>

<div class="person-card">
  <div class="person-card__inner<?php if (!empty($field_person_image )): ?> person-card__inner--has-image<?php endif; ?>">
    <?php print $main_content; ?>
  </div>
</div>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
