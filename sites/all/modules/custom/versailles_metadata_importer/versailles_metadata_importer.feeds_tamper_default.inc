<?php
/**
 * @file
 * versailles_metadata_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function versailles_metadata_importer_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'versailles_metadata_importer-artist__after_-explode';
  $feeds_tamper->importer = 'versailles_metadata_importer';
  $feeds_tamper->source = 'Artist [after]';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '||',
    'limit' => '',
    'real_separator' => '||',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['versailles_metadata_importer-artist__after_-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'versailles_metadata_importer-book_author-explode';
  $feeds_tamper->importer = 'versailles_metadata_importer';
  $feeds_tamper->source = 'Book Author';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '||',
    'limit' => '',
    'real_separator' => '||',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['versailles_metadata_importer-book_author-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'versailles_metadata_importer-engraver-explode';
  $feeds_tamper->importer = 'versailles_metadata_importer';
  $feeds_tamper->source = 'Engraver';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '||',
    'limit' => '',
    'real_separator' => '||',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode Engraver';
  $export['versailles_metadata_importer-engraver-explode'] = $feeds_tamper;

  return $export;
}
