<?php
/**
 * @file
 * Display Suite Grid item layout template.
 *
 * Available variables:
 *
 * Layout:
 * - $classes: String of classes that can be used to style this layout.
 * - $contextual_links: Renderable array of contextual links.
 * - $layout_wrapper: wrapper surrounding the layout.
 *
 * Regions:
 *
 * - $image: Rendered content for the "Image" region.
 * - $main: Rendered content for the "Main" region.
 *
 * Custom:
 *
 * - Layout does not use wrapper for region as it's not needed
 * 
 */
?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="grid-item <?php print $classes;?>">
  <div class="grid-item__image">
    <?php print $image; ?>
  </div>
  <div class="grid-item__content">
    <div class="grid-item__content--top">

      <?php if (isset($title_suffix['contextual_links'])): ?>
        <?php print render($title_suffix['contextual_links']); ?>
      <?php endif; ?>

      <?php print $content_top; ?>

    </div>
    <div class="grid-item__content--bottom">

      <?php print $content_bottom; ?>

    </div>
  </div>
</<?php print $layout_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
