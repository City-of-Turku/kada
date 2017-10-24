<?php
/**
 * @file
 * This template handles the layout of the views exposed filter form.
 *
 * Variables available:
 * - $widgets: An array of exposed form widgets. Each widget contains:
 * - $widget->label: The visible label to print. May be optional.
 * - $widget->operator: The operator for the widget. May be optional.
 * - $widget->widget: The widget itself.
 * - $sort_by: The select box to sort the view using an exposed form.
 * - $sort_order: The select box with the ASC, DESC options to define order. May be optional.
 * - $items_per_page: The select box with the available items per page. May be optional.
 * - $offset: A textfield to define the offset of the view. May be optional.
 * - $reset_button: A button to reset the exposed filter applied. May be optional.
 * - $button: The submit button for the form.
 *
 * @ingroup views_templates
 */
if (!function_exists('_kada_template_views_search_exposed_render')) {
  function _kada_template_views_search_exposed_render($widget) {
  ?>
    <div id="<?php print $widget->id; ?>-wrapper" class="views-exposed-widget <?php print $widget->id; ?> search-original-filter">
      <?php if (!empty($widget->label)): ?>
        <label for="<?php print $widget->id; ?>"><?php print $widget->label; ?></label>
      <?php endif; ?>
      <?php if (!empty($widget->operator)): ?>
        <div class="views-operator">
          <?php print $widget->operator; ?>
        </div>
      <?php endif; ?>
      <div class="views-widget">
        <?php print $widget->widget; ?>
      </div>
      <?php if (!empty($widget->description)): ?>
        <div class="description">
          <?php print $widget->description; ?>
        </div>
      <?php endif; ?>
    </div>
  <?php
  }
}
?>
<?php if (!empty($q)): ?>
  <?php
    // This ensures that, if clean URLs are off, the 'q' is added first so that
    // it shows up first in the URL.
    print $q;
  ?>
<?php endif; ?>
<div class="l-search-wrapper searchpage">
  <div class="search-form">
    <div class="views-exposed-widgets clearfix searchpage-filters">
      <?php
        $widget = $widgets['filter-search_api_views_fulltext'];
        unset($widgets['filter-search_api_views_fulltext']);
        _kada_template_views_search_exposed_render($widget);
      ?>
      <div class="row">
        <?php foreach ($widgets as $id => $widget): ?>
          <?php _kada_template_views_search_exposed_render($widget); ?>
        <?php endforeach; ?>
        <div class="search-filters__wrapper">
          <span id="toggle--searchpage_filters"><a id="toggle--filters" class="filter__button toggle--filters">
          <?php print t('Filter results') ?> &rarr;</a></span>
          <span id="searchpage_filters" class="searchpage_filter_container element-invisible"></span>
          <span class="searchpage_filter_container">
            <a id="clearfilters" class="filter__button element-invisible clearing"
            ><span class="filter__label"><?php print t('Clear filters'); ?></span></a>
          </span>
          <div id="searchpage_filter_edit" class="searchpage-filter-edit"></div>
        </div>
      </div>
      <?php if (!empty($sort_by)): ?>
        <div class="views-exposed-widget views-widget-sort-by">
          <?php print $sort_by; ?>
        </div>
        <div class="views-exposed-widget views-widget-sort-order">
          <?php print $sort_order; ?>
        </div>
      <?php endif; ?>
      <?php if (!empty($items_per_page)): ?>
        <div class="views-exposed-widget views-widget-per-page">
          <?php print $items_per_page; ?>
        </div>
      <?php endif; ?>
      <?php if (!empty($offset)): ?>
        <div class="views-exposed-widget views-widget-offset">
          <?php print $offset; ?>
        </div>
      <?php endif; ?>
      <div class="views-exposed-widget views-submit-button searchpage_submit">
        <?php print $button; ?>
      </div>
      <?php if (!empty($reset_button)): ?>
        <div class="views-exposed-widget views-reset-button">
          <?php print $reset_button; ?>
        </div>
      <?php endif; ?>
    </div>
  </div>
</div>
<script id="template--searchfilter_button" type="text/html">
  <a class="filter__button"><span class="filter__label"></span></a>
</script>
<script id="template--searchfilter_edit" type="text/html">
  <div class="searchfilter-form">
    <div class="filter__header">
      <span class="filter__label"><?php print t('Limit results to'); ?> <span></span></span>
      <a class="filter__close" aria-label="<?php print t('Close window'); ?>"><?php print t('Close'); ?></a>
    </div>
    <ul class="filter__values"></ul>
  </div>
</script>
<script id="template--searchfilter_filter_item" type="text/html">
  <li class="filter">
    <span class="filter__active"></span>
    <a href="javascript:;"></a>
  </li>
</script>
