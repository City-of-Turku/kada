(function ($) {

    Drupal.behaviors.widgetEventCalendar = {
        attach: function (context) {
            // Target only the shown facet.
            $('.widget-event-calendar', context).once('calendarize', function () {
                var container = $(this);
                var id = container.attr('data-widget-id');
                // Grab event calendar settings.
                var settings = Drupal.settings.tkufiWidgetFeature.eventCalendar[id];
                // Create datepicker element.
                var datepicker = $('<div class="datepicker"></div>');
                // Initialize calendar.
                function init() {
                    // Add datepicker container.
                    datepicker.appendTo(container);
                    // Init datepicker.
                    datepicker.datepicker({
                        dateFormat: 'd-m-yy',
                        numberOfMonths: 1,
                        showButtonPanel: false,
                        beforeShowDay: dateAvailable,
                        onSelect: dateSelected
                    });
                }
                // Check whether a date is valid to be selected.
                function dateAvailable(date) {
                    var dmy = date.getDate() + "-" + (date.getMonth()+1) + "-" + date.getFullYear();
                    if (typeof settings.dates[dmy] != 'undefined') {
                        return [true, '', "Available"];
                    } else {
                        return [false, '', ""];
                    }
                }
                // Add date to search url and change location to there.
                function dateSelected(selected, event) {
                    document.location.href = settings.searchUrl + '/dates/' + settings.dates[selected];
                }
                // Init calendar.
                init();
            });
        }
    };

})(jQuery);
