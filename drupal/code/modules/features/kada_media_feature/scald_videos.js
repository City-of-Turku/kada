(function ($) {
  Drupal.behaviors.kada_scald_videos = {
    attach: function(context, settings) {
      var top_carousel = $('.view-id-kada_top_carousel.view-display-id-block_1');
      var top_carousel_scald_video = $('.view-id-kada_top_carousel.view-display-id-block_1 .scald_video');
      var top_carousel_video = $('.view-id-kada_top_carousel.view-display-id-block_1 video');
      if(top_carousel.length > 0) {
        top_carousel_scald_video.attr('muted');
        top_carousel_video.attr('muted');
        top_carousel_scald_video.attr('playsinline', 'playsinline');
        top_carousel_video.attr('playsinline', 'playsinline');
        top_carousel_scald_video.attr('loop', 'true').attr('autoplay', 'true');
        top_carousel_video.attr('loop', 'true').attr('autoplay', 'true');
      }

      function handle_carousel() {
        window.addEventListener('load', function(){
          var allDivs = $('.view-id-kada_top_carousel.view-display-id-block_1 .slides > li');
          var dvSmallest = allDivs[0];
          $(allDivs).each(function () {
            console.log($(this).height());
            console.log($(dvSmallest).height());
            if ($(this).height() < $(dvSmallest).height()) {
              dvSmallest = $(this);
            }
          });
          $(allDivs).each(function () {
            if ($(window).width() < 1024) {
              $(this).css('height', 'auto').css('overflow', 'hidden');
            }
            else {
              $(this).height($(dvSmallest).height()).css('overflow', 'hidden');
            }
          });
        });
      }
      handle_carousel();
      $(window).on('resize', function(){
        handle_carousel();
      });
      top_carousel_video.each(function () {
        $(this).load();
      });
    }
  };

})(jQuery);
