<?php
/**
 * @file
 * ver_contributor_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ver_contributor_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ver_contributor_content_type_node_info() {
  $items = array(
    'contributor' => array(
      'name' => t('Contributor'),
      'base' => 'node_content',
      'description' => t('Contributor to an object. Taxonomy has been applied to give you the type of contributor the individual was. '),
      'has_title' => '1',
      'title_label' => t('Proper Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
