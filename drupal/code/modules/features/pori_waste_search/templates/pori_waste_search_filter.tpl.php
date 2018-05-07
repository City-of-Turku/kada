<div class="ws-wrapper">
  <?php if (count($items)): ?>

    <select data-placeholder="<?php print t('Search from waste search...');?>" multiple class="chosen-select">
      <option value=""></option>
      <?php foreach ($items as $delta => $item) : ?>
        <option value="<?php print $item['type'] . '|' . $item['tid']; ?>"><?php print $item['value']; ?></option>
      <?php endforeach; ?>
    </select>
  <?php endif; ?>
</div>
