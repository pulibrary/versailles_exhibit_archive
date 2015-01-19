<?php
/**
 * @file
 * rbsc_historic_map.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rbsc_historic_map_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function rbsc_historic_map_node_info() {
  $items = array(
    'historic_map' => array(
      'name' => t('Historic Map'),
      'base' => 'node_content',
      'description' => t('Historic Map with Geojson Data Feed'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
