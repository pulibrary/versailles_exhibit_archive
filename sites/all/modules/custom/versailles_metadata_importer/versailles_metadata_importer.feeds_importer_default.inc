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
            'source' => 'Engraver',
            'target' => 'field_ver_engraver',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          1 => array(
            'source' => 'Artist [after]',
            'target' => 'field_ver_artist',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          2 => array(
            'source' => 'Print/Mss Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Translated Print Title',
            'target' => 'field_ver_translated_print_title',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Book Author',
            'target' => 'field_ver_book_author',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Series/Book Title',
            'target' => 'field_ver_series_book_title',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Publisher',
            'target' => 'field_ver_publisher',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Dates(s)',
            'target' => 'field_ver_date',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Pages',
            'target' => 'field_ver_pages',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Type',
            'target' => 'field_exhibit_item_type',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          10 => array(
            'source' => 'Source',
            'target' => 'field_exhibit_item_source',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Held By',
            'target' => 'field_ver_held_by',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Accession Number/Call Number',
            'target' => 'field_ver_accession_callnum',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Case Group Label',
            'target' => 'field_exhibit_case_group_label',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          14 => array(
            'source' => 'Resource Link',
            'target' => 'field_ver_resource_link:url',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Display Date?',
            'target' => 'field_ver_display_date',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'On View?',
            'target' => 'field_ver_on_view',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'Map Coordinates',
            'target' => 'field_ver_map_geo',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'Image Link',
            'target' => 'field_ver_image_link:url',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'Tags',
            'target' => 'field_ver_tags',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          20 => array(
            'source' => 'Case',
            'target' => 'field_exhibit_case:label',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'Sub Case',
            'target' => 'field_exhibit_sub_case_grouping:label',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'Exhibit Order',
            'target' => 'field_exhibit_sort_order',
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
