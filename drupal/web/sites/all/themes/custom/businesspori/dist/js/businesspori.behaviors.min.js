(function ($) {
  /**
   * The recommended way for producing HTML markup through JavaScript is to write
   * theming functions. These are similiar to the theming functions that you might
   * know from 'phptemplate' (the default PHP templating engine used by most
   * Drupal themes including Omega). JavaScript theme functions accept arguments
   * and can be overriden by sub-themes.
   *
   * In most cases, there is no good reason to NOT wrap your markup producing
   * JavaScript in a theme function.
   */
  Drupal.theme.prototype.kadaExampleButton = function (path, title) {
    // Create an anchor element with jQuery.
    return $('<a href="' + path + '" title="' + title + '">' + title + '</a>');
  };

  /**
   * Behaviors are Drupal's way of applying JavaScript to a page. In short, the
   * advantage of Behaviors over a simple 'document.ready()' lies in how it
   * interacts with content loaded through Ajax. Opposed to the
   * 'document.ready()' event which is only fired once when the page is
   * initially loaded, behaviors get re-executed whenever something is added to
   * the page through Ajax.
   *
   * You can attach as many behaviors as you wish. In fact, instead of overloading
   * a single behavior with multiple, completely unrelated tasks you should create
   * a separate behavior for every separate task.
   *
   * In most cases, there is no good reason to NOT wrap your JavaScript code in a
   * behavior.
   *
   * @param context
   *   The context for which the behavior is being executed. This is either the
   *   full page or a piece of HTML that was just added through Ajax.
   * @param settings
   *   An array of settings (added through drupal_add_js()). Instead of accessing
   *   Drupal.settings directly you should use this because of potential
   *   modifications made by the Ajax callback that also produced 'context'.
   */


  var mobileMenuBehavior = function () {
    if (!$(this).data('mobile-menu-initialized')) {
      /* Because the menu is expanded by default, we need to collapse everything after the
       * page is loaded. Items with active-trail class however need to remain expanded.
       */
      var expandedItems = $(this).find('div.responsified li.is-expanded');
      expandedItems.each(function () {
        if (!$(this).hasClass('is-active-trail')) {
          $(this).removeClass('is-expanded');
          $(this).addClass('is-collapsed');
        }
        if ($(this).hasClass('is-active-trail')) {
          $(this).children('ul.menu').addClass('is-visible');
        }
      });

      var inactiveItems = $(this).find('div.responsified li .menu');
      inactiveItems.each(function () {
        if (!$(this).hasClass('is-visible')) {
          $(this).addClass('is-hidden');
        }
      });

      // Check if two mobile menus are open at the same time and close the one that wasn't clicked last
      var allMenus = $('div.l-navigation').find('div.responsive-menus');
      $('.toggler').on('click.responsive-menu-toggle', function () {
        var currentMenu = $(this).parents('.responsive-menus:first');
        allMenus.not(currentMenu).removeClass('responsive-toggled');
        $('.block--views-kada-recommended-block').removeClass('block--views-recommended-block--is-visible').addClass('block--views-recommended-block--is-hidden');
        // toggle body class if any of the menus are open
        if ($('div.l-navigation').find('div.responsive-toggled').length) {
          $('body').addClass('mobile-menu-open');
        } else {
          $('body').removeClass('mobile-menu-open');
        }        
      });

      // Open and close sub-menu items from toggle button
      $('span.menu__item--expanded-toggle').on('click.submenu-toggle', function (event) {
        event.preventDefault();
        event.stopPropagation();
        $(this).siblings('ul.menu').toggleClass('is-visible is-hidden');
        $(this).parent().toggleClass('is-expanded is-collapsed');
      });

      $(this).data('mobile-menu-initialized', true);
    }
  };

  var desktopMenuBehavior = function () {
    if ($(this).data('mobile-menu-initialized')) {

      // Close the menu if it's open
      if ($(this).find('div.responsive-toggled').length) {
        $(this).find('div.responsive-toggled > .toggler').trigger('click');
      }

      // Undo everything mobileMenuBehavior does, in reverse order
      // close open submenus
      $(this).find('li.is-expanded:not(.is-active-trail)').toggleClass('is-expanded is-collapsed').find('ul.menu.is-visible').toggleClass('is-visible is-hidden');
      $(this).find('li.menu__item--has-first-level.is-collapsed').toggleClass('is-expanded is-collapsed');
      $(this).find('span.menu__item--expanded-toggle').off('click.submenu-toggle');
      $(this).find('.toggler').off('click.responsive-menu-toggle');

      var inactiveItems = $(this).find('div.responsive-menus li .menu');
      inactiveItems.each(function () {
        if (!$(this).hasClass('is-visible')) {
          $(this).removeClass('is-hidden');
        }
      });

      var expandedItems = $(this).find('div.responsive-menus li.is-expanded');
      expandedItems.each(function () {
        if (!$(this).hasClass('is-active-trail')) {
          $(this).addClass('is-expanded');
          $(this).removeClass('is-collapsed');
        }
        if ($(this).hasClass('is-active-trail')) {
          $(this).children('ul.menu').removeClass('is-visible');
        }
      });

      $(this).data('mobile-menu-initialized', false);
    }
  };

  var switchMainMenuBehavior = function (context) {
    var menu = $('.l-region--navigation .block--menu-block', context);
    if ($(window).width() >= '1025') {
      desktopMenuBehavior.call(menu);
    }
    else {
      mobileMenuBehavior.call(menu);
    }
  };

  // Switch between mobile and desktop menu behavior before page load
  Drupal.behaviors.kadaMainMenuBehavior = {
    attach: function (context) {
      switchMainMenuBehavior(context);
    }
  };

  Drupal.behaviors.kadaEqualHeightsBehavior = {
    attach: function (context) {
      $(window).load(function () {
        var resizeOk = true;

        setInterval(function () {
          resizeOk = true;
        }, 33);

        $('.l-region--navigation .menu__item--has-first-level', context).hover(function(event) {
          if ($(window).width() >= '1025') {
            adjustHeight($(this).children('.menu'));
            //adjustWidth($(this));
            if (event.type === 'mouseleave') {
              $('.menu__item--has-second-level').children('ul').removeClass('is-hidden');
            }
          }
        });
        $('.l-region--navigation .menu__item--has-second-level', context).hover(function() {
          if ($(window).width() >= '1025') {
            $('.menu__item--has-second-level').children('ul').removeClass('is-hidden');
            $('.menu__item--has-second-level').not(this).children('ul').addClass('is-hidden');
            adjustHeight($(this).parent('.menu'));
          }
        });


        function adjustWidth(elem) {
          if ($(window).width() >= '1025') {
            $(elem).css('width', '');
            var topLevelWidth = $(elem).innerWidth();

            $(elem).children('.menu').css('width', topLevelWidth);
            $(elem).find('.menu:visible').children('.menu').css('width', topLevelWidth);
            switchMainMenuBehavior(context);
          }
        }

        function adjustHeight(elem) {
          if ($(window).width() >= '1025') {
            // Get the heights of the second level (on the left), the third level (in the middle)
            // and the optional e-services list (on the right if it exists)

            // Reset previous height alterations
            $(elem).css('height', '');

            var leftHeight = $(elem).innerHeight();
            var middleHeight = getHighest($(elem).find('.menu:visible'));
            var rightHeight = getHighest($(elem).children('.e-service-wrapper'));
            var highest = leftHeight;
            if (middleHeight > highest) {
              highest = middleHeight;
            }
            if (rightHeight > highest) {
              highest = rightHeight;
            }
            $(elem).css('height', highest);
            $(elem).find('.menu:visible').css('height', highest);
            switchMainMenuBehavior(context);
          }
        }
        function getHighest(elems) {
          var highest = 0;
          for (var i = 0; i < $(elems).length; i++) {
            var height = $(elems[i]).outerHeight();
            if (height > highest) {
              highest = height;
            }
          }
          return highest;
        }
      });
    }
  };

  Drupal.behaviors.attractionCardFilters = {
    attach: function(context) {
      $('.widget-attraction-list', context).once('attraction-card-filters', function () {
        const activeFilters = [];
        const liftups = $('.liftup-box--attraction-item', '.widget-attraction-list');
        const filters = (function () {
          const attractionListContainer = $('.widget-attraction-list');
          const filterContainer = $('<div class="attraction-list__filters-wrapper"><div class="attraction-list__filters"></div></div>');

          attractionListContainer.prepend(filterContainer);

          $('.field__item a', liftups)
            .toArray()
            .map(function (keyword) {
              return $(keyword).text().toUpperCase().trim();
            })
            .filter(function (keyword, index, self) {
              return self.indexOf(keyword) === index;
            })
            .sort(function (first, second) {
              return first.localeCompare(second);
            })
            .forEach(function (keyword) {
              const keywordElement = $(`<div class="attraction-list__filter"><a href="#">${keyword}</a></div>`);

              filterContainer.children().first().append(keywordElement);
            });

          return $('.attraction-list__filter a', filterContainer);
        })();

        const updateLiftups = function () {
          liftups.hide();

          const matchingLiftups = liftups.filter(function (index, liftup) {
            const liftupKeywords = $('.field__item a', liftup);
            const activeKeywords = liftupKeywords.filter(function (index, keyword) {
              const text = $(keyword).text().toUpperCase().trim();

              return activeFilters.includes(text);
            });

            liftupKeywords.removeClass('active');
            activeKeywords.addClass('active');

            return activeKeywords.size() === activeFilters.length;
          });

          matchingLiftups.show();
        };

        const updateFilters = function (clickedFilter) {
          const filterText = clickedFilter.text().toUpperCase().trim();

          if (activeFilters.includes(filterText)) {
            const index = activeFilters.findIndex(function (activeFilter) {
              return activeFilter === filterText;
            });

            activeFilters.splice(index, 1);
          } else {
            activeFilters.push(filterText);
          }

          clickedFilter.toggleClass('active');
        };

        const clickHandler = function (event) {
          event.preventDefault();

          updateFilters($(this))
          updateLiftups();
        };

        const attachClickListeners = function () {
          filters.click(clickHandler);
        };

        attachClickListeners();
      });
    }
  }
  
})(jQuery);
