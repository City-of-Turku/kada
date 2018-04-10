<?php
/**
 * @file
 * pori_configuration.default_video_embed_styles.inc
 */

/**
 * Implements hook_default_video_embed_styles().
 */
function pori_configuration_default_video_embed_styles() {
  $export = array();

  $video_embed_style = new stdClass();
  $video_embed_style->disabled = FALSE; /* Edit this to true to make a default video_embed_style disabled initially */
  $video_embed_style->api_version = 1;
  $video_embed_style->name = 'pori_default_style';
  $video_embed_style->title = 'Pori default style';
  $video_embed_style->data = array(
    'youtube' => array(
      'width' => '944',
      'height' => '531',
      'theme' => 'dark',
      'autoplay' => 0,
      'vq' => 'hd720',
      'rel' => 0,
      'showinfo' => 1,
      'modestbranding' => 0,
      'iv_load_policy' => '1',
      'controls' => '1',
      'autohide' => '2',
      'class' => '',
    ),
    'vimeo' => array(
      'width' => '944',
      'height' => '531',
      'color' => '00adef',
      'portrait' => 1,
      'title' => 1,
      'byline' => 1,
      'autoplay' => 0,
      'loop' => 0,
      'froogaloop' => 0,
      'class' => '',
    ),
    'data__active_tab' => 'edit-data-vimeo',
  );
  $export['pori_default_style'] = $video_embed_style;

  return $export;
}
