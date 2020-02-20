(function($, Drupal) {
  Drupal.behaviors.kadaPlacesAccordion = {
    attach: function () {
      $('.places').accordion({
        header: ".place__header",
        heightStyle: "content",
        collapsible: true,
        active: "none"
      });
    }
  };
})(jQuery, Drupal);