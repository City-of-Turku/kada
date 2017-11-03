<?php

/**
 * @file
 * Turku dual column template.
 */
?>

<?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
<?php endif; ?>

<div class="l-content__wrapper node<?php if($left_content && $right_content):?> l-content__two-columns<?php endif;?>">

  <?php if($left_content):?>
    <div class="l-content__column--left">
      <?php print $left_content; ?>
    </div>
  <?php endif;?>

  <?php if($right_content):?>
    <div class="l-content__column--right info-box">
      <div class="info-box__content info-box__field-container">
        <?php print $right_content; ?>
      </div>
    </div>
  <?php endif;?>

</div>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children; ?>
<?php endif; ?>
