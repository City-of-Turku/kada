<?php

/**
 * @file
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
?>
<div class="l-search-wrapper <?php print $classes; ?>">
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <?php print $title; ?>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <?php if ($header): ?>
    <div class="view-header">
      <?php print $header; ?>
    </div>
  <?php endif; ?>

  <?php if ($exposed): ?>
    <div class="view-filters">
      <?php print $exposed; ?>
      <div class="toolbar">
        <ul>
          <li class="toolbar-dropdown is-collapsed" data-target='.date-select'>
            <span class="toolbar-text"><?php print t('Searching from'); ?></span>
            <a href="javascript:;"><span class="toolbar-item date-from"><?php print t('All time'); ?></span></a>
            <span class="toolbar-text date-separator element-invisible"><?php print t('to'); ?></span>
            <a href="javascript:;" class="date-to-wrapper element-invisible"><span class="toolbar-item date-to"></span></a>
          </li>
          <li class="toolbar-dropdown is-collapsed" data-target='.district-select'>
            <span class="toolbar-text"><?php print t('in'); ?></span>
            <a href="javascript:;"><span class="toolbar-item"><?php print t('Everywhere'); ?></span></a>
          </li>
          <li class="toolbar-dropdown is-collapsed" data-target='.theme-select'>
            <span class="toolbar-text"><?php print t('about'); ?></span>
            <a href="javascript:;"><span class="toolbar-item"><?php print t('All themes'); ?></span></a>
          </li>
          <li class="toolbar-dropdown is-collapsed" data-target='.audience-select'>
            <span class="toolbar-text"><?php print t('for'); ?></span>
            <a href="javascript:;"><span class="toolbar-item"><?php print t('All audiences'); ?></span></a>
          </li>
        </ul>
      </div>
      <div id="dropdown-content" class="dropdown-content-wrapper">
        <div class="dropdown-container search-intro is-expanded">
        </div>
        <div class="dropdown-container date-select">
          <div class="dropdown-col date-select-from">
            <ul>
              <li class="dropdown-header"><?php print t('From date'); ?></li>
              <li><a class="date-filter filter" href="javascript:;" data-unit="all"><?php print t('All time'); ?></a></li>
              <li><a class="date-filter filter" href="javascript:;" data-unit="days"><?php print t('A day ago'); ?></a></li>
              <li><a class="date-filter filter" href="javascript:;" data-unit="weeks"><?php print t('A week ago'); ?></a></li>
              <li><a class="date-filter filter" href="javascript:;" data-unit="months"><?php print t('A month ago'); ?></a></li>
              <li><a class="date-filter filter" href="javascript:;" data-unit="years"><?php print t('A year ago'); ?></a></li>
            </ul>
          </div>
          <div class="dropdown-col date-select-to">
            <ul>
              <li class="dropdown-header"><?php print t('To date'); ?></li>
              <li><a class="date-filter filter" href="javascript:;" data-unit="now"><?php print t('Now'); ?></a></li>
              <li><a class="date-filter filter" href="javascript:;" data-unit="days"><?php print t('A day ago'); ?></a></li>
              <li><a class="date-filter filter" href="javascript:;" data-unit="weeks"><?php print t('A week ago'); ?></a></li>
              <li><a class="date-filter filter" href="javascript:;" data-unit="months"><?php print t('A month ago'); ?></a></li>
              <li><a class="date-filter filter" href="javascript:;" data-unit="years"><?php print t('A year ago'); ?></a></li>
            </ul>
          </div>
        </div>
        <div class="dropdown-container district-select" data-selects="district">
          <div class="dropdown-col">
            <ul>
              <li class="dropdown-header"><?php print t('Search by location'); ?></li>
              <li><a href="javascript:;" class="filter selects-all-districts" data-select="all"><?php print t('Everywhere'); ?></a></li>
              <li><a href="javascript:;" class="filter" data-select="near"><?php print t('Nearest to you'); ?></a></li>
            </ul>
            <ul id="nearby-districts" class="element-invisible">
              <li class="dropdown-header"><?php print t('Nearby areas'); ?></li>
            </ul>
          </div>
          <div class="dropdown-col">
            <ul id="all-districts">
              <li class="dropdown-header"><?php print t('All city areas'); ?></li>
              <li class="template"><a class="filter exclusive" href="javascript:;"></a></li>
            </ul>
          </div>
        </div>
        <div class="dropdown-container theme-select" data-selects="theme">
          <div class="dropdown-col">
            <ul>
              <li class="dropdown-header"><?php print t('Select theme'); ?></li>
              <li><a href="javascript:;" class="filter selects-all-themes" data-select="all"><?php print t('All themes'); ?></a></li>
              <li class="template"><a href="javascript:;" class="filter"></a></li>
            </ul>
          </div>
        </div>
        <div class="dropdown-container audience-select" data-selects="audience">
          <div class="dropdown-col">
            <ul>
              <li class="dropdown-header"><?php print t('Select audience'); ?></li>
              <li><a href="javascript:;" class="filter selects-all-audiences" data-select="all"><?php print t('All audiences'); ?></a></li>
              <li class="template"><a href="javascript:;" class="filter"></a></li>
            </ul>
          </div>
        </div>
      </div>
    </div>
  <?php endif; ?>

  <?php if ($attachment_before): ?>
    <div class="attachment attachment-before">
      <?php print $attachment_before; ?>
    </div>
  <?php endif; ?>

  <?php if ($rows): ?>
    <div class="view-content">
      <?php print $rows; ?>
    </div>
  <?php elseif ($empty): ?>
    <div class="view-empty">
      <?php print $empty; ?>
    </div>
  <?php endif; ?>

  <?php if ($pager): ?>
    <?php print $pager; ?>
  <?php endif; ?>

  <?php if ($attachment_after): ?>
    <div class="attachment attachment-after">
      <?php print $attachment_after; ?>
    </div>
  <?php endif; ?>

  <?php if ($more): ?>
    <?php print $more; ?>
  <?php endif; ?>

  <?php if ($footer): ?>
    <div class="view-footer">
      <?php print $footer; ?>
    </div>
  <?php endif; ?>

  <?php if ($feed_icon): ?>
    <div class="feed-icon">
      <?php print $feed_icon; ?>
    </div>
  <?php endif; ?>

</div><?php /* class view */ ?>
