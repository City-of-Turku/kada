<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
//var_dump($fields);
?>
<div class="search-result--container">
  <div class="search-result__information">
    <?php print $fields['created']->content; ?>
    <span class="search-result__information__divider">|</span>
    <?php print $fields['type']->content; ?>
  </div>
  <h3 class="search-result__title"><?php print $fields['title']->content; ?></h3>
  <div class="search-result__content">
    <?php if (!empty($fields['field_lead_paragraph_et'])): ?>
      <?php print $fields['field_lead_paragraph_et']->content; ?>
    <?php endif; ?>
  </div>
</div>
