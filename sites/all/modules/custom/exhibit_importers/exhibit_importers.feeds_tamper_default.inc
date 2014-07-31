<?php
/**
 * @file
 * exhibit_importers.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function exhibit_importers_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'exhibit_case_importer-subcases-explode';
  $feeds_tamper->importer = 'exhibit_case_importer';
  $feeds_tamper->source = 'Subcases';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '/',
    'limit' => '',
    'real_separator' => '/',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['exhibit_case_importer-subcases-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'exhibit_item_importer-guid-hash';
  $feeds_tamper->importer = 'exhibit_item_importer';
  $feeds_tamper->source = 'GUID';
  $feeds_tamper->plugin_id = 'hash';
  $feeds_tamper->settings = array(
    'override' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Calculate hash';
  $export['exhibit_item_importer-guid-hash'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'exhibit_item_importer-image-1-array_filter';
  $feeds_tamper->importer = 'exhibit_item_importer';
  $feeds_tamper->source = 'image-1';
  $feeds_tamper->plugin_id = 'array_filter';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Filter empty items';
  $export['exhibit_item_importer-image-1-array_filter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'exhibit_item_importer-image-1-find_replace';
  $feeds_tamper->importer = 'exhibit_item_importer';
  $feeds_tamper->source = 'image-1';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ' ',
    'replace' => '_',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Find replace';
  $export['exhibit_item_importer-image-1-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'exhibit_item_importer-image-1-find_replace_empty_image_1';
  $feeds_tamper->importer = 'exhibit_item_importer';
  $feeds_tamper->source = 'image-1';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'public://exhibit/items/images/.jpg',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Find replace empty image 1';
  $export['exhibit_item_importer-image-1-find_replace_empty_image_1'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'exhibit_item_importer-image-1-rewrite';
  $feeds_tamper->importer = 'exhibit_item_importer';
  $feeds_tamper->source = 'image-1';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'public://exhibit/items/images/[image-1].jpg',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Rewrite';
  $export['exhibit_item_importer-image-1-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'exhibit_item_importer-image-2-array_filter';
  $feeds_tamper->importer = 'exhibit_item_importer';
  $feeds_tamper->source = 'image-2';
  $feeds_tamper->plugin_id = 'array_filter';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 8;
  $feeds_tamper->description = 'Filter empty items';
  $export['exhibit_item_importer-image-2-array_filter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'exhibit_item_importer-image-2-filter_empty_images';
  $feeds_tamper->importer = 'exhibit_item_importer';
  $feeds_tamper->source = 'image-2';
  $feeds_tamper->plugin_id = 'array_filter';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Filter empty items';
  $export['exhibit_item_importer-image-2-filter_empty_images'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'exhibit_item_importer-image-2-find_empty_image_replace';
  $feeds_tamper->importer = 'exhibit_item_importer';
  $feeds_tamper->source = 'image-2';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'public://exhibit/items/images/.jpg',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 9;
  $feeds_tamper->description = 'Find replace empty image';
  $export['exhibit_item_importer-image-2-find_empty_image_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'exhibit_item_importer-image-2-find_replace';
  $feeds_tamper->importer = 'exhibit_item_importer';
  $feeds_tamper->source = 'image-2';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ' ',
    'replace' => '_',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 6;
  $feeds_tamper->description = 'Find replace';
  $export['exhibit_item_importer-image-2-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'exhibit_item_importer-image-2-rewrite';
  $feeds_tamper->importer = 'exhibit_item_importer';
  $feeds_tamper->source = 'image-2';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'public://exhibit/items/images/[image-2].jpg',
  );
  $feeds_tamper->weight = 7;
  $feeds_tamper->description = 'Rewrite';
  $export['exhibit_item_importer-image-2-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'exhibit_item_importer-sort-str_pad';
  $feeds_tamper->importer = 'exhibit_item_importer';
  $feeds_tamper->source = 'sort';
  $feeds_tamper->plugin_id = 'str_pad';
  $feeds_tamper->settings = array(
    'pad_length' => 4,
    'pad_string' => '0',
    'pad_type' => '0',
    'real_pad_string' => '0',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Pad a string';
  $export['exhibit_item_importer-sort-str_pad'] = $feeds_tamper;

  return $export;
}
