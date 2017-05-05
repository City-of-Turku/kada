(function ($) {
// Modified from Shadowbox Drupal module's shadowbox_auto.js. Licensed under GPL.
Drupal.behaviors.tku_colorbox = {
  attach: function(context, settings) {
    if (!$.isFunction($.colorbox)) {
      return;
    }

    $('a[href*="files/styles/full_modal"]').each(function() {
      if (!$(this).hasClass('colorbox')) {
        $(this).addClass('colorbox');
      }
    });
    this_settings = settings.colorbox;
    $('.colorbox', context)
      .once('init-colorbox')
      .colorbox(this_settings);
  }
};

})(jQuery);
