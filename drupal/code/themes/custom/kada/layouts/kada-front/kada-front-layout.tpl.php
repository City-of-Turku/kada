<div<?php print $attributes; ?>>
  <?php if ($page['emergency_messages']): ?>
    <div class="page-emergency-messages l-emergency-messages">
      <div class="container page-emergency-messages__container">
        <?php print render($page['emergency_messages']); ?>
      </div>
    </div>
  <?php endif; ?>

  <header id="header" class="page-header l-header clearfix" role="banner">
    <?php if ($page['before_header']): ?>
      <div class="l-before-header">
        <div class="container l-before-header__container l-before-header-inner">
          <?php print render($page['before_header']); ?>
        </div>
      </div>
    <?php endif; ?>
    <div class="page-header__top">
      <div class="l-branding">
        <div class="container l-branding__container l-branding-inner">
          <?php if ($messages): ?>
            <div class="drupal-messages">
              <?php print $messages; ?>
            </div>
          <?php endif; ?>

          <?php if ($tabs): ?>
            <nav class="tabs"><?php print render($tabs); ?></nav>
          <?php endif; ?>
          <?php if($site_name OR $site_slogan): ?>
          <div class="site-branding site-branding--header l-region l-region--logo">
            <?php if($site_name): ?>
              <?php if($is_front): ?>
                <h1 class="site-name site-branding__name site-branding--header__name">
                  <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="site-branding__link site-branding--header__link">
                    <span class="element-invisible"><?php print $site_name; ?></span>
                    <img src="/<?php print $site_logo_path; ?>" alt="<?php print t('Home'); ?>" class="site-branding__visual site-branding--header__visual">
                  </a>
                </h1>
              <?php else: ?>
                <h2 class="site-name site-branding__name site-branding--header__name">
                  <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="site-branding__link site-branding--header__link">
                    <span class="element-invisible"><?php print $site_name; ?></span>
                    <img src="/<?php print $site_logo_path; ?>" alt="<?php print t('Home'); ?>" class="site-branding__visual site-branding--header__visual">
                  </a>
                </h2>
              <?php endif; ?>
            <?php endif; ?>
            <?php if ($site_slogan): ?>
              <p class="site-branding__slogan site-branding--header__slogan"><?php print $site_slogan; ?></p>
            <?php endif; ?>
          </div>
          <?php endif; ?>

          <?php print render($page['branding']); ?>

          <?php if($page['header_top'] OR $page['navigation_top']): ?>
            <div class="l-navigation-top">
              <!-- <div class="accessibility-font-increase">
                <span class="accessibility-font-increase__text"><?php print t('Text size'); ?>
                <div class="accessibility-font-increase__options font-increase">
                  <a href="#font-increase-default" class="font-increase__item font-increase__item--default font-increase__item--is-active">A</a>
                  <a href="#font-increase-medium" class="font-increase__item font-increase__item--medium">A</a>
                  <a href="#font-increase-large" class="font-increase__item font-increase__item--large">A</a>
                </div>
              </div> -->

              <?php
                // We print the header-top region here first time and a second time later to achieve desired DOM for mobile.
                print render($page['header_top']);
              ?>

              <?php print render($page['navigation_top']); ?>
            </div>
          <?endif; ?>
        </div>
      </div>

      <div class="l-navigation">
        <div class="container l-navigation__container l-navigation-inner">
          <?php print render($page['navigation']); ?>
        </div>
      </div>
    </div>

    <?php if ($page['header_top']): ?>
      <div class="l-header-top">
        <?php print render($page['header_top']); ?>
      </div>
    <?php endif; ?>

    <div class="l-banner">
      <?php print render($page['header']); ?>
    </div>
  </header>

  <?php if ($page['highlighted']): ?>
    <div id="highlighted" class="page-highlighted l-highlighted">
      <div class="container page-highlighted__container">
        <?php print render($page['highlighted']); ?>
      </div>
    </div>
  <?php endif; ?>

  <?php if ($page['tools_container']): ?>
    <div class="l-tools-container">
      <div class="toggle-tools"><?php print t("Tools"); ?></div>
      <?php print render($page['tools_container']); ?>
    </div>
  <?php endif; ?>

  <main id="main" class="page-main l-main" role="main">
    <a id="main-content" tabindex="-1"></a>
    <div id="content" class="content l-content">
      <div class="container page-main__container content__container">

        <?php print render($page['help']); ?>

        <?php if ($action_links): ?>
          <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>

        <?php if($page['sidebar_first'] OR $page['sidebar_second']): ?>
          <div class="content__wrapper content-wrapper">
        <?php endif; ?>

        <?php if($page['sidebar_first']): ?>
          <aside id="sidebar-first" class="sidebar sidebar--first">
            <?php print render($page['sidebar_first']); ?>
          </aside>
        <?php endif;?>

        <?php if($page['before_content']): ?>
          <div id="content-top" class="content-top">
            <!-- <div class="container page-main__container content-top__container"> -->
              <?php print render($page['before_content']); ?>
            <!-- </div> -->
          </div>
        <?php endif  ?>

        <section class="section section--content">
          <?php if ($title && !$is_front): ?>
            <?php print render($title_prefix); ?>
            <header class="content__header content-header">
              <h1 class="content-header__title"><?php print $title; ?></h1>
            </header>
            <?php print render($title_suffix); ?>
          <?php endif; ?>
          <?php print render($page['content']); ?>
          <?php print $feed_icons; ?>
        </section>

        <?php if($page['after_content']): ?>
          <div id="content-bottom" class="content-bottom">
            <!-- <div class="container page-main__container content-bottom__container"> -->
              <?php print render($page['after_content']); ?>
            <!-- </div> -->
          </div>
        <?php endif  ?>

        <?php if($page['sidebar_second']): ?>
          <aside id="sidebar-second" class="sidebar sidebar--second">
            <?php print render($page['sidebar_second']); ?>
          </aside>
        <?php endif;?>

        <?php if($page['sidebar_first'] OR $page['sidebar_second']): ?>
          </div>
        <?php endif; ?>
      </div>
    </div>
  </main>

  <?php if($page['footer'] OR $page['before_footer'] OR $page['after_footer']): ?>
    <footer class="footer-wrapper">
      <?php if($page['before_footer']): ?>
        <div id="footer-top" class="page-footer-top l-before-footer">
          <div class="container page-footer-top__container">
            <?php print render($page['before_footer']); ?>
          </div>
        </div>
      <?php endif; ?>

      <?php if($page['footer']): ?>
        <div id="footer" class="page-footer l-footer-content" role="contentinfo">
          <div class="container page-footer__container">
            <div class="site-branding site-branding--header l-region l-region--logo">
              <h2 class="site-name site-branding__name site-branding--footer__name">
                <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="site-branding__link site-branding--footer__link">
                  <span class="element-invisible"><?php print $site_name; ?></span>
                </a>
              </h2>
            </div>
            <?php print render($page['footer'])?>
          </div>
        </div>
      <?php endif; ?>

      <?php if($page['after_footer']): ?>
        <div id="footer-bottom" class="page-footer-bottom l-after-footer-wrapper">
          <div class="container page-footer-bottom__container">
            <?php print render($page['after_footer']); ?>
          </div>
        </div>
      <?php endif; ?>
    </footer>
  <?php endif; ?>
</div>
