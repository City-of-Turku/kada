(function ($) {
  Drupal.behaviors.pori_waste_search_chosen = {
    attach: function (context, settings) {
      $(document).ready(function () {
        var wrapper = $('.pori-waste-search-page-callback');

        if (wrapper.length !== 0) {
          var map = $('#waste-search-map-ajax');
          var button = $('a[name="show-locations"]');
          var chosen = $('.chosen-select');

          button.once('waste-search-button', function() {
            $(this).bind('click', function(e) {
              e.stopPropagation();
              button.removeClass('is-active');
              $(this).addClass('is-active');
              map.removeClass('is-hidden');
            });
          });

          chosen.change(function(event) {
            event.stopPropagation();
            map.addClass('is-hidden');
          });

          chosen.once('pori_waste_search_label', function () {
            // Chosenize each select list.
            chosen = $(this).chosen({
              width: '50%'
            }).change(function() {
              $('form.pori-waste-search-page-callback input[type=submit]').mousedown();
            });
          });
        }
      });
    }
  }
})(jQuery);
