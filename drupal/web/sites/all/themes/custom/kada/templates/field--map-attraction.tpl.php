<?php

/**
 * @file field--map-attraction.tpl.php
 * Template for attraction map field.
 */
?>
<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="field__items attraction-map__content"<?php print $content_attributes; ?>>
    <?php foreach ($items as $delta => $item): ?>
      <div class="field__item <?php print $delta % 2 ? 'odd' : 'even'; ?>"<?php print $item_attributes[$delta]; ?>><?php print render($item); ?></div>
    <?php endforeach; ?>
  </div>
</div>
