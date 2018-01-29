<div<?php print $attributes; ?>>
  <?php if ($page['emergency_messages']): ?>
    <div class="l-emergency-messages">
      <div class="l-emergency-messages-inner">
        <?php print render($page['emergency_messages']); ?>
      </div>
    </div>
  <?php endif; ?>

  <header id="header" class="page-header l-header" role="banner">

    <?php if ($page['before_header']): ?>
      <div class="l-before-header">
        <div class="container l-before-header__container l-before-header-inner">
          <?php print render($page['before_header']); ?>
        </div>
      </div>
    <?php endif; ?>

    <?php if ($page['navigation_top']): ?>
      <div class="l-navigation-top">
        <div class="navigation-top__container navigation-top-inner">
            <?php print render($page['navigation_top']); ?>
        </div>
      </div>
    <?php endif; ?>

    <div class="l-branding">
      <div class="l-branding__container l-branding-inner">
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
        <!-- <div class="accessibility-font-increase">
          <span class="accessibility-font-increase__text"><?php print t('Text size'); ?><span class="accessibility-font-increase__toggle"><span class="accessibility-font-increase__toggle--small">A</span><span class="accessibility-font-increase__toggle--large">A</span></span>
            <div class="accessibility-font-increase__options accessibility-font-increase__options--is-hidden font-increase">
            <a href="#font-increase-default" class="font-increase__item font-increase__item--default font-increase__item--is-active"><?php print t('Normal'); ?></a>
            <a href="#font-increase-medium" class="font-increase__item font-increase__item--medium"><?php print t('Medium'); ?></a>
            <a href="#font-increase-large" class="font-increase__item font-increase__item--large"><?php print t('Large'); ?></a>
          </div>
        </div> -->
      </div>
    </div>

    <div class="l-navigation">
      <div class="l-navigation__container l-navigation-inner">
        <?php print render($page['navigation']); ?>
      </div>
    </div>

    <?php if ($page['header_top']): ?>
      <div class="l-header-top">
        <?php print render($page['header_top']); ?>
      </div>
    <?php endif; ?>

    <?php print render($page['header']); ?>
  </header>

  <?php if ($page['highlighted']): ?>
    <div id="highlight" class="page-highlight l-highlighted">
      <div class="container page-highlight__container">
        <?php print render($page['highlighted']); ?>
      </div>
    </div>
  <?php endif; ?>

  <?php if ($page['tools_container']): ?>
    <div id="tools" class="page-tools l-tools-container">
      <div class="container page-tools__container">
        <div class="toggle-tools"><?php print t("Tools"); ?></div>
        <?php print render($page['tools_container']); ?>
      </div>
    </div>
  <?php endif; ?>

  <main id="main" class="page-main l-main" role="main">
    <a id="main-content" tabindex="-1"></a>
    <div class="l-breadcrumb">
      <div class="container l-breadcrumb__container">
        <?php if($breadcrumb): ?>
          <?php print $breadcrumb; ?>
        <?php endif; ?>
      </div>
    </div>
    <div id="content" class="content l-content">
      <div class="container page-main__container content__container">
        <?php if ($messages): ?>
          <div class="drupal-messages">
            <?php print $messages; ?>
          </div>
        <?php endif; ?>

        <?php if ($tabs): ?>
          <nav class="tabs"><?php print render($tabs); ?></nav>
        <?php endif; ?>

        <?php print render($page['help']); ?>

        <?php if ($action_links): ?>
          <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>

        <?php if($page['sidebar_first'] OR $page['sidebar_second']): ?>
          <div class="content__wrapper content-wrapper">
        <?php endif; ?>

        <?php if ($title && !$is_front): ?>
          <?php print render($title_prefix); ?>
            <header class="content__header content-header">
                <h1 class="content-header__title"><?php print $title; ?></h1>
            </header>
          <?php print render($title_suffix); ?>
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
        <?php endif;  ?>

        <section class="section section--content">
          <?php print render($page['content']); ?>
          <?php print $feed_icons; ?>
        </section>

        <?php if($page['after_content']): ?>
          <div id="content-bottom" class="content-bottom">
            <!-- <div class="container page-main__container content-bottom__container"> -->
              <?php print render($page['after_content']); ?>
            <!-- </div> -->
          </div>
        <?php endif; ?>

        <?php if($page['sidebar_second']): ?>
          <aside id="sidebar-second" class="sidebar sidebar--second">
            <?php print render($page['sidebar_second']); ?>
          </aside>
        <?php endif; ?>

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
            <div class="site-branding site-branding--footer l-region l-region--logo">
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
