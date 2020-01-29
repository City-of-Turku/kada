(function ($) {

  Drupal.behaviors.facetapiCalendarLinks = {
    attach: function (context) {
      // Target only the shown facet.
      $('.facetapi-facetapi-calendar-links', context).once('calendarize-links', function () {
        var facet = $(this);
        var dateLinks = facet.find('li.leaf a');
        var activeDateLinks = dateLinks.filter('.facetapi-active');
        if (dateLinks.length > 0) {
          // Create datepicker element.
          var datepicker = $('<div class="datepicker"></div>');
          // Grab available dates
          var availableDates = [];
          dateLinks.each(function(n) {
            availableDates[n] = $(this).attr('data-date');
          });
          // Hide normal facets.
          facet.children().hide();
          // Show active ones.
          activeDateLinks.each(function(n) {
            $(this).parent().show();
          });
          // Add datepicker.
          datepicker.appendTo(facet);
        }
        else {
          return;
        }
        // Init datepicker.
        datepicker.datepicker({
          dateFormat: 'd-m-yy',
          numberOfMonths: 1,
          showButtonPanel: true,
          beforeShowDay: dateAvailable,
          onSelect: dateSelected
        });
        // Check whether a facet exists for specific date.
        function dateAvailable(date) {
          var classes = [];
          var dmy = date.getDate() + "-" + (date.getMonth()+1) + "-" + date.getFullYear();
          var activeDate = activeDateLinks.filter("[data-date='" + dmy + "']");
          // Check if current date is active.
          if (activeDate.length > 0) {
            classes.push('is-active');
          }
          if ($.inArray(dmy, availableDates) != -1) {
            return [true, classes.join(' '), "Available"];
          } else {
            return [false, classes.join(' '), ""];
          }
        }
        // Click on a facet based on datepicker value.
        function dateSelected(selected, event) {
          dateLinks.filter("[data-date='" + selected + "']")[0].click();
        }
        // Check if today is not active when today is clicked then active today
        $('button[data-handler="today"]').on('click', function () {
          $('.ui-datepicker-current-day:not(is-active)').trigger('click');
        });
      });
    }
  };

})(jQuery);
