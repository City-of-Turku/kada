(function ($, Drupal, window, document, undefined) {

  /**
   *  Ask location from browser when this view is opened in a tab.
   */
  Drupal.behaviors.kadaGetLocation = {
    attach: function (context, settings) {
      $('.view.proximity').once(function(){
        // There should be only one view with prximity class, so we get the
        // first one as a container for Masonry
        var masonry_container = $(this).get(0);
        // Each item to be masonrified has the class ".liftup-box"
        var msnry = new Masonry(masonry_container, {
          columnWidth: '.liftup-box',
          itemSelector: '.liftup-box'
        });
        // Checking if a AJAX call returned something (eg. views exposed filter)
        // and rearranging the masonry layout if it did
        if (settings.views.ajax_path == '/views/ajax') {
          imagesLoaded( masonry_container, function() {
            msnry.layout();
          });
        }

        // Check if masonry lists are inside quicktabs
        var qt_tabpage = $(masonry_container).closest('.quicktabs-tabpage');
        if (qt_tabpage.length == 1) {
          // Quicktab tab and container IDs differ by tab<>tabpage
          var qt_tab_id = qt_tabpage.attr('id').replace(/tabpage/, 'tab');
          // On tab click which has a proximity list, trigger geolocation call
          $('#' + qt_tab_id).bind('click', function() {
            getLocation();
          });
        }

        function getLocation() {
          if (navigator.geolocation) {
            navigator.geolocation.getCurrentPosition(sortByProximity);
          } else {
            console.log("Geolocation is not supported by this browser.");
          }
        }

        function sortByProximity(position) {
          // Set distance to zero
          $('div.view.proximity input#edit-field-geofield-distance-distance').val(0);
          // Get coordinates from browser
          $('div.view.proximity input#edit-field-geofield-distance-origin-lat').val(position.coords.latitude);
          $('div.view.proximity input#edit-field-geofield-distance-origin-lon').val(position.coords.longitude);
          // Submit the exposed AJAX form
          $('div.view.proximity input.form-submit').click();
        }
      });
    }
  };

})(jQuery, Drupal, this, this.document);
