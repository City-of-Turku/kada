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
global $language;
?>
<?php foreach ($row as $key => $row_group): ?>
  <?php if ($key == '_entity_properties'): ?>
    <div class="search-result search-result--<?php print $row_group['#attributes']['class']['page']; ?>
      theme-color-<?php print $row_group['#attributes']['class']['theme']; ?>">
      <div class="search-result__attachment"></div>
      <div class="search-result__content">
        <div class="search-result__media">
        </div>
        <div class="search-result__title">
          <?php print l($row_group['title'], 'node/' . $row_group['entity object']->nid); ?>
        </div>
        <div class="search-result__meta"></div>
        <div class="search-result__body">
          <?php if (!empty($row_group['search_api_excerpt'])): ?>
            <?php print $row_group['search_api_excerpt']; ?>
          <?php endif; ?>
        </div>
        <div class="search-result__breadcrumb">
        </div>
        <div class="search-result__tags">
          <?php if (!empty($row_group['field_keywords:name'])): ?>
            <span>
              <?php print $row_group['field_keywords:name']; ?>
            </span>
          <?php endif; ?>
        </div>
      </div>
    </div>
  <?php endif; ?>
<?php endforeach; ?>
