<?php
/**
 * @file
 * versailles_project_metadata.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function versailles_project_metadata_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
