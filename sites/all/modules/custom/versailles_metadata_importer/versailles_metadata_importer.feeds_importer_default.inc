<?php
/**
 * @file
 * versailles_metadata_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function versailles_metadata_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'versailles_metadata_importer';
  $feeds_importer->config = array(
    'name' => 'Versailles Metadata Importer',
    'description' => 'Import versailles metadata',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Print/Mss Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Engraver',
            'target' => 'field_ver_engraver',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          2 => array(
            'source' => 'Artist [after]',
            'target' => 'field_ver_artist',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          3 => array(
            'source' => 'Book Author',
            'target' => 'field_ver_book_author',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Series/Book Title',
            'target' => 'field_ver_series_book_title',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Publisher',
            'target' => 'field_ver_publisher',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'exhibit_rbsc_item',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['versailles_metadata_importer'] = $feeds_importer;

  return $export;
}
