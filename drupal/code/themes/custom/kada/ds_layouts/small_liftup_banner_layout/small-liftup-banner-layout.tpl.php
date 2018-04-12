<?php
/**
 * @file
 * Display Suite Small liftup banner layout template.
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

$field_link_url = $field_link_to_content[0]['url'];

?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="small-liftup-banner__item <?php print $classes;?>">
  <!-- Needed to activate contextual links -->
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <?php if(!empty($main)): ?>
    <<?php print $main_wrapper; ?> class="small-liftup-banner__item__content <?php print $main_classes; ?>">
      <?php if (isset($field_link_url)): ?>
        <a href="<?php print $field_link_url; ?>" target="_blank">
          <?php print $main; ?>
        </a>
      <?php else: ?>
        <?php print $main; ?>
      <?php endif; ?>

    </<?php print $main_wrapper; ?>>
  <?php endif; ?>

</<?php print $layout_wrapper ?>>

<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
