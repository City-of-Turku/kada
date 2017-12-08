<?php

/**
 * @file
 * Page layout template
 */

if (!empty($sidebar || $additional_information)) {
  $additional_classes="attraction";
}
?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes;?> <?php print $additional_classes;?>">

<?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
<?php endif; ?>

<?php if (!empty($image_container)): ?>
  <<?php print $image_container_wrapper ?> class="attraction__image-container <?php print $image_container_classes; ?>">
  <?php print $image_container; ?>
  </<?php print $image_container_wrapper ?>>
<?php endif; ?>

<<?php print $main_content_wrapper ?> class="attraction__content <?php print $main_content_classes; ?>">
<?php print $main_content; ?>
</<?php print $main_content_wrapper ?>>

<?php if (!empty($sidebar || $contact_details)): ?>
  <<?php print $sidebar_wrapper ?> class="attraction__sidebar <?php print $sidebar_classes; ?>">
  <?php print $sidebar; ?>
  <?php if (!empty($contact_details)): ?>
    <div class="page__contact_details">
      <h3 class="page__contact_details__header"><?php print t('Contact details') . ':'; ?></h3>
      <?php print $contact_details ?>
    </div>
  <?php endif; ?>
  </<?php print $sidebar_wrapper ?>>
<?php endif; ?>

</<?php print $layout_wrapper ?>>

<?php if (!empty($after_content)): ?>
  <<?php print $after_content_wrapper ?> class="attraction__after-content <?php print $after_content_classes; ?>">
  <?php print $after_content; ?>
  </<?php print $after_content_wrapper ?>>
<?php endif; ?>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
