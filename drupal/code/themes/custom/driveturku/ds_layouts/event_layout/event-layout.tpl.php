<?php
/**
 * @file
 * Display Suite Event layout template.
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
<<?php print $layout_wrapper; print $layout_attributes; ?> class="event <?php print $classes;?>">
  <div class="event__image--wrapper">
    <div class="event__image">
      <?php print $image; ?>
    </div>
    <div class="event__image__content">
      <div class="event__image__content--top">

        <?php if (isset($title_suffix['contextual_links'])): ?>
          <?php print render($title_suffix['contextual_links']); ?>
        <?php endif; ?>

        <?php print $image_content_top; ?>

      </div>
      <div class="event__image__content--bottom">

        <?php print $image_content_bottom; ?>

      </div>
    </div>
  </div>
  <div class="event__content--top">
    <?php print $event_content_top; ?>
  </div>
  <div class="event__sidebar--top">
    <?php print $sidebar_content_top; ?>
  </div>
  <div class="event__content--bottom">
    <?php print $event_content_bottom; ?>
  </div>
  <div class="event__sidebar--bottom">
    <?php print $sidebar_content_bottom; ?>
  </div>
</<?php print $layout_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
