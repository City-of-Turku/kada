<div<?php print $attributes; ?>>
  <?php if ($page['emergency_messages']): ?>
    <div class="l-emergency-messages">
      <div class="l-emergency-messages-inner">
        <?php print render($page['emergency_messages']); ?>
      </div>
    </div>
  <?php endif; ?>

  <header class="l-header" role="banner">
    <div class="l-navigation-top">
      <div class="font-zoom-level-changer">
        <?php print t('Text size'); ?>
        <span class="font-zoom-level--normal is-active">A</span>
        <span class="font-zoom-level--medium">A</span>
        <span class="font-zoom-level--large">A</span>
      </div>

      <?php print render($page['navigation_top']); ?>
    </div>
    <div class="l-branding">
      <div class="l-branding-inner">
        <div class="l-region l-region--logo">
          <?php if ($site_name || $site_slogan): ?>
            <?php if ($site_name): ?>
              <h1 class="site-name">
                <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">
                  <?php print render($site_logo); ?>
                </a>
              </h1>
            <?php endif; ?>

            <?php if ($site_slogan): ?>
              <h2 class="site-slogan"><?php print $site_slogan; ?></h2>
            <?php endif; ?>
          <?php endif; ?>
        </div>

        <?php print render($page['branding']); ?>

      </div>
    </div>

    <div class="l-custom-navigation">
      <?php print render($page['navigation']); ?>
    </div>

    <?php if ($page['header_top']): ?>
      <div class="l-header-top">
        <?php print render($page['header_top']); ?>
      </div>
    <?php endif; ?>

    <?php print render($page['header']); ?>
  </header>

  <?php if ($page['tools_container']): ?>
    <div class="l-tools-container">
      <div class="toggle-tools"><?php print t("Tools"); ?></div>
      <?php print render($page['tools_container']); ?>
    </div>
  <?php endif; ?>

  <div class="l-main-wrapper">

    <div class="l-highlighted">
      <?php print render($page['highlighted']); ?>
    </div>

    <div class="l-main">

      <div class="l-content" role="main">
        <?php print render($tabs); ?>
        <?php print $messages; ?>
        <?php print render($page['help']); ?>

        <a id="main-content"></a>
        <?php if ($action_links): ?>
          <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>
        <?php print render($page['content']); ?>
        <?php print $feed_icons; ?>
      </div>

      <?php print render($page['sidebar_first']); ?>
      <?php print render($page['sidebar_second']); ?>
      <?php print render($page['after_content']); ?>
    </div>
  </div>
  
  <?php if ($page['before_footer']): ?>
    <div class="l-before-footer">
      <?php print render($page['before_footer']); ?>
    </div>
  <?php endif; ?>
  
  <footer class="l-footer" role="contentinfo">
    <div class="l-footer-content">
      <?php print render($page['footer']); ?>
    </div>
    <div class="l-after-footer-wrapper">
      <?php print render($page['after_footer']); ?>
    </div>
  </footer>
</div>
