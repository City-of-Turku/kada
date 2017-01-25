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
    <?php

      $add_classes = array('');

      $original_url = isset($row_group['ss_tkufi_translated_url']) ? $row_group['ss_tkufi_translated_url'] : '';

      if (!empty($row_group['#attributes']['class']['theme'])) {
        array_push($add_classes, $row_group['#attributes']['class']['theme']);
      }
      if (!empty($row_group['#attributes']['class']['event'])) {
        array_push($add_classes, $row_group['#attributes']['class']['event']);
      }

    ?>

    <div class="search-result search-result--<?php print $row_group['ss_type']; ?><?php print join(' ', $add_classes); ?>">
      <div class="search-result__attachment"></div>
      <div class="search-result__content">
        <?php if (!empty($row_group['tm_title'])): ?>
          <div class="search-result__title">
            <?php print l(strip_tags($row_group['tm_title'][0]), $original_url); ?>
          </div>
        <?php elseif (!empty($row_group['ss_title'])): ?>
          <div class="search-result__title">
            <?php print l(strip_tags($row_group['ss_title']), $original_url); ?>
          </div>
        <?php elseif (!empty($row_group['ss_title_field'])): ?>
          <div class="search-result__title">
            <?php print l(strip_tags($row_group['ss_title_field']), $original_url); ?>
          </div>
        <?php endif; ?>

        <?php if (!empty($row_group['ss_tkufi_rendered_entity'])): ?>
          <div class="search-result__body">
            <?php print $row_group['ss_tkufi_rendered_entity']; ?>
          </div>
        <?php else: ?>
          <div class="search-result__body">
            <?php if (!empty($row_group['search_api_excerpt'])): ?>
              <?php print $row_group['search_api_excerpt']; ?>
            <?php elseif (!empty($row_group['tm_body$value'])): ?>
              <?php print $row_group['tm_body$value'][0]; ?>
            <?php endif; ?>
          </div>
        <?php endif; ?>

      </div>
    </div>

  <?php endif; ?>
<?php endforeach; ?>
