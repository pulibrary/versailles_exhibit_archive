<?php
/**
 * @file
 * versailles_contributor_pages_and_views.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function versailles_contributor_pages_and_views_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function versailles_contributor_pages_and_views_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
