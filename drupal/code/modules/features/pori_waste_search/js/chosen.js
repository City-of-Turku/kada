(function ($) {
  Drupal.behaviors.pori_waste_search_chosen = {
    attach: function (context, settings) {
      $(document).ready(function () {
        var chosen = '';

        var map_view = $('#waste-search-map-ajax');
        if (map_view.length !== 0) {
          map_view.once('pori_waste_search_map', function() {
            // Look through all the ajax views
            for (var viewName in settings.views.ajaxViews) {
              // Find the member_selection view
              var view_selector = '.view-dom-id-' + settings.views.ajaxViews[viewName].view_dom_id;

              // Refresh the view in a primitive sort of way.
              if ($('#ip-geoloc-map-of-view-pori_waste_search_map-map').length === 1) {
                if ($('#ip-geoloc-map-of-view-pori_waste_search_map-map>div').length === 0) {
                  $(view_selector).triggerHandler('RefreshView');
                }
              }
            }
          });
        }

        $('.chosen-select').once('pori_waste_search_label', function () {
          // Chosenize each select list.
          chosen = $(this).chosen({
            width: '50%'
          }).change(function(){
            $('form.pori-waste-search-page-callback input[type=submit]').mousedown();
          });
        });
      });
    }
  }
})(jQuery);
