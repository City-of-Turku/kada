<?php

/**
 * @file field--field-liftup-main-link.tpl.php
 * Template for liftup main link field.
 */
?>
<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php foreach ($items as $delta => $item): ?>
    <h2 class="liftup-2x4__title <?php print $delta % 2 ? 'odd' : 'even'; ?>"<?php print $item_attributes[$delta]; ?>><?php print render($item); ?></h2>
  <?php endforeach; ?>
</div>
