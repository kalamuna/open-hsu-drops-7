<?php
/**
 * @file
 * hsu_core.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function hsu_core_defaultconfig_features() {
  return array(
    'hsu_core' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function hsu_core_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_hsu_kalatheme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => '0',
    'toggle_comment_user_verification' => '0',
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'bootstrap_library' => 'custom',
    'icon_font_library' => 'font_awesome',
    'font_awesome_cdn' => 1,
    'bootstrap_upload' => '',
    'build_subtheme' => 0,
    'magic' => 1,
    'subtheme_name' => '',
    'subtheme_base' => 'kalatheme',
    'always_show_page_title' => 0,
    'responsive_toggle' => 1,
    'pane_styles_toggle' => 1,
    'pane_classes' => array(),
    'street' => '140 West 23rd St',
    'citystatezip' => 'V7M 2B2',
    'phone' => '6043676500',
    'fax' => '',
    'use_banner' => 0,
    'header_file' => '',
    'twitter' => 'twitter.com',
    'facebook' => 'facebook.com',
    'instagram' => 'instagram.com',
    'youtube' => 'youtube.com',
  );
  $export['theme_hsu_kalatheme_settings'] = $strongarm;

  return $export;
}