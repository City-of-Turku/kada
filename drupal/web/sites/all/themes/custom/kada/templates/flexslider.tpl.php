<?php
/**
 * @file
 * Default output for a FlexSlider object.
 */
?>
<div <?php print drupal_attributes($settings['attributes'])?>>
  <?php print theme('flexslider_list', array('items' => $items, 'settings' => $settings)); ?>

  <div class="flex-control-wrapper container flexslider__container">
    <div class="flexslider__controls flex-controls"></div>
  </div>
</div>
