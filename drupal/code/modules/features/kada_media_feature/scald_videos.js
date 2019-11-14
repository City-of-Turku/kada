(function ($) {
  Drupal.behaviors.kada_scald_videos = {
    attach: function(context, settings) {
      var top_carousel_video_container = $('.view-id-kada_top_carousel .views-field-field-liftup-video');
      var top_carousel_video = $('.view-id-kada_top_carousel video');

      // Required attributes for autoplaying video
      if (top_carousel_video.length > 0) {
        top_carousel_video.each(function () {
          $(this).prop('muted', true);
          $(this)[0].setAttribute('muted', true);
          $(this)[0].controls = false;
          $(this)[0].playsinline;
          $(this)[0].loop = true;
          $(this)[0].autoplay = true;
        });
      };

      // Add video scrim to slide
      function video_scrim() {
        if ($('.views-field-field-liftup-video.scrim-dark_gray')) {
          $('.flexslider').addClass('scrim-dark-gray');
        };
      };
      video_scrim();

      // Pause button functionality
      function pause_carousel_video() {
        var btn = $("<button class='pause-button'></button>");

        top_carousel_video_container.each(function () {
          btn.appendTo($(this));
          var pause_button = $(this).find('.pause-button');
          var video = $(this).find('video')[0];
          pause_button.addClass('playing');
          
          [pause_button[0], video].forEach(function(element){
            element.addEventListener("click", function() {
              if (video.paused == false) {
                video.pause();
                pause_button.removeClass('playing');
              } else {
                video.play();
                pause_button.addClass('playing');
              }
            });
          });
        });
      };
      pause_carousel_video();

      function handle_carousel() {
        window.addEventListener('load', function(){
          var allDivs = $('.view-id-kada_top_carousel.view-display-id-block_1 .slides > li');
          var dvSmallest = allDivs[0];
          $(allDivs).each(function () {
            if ($(this).height() < $(dvSmallest).height()) {
              dvSmallest = $(this);
            }
          });
          $(allDivs).each(function () {
            if ($(window).width() < 767) {
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
