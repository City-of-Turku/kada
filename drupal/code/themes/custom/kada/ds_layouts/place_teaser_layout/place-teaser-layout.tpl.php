<?php

/**
 * @file
 * Place teaser layout template
 */

?>
<div class="place--teaser">

  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <?php if (!empty($header)): ?>
    <div class="place__header <?php print $header_classes; ?>">
      <?php print $header; ?>
    </div>
  <?php endif; ?>

  <div class="place__content <?php print $main_content_classes; ?>">
    <?php print $main_content; ?>
  </div>

</div>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
