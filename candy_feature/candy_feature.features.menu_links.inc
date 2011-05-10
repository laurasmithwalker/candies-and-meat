<?php
/**
 * @file
 * candy_feature.features.menu_links.inc
 */

/**
 * Implementation of hook_menu_default_menu_links().
 */
function candy_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:candies
  $menu_links['main-menu:candies'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'candies',
    'router_path' => 'candies',
    'link_title' => 'Candies',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Candies');


  return $menu_links;
}
