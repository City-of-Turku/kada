<?php
/**
 * Renders Phone numbers.
 */
?>
<div class="phone-numbers">
  <?php foreach ($number_groups as $group_type => $items): ?>
    <div class="phone-number__wrapper">
      <h3 class="phone-number__title">
          <?php print ucfirst(t($group_type)); ?><?php print ':' ?>
      </h3>
      <?php foreach ($items as $item): ?>
        <div class="phone-number">
          <?php print $item['description']; ?>
          <?php print $item['formatted_number']; ?>
        </div>
      <?php endforeach; ?>
    </div>
  <?php endforeach; ?>
</div>
