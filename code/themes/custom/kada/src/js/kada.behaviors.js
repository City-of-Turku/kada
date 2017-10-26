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

    // Masonry configuration
  // Drupal.behaviors.kadaMasonry = {
  //   attach: function (context) {
  //     $('.liftup-box-list', context).each(function (key, element) {
  //       var masonry_container = $(element);
  //       $(window).load(function () {
  //         masonry_container.once('kada-masonry', function () {
  //           // Init masonry
  //           var msnry = new Masonry(masonry_container[0], {
  //             columnWidth: '.liftup-box',
  //             itemSelector: '.liftup-box'
  //           });
  //           // Check if masonry lists are inside quicktabs
  //           var qt_tabpage = masonry_container.parents('.quicktabs-tabpage:first');
  //           if (qt_tabpage.length === 1) {
  //             var qt_tab_id = qt_tabpage.attr('id').replace(/tabpage/, 'tab');
  //             // On tab click, trigger masonry layout in order to render items correctly
  //             $('#' + qt_tab_id).bind('click', function () {
  //               imagesLoaded(qt_tabpage, function () {
  //                 msnry.layout();
  //               });
  //             });
  //           }

  //           // When resizing zoom level the masonry layout needs to be triggered to render items correctly
  //           $('.font-zoom-level-changer span').click(function () {
  //             msnry.layout();
  //           });
  //         });
  //       });
  //     });
  //   }
  // };

  Drupal.behaviors.kadaQuicktabs = {
    attach: function () {
      $('.quicktabs-wrapper').once('quicktabs-behavior', function () {
        var $tabs = $(this).find('.quicktabs-tabs > li:not(.qt-hidden)');
        if ($tabs.length === 0) {
          $(this).addClass('quicktabs-empty');
        }
      });
    }
  };

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

        function adjustHeight(elem) {
          if ($(window).width() >= '1025') {
            // Get the heights of the second level (on the left), the third level (in the middle)
            // and the optional e-services list (on the right if it exists)

            // Reset previous height alterations
            $(elem).css('height', '');

            var leftHeight = $(elem).outerHeight();
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

  // Help region toggler
  Drupal.behaviors.kadaToolsToggle = {
    attach: function (context) {
      $('.toggle-tools', context).once('tools-toggle', function () {
        $(this).click(function () {
          $(this).parent().toggleClass('open');
        });
      });
    }
  };

  // Include top menu to mobile menu
  //Drupal.behaviors.kadaTopMenuMobile = {
  //  attach: function (context) {
  //    $('.responsive-menus-0-0 > ul.menu', context).once('top-menu-mobile', function () {
  //      $(this).append($('.l-region--navigation-top ul.menu > li').clone().addClass('menu__item--top-menu'));

  //      // E-service links
  //      $(this).find('.menu__item--has-first-level > ul.menu').each(function () {
  //        var $thisMenu = $(this);
  //        var $eServiceLink = $thisMenu.find('.menu__item--e-service a');

  //        $eServiceLink.closest('.menu__item').remove();
  //        if ($eServiceLink.length) {
  //          var $title = $('<a href="javascript:;" aria-label="' + (Drupal.t('E-services')) + '">' + Drupal.t('E-services') + ':</a>');
  //          var $list = $('<ul class="menu"></ul>');
  //          $eServiceLink.each(function (i, link) {
  //            $list.append($('<li class="menu__item"></li>').append(link));
  //          });
  //          var $wrapper = $('<li class="e-service-wrapper"></li>').append([$title, $list]);
  //          $thisMenu.append($wrapper);
  //        }
  //      });
  //    });
  //  }
  //};

  // Font zoom
  Drupal.behaviors.kadaFontZoom = {
    attach: function () {
      var fontSizes = [];
      $('.font-zoom-level-changer span').each(function (key, element) {
        var className = element.className.match(/font-zoom-level--[a-z]+/);
        if (className) {
          fontSizes.push(className[0]);
        }
      });

      var savedFontLevel = localStorage['chosen.font.level'];

      if (savedFontLevel) {
        var currentActive = '.font-zoom-level-changer span.' + savedFontLevel;

        $('body').removeClass(fontSizes.join(' ')).addClass(savedFontLevel);
        // Clear default active zoom level and set the current level
        $('.font-zoom-level-changer span.is-active').removeClass('is-active');
        $(currentActive).addClass('is-active');
      }

      $('.font-zoom-level-changer span').click(function () {
        $('body').removeClass(fontSizes.join(' ')).addClass($(this).attr('class'));
        $(this).siblings().removeClass('is-active');
        $(this).addClass('is-active');
        // Set the chosen font level to local storage. Save only the first class which indicates the level
        localStorage['chosen.font.level'] = $(this).attr('class').split(' ')[0];
      });
    }
  };

  Drupal.behaviors.kadaLanguageSwitcher = {
    attach: function () {
      $('.block--locale-language').once('language-switcher', function () {
        // Changes the mobile menu toggler text to the active language
        $(this).find('.toggler').text($(this).find('.menu__link.active').text());
      });
    }
  };

  Drupal.behaviors.kadaRecommendedToggle = {
    attach: function () {
      $('.recommended-button, .recommended-block__close').once('recommended-toggle', function () {
        $('.block--views-kada-recommended-block').addClass('block--views-recommended-block--is-hidden');
        $(this).click(function () {
          $('.block--views-kada-recommended-block').toggleClass('block--views-recommended-block--is-visible block--views-recommended-block--is-hidden');
          if ($('.responsive-menus.responsive-toggled')) {
            $('.responsive-menus.responsive-toggled').removeClass('responsive-toggled');
          }
        });
      });
    }
  };

  Drupal.behaviors.kadaTextSizeToggle = {
    attach: function () {
      $('.accessibility-font-increase__toggle').once('accessibility-font-increase__toggle', function () {
        $(this).click(function () {
          $(this).toggleClass('accessibility-font-increase__toggle--active');
          $('.accessibility-font-increase__options').toggleClass('accessibility-font-increase__options--is-visible accessibility-font-increase__options--is-hidden');
        });
      });
    }
  };

  // Mobile tables
  Drupal.behaviors.kadaTableMobilize = {
    attach: function (context) {
      $('.node table', context).once('table-mobilize', function () {
        var table = $(this);

        table.find('thead th').each(function (key, element) {
          var headerText = $(element).text();
          table.find('tbody tr td:nth-child(' + (key + 1) + ')').attr('data-title', headerText);
        });

        if (table.find('thead').length !== 0) {
          $(this).addClass('has-table-header');
        } else {
          $(this).addClass('has-no-table-header');
        }
      });
    }
  };

  // Make taxonomy term references a bit easier on the eyes
  Drupal.behaviors.kadaEnhanceTaxonomyTermReferenceField = {
    attach: function (context) {
      $('.field-type-taxonomy-term-reference .form-type-checkboxes', context).once('enhance-taxonomy-term-reference-field', function () {

        function recurse(elem) {
          $(elem).find('.taxonomy-level').filter(function (i, e) {
            return $(e).data('taxonomy-level') > $(elem).data('taxonomy-level');
          }).each(function () {
            $(this).append($(this).nextUntil('.taxonomy-level-' + ($(this).data('taxonomy-level'))));
            recurse($(this));
          });
        }

        $(this).data({'taxonomy-level': -1});
        recurse($(this));
      });
    }
  };

  // Enhance checkboxes
  Drupal.behaviors.kadaEnhanceCheckboxes = {
    attach: function (context) {
      $('.form-type-checkbox', context).once('enhance-checkboxes', function () {

        var checkedClasses = function () {
          if ($(this).is(':checked')) {
            $(this).parent().addClass('is-checked');
          }
          else {
            $(this).parent().removeClass('is-checked');
          }
        };

        if ($(this).find('.description').length) {
          $(this).addClass('has-description');
        }

        $(this).find('.form-checkbox').on('change', checkedClasses).each(checkedClasses);
      });
    }
  };

  Drupal.behaviors.kadaEnhanceRadioButtons = {
    attach: function (context) {
      $('.form-type-radio, .range-of-repeat .form-radios > div', context).once('enhance-radio-buttons', function () {

        var checkedClasses = function () {
          if ($(this).is(':checked')) {
            $(this).parent().addClass('is-checked');
            $(this).parent().siblings('.is-checked').removeClass('is-checked');
          }
        };

        if ($(this).find('.description').length) {
          $(this).addClass('has-description');
        }

        $(this).find('.form-radio').on('change', checkedClasses).each(checkedClasses);
      });
    }
  };

  Drupal.behaviors.kadaEnhanceRangeOfRepeat = {
    attach: function (context) {
      $('.range-of-repeat .form-radios > div', context).once('enhance-range-of-repeat', function () {
        var radio = $(this).find('.form-radio');
        $(this).find('.form-text').on('focus', function () {
          if (radio.not(':checked')) {
            radio.click();
          }
        });
      });
    }
  };

  // External event form
  Drupal.behaviors.kadaExternalEventForm = {
    attach: function (context) {
      $('.l-content > .event-node-form, .l-content > .tkufi-event-ext-event-translations-form', context).once('external-event-form', function () {

        var selected = []; // queue of ids
        var max_selected = 3;

        var $types = $(this).find('.field-name-field-event-types');

        // User can only choose either Event or Hobby
        $types.find('.taxonomy-level-0 > .form-type-checkbox > .form-checkbox').each(function () {
          $(this).on('click.event-hobby-mutex', function () {
            // remove all choices from other categories, if any
            $(this).parent().parent().siblings().find('.is-checked > input').each(function () {
              $(this).prop('checked', false).parent().removeClass('is-checked');
            });
          });
        });

        // User can only choose a limited number of subtypes
        $types.find('.taxonomy-level-1 > .form-type-checkbox > .form-checkbox').each(function () {
          $(this).on('click.limit-selection', function () {
            // Clicked element is checked
            if ($(this).is(':checked')) {
              // Still have space?
              if (selected.length < max_selected) {
                selected.push(this.id);
              }
              // No space left, remove oldest first
              else {
                var oldid = selected.shift();
                $('#' + oldid).prop('checked', false).parent().removeClass('is-checked');
                // Remove 2nd level selections when 1st level selection is removed
                $('#' + oldid).parent().parent().find('.taxonomy-level-2 .is-checked > input').each(function () {
                  $(this).prop('checked', false).parent().removeClass('is-checked');
                });
                selected.push(this.id);
              }
            }
            else {
              selected.splice(selected.indexOf(this.id), 1);
              // Remove 2nd level selections when 1st level selection is removed
              $('#' + this.id).parent().parent().find('.taxonomy-level-2 .is-checked > input').each(function () {
                $(this).prop('checked', false).parent().removeClass('is-checked');
              });
            }
          });
        });
      });
    }
  };

  // Quick search toggle
  Drupal.behaviors.kadaQuickSearchToggle = {
    attach: function (context) {
      $('.block--tkufi-search-feature-quicksearch', context).once('quick-search-toggle', function () {

        var placeholder = Drupal.t('Search the entire web service');
        var tooltip = Drupal.t('Show quick search');

        $(this).find('.form-text').prop('placeholder', placeholder);
        $(this).addClass('is-collapsed has-animated-height');

        var mobi = $('<div></div>').addClass('quick-search-toggler').prop('title', tooltip);

        var handler = function () {
          $('.block--tkufi-search-feature-quicksearch').toggleClass('is-collapsed');
          if (!$('.block--tkufi-search-feature-quicksearch').hasClass('is-collapsed')) {
            $('.block--tkufi-search-feature-quicksearch .form-text').focus();
          }
        };

        mobi.on('click', handler);

        // mobile toggler
        $('.l-region--navigation').prepend(mobi);
      });

      $('.block--tkufi-search-feature-quicksearch--2', context).once('quick-search-toggle', function () {
        var placeholder = Drupal.t('Search the entire web service');
        $(this).find('.form-text').prop('placeholder', placeholder);
      });
    }
  };

  // News archive link
  Drupal.behaviors.kadaNewsArchiveLink = {
    attach: function (context) {
      $('.quicktabs-news-archive-link', context).once('news-archive-link', function () {
        $(this)
          .removeClass('quicktabs-news-archive-link')
          .unbind('click')
          .parent()
          .addClass('quicktabs-news-archive-link');
      });
    }
  };

  /**
   * Kludge to force event calendar map to only init after its quicktab has been opened.
   * Replaces openlayers' attach behavior with a wrapper.
   */
  if (typeof Drupal.behaviors.openlayers !== 'undefined') {
    var olBootstrap = Drupal.behaviors.openlayers.attach;
    var olBootstrapContext, olBootstrapSettings;
    if (typeof olBootstrap === 'function') {
      // Replace original function
      Drupal.behaviors.openlayers.attach = function (context, settings) {
        olBootstrapContext = context;
        olBootstrapSettings = settings;
        // Regular processing for maps that aren't in the event map tab
        if (!$('.openlayers-map').parents('.event-tab-event_map.is-collapsed').length) {
          olBootstrap(context, settings);
        }
      };
    }
  }

  // Turkucalendar event tabs
  Drupal.behaviors.kadaEventTabs = {
    attach: function (context) {
      $('.event-tabs-wrapper', context).once('event-tabs', function () {
        $('.quicktabs-tabs li a').on('click.change-tab', function () {
          var $li = $(this).parent();
          var $tab = $($(this).data('target'));
          if (!$li.hasClass('active')) {
            $li.siblings('.active').removeClass('active');
            $li.addClass('active');
            $tab.siblings('.is-expanded').removeClass('is-expanded').addClass('is-collapsed');
            $tab.removeClass('is-collapsed').addClass('is-expanded');
          }
          if ($(this).hasClass('event_map')) {
            $('.event-tab-event_map .openlayers-map').once('quicktabs-openlayers-init', function () {
              olBootstrap(olBootstrapContext, olBootstrapSettings);
            });
          }
        });
      });
    }
  };

  // Override search_api_ajax's URL-to-state translation
  if (typeof Drupal.search_api_ajax !== 'undefined') {
    Drupal.search_api_ajax.urlToState = function (url) {
      var state = Drupal.search_api_ajax.getUrlState(url);

      // Path is a special case
      var urlPath = url.split('?');
      var path = Drupal.search_api_ajax.readUrl(urlPath[0]);
      if (typeof path !== 'undefined' && path !== '') {
        // jQuery BBQ adds extra double encoding: we need to undo that once
        state.path = decodeURIComponent(path);
      }

      // If we don't have a path (i.e. no facet set), set a dummy path
      // so the page won't scroll to top
      if (!state.path) {
        state.path = '_';
      }

      // Use merge_mode: 2 to completely replace state (removing empty fragments)
      $.bbq.pushState(state, 2);
    };
  }

  // Turkucalendar front page event filters
  Drupal.behaviors.kadaEventFilters = {
    attach: function (context) {

      $('.l-filters', context).each(function () {

        // var loadedViaAjax = context === 'body';
        var loadedViaPage = typeof context === 'object';
        var haveAjaxProcessing = window.location.hash.indexOf('#path=') !== -1;

        // See if we have active facets that will call this function later
        if (loadedViaPage && haveAjaxProcessing) {
          // Skip processing here to avoid doing it twice
          return;
        }

        // Filter vars.
        var filtersRegion = $(this);
        var filterStageRegion = $('.l-filter-stage');
        var filters = filtersRegion.find('.filter');

        // Throbber.
        var showThrobber = function () {
          $('.l-filters, .event-tabs-wrapper .quicktabs_main').addClass('ajax-is-loading');
        };
        var hideThrobber = function () {
          $('.l-filters, .event-tabs-wrapper .quicktabs_main').removeClass('ajax-is-loading');
        };
        // Bind throbber callbacks
        $(document).ajaxStart(showThrobber);
        $(document).ajaxStop(hideThrobber);

        var setCurrentFacet = function (name) {
          filtersRegion.data('current_facet', '.' + name);
        };
        var clearCurrentFacet = function () {
          filtersRegion.data('current_facet', false);
        };

        // Handle filter moving and state.
        var createFilter = function () {
          // Facet vars.
          var filter = {
            facet: $(this),
            facetFilter: $(this).nextAll('.filter__content').filter(':first'),
            facetState: $(this).find('.filter__state .state'),
            facetName: $(this).attr('class').split(' ').filter(function (classname) {
              return classname.indexOf('filter--') === 0;
            })[0]
          };

          // Move facet filter into stage region and hide it.
          filterStageRegion.append(filter.facetFilter);
          filter.facetFilter.hide();
          filter.facetFilter.find('.facetapi-facetapi-calendar-links .leaf').hide();

          setActiveFilterInfo(filter);
          bindFilterEvents(filter);

          // Open the last opened facet after region reload, etc.
          if (filtersRegion.data('current_facet') && filter.facet.is(filtersRegion.data('current_facet'))) {
            openFilter(filter);
          }
        };

        var flexslidersPaused = false;

        $(window).off('scroll.flexslidersPaused');
        $(window).on('scroll.flexslidersPaused', function () {
          // Start flexsliders again if user scrolls to top
          if ($(window).scrollTop() <= $('#flexslider-1').offset().top) {
            if (!!flexslidersPaused && !filtersRegion.data('current_facet')) {
              unpauseFlexsliders();
            }
          }
          else if ($(window).scrollTop() > ($('#flexslider-1').offset().top + $('#flexslider-1').height())) {
            pauseFlexsliders();
          }
        });

        var pauseFlexsliders = function () {
          if (!flexslidersPaused) {
            var flexsliderExists = typeof $('.flexslider').flexslider !== 'undefined';

            if (flexsliderExists) {
              $('.flexslider').flexslider('pause');
              flexslidersPaused = true;
            }
          }
        };

        var unpauseFlexsliders = function () {
          $('.flexslider').flexslider('play');
          flexslidersPaused = false;
        };

        var openFilter = function (filter) {
          // Pause flexsliders when user opens menu so they don't slow down facets
          pauseFlexsliders();
          // Make sure there is no other filter open.
          closeFilters();
          // Set opened element to current.
          setCurrentFacet(filter.facetName);
          filter.facet.addClass('is-expanded').removeClass('is-collapsed');
          filter.facetFilter.show();
        };

        var closeFilter = function (filter) {
          filter.facet.removeClass('is-expanded').addClass('is-collapsed');
          filter.facetFilter.hide();
          clearCurrentFacet();
        };

        var closeFilters = function () {
          filters.each(function () {
            $(this).trigger('closeFilter');
          });
        };

        var setActiveFilterInfo = function (filter) {
          var activeFacets = filter.facetFilter.find('a.facetapi-active');
          // Show active facets.
          $.each(activeFacets, function () {
            var activeFacetState = $('<span></span>');
            var activeFacet = $(this);
            activeFacetState
              .text(activeFacet.find('.facet__title').text())
              .on('click', function () {
                activeFacet.click();
              })
              .appendTo(filter.facetState);
            filter.facet.addClass('has-state');
          });
        };

        var bindFilterEvents = function (filter) {
          // Make it possible to open, close and clear filters
          filter.facet.find('.filter__toggle').off('click.filter-toggle')
            .on('click.filter-toggle', function () {
              if (filter.facet.hasClass('is-collapsed')) {
                openFilter(filter);
              }
              else {
                closeFilter(filter);
              }
            });
          filter.facet.on('openFilter', function () {
            openFilter(filter);
          });
          filter.facet.on('closeFilter', function () {
            closeFilter(filter);
          });
          // Close filter button.
          filter.facetFilter.find('.close').on('click.filter-content-close', function () {
            closeFilter(filter);
          });
        };

        // If there are active facets and the mosaic view is visible, show the list view instead
        if (filtersRegion.find('a.facetapi-active').length && $('.event-tab-event_mosaic').hasClass('is-expanded')) {
          $('.event-tabs-wrapper .quicktabs-tabs li:first').next().find('a').trigger('click');
        }

        // Set filter classes.
        filters.filter(':first').addClass('first');
        filters.filter(':last').addClass('last');

        filters.each(createFilter);
      });
    }
  };

  Drupal.behaviors.kadaEventQuicksearch = {
    attach: function (context) {
      $('.turkucalendar .l-navigation-top', context).once('event-quick-search', function () {

        var placeholder = Drupal.t('Search from events and hobbies');
        var $search = $(this).find('#block-tkufi-events-base-feature-eventsearch');
        $search.find('.form-text').prop('placeholder', placeholder);

        $(this).find('#block-locale-language').insertAfter($search);
        $(this).find('.font-zoom-level-changer').insertAfter($search);

      });
    }
  };

  Drupal.behaviors.kadaEventFooter = {
    attach: function (context) {
      $('.turkucalendar .l-footer', context).once('event-footer', function () {

        // Clone the "add your event" button from header to footer
        var $wrap = $('<div class="menu__item--event-add"></div>');
        var $button = $('.l-header .menu__item--event-add > a').clone();
        $wrap.append($button);
        $(this).find('.section-footer--item:nth-child(3) .field-content').prepend($wrap);

        // Clone logo from header to footer
        var $logo = $('.l-header .site-name > a:first').clone();
        $(this).find('.section-footer--item:first .field-content').prepend($logo);

        var $after_footer = $('<div class="l-after-footer"></div>');
        $after_footer.append($(this).find('.section-footer--item').filter(function (i) { return i >= 3; }));
        $(this).find('.l-after-footer-wrapper').append($after_footer);
      });
    }
  };

  Drupal.behaviors.kadaSectionFooterContactInfo = {
    attach: function (context) {
      $('.l-region--footer', context).once('section-footer-contact-info', function () {
        // Move contact info into first footer item
        var $info = $(this).find('.contact-information');
        var $block = $info.parent().parent();
        $(this).find('.section-footer--item:first').append($info);
        $block.remove();
      });
    }
  };

  Drupal.behaviors.kadaSearchFiltersMobile = {
    attach: function (context) {

      var selectors = [
        '.page-search .l-region--sidebar-first',
        '.page-event-search .l-region--sidebar-first',
        '.page-services-map .l-region--sidebar-first'
      ];
      var selector = selectors.join(', ');

      $(selector, context).once('search-filters-mobile', function () {

        var $sidebar = $(this);

        // Add toggle filters button to dom before the first sidebar
        var $toggleFilters = $('<div class="search-toggle-filters is-hidden">' + Drupal.t('Show filters') + '</div>');
        $sidebar.before($toggleFilters);

        // Add single filter toggle button inside each facet-api blocks title
        $sidebar.find('.block--facetapi .block__title').each(function () {
          $(this).append('<span class="search-toggle-single-filter is-hidden"></span>');
        });
        var $toggleSingleFilter = $('.search-toggle-single-filter');

        // Show and hide all filters functionality
        $toggleFilters.click(function () {
          $sidebar.toggleClass('is-hidden').toggleClass('is-visible');
          $toggleFilters.toggleClass('open');

          if ($toggleFilters.hasClass('open')) {
            $toggleFilters.text(Drupal.t('Hide filters'));
          }
          else {
            $toggleFilters.text(Drupal.t('Show filters'));
          }
        });

        // Show and hide single filter content functionality
        $toggleSingleFilter.click(function () {
          var parentBlock = $(this).parentsUntil('.l-region');
          $(this).toggleClass('open');
          parentBlock.children('.block__content').toggleClass('is-hidden');
        });

        $(window).load(function () {
          var resizeOk = true;
          var blockContentHidden = false;

          setInterval(function () {
            resizeOk = true;
          }, 33);

          function toggleFilters() {
            if (resizeOk === false) {
              return;
            }

            // Filter functionality in mobile screens
            if ($(window).width() <= '768') {
              $sidebar.addClass('is-hidden');

              if (blockContentHidden === false) {
                $sidebar.find('.block--facetapi').each(function () {
                  $(this).find('.block__content').addClass('is-hidden');
                });

                blockContentHidden = true;
              }

              $toggleFilters.removeClass('is-hidden');
              $toggleSingleFilter.removeClass('is-hidden');
            }

            // Shows all filters in desktop and hides mobile-only-buttons
            if ($(window).width() > '768') {
              blockContentHidden = false;

              $toggleFilters.text(Drupal.t('Show filters'));

              $sidebar.removeClass('is-hidden').removeClass('is-visible');
              $toggleFilters.removeClass('open');
              $toggleSingleFilter.removeClass('open');
              $toggleFilters.removeClass('is-visible');
              $toggleSingleFilter.removeClass('is-visible');
              $toggleFilters.addClass('is-hidden');
              $toggleSingleFilter.addClass('is-hidden');

              $sidebar.find('.block--facetapi').each(function () {
                $sidebar.find('.block__content').removeClass('is-hidden');
              });
            }

            resizeOk = false;
          }

          $(window).resize(toggleFilters);
          toggleFilters();
        });
      });

    }
  };


  // Overrides contrib module facetapi_collapsible.js
  // This strange little function allows the "expanded" class to be added to or
  // removed from the passed in facet based on the passed in condition, which
  // corresponds to a configured setting.
  var facetCollapseExpanded = function ($facet, condition, operation, behavior) {
    var wrapper = $facet.find('.facet-collapsible-wrapper').get(0);
    if (wrapper) {
      var facetId = wrapper.id;
      facetId = facetId.replace('facet-collapsible-', '');
      facetId = facetId.replace(/-/g, '_');
      if (Drupal.settings.facetapi_collapsible[facetId]) {
        // We either need to check that the 'condition' in Drupal.settings DOES
        // hold for the given facet's configuration, or that it DOES NOT hold. The
        // 'operation' boolean tells us which.
        var cond = (Drupal.settings.facetapi_collapsible[facetId][condition] === operation);
        // Only add or remove the class if the condition has been satisfied.
        if (cond) {
          // behavior is either "addClass" or "removeClass"
          $facet[behavior]('expanded');
        }
      }
    }
  };

  /**
   * Behavior for collapsing faceted search lists.
   */
  Drupal.behaviors.facetapiCollapsible = {
    attach : function () {
      var i = 0;
      $('.facet-collapsible-wrapper .facetapi-collapsible').once(function () {
        var $facet = $(this);
        if ($('.facetapi-active', this).size() > 0) {
          $(this).addClass('expanded active');
        }
        else {
          // Add the 'expanded' class to the facet if configured to do so.
          facetCollapseExpanded($facet, 'expand', 1, 'addClass');

          $('h2', this).each(function () {
            $(this).click(function () {
              $facet.siblings('.facetapi-collapsible:not(.active)').each(function () {
                // Remove the 'expanded' class from all other facets that haven't
                // been configured to stay open.
                facetCollapseExpanded($(this), 'keep_open', 0, 'removeClass');
              });
              $facet.toggleClass('expanded');
            });
          });
        }

        // check cookie
        var cookie = $.cookie('Facetapi.collapsible.expanded');
        cookie = $.parseJSON(cookie);
        if (!cookie) {
          cookie = {};
        }
        $('.facetapi-collapsible ul.facetapi-collapsible .item-list').once(function () {
          var $list = $(this);
          var parentwrapper = $list.closest('.facet-collapsible-wrapper');
          if (parentwrapper) {
            var parentfacetId = parentwrapper.attr('id');
            parentfacetId = parentfacetId.replace('facet-collapsible-', '');
            parentfacetId = parentfacetId.replace(/-/g, '_');
            if (Drupal.settings.facetapi_collapsible[parentfacetId] && Drupal.settings.facetapi_collapsible[parentfacetId].collapsible_children) {
              var $parentfacet = $($list.siblings('.facetapi-facet').get(0));

              $('a', $parentfacet).each(function () {
                $(this).append('<span class="facetapi-collapsible-handle"></span>');

                if (!cookie || !cookie[parentfacetId] || (cookie[parentfacetId].indexOf($(this).attr('href')) < 0)) {
                  $('ul', $(this).closest('.facetapi-facet').siblings('.item-list')).first().removeClass('expanded');
                }
                else {
                  $(this).closest('.block-facetapi.facetapi-collapsible').addClass('expanded');
                  $('.facetapi-collapsible-handle', this).addClass('expanded');
                }
              }).addClass('collapselink');

              // expand facet with active childs
              if ($('a.facetapi-active', $(this)).length) {
                $('ul', $(this).closest('div')).first().each(function () {
                  $(this).addClass('expanded');
                  $('li.expanded .facetapi-collapsible-handle', this).addClass('expanded');
                });
              }

              $('a .facetapi-collapsible-handle', $parentfacet).click(function (event) {
                var $clickedlist = $('ul', $parentfacet.siblings('.item-list')).first();
                var $clickedlink = $(this).closest('a');
                var index;
                $clickedlist.toggleClass('expanded');
                if (!cookie) {
                  cookie = {};
                }
                if (!cookie[parentfacetId]) {
                  cookie[parentfacetId] = [];
                }
                if ($clickedlist.hasClass('expanded')) {
                  $(this).addClass('expanded');
                  cookie[parentfacetId].push($clickedlink.attr('href'));
                }
                else {
                  $(this).removeClass('expanded');
                  index = cookie[parentfacetId].indexOf($clickedlink.attr('href'));
                  if (index !== -1) {
                    cookie[parentfacetId].splice(index, 1);
                  }
                }

                if (Drupal.settings.facetapi_collapsible[parentfacetId].keep_open === false) {
                  $('ul', $list.closest('li').siblings('li')).each(function () {
                    $(this).removeClass('expanded');
                    $('a .facetapi-collapsible-handle', $(this).closest('li')).removeClass('expanded');
                    index = cookie[parentfacetId].indexOf($('a', $(this).closest('li')).attr('href'));
                    if (index !== -1) {
                      cookie[parentfacetId].splice(index, 1);
                    }
                  });
                }
                $.cookie(
                  'Facetapi.collapsible.expanded',
                  JSON.stringify(cookie),
                  {
                    path: Drupal.settings.basePath,
                    expires: 1
                  }
                );
                event.preventDefault();
              });
            }
          }
        });
        i = i + 1;
      });
    }
  };

  /**
   * Behavior for collapsing BEF checkboxes that look like faceted search lists.
   */
  Drupal.behaviors.befCollapsible = {
    attach : function (context) {
      $('.form-bef-checkboxes.block--facetapi', context).once('bef-collapsible', function () {
        var close_siblings = false;
        var $bef = $(this);
        if ($('.facetapi-active', this).size() > 0) {
          $bef.addClass('expanded active');
        }

        $('.facetapi-facet > a', $bef).on('click', function (event) {
          event.preventDefault();
          event.stopPropagation();
          if ($(event.target).is('.facetapi-collapsible-handle')) {
            return;
          }
          var input = $(this).find('input');
          var should_check = input.is(':not(:checked)');
          if (should_check) {
            input.attr('checked', 'checked');
            $(this).parentsUntil('li', '.facetapi-inactive').removeClass('facetapi-inactive').addClass('facetapi-active');
            $(this).removeClass('facetapi-inactive').addClass('facetapi-active');
          }
          else {
            input.removeAttr('checked');
            $(this).parentsUntil('li', '.facetapi-active').removeClass('facetapi-active').addClass('facetapi-inactive');
            $(this).removeClass('facetapi-active').addClass('facetapi-inactive');
          }
        });

        $('a .facetapi-collapsible-handle', $bef).click(function (event) {
          var $clickedlink = $(this).closest('a');
          var $clickedlist = $clickedlink.parent().next();
          $clickedlist.toggleClass('expanded');
          if ($clickedlist.hasClass('expanded')) {
            $(this).addClass('expanded');
          }
          else {
            $(this).removeClass('expanded');
          }

          if (close_siblings) {
            $('ul', $clickedlist.closest('li').siblings('li')).each(function () {
              $(this).removeClass('expanded');
              $('a .facetapi-collapsible-handle', $(this).closest('li')).removeClass('expanded');
            });
          }
          event.preventDefault();
        });

        $bef.find('.item-list').once('bef-collapsible-list', function () {
          // expand facet with active childs
          $('a.facetapi-active', $(this)).each(function () {
            $(this).parentsUntil($bef, '.item-list').each(function () {
              $(this).addClass('expanded');
              $(this).prev().find('.facetapi-collapsible-handle').addClass('expanded');
            });
          });
        });
      });
    }
  };

})(jQuery);
