<?php
/**
 * @file
 * exhibit_content_types_taxonomies.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function exhibit_content_types_taxonomies_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function exhibit_content_types_taxonomies_node_info() {
  $items = array(
    'exhibit_case' => array(
      'name' => t('Case'),
      'base' => 'node_content',
      'description' => t('A top-level case in the exhibition. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'exhibit_rbsc_item' => array(
      'name' => t('RBSC Exhibit Item'),
      'base' => 'node_content',
      'description' => t('An individual item in an RBSC exhibit.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'exhibit_subcase' => array(
      'name' => t('Sub Case'),
      'base' => 'node_content',
      'description' => t('A smaller case grouping that makes up a larger exhibition case. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'exhibition_landing_page' => array(
      'name' => t('Exhibition Landing Page'),
      'base' => 'node_content',
      'description' => t('A landing page for the exhibition.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
