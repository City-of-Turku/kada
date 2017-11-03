<?php
/**
 * @file
 * Display Suite Liftup layout template.
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
 * - $media: Rendered content for the "Media" region.
 * - $media_classes: String of classes that can be used to style the "Media" region.
 *
 * - $main: Rendered content for the "Main" region.
 * - $main_classes: String of classes that can be used to style the "Main" region.
 *
 * - $extra: Rendered content for the "Extra" region.
 * - $extra_classes: String of classes that can be used to style the "Extra" region.
 */
?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="liftup-box <?php print $classes;?>">
  <div class="liftup-box__inner">
    <!-- Needed to activate contextual links -->
    <?php if (isset($title_suffix['contextual_links'])): ?>
      <?php print render($title_suffix['contextual_links']); ?>
    <?php endif; ?>

    <?php if(!empty($header)): ?>
      <<?php print $header_wrapper; ?> class="liftup-box__header<?php print $header_classes; ?>">
        <?php if (isset($liftup_link_url)): ?>
          <a href="<?php print $liftup_link_url; ?>">
        <?php endif; ?>

        <?php print $header; ?>

        <?php if (isset($liftup_link_url)): ?>
          </a>
        <?php endif; ?>
      </<?php print $header_wrapper; ?>>
    <?php endif; ?>

    <<?php print $main_wrapper; ?> class="liftup-box__content<?php print $main_classes; ?>">
      <?php print $main; ?>
    </<?php print $main_wrapper; ?>>
  </div>

</<?php print $layout_wrapper ?>>

<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
