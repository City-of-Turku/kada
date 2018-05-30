(function ($) {
  Drupal.behaviors.pori_waste_search_select2 = {
    attach: function (context, settings) {
      $(document).ready(function () {
        var wrapper = $('.pori-waste-search-page-callback');

        if (wrapper.length !== 0) {
          var map = $('.waste-search-map-ajax-wrapper');
          var button = $('a[name="show-locations"]');
          var select2 = $('.select2-select');

          button.once('waste-search-button', function() {
            $(this).bind('click', function(e) {
              e.stopPropagation();
              $(this).toggleClass('is-active');
              $(this).toggleClass('use-ajax');
              map.toggleClass('is-hidden');
            });
          });

          select2.change(function(event) {
            event.stopPropagation();
            map.addClass('is-hidden');
          });

          select2.once('pori_waste_search_label', function () {
            // Chosenize each select list.
            select2 = $(this).select2({
              width: '100%',
              search_contains: true
            }).change(function() {
              $('form.pori-waste-search-page-callback input[type=submit]').mousedown();
            });
          });
        }
      });
    }
  }
})(jQuery);
