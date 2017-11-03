<?php
/**
 * Renders service tree. Calls itself on childs.
 */
?>
<ul class="service-tree">
  <?php foreach ($items as $item): ?>
  <li>
    <?php print $item['service']; ?>
    <?php if (isset($item['children'])): ?>
      <?php print render($item['children']); ?>
    <?php endif; ?>
  </li>
  <?php endforeach; ?>
</ul>
