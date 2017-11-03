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

$liftup_width = $field_liftup_width[LANGUAGE_NONE][0]['value'];
if (!$liftup_width) {
  $liftup_width = 2;
}

?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="main-liftup-box main-liftup-box-<?php print $liftup_width; ?> <?php print $classes;?> clearfix">

  <?php /* Needed to activate contextual links */ ?>
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <?php if(!empty($media)): ?>
    <<?php print $media_wrapper; ?> class="main-liftup-box__media<?php print $media_classes; ?>">
      <?php if (isset($liftup_link_url)): ?>
        <a href="<?php print $liftup_link_url; ?>">
      <?php endif; ?>

      <?php print $media; ?>

      <?php if (isset($liftup_link_url)): ?>
        </a>
      <?php endif; ?>
    </<?php print $media_wrapper; ?>>
  <?php endif; ?>

  <<?php print $main_wrapper; ?> class="main-liftup-box__content<?php print $main_classes; ?>">
    <?php print $main; ?>
  </<?php print $main_wrapper; ?>>

</<?php print $layout_wrapper ?>>

<?php /*  Needed to activate display suite support on forms */ ?>
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
