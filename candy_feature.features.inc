<?php
/**
 * @file
 * candy_feature.features.inc
 */

/**
 * Implementation of hook_views_api().
 */
function candy_feature_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}

/**
 * Implementation of hook_node_info().
 */
function candy_feature_node_info() {
  $items = array(
    'candy' => array(
      'name' => t('candy'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'meat' => array(
      'name' => t('Meat'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
