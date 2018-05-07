(function ($) {
  Drupal.behaviors.pori_waste_search_chosen = {
    attach: function (context, settings) {
      $(document).ready(function () {
        var chosen = '';

        $('.chosen-select').once('pori_waste_search_label', function () {
          // Chosenize each select list
          chosen = $(this).chosen({
            width: '50%'
          });
        });
      });
    }
  }
})(jQuery);
