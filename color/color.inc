<?php

// Put the logo path into JavaScript for the live preview.
backdrop_add_js(array('color' => array('logo' => theme_get_setting('logo', 'bartik'))), 'setting');

$info = array(
  // Available colors and color labels used in theme.
  'fields' => array(
    'top' => t('Header background top'),
    'bottom' => t('Header background bottom'),
    'bg' => t('Main background'),
    'sidebar' => t('Sidebar background'),
    'sidebarborders' => t('Sidebar borders'),
    'footer' => t('Footer background'),
    'titleslogan' => t('Title and slogan'),
    'text' => t('Text color'),
    'link' => t('Link color'),
    'menu' => 'Menu link',
    'activemenu' => t('Active menu link color'),
  ),
  // Pre-defined color schemes.
  'schemes' => array(
    'default' => array(
      'title' => t('IIV Red'),
      'colors' => array(
        'top' => '#15141A',
        'bottom' => '#5B5B66',
        'bg' => '#ffffff',
        'sidebar' => '#848494',
        'sidebarborders' => '#cccccc',
        'footer' => '#272933',
        'titleslogan' => '#FC5414',
        'text' => '#000000',
        'link' => '#FC2D14',
        'menu' => '#d3dbde',
        'activemenu' => '#fffffe',
      ),
    ),
    'iiv_dark' => array(
      'title' => t('IIV Dark'),
      'colors' => array(
        'top' => '#171a1c',
        'bottom' => '#5B5B66',
        'bg' => '#5B5B65',
        'sidebar' => '#494e50',
        'sidebarborders' => '#394246',
        'footer' => '#15141A',
        'titleslogan' => '#00aaff',
        'text' => '#E6EFF2',
        'link' => '#00aaff',
        'menu' => '#d3dbde',
        'activemenu' => '#fffffe',
      ),
    ),
    'blue_lagoon' => array(
      'title' => t('Blue Lagoon'),
      'colors' => array(
        'top' => '#0779bf',
        'bottom' => '#48a9e4',
        'bg' => '#ffffff',
        'sidebar' => '#f3f7fa',
        'sidebarborders' => '#f9f9f9',
        'footer' => '#292929',
        'titleslogan' => '#fffeff',
        'text' => '#3b3b3b',
        'link' => '#0b4b6b',
        'menu' => '#f3f7fb',
        'activemenu' => '#fffffe',
      ),
    ),
  ),

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => array(
    'css/colors.css',
  ),

  // Files to copy.
  'copy' => array(),

  // Gradient definitions.
  'gradients' => array(
    array(
      // (x, y, width, height).
      'dimension' => array(0, 0, 0, 0),
      // Direction of gradient ('vertical' or 'horizontal').
      'direction' => 'vertical',
      // Keys of colors to use for the gradient.
      'colors' => array('top', 'bottom'),
    ),
  ),

  // Color areas to fill (x, y, width, height).
  'fill' => array(),

  // Coordinates of all the theme slices (x, y, width, height)
  // with their filename as used in the stylesheet.
  'slices' => array(),

  // Reference color used for blending. Matches the base.png's colors.
  'blend_target' => '#ffffff',

  // Preview files.
  'preview_css' => 'color/preview.css',
  'preview_js' => 'color/preview.js',
  'preview_html' => 'color/preview.html',

  // Base file for image generation.
  'base_image' => 'color/base.png',
);
