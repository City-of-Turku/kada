<?php

/**
 * @file
 * Accessibility layout template
 */

if (!empty($field_class)){
  $additional_classes_array[] = $field_class['und'][0]['value'];
}

if (!empty($description)) {
  $additional_classes_array[] = 'accessibility__item--has-description';
}

$additional_classes = implode(" ", $additional_classes_array);
?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="accessibility__item accessibility__item--<?php print $additional_classes;?>">
    <?php print $main_content; ?>
</<?php print $layout_wrapper ?>>
