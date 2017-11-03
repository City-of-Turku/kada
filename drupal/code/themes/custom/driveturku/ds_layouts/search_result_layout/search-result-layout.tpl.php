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
 */

?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes;?>">

  <?php if(!empty($main)): ?>
    <<?php print $main_wrapper; ?> class="search-result__main <?php print $main_classes; ?>">
      <?php print $main; ?>
    </<?php print $main_wrapper; ?>>
  <?php endif; ?>

  <?php if(!empty($media)): ?>
    <<?php print $media_wrapper; ?> class="search-result__media <?php print $media_classes; ?>">
      <?php print $media; ?>
    </<?php print $media_wrapper; ?>>
  <?php endif; ?>

</<?php print $layout_wrapper; ?>>
